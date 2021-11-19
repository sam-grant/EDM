#include "Utils.h"

using namespace std;

// Global momentum cuts
string xmin = "750";
string xmax = "2500";
//string xmin = "825"; // 750;
//string xmax = "2375"; // 2500;
//string xmin = "900";
//string xmax = "2250";
//string xmin = "1025";
//string xmax = "2125";

vector<TF1*> MahalanobisDistances(TGraphErrors *graph) {

  double xmin = 0; double xmax = 5;

  vector<TF1*> mahalanobisFunctions_; 

  TF1 *fit = (TF1*)graph->GetFunction("pol0");

  TFitResultPtr fitResult = graph->Fit(fit,"SR");

  // Get parameters from converged fit
  int nPars = 1;
  TVectorD meanVals(nPars);
  for(int n = 0; n < nPars; n++){
    meanVals[n] = fit->GetParameter(n);
  }

  // Covariance matrix
  TMatrixD covMatrix = fitResult->GetCovarianceMatrix();
    
  // Matrix manipulation
  TDecompChol decompCholCov(covMatrix);
  decompCholCov.Decompose();
  TMatrixD matrixCovI = decompCholCov.GetU();
  TMatrixD matrixCov(nPars,nPars);
  matrixCov.Transpose(matrixCovI);

  double CL = .317311; // 1 - 68% (one sigma)
  double r2 = 0; // r^2 (see https://upload.wikimedia.org/wikipedia/commons/a/a2/Cumulative_function_n_dimensional_Gaussians_12.2013.pdf)

  while(TMath::Prob(r2,nPars) > CL){
    r2 += 0.00001; // why 0.00001?
  }

  double r = sqrt(r2); // This is the Mahalanobis distance threshold under which CL % of points fall below

  for(int i = -1; i < 2; i++) {
    
    // Skip the minimum chi^2
    if(i==0) continue;

    TVectorD u(nPars); 
    u[0] = i;

    // Determine the scale factor required to move 1 sigma
    double scale = u.Norm2Sqr() > 0 ? r/sqrt(u.Norm2Sqr()) : 1; 

    cout<<"scale "<<scale<<endl;

    for(int par = 0; par < nPars; par++) u[par] *= scale;

    TVectorD z = matrixCov*u + meanVals;

    for(int par = 0; par < nPars; par++) cout << z[par] << ", ";
    cout << endl;

    // Define shifted function
    TF1 *trial = new TF1(Form("shift_%d",i), "pol0", xmin, xmax);

    for(int par = 0; par < nPars; par++) trial->SetParameter(par,z[par]);
    
    mahalanobisFunctions_.push_back(trial);

  }

  return mahalanobisFunctions_;

}

void DrawGraph(TGraphErrors *graph, std::string title, std::string fname, vector<string> xLabel_) {

  TCanvas *c = new TCanvas("c","c",800,600);

  graph->SetTitle(title.c_str());
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.2);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle

  for(int i(0); i<graph->GetN(); i++) graph->GetXaxis()->SetBinLabel(graph->GetXaxis()->FindBin(i+1), (xLabel_.at(i)).c_str());

  graph->GetXaxis()->LabelsOption("h");

  graph->Draw("AP")	;

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void DrawAllGraphs(vector<TGraphErrors*> graph_, std::string title, std::string fname, vector<string> xLabel_) {

  // Get one sigma band
  vector<TF1*> mahalanobisFunctions_ = MahalanobisDistances(graph_.at(2));

  TF1 *fit_tmp = graph_.at(2)->GetFunction("pol0");
  TF1 *minusSigma = mahalanobisFunctions_.at(0);
  TF1 *plusSigma = mahalanobisFunctions_.at(1);

  // This is absurd but it's the only way to stop it drawing the fit on top of the graphs
  fit_tmp->SetLineWidth(0);

  TF1 *fit = new TF1("fit", "pol0", 0, 5);

  cout<<"fit error "<<fit_tmp->GetParError(0)<<endl;
  cout<<"one sigma "<<plusSigma->GetParameter(0) - fit_tmp->GetParameter(0)<<endl;

  fit->SetParameter(0, fit_tmp->GetParameter(0));
  fit->SetParError(0, fit_tmp->GetParError(0));
  fit->SetLineWidth(1);

  fit->SetLineStyle(1);
  minusSigma->SetLineStyle(2);
  plusSigma->SetLineStyle(2);

  fit->SetLineColor(kGray);
  minusSigma->SetLineColor(kGray);
  plusSigma->SetLineColor(kGray);

  TCanvas *c = new TCanvas("c","c",800,600);

 //TLegend *l = new TLegend(0.59, 0.69, 0.89, 0.89); 
  TLegend *l = new TLegend(0.30, 0.91, 0.80, 0.99); 
  l->SetNColumns(3);
  l->SetBorderSize(0);
  l->SetTextSize(24);
  l->SetTextFont(44);

  vector<string> label_ = {"S12", "S18", "S12 & S18"};

  graph_.at(0)->SetTitle(title.c_str());
  graph_.at(0)->GetXaxis()->SetTitleSize(.04);
  graph_.at(0)->GetYaxis()->SetTitleSize(.04);
  graph_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graph_.at(0)->GetYaxis()->SetTitleOffset(1.2);
  graph_.at(0)->GetXaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->SetMaxDigits(4);

  // Find y-range
  double ymax = graph_.at(0)->GetY()[0] + 1.5*graph_.at(0)->GetEY()[0];
  double ymin = graph_.at(0)->GetY()[0] - 1.5*graph_.at(0)->GetEY()[0];  

  for(int i(0); i<graph_.size(); i++) {

    double ymin1 = graph_.at(i)->GetY()[0] - 1.5*graph_.at(i)->GetEY()[0]; 
    double ymax1 = graph_.at(i)->GetY()[0] + 1.5*graph_.at(i)->GetEY()[0]; 

    for(int j(1); j<graph_.at(0)->GetN(); j++) { 

      double ymax2 = graph_.at(i)->GetY()[j] + 1.5*graph_.at(i)->GetEY()[j];
      double ymin2 = graph_.at(i)->GetY()[j] - 1.5*graph_.at(i)->GetEY()[j]; 

      if(ymin2 < ymin1) ymin1 = ymin2;
      if(ymax2 > ymax1) ymax1 = ymax2;

    }

    if(ymin1 < ymin) ymin = ymin1;
    if(ymax1 > ymax) ymax = ymax1;

  }

  graph_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);

  for(int i(0); i<graph_.at(0)->GetN(); i++) graph_.at(0)->GetXaxis()->SetBinLabel(graph_.at(0)->GetXaxis()->FindBin(i+1), (xLabel_.at(i)).c_str());

  graph_.at(0)->GetXaxis()->LabelsOption("h");

  graph_.at(0)->Draw("AP");
  gPad->Update();
  
  vector<int> colour_ = {2,4,1};

  for(int i(0); i<graph_.size(); i++) {
    graph_.at(i)->SetMarkerStyle(20);
    graph_.at(i)->SetMarkerColor(colour_.at(i));
    graph_.at(i)->SetLineColor(colour_.at(i));

    if(i==0) {

      fit->Draw("same");
      minusSigma->Draw("same");
      plusSigma->Draw("same");

      graph_.at(i)->Draw("P SAME");

    }

    else graph_.at(i)->Draw("P SAME");

    l->AddEntry(graph_.at(i), label_.at(i).c_str());

  }

  l->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

double GetLimit(double delta_prime) { 

  // CODATA 2018
  double pi = 3.14159265358979323846;
  double h = 6.62607015e-34; // Js
  double c = 299792458; // m/s
  double e = 1.602176634e-19; // C

  // Conversions
  double Mev2J = e*1e6;
  double MeV2kg = Mev2J / pow(c,2);
  double m2cm = 1e-2;
  double mrad2rad = 1e-3;

  double m_mu = M_MU * MeV2kg;
  double beta = sqrt(1-(1/pow(GMAGIC,2)));
  double hbar = h/(2*pi);

  // Calculate dMu in SI units
  double dMu = (e*hbar*A_MU*GMAGIC)/(2*m_mu*c*beta) * atan(delta_prime*mrad2rad); // Cm

  // Convert to ecm
  dMu = dMu / (m2cm * e);

  return dMu;

}

void Run(std::string dataset, int step, std::string blinding, bool correctDilution) { 

  std::string dilCorrStr = "";
  if(!correctDilution) dilCorrStr += "_noCorr";

	vector<string> DS_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<string> stn_ = {"S12", "S18", "S12S18"};
	vector<string> fitType_ {"g2", "EDM"};

	TFile *file_1a = TFile::Open(("../Plots/Data/dMu/"+dataset+"/Fits/edmResults_"+blinding+"_"+xmin+"-"+xmax+"MeV_Run-1a_"+to_string(step)+"MeV_BQ"+dilCorrStr+".root").c_str());
	TFile *file_1b = TFile::Open(("../Plots/Data/dMu/"+dataset+"/Fits/edmResults_"+blinding+"_"+xmin+"-"+xmax+"MeV_Run-1b_"+to_string(step)+"MeV_BQ"+dilCorrStr+".root").c_str());
	TFile *file_1c = TFile::Open(("../Plots/Data/dMu/"+dataset+"/Fits/edmResults_"+blinding+"_"+xmin+"-"+xmax+"MeV_Run-1c_"+to_string(step)+"MeV_BQ"+dilCorrStr+".root").c_str());
	TFile *file_1d = TFile::Open(("../Plots/Data/dMu/"+dataset+"/Fits/edmResults_"+blinding+"_"+xmin+"-"+xmax+"MeV_Run-1d_"+to_string(step)+"MeV_BQ"+dilCorrStr+".root").c_str());

	vector<TFile*> files_ = {file_1a, file_1b, file_1c, file_1d};

  for(auto& fitType : fitType_) {

    std::string subscript = "";
    std::string title = "";

    if(dataset == "Run-1") {

      if(fitType == "EDM") {
        subscript = fitType;
        title = ";;d_{#mu}^{BLIND} [e#upointcm]";
      } else if(fitType == "g2") {
        subscript = "g#minus2";
        title = ";;B_{z}/B_{y} [ppm]";
    }

    } 

    else if(dataset=="O") {

      if(fitType == "EDM") {
        subscript = "s";
        title = ";;#Omega_{"+subscript+"} [e#upointcm]";
      } else if(fitType == "g2") {
        subscript = "c";
        title = ";;#Omega_{"+subscript+"} [ppm]";
      }

    }

    vector<TGraphErrors*> gr_; 

    for(auto& stn : stn_) {

		TGraphErrors *gr = new TGraphErrors();

		for(int i=0; i<DS_.size(); i++) {

			TGraphErrors *gr_delta_prime = (TGraphErrors*)files_.at(i)->Get((fitType+"/"+stn+"_delta_prime_vs_p").c_str());
			TH1D *h_delta_prime = (TH1D*)files_.at(i)->Get((fitType+"/"+stn+"_h_delta_prime").c_str());

			double A = gr_delta_prime->GetFunction("pol0")->GetParameter(0);
			double eA = sqrt( pow(gr_delta_prime->GetFunction("pol0")->GetParError(0),2) + pow(h_delta_prime->GetRMS(),2) );

			if(fitType == "EDM") {

				A = GetLimit(A);
				eA = GetLimit(eA);

			} else if(fitType == "g2") { 

				A = 1e3*A;
				eA = 1e3*eA;

			}

			gr->SetPoint(i,i+1,A);
			gr->SetPointError(i,0,eA);
		}

		std::string new_title = stn+title;

    // Fit 
    if(stn=="S12S18") gr->Fit("pol0");

		DrawGraph(gr, new_title.c_str(), "../Images/Data/dMu/"+dataset+"/Results/"+stn+"_A"+fitType+"_vs_DS_"+blinding+"_"+xmin+"-"+xmax+"MeV_"+to_string(step)+"MeV"+dilCorrStr, DS_);

    gr_.push_back(gr);


	 }

   DrawAllGraphs(gr_, title.c_str(), "../Images/Data/dMu/"+dataset+"/Results/A"+fitType+"_vs_DS_"+blinding+"_"+xmin+"-"+xmax+"MeV_"+to_string(step)+"MeV"+dilCorrStr, DS_);

  }

	return;

}

void PlotEDMResultsPerDS() { 

  Run("Run-1", 125, "blinded", true);
  //Run("O", 125, "unblinded", true);
  //Run("Run-1", 125, "blinded", false);
  Run("O", 125, "unblinded", false);
  
  return;

}