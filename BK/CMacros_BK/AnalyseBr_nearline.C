#include <iostream>
#include <vector>

#include <fstream>
#include <string>
#include <fstream>
#include <vector>
#include <utility> 
#include <stdexcept> 
#include <sstream> 

#include "TFile.h"
#include "TTreeReader.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TGraphErrors.h"
#include "TFitResult.h"
#include "TDirectory.h"

#include "FancyDraw.h"

using namespace std;

//const string stage = "reprocessed_newCuts"; // "//// // ////
//const string stage = "raw_newCuts"; // "//// // ////


// const string stage = "raw"; // "//// // ////

//const string stage = "raw/cutsTesting";


//const string stage = "raw"; // "//// // ////

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

    cout<<"result.size()\t"<<result.size()<<endl;

    // Close file
    myFile.close();

    return result;

}


// Read histograms, produce tuple of y, yerr
tuple<double, double, int> ReadYPos(string input) { 

  // ++++++++++++++ Open tree and load branches ++++++++++++++

  // Get file
  TFile *f1 = TFile::Open(input.c_str());
  cout<<"\nOpened file:\t"<<input<<" "<<f1<<endl;

  vector<TH1D *> hy_calos;

  vector<double> yPos; vector<double> eyPos;

  TH1D *hy = (TH1D*)f1->Get("hy");
  if(hy==0) {

    cout<<"Warning: "+input+" is empty, returning zeros"<<endl;
    return make_tuple(0.,0.,0.);
  }

  return make_tuple(hy->GetMean(),hy->GetMeanError(),hy->GetEntries());

}


TGraphErrors *QuadScan(vector<tuple<double, double>> yVal, vector<float> QHV_tmp) {

  // CAN'T USE GLOBAL QHV SINCE SOME SETTINGS ARE BROKEN

  // Loop through y-pos and fill a TGraph

  int n = yVal.size();

	double x[n]; double ex[n];
	double y[n]; double ey[n];

  // Sanity print out
  //cout<<"\n********** Quad scan printout **********"<<endl;

  cout<<"QHV [kV], y [mm], ey [mm]"<<endl;

	for ( int i_quad = 0; i_quad < n; i_quad++ ) {

    //double y_tmp = get<0>(yPos[i_quad]); double ey_tmp = get<1>(yPos[i_quad]);

		x[i_quad] = 1/QHV_tmp.at(i_quad);
		ex[i_quad] = 0.0;
		y[i_quad] = get<0>(yVal[i_quad]);
		ey[i_quad] = get<1>(yVal[i_quad]);

    cout<<QHV[i_quad]<<", "<<y[i_quad]<<", "<<ey[i_quad]<<endl;//" y [mm],ey [mm]"<<endl;

	}

	return new TGraphErrors(n,x,y,ex,ey);


}

// Pass quad scans to chi square drawer
// DrawQuadScanFitQual(quadScans, "quadLineFit", ";#LTB_{r}^{App}#GT;#chi^{2}/ndf", "../Images/Data/RadialFieldScan_"+scan+"/QuadChiSqrs"); 

vector<TGraphErrors*> GetQuadScanRes(vector<TGraphErrors*> graphs, string func, string stage) { // ;// , string title, string fname) { 

  vector<TGraphErrors*> residuals;

  int n_graphs = graphs.size();


  // Loop through fits and grab the chi sqr
  for (int i_fit = 0; i_fit < n_graphs; i_fit++) {

    TF1 *fit = graphs.at(i_fit)->GetFunction(func.c_str());

    // Loop thro data points

    int n_points = graphs.at(i_fit)->GetN();

    double x[n_points]; double y[n_points]; double zeros[n_points]; 

    TH1D *h_res = new TH1D("h_res",";Fit residual [mm];Entries",100, -0.05, 0.05);

    for (int i_point = 0; i_point < n_points; i_point++) { 

      x[i_point] = graphs.at(i_fit)->GetPointX(i_point);
      y[i_point] = graphs.at(i_fit)->GetPointY(i_point) - fit->Eval(x[i_point]); 
      zeros[i_point] = 0.;

      h_res->Fill(y[i_point]);

    }

    DrawTH1(h_res,";Fit residual [mm];Entries","../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/1D_res_"+to_string(BR_APP[i_fit]));

    TGraphErrors *gr = new TGraphErrors(n_points, x, y, zeros, zeros);

    residuals.push_back(gr); 

  }

  return residuals;
  
}




double pValuePointCheck(double *x, double *y, double *ex, double *ey, int i_point, string stage) { 

  double pVal;

  if(i_point == -1) {

    TGraphErrors *result = new TGraphErrors(N_FIELD, x, y, ex, ey);

    TF1 *mainFit = new TF1("mainFit", "[0]+[1]*x");
    TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

    double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
    double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

    // x-intercept 
    double Br = fabs(p0/p1);

    // From Taylor 9.9
    double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

    // Sanity check
    DrawRadialFieldLineFit(result, BrErr, "mainFit", ";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]","../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/FieldFit_pValCheck"+to_string(i_point));

    pVal = mainFit->GetProb();

  } else {

    int n_new = 5;

    double y_new[n_new]; double ey_new[n_new];
    double x_new[n_new]; double ex_new[n_new];

    for (int i = 0; i<N_FIELD; i++) {

      if(i<i_point) { 

        x_new[i] = x[i]; ex_new[i] = ex[i]; 
        y_new[i] = y[i]; ey_new[i] = ey[i];

      } else {

        x_new[i] = x[i+1]; ex_new[i] = ex[i+1]; 
        y_new[i] = y[i+1]; ey_new[i] = ey[i+1];

      }

      //cout<<"The applied field is "<<BR_APP[i_point]<<endl;


    }

    TGraphErrors *result = new TGraphErrors(n_new, x_new, y_new, ex_new, ey_new);

    TF1 *mainFit = new TF1("mainFit", "[0]+[1]*x");
    TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

    double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
    double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

    // x-intercept 
    double Br = fabs(p0/p1);

    // From Taylor 9.9
    double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

    // Sanity check
    DrawRadialFieldLineFit(result, BrErr, "mainFit", ";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]","../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/FieldFit_pValCheck"+to_string(i_point));

    pVal = mainFit->GetProb();



    delete result; 

  }


  if(i_point!=-1) cout<<"\nThe p-value is "<<pVal<<" with "<<BR_APP[i_point]<<" removed."<<endl;
  else cout<<"\nThe p-value is "<<pVal<<" with no points removed."<<endl;

  return pVal;

}
/*
void WriteQuadScan(vector<TGraphErrors*> graphs, string ouput) {


  // Loop through graphs and write to text the chi sqr
  for (int i_graph = 0; i_graph < n_graphs; i_graph++) {

    // Loop thro data points
    int n_points = graphs.at(i_fit)->GetN();

    cout

    for (int i_point = 0; i_point < n_points; i_point++) { 

      x[i_point] = graphs.at(i_fit)->GetPointX(i_point);
      y[i_point] = graphs.at(i_fit)->GetPointY(i_point) - fit->Eval(x[i_point]); 
      zeros[i_point] = 0.;

      h_res->Fill(y[i_point]);

    }

    DrawTH1(h_res,";Fit residual [mm];Entries","../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/1D_res_"+to_string(BR_APP[i_fit]));

    TGraphErrors *gr = new TGraphErrors(n_points, x, y, zeros, zeros);

    residuals.push_back(gr); 





}*/

int main(int argc, char *argv[]) {

  string stage = argv[1]; // "raw/cutsTesting";

  // Output to store basic fits (quad scans and final fit)
  TFile *output = new TFile(("../Plots/Data/RadialFieldScan_"+scan+"/"+stage+"/fits.root").c_str(), "RECREATE");
  output->cd(); output->mkdir("quadFits"); output->mkdir("mainFit");

  // FIRST SCAN
	//string runs[4] = {"37131-37133", "37119", "37128-37130", "37120-37127"};
	//string settings[4] = {"14 kV, +30 ppm", "18 kV, +30 ppm", "14 kV, -30 ppm", "18 kV, -30 ppm"};

  // SECOND SCAN

  // Get runs, QHV, & Br 
  vector<vector<string>> csv = csvReader("../RadialFieldOps_"+scan+"/scan"+scan+".csv");


	int counter = 0;

  // Vector to hold the quad scans at each field setting
	vector<TGraphErrors*> quadScans; 

  //vector<TGraphErrors*> quadScanResiduals;

  vector<TGraphErrors*> quadScanCTAGs;

	// Field fit variables
	double x[N_FIELD]; double ex[N_FIELD];
	double y[N_FIELD]; double ey[N_FIELD];

  // =========== Field setting loop =========== 
	for ( int i_field = 0; i_field < N_FIELD; i_field++ ) {

    // Book vector for y-pos per quad setting
		vector<tuple<double, double>> yPos;

    // Book vector for ctag, should be ints but need doubles for function to work
    vector<tuple<double, double>> ctags; // Second one is just a dummy

    vector<float> QHV_tmp; 

    //if(BR_APP[i_field] != -50 && row.at(2) != -50) continue;

    cout<<"Applied field: "<<BR_APP[i_field]<<" ppm"<<endl;

    // =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

      cout<<"Counter: "<<counter<<endl;

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

      string input = "../Plots/Data/RadialFieldScan_"+scan+"/"+stage+"/y-pos_"+row.at(0)+".root";
      
      // Get info
      tuple<double, double, int> data_tuple = ReadYPos(input);

      // CATCH EMPTY SUBRUNS 
      if(get<0>(data_tuple)==0. || get<1>(data_tuple)==0. || get<0>(data_tuple)==0.) {
        counter++;
        continue;
      }

      QHV_tmp.push_back(QHV[i_quad]);

			yPos.push_back(make_tuple(get<0>(data_tuple), get<1>(data_tuple)));

      ctags.push_back(make_tuple(double(get<2>(data_tuple)), 0.));

			counter++;

		}

    // TODO: sort out this "tmp" thing. Introduced to patch the fact that some settings are broken.

    TGraphErrors *quadScan = QuadScan(yPos, QHV_tmp); // QHV_tmp);

    //TGraphErrors *quadScanCTAG = ; 

    //quadScanCTAGs.push_back(QuadScan(ctags, QHV_tmp));

    // Fit for quad gradient and store
    TF1 *quadLineFit = new TF1("quadLineFit", "[0]+[1]*x");

		quadScan->Fit(quadLineFit,"M");

    cout<<"quadLineFit\t"<<quadLineFit<<endl;

    // Save raw quad fits to ROOT file
    output->cd("quadFits");
    quadScan->SetName((to_string(int(BR_APP[i_field]))+"_ppm").c_str());
    quadScan->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
    quadScan->GetXaxis()->CenterTitle(1);
    quadScan->GetYaxis()->CenterTitle(1);
    quadScan->Write();

		quadScans.push_back(quadScan);

		x[i_field] = BR_APP[i_field]; 
		ey[i_field] = 0.0;
		y[i_field] = quadLineFit->GetParameter(1);
		ey[i_field] = quadLineFit->GetParError(1);

	}

  // Draw quad scans 
  DrawQuadScanFits(quadScans, "quadLineFit", ";1/QHV [kV^{-1}];#LTy#GT [mm]", "../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/QuadScans", 71.5, 78.5, BR_APP);

  // Write quad scans to text

  // WriteQuadScan(quadScans, "../Images/txt/QuadScans2.txt");

  // ++++++++++++++++ Some checks on the quad scans ++++++++++++++++ 
  // Pass quad scans to chi square drawer
  DrawQuadScanChiSqr(quadScans, "quadLineFit", ";#LTB_{r}^{App}#GT [ppm];#chi^{2}/ndf", "../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/QuadChiSqrs", BR_APP); 

  // Get fit residual, this is crazy... TODO: make this more in line with the ctag one
  vector<TGraphErrors*> quadScanResiduals = GetQuadScanRes(quadScans, "quadLineFit", stage);//, "Residual", "../Images/Data/RadialFieldScan_"+scan+"/QuadFitRes");
  DrawQuadScanNoFit(quadScanResiduals, ";1/QHV [kV^{-1}];Fit residual [mm]", "../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/QuadFitRes", -0.05, 0.05, BR_APP);

  // Draw CTAGs per fit
  //DrawQuadScanNoFit(quadScanCTAGs, ";1/QHV [kV^{-1}];Integrated CTAGs / setting", "../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/QuadCTAGs", 1e6, 4.5e6, BR_APP); 

  // ++++++++++++++++ Fit for radial field ++++++++++++++++ 

	TGraphErrors *result = new TGraphErrors(N_FIELD, x, y, ex, ey);

	TF1 *mainFit = new TF1("mainFit", "[0]+[1]*x");
	TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

	double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
  double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

  // x-intercept 
	double Br = -p0/p1;

	// From Taylor 9.9
	double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

	DrawRadialFieldLineFit(result, BrErr, "mainFit", ";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]","../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/FieldFit");

  // Save fit
  output->cd("mainFit");
  result->SetName("mainFit");
  result->Write();
  //output->Write();
  output->Close();
  // Draw main fit residuals 

  DrawTGraphResiduals(result, "mainFit", ";#LTB_{r}^{App}#GT [ppm];Fit residual [mm#upointkV]", "../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/FieldFitRes");

  // ++++++++++++++++ Check p-values ++++++++++++++++ 

  double x_tmp[N_FIELD+1]; double y_tmp[N_FIELD+1]; double zeros[N_FIELD+1];

  for (int i_point = -1; i_point < N_FIELD; i_point++) { 
  //for (int i_point = N_FIELD-1; i_point > -2; i_point--) { 

    double pVal = pValuePointCheck(x, y, ex, ey, i_point, stage);

    x_tmp[i_point+1] = i_point+2;
    y_tmp[i_point+1] = pVal;
    zeros[i_point+1] = 0.;  

  }

  TGraphErrors *pValGr = new TGraphErrors(N_FIELD+1, x_tmp, y_tmp, zeros, zeros);
  //pValGr->GetXaxis()->SetRangeUser(-10,7);
  pValGr->GetXaxis()->SetBinLabel(pValGr->GetXaxis()->FindBin(0 + 1.),"None");
  pValGr->GetXaxis()->SetBinLabel(pValGr->GetXaxis()->FindBin(1 + 1.),"+50");
  pValGr->GetXaxis()->SetBinLabel(pValGr->GetXaxis()->FindBin(2 + 1.),"+30");
  pValGr->GetXaxis()->SetBinLabel(pValGr->GetXaxis()->FindBin(3 + 1.),"+10");
  pValGr->GetXaxis()->SetBinLabel(pValGr->GetXaxis()->FindBin(4 + 1.),"#minus10");
  pValGr->GetXaxis()->SetBinLabel(pValGr->GetXaxis()->FindBin(5 + 1.),"#minus30");
  pValGr->GetXaxis()->SetBinLabel(pValGr->GetXaxis()->FindBin(6 + 1.),"#minus50");
  pValGr->GetXaxis()->LabelsOption("h");
  pValGr->GetXaxis()->SetNdivisions(7);

  DrawBarChart(pValGr,";Data point removed in re-fit;p-value","../Images/Data/RadialFieldScan_"+scan+"/"+stage+"/pVals");

  return 0;

}