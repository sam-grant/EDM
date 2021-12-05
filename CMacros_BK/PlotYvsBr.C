#include <iostream>
#include <fstream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

// FIRST SCAN
//string scan = "1";
//const int N_QHV = 2;
//const int N_FIELD = 2;
//const double QHV[N_QHV] = {14, 18}; //  quad settings, kV
//const double BR_APP[N_FIELD] = {30, -30}; // Applied radial field, ppm

// SECOND SCAN
string scan = "2";
const int N_QHV = 4;
const int N_FIELD = 6;
const double QHV[N_QHV] = {14, 16, 18, 19.5}; //  quad settings, kV
const double BR_APP[N_FIELD] = {50, 30, 10, -10, -30, -50}; // Applied radial field, ppm


// Read csv file of run, QHV, & Br
vector<vector<string>> csvReader(string infile) {

  // Columns & rows
  vector< vector<string> > result;

  // Open file
  std::ifstream myFile(infile);

  // Check that it opened correctly 
  if(!myFile.is_open()) throw std::runtime_error("Could not open file");

    // Helper vars
    std::string line; int val; 

    // Read data, line by line
    while(std::getline(myFile, line))
    {
        // Create a stringstream of the current line
        std::stringstream ss(line);

        // Put each row in a vector
        vector<string> row;

        while(ss >> val){

            //cout<<val<<endl;

            row.push_back(to_string(val));

            // If the next token is a comma or a hyphen, ignore it and move on
            if(ss.peek() == ',') ss.ignore();

            
        }

        // Store the row vectors in a vector of vectors

        result.push_back(row);

    }

    //cout<<"result.size()\t"<<result.size()<<endl;

    // Close file
    myFile.close();

    return result;

}

/*// Read histograms, produce tuple of y, yerr
tuple<double, double, double, double> ReadYPos(string input, string stn) { 

  // ++++++++++++++ Open tree and load branches ++++++++++++++

  // Get file
  TFile *f1 = TFile::Open(input.c_str());
  cout<<"\nOpened file:\t"<<input<<" "<<f1<<endl;

  TH1D *hy = (TH1D*)f1->Get(("Nearline/station"+stn+"/After30us/Vertices/PassQuality/VerticalPos").c_str());
  TH1D *hr = (TH1D*)f1->Get(("Nearline/station"+stn+"/After30us/Vertices/PassQuality/RadialPos").c_str());

  double y = hy->GetMean(); 
  double ey = hy->GetMeanError();

  double r = hr->GetMean(); 
  double er = hr->GetMeanError();

  cout<<"y = "<<y<<" ± " <<ey<<endl;
  cout<<"r = "<<r<<" ± " <<er<<endl;

  f1->Close();

  return make_tuple(y,ey,r,er);// hy->GetMeanError());

}*/

// Read histograms, produce tuple of y, yerr
tuple<double, double> ReadYPos(string input) {

  // ++++++++++++++ Open tree and load branches ++++++++++++++

  // Get file
  TFile *f1 = TFile::Open(input.c_str());
  cout<<"\nOpened file:\t"<<input<<" "<<f1<<endl;

  TH1D *hy = (TH1D*)f1->Get("hy"); 

  double y = hy->GetMean();
  double ey = hy->GetMeanError();

  cout<<"y = "<<y<<" ± " <<ey<<endl;

  f1->Close();

  return make_tuple(y,ey);// hy->GetMeanError());

}


void DrawGraph(TGraphErrors *graph, std::string title, std::string fname, bool fit ) {

  TCanvas *c = new TCanvas("c","c",800,600);

  //TLegend *l = new TLegend(0.45,0.79,0.89,0.89)

  graph->SetTitle(title.c_str());
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.1);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);

  // Hack together x-axis range
  // graph->GetYaxis()->SetRangeUser(ymin,ymax);
  //int N = graph->GetN();
  //double xmax = graph->GetX()[N-1];// + 50;
  //double xmin = graph->GetX()[0];// - 50; 
  //double offset = (xmax - xmin) * 0.05;
  //xmin = xmin - offset; 
  //xmax = xmax + offset;
  //graph->GetXaxis()->SetRangeUser(xmin, xmax);

  graph->SetMarkerStyle(20);

  graph->Draw("AP");

  int N = graph->GetN();
  //double xmin = - 50 - 0.434;// graph->GetX()[0];// - 50; 
  //double xmax = + 50 - 0.434;//graph->GetX()[N-1];// + 50;
  double xmin = graph->GetX()[0];// - 50; 
  double xmax = graph->GetX()[N-1];// + 50;
  cout<<xmin<<" "<<xmax<<endl;

  TF1 *func = new TF1("func", "[0]+[1]*x", xmin, xmax);//-55, 55);

  if(fit) {

    TLegend *l = new TLegend(0.12,0.65,0.60,0.89);
    l->SetBorderSize(0);
    l->SetNColumns(2);

    func->SetParameter(0, 75);
    graph->Fit(func, "R");

    func->SetLineWidth(3);
    func->SetLineColor(kRed);
    func->Draw("same");

    TString p0 = Round(func->GetParameter(0), 4); //p0_12=p0_12+"0";
    TString e0 = Round(func->GetParError(0), 1); 
    TString p1 = Round(func->GetParameter(1), 3); 
    TString e1 = Round(func->GetParError(1), 1); 

    l->AddEntry(graph, "Data");
    l->AddEntry(func, "#splitline{p0 = "+p0+"#pm"+e0+" [mm]}{p1 = "+p1+"#pm"+e1+" [mm/ppm]}");//LTy#GT = #LTB_{r}^{App}#GT+k"));//+to_string(fit12->GetParameter(1))+"*x+"+to_string(fit12->GetParameter(1))).c_str());

    l->Draw("same");

	TPaveText *text = new TPaveText(0.52,0.595,0.69,0.88,"NDC");
	text->SetTextAlign(13);
	double y = func->GetParameter(0)+func->GetParameter(1)*8; 
	double ey = sqrt(pow(func->GetParError(0),2)+pow(func->GetParError(1),2));

	cout<<"Result = "<<y<<"±"<<ey<<endl;
	text->AddText(("#LTy_{calo}#GT at Br = 8 ppm:\t"+to_string(y)+"#pm"+to_string(ey)+" ppm").c_str());
	text->SetFillColor(0);
	text->SetTextFont(44);
	text->SetTextSize(26);
	//text->Draw("same");
    
  } else { 

    //TLegend *l = new TLegend(0.15,0.79,0.60,0.89);
    //TLegend *l = new TLegend(0.55,0.79,0.89,0.89);
    //l->SetNColumns(2);
    //l->SetBorderSize(0);
    //l->AddEntry(graphs.at(0), (names.at(0)).c_str());
    //l->AddEntry(graphs.at(1), (names.at(1)).c_str());

    //l->Draw("same");
  }

 
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

int main() { 

  const string study = "RadialFieldScan_2"; // "BeamYPosMonitoring"; // ClosedOrbit"; // "RadialFieldScan_1" "RadialFieldScan_1"
  const string stage = "raw";

  const double Br_bkg = -0.434; 
  const double Br_bkg_err = 0.57;

   // Get runs, QHV, & Br 
  vector<vector<string>> csv = csvReader("../RadialFieldOps_"+scan+"/scan"+scan+".csv");

  vector<double> x_; vector<double> ex_;
  vector<double> y_; vector<double> ey_;

  int counter = 0; 

  // =========== Field setting loop =========== 
  for ( int i_field = 0; i_field < N_FIELD; i_field++ ) {

    // =========== Quad setting loop ==========
    for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

      if(QHV[i_quad]!=18) {
        counter++;
        continue;
      }

      vector<string> row = csv.at(counter+1);

      cout<<"Run "<<row.at(0)<<endl;

      // Compare global to csv
      cout<<"Settings according to csv "<<row.at(1)<<" "<<row.at(2)<<endl;
      cout<<"Settings according to global "<<QHV[i_quad]<<" "<<BR_APP[i_field]<<endl;

      // CATCH BAD SUBRUNS
      if(row.at(0) == "37857" || row.at(0) == "37874") {

        cout<<"Run "<<row.at(0)<<" is bad. Skipping"<<endl;
        counter++;
        continue;

      }

      counter++;

      string input = "../Plots/Data/RadialFieldScan_2/raw/y-pos_"+row.at(0)+".root";

      tuple <double, double> y_tuple = ReadYPos(input);

      double Br_tot = BR_APP[i_field] + Br_bkg;

      x_.push_back(Br_tot); ex_.push_back(Br_bkg_err);
      y_.push_back(get<0>(y_tuple)); ey_.push_back(get<1>(y_tuple));
      
    }

  }

  TGraphErrors *gr_y = GenerateTGraphErrors(x_, y_, ex_, ey_);

  DrawGraph(gr_y, ";#LTB_{r}^{tot}#GT [ppm];#LTy_{calo}#GT [mm]", "../Images/Y_vs_Br/caloY_vs_BrApp", true);

/*  output->mkdir("Br_vs_y"); output->cd("Br_vs_y");
  gr_y_12->Write(); gr_y_18->Write();
  output->mkdir("Br_vs_r"); output->cd("Br_vs_r");
  gr_r_12->Write(); gr_r_18->Write();
  output->Close();*/

  return 0; 

}
