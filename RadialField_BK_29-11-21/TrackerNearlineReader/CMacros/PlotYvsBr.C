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

// Read histograms, produce tuple of y, yerr
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

}

void OverlayTwoGraphs(std::vector<TGraphErrors*> graphs, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax, bool fit ) {

  TCanvas *c = new TCanvas("c","c",800,600);

  //TLegend *l = new TLegend(0.45,0.79,0.89,0.89)

  graphs.at(0)->SetTitle(title.c_str());
  graphs.at(0)->GetXaxis()->SetTitleSize(.04);
  graphs.at(0)->GetYaxis()->SetTitleSize(.04);
  graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
  graphs.at(0)->GetXaxis()->CenterTitle(true);
  graphs.at(0)->GetYaxis()->CenterTitle(true);
  graphs.at(0)->GetYaxis()->SetMaxDigits(4);
  graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

  // Hack together x-axis range
  int N = graphs.at(0)->GetN();
  double xmax = graphs.at(0)->GetX()[N-1];// + 50;
  double xmin = graphs.at(0)->GetX()[0];// - 50; 
  double offset = (xmax - xmin) * 0.05;
  xmin = xmin - offset; 
  xmax = xmax + offset;

  graphs.at(0)->GetXaxis()->SetRangeUser(xmin, xmax);

  int nGraphs = graphs.size();

  graphs.at(0)->SetMarkerStyle(20);//kBlack);
  graphs.at(1)->SetMarkerStyle(24);

  for(int i = 0; i < nGraphs; i++) {
    graphs.at(i)->SetName((names.at(i)).c_str());
    
    if(i==0) graphs.at(i)->Draw("AP");
    else graphs.at(i)->Draw("P SAME");
  }

  

  TF1 *fit12 = new TF1("fit12", "[0]+[1]*x", -50, 50);
  TF1 *fit18 = new TF1("fit18", "[0]+[1]*x", -50, 50);

  if(fit) {

    TLegend *l = new TLegend(0.12,0.65,0.60,0.89);
    l->SetNColumns(2);
    l->SetBorderSize(0);

    graphs.at(0)->Fit(fit12, "R");
    graphs.at(1)->Fit(fit18, "R");  

    fit12->SetLineWidth(3);
    fit18->SetLineWidth(3);

    fit12->SetLineColor(kRed);
    fit18->SetLineColor(kBlue);

    fit12->Draw("same");
    fit18->Draw("same");

    TString p0_12 = Round(fit12->GetParameter(0), 3); p0_12=p0_12+"0";
    TString e0_12 = Round(fit12->GetParError(0), 1); 
    TString p1_12 = Round(fit12->GetParameter(1), 2); 
    TString e1_12 = Round(fit12->GetParError(1), 1); 

    TString p0_18 = Round(fit18->GetParameter(0), 2); 
    TString e0_18 = Round(fit18->GetParError(0), 1); 
    TString p1_18 = Round(fit18->GetParameter(1), 2); 
    TString e1_18 = Round(fit18->GetParError(1), 1); 

    l->AddEntry(graphs.at(0), (names.at(0)).c_str());
    l->AddEntry(fit12, "#splitline{p0 = "+p0_12+"#pm"+e0_12+" [mm]}{p1 = "+p1_12+"#pm"+e1_12+" [mm/ppm]}");//LTy#GT = #LTB_{r}^{App}#GT+k"));//+to_string(fit12->GetParameter(1))+"*x+"+to_string(fit12->GetParameter(1))).c_str());
    l->AddEntry(graphs.at(1), (names.at(1)).c_str());
    l->AddEntry(fit18, "#splitline{p0 = "+p0_18+"#pm"+e0_18+" [mm]}{p1 = "+p1_18+"#pm"+e1_18+" [mm/ppm]}");

    l->Draw("same");
  } else { 

    //TLegend *l = new TLegend(0.15,0.79,0.60,0.89);
    TLegend *l = new TLegend(0.55,0.79,0.89,0.89);
    l->SetNColumns(2);
    l->SetBorderSize(0);
    l->AddEntry(graphs.at(0), (names.at(0)).c_str());
    l->AddEntry(graphs.at(1), (names.at(1)).c_str());

    l->Draw("same");
  }

  
  
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

int main() { 

	//TFile *output = new TFile(); 
  TFile *output = new TFile("../Plots/y_vs_Br.root","RECREATE");

   // Get runs, QHV, & Br 
  vector<vector<string>> csv = csvReader("../../txt/RadialFieldScan_"+scan+"/scan"+scan+".csv");

  vector<double> x_; vector<double> ex_;
  vector<double> y12_; vector<double> ey12_;
  vector<double> y18_; vector<double> ey18_;
  vector<double> r12_; vector<double> er12_;
  vector<double> r18_; vector<double> er18_;

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

      string input = "/gm2/data/g2be/TrackerNearline/Run4/NearlinePlots_"+row.at(0)+".root";

      tuple <double, double, double, double> tuple_S12 = ReadYPos(input, "12");
      tuple <double, double, double, double> tuple_S18 = ReadYPos(input, "18");

      x_.push_back(BR_APP[i_field]); ex_.push_back(0);
      y12_.push_back(get<0>(tuple_S12)); ey12_.push_back(get<1>(tuple_S12));
      y18_.push_back(get<0>(tuple_S18)); ey18_.push_back(get<1>(tuple_S18));
      r12_.push_back(get<2>(tuple_S12)); er12_.push_back(get<3>(tuple_S12));
      r18_.push_back(get<2>(tuple_S18)); er18_.push_back(get<3>(tuple_S18));
      
      cout<<get<2>(tuple_S12)<<" "<<get<3>(tuple_S12)<<endl;
    }

  }

  TGraphErrors *gr_y_12 = GenerateTGraphErrors(x_, y12_, ex_, ey12_);
  TGraphErrors *gr_y_18 = GenerateTGraphErrors(x_, y18_, ex_, ey18_);
  TGraphErrors *gr_r_12 = GenerateTGraphErrors(x_, r12_, ex_, er12_);
  TGraphErrors *gr_r_18 = GenerateTGraphErrors(x_, r18_, ex_, er18_);

  vector<TGraphErrors*> gr_y_; gr_y_.push_back(gr_y_12); gr_y_.push_back(gr_y_18);
  vector<TGraphErrors*> gr_r_; gr_r_.push_back(gr_r_12); gr_r_.push_back(gr_r_18);

  vector<string> names_; names_.push_back("S12"); names_.push_back("S18"); 

  OverlayTwoGraphs(gr_y_, names_, ";#LTB_{r}^{App}#GT [ppm];#LTy#GT [mm]", "../Images/Br_vs_y", -5, 3, true);
  OverlayTwoGraphs(gr_r_, names_, ";#LTB_{r}^{App}#GT [ppm];#LTR#GT [mm]", "../Images/Br_vs_r", 4, 5.6, false);

  output->mkdir("Br_vs_y"); output->cd("Br_vs_y");
  gr_y_12->Write(); gr_y_18->Write();
  output->mkdir("Br_vs_r"); output->cd("Br_vs_r");
  gr_r_12->Write(); gr_r_18->Write();
  output->Close();

  return 0; 

}
