void DrawOverlay(vector<TGraphErrors*> gr_, std::string title, std::string fname) {

  TCanvas *c = new TCanvas("c","c",800,600);

  gr_.at(0)->SetTitle(title.c_str());
  gr_.at(0)->GetXaxis()->SetTitleSize(.04);
  gr_.at(0)->GetYaxis()->SetTitleSize(.04);
  gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  gr_.at(0)->GetYaxis()->SetTitleOffset(1.2);
  gr_.at(0)->GetXaxis()->CenterTitle(true);
  gr_.at(0)->GetYaxis()->CenterTitle(true);
  gr_.at(0)->GetYaxis()->SetMaxDigits(4);
  gr_.at(0)->GetYaxis()->SetRangeUser(-2.5, 2.5);
  gr_.at(0)->GetXaxis()->SetRangeUser(750, 2500);

  vector<TString> label_ = {"S12", "S18", "S12 & S18"};

  TLegend *leg = new TLegend(0.31, 0.91, 0.78, 0.99); 
  leg->SetNColumns(3);
  leg->SetBorderSize(0);
  leg->SetTextSize(24);
  leg->SetTextFont(44);


  vector<int> colours_ = {4, 2, 1};

  for(int i(0); i<gr_.size(); i++) {

    gr_.at(i)->SetMarkerStyle(20);
    gr_.at(i)->SetMarkerColor(colours_.at(i));
    gr_.at(i)->SetLineColor(colours_.at(i));

    if(i==0) gr_.at(i)->Draw("ALP");
    else gr_.at(i)->Draw("LP SAME");

    leg->AddEntry(gr_.at(i), label_.at(i));

  }

  leg->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void DrawGraph(TGraphErrors *graph, std::string title, std::string fname) {

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

  graph->GetYaxis()->SetRangeUser(-2.5, 2.5);
  graph->GetXaxis()->SetRangeUser(750, 2500);

  graph->Draw("ALP");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

TGraphErrors *ConvertToTGraphErrors(TH1D *hist) {

  TGraphErrors *gr = new TGraphErrors();

  int nBin = hist->GetNbinsX();

  int counter = 0;

  for(int i = 0; i < nBin; i++) {

    double x = hist->GetBinCenter(i+1); 
    double ex = 0; 
    double y = hist->GetBinContent(i+1); 
    double ey = hist->GetBinError(i+1); 

    // Avoid filling empty bins as "zeros".
    // x-axis still increments so we won't go out of sync

    if(y==0) continue;

    gr->SetPoint(counter, x, y);
    gr->SetPointError(counter, ex, ey);

    counter++;


  }

  return gr;

}

void Run(string dataset) { 

  TString finName = "../Plots/Data/dMu/Run-1/Plots/verticalOffsetHists_"+dataset+".root";
  TFile *fin = TFile::Open(finName);

  cout<<"Reading file "<<finName<<", "<<fin<<endl;

  TString foutName = "../Plots/Data/dMu/Run-1/Plots/verticalOffset_"+dataset+".root";
  TFile *fout = new TFile(foutName, "RECREATE");
  fout->mkdir("VerticalOffsetPlots"); fout->cd("VerticalOffsetPlots"); 

  vector<string> stn_ = {"S12", "S18", "S12S18"};
  vector<string> step_ = {"125", "250"};

  for(auto& step : step_) {

    vector<TGraphErrors*> gr_; 

    fout->mkdir(("VerticalOffsetPlots/"+step+"MeV").c_str()); fout->cd(("VerticalOffsetPlots/"+step+"MeV").c_str()); 

    for(auto& stn : stn_) {

      TString histName = "VerticalOffsetPlots/"+step+"MeV/"+stn+"_ThetaY_vs_Momentum"; 
      TH2D *h_theta_y_vs_p = (TH2D*)fin->Get(histName); 

      cout<<"Got histogram "<<histName<<", "<<h_theta_y_vs_p<<endl;

      TH1D *px_theta_y_vs_p = h_theta_y_vs_p->ProfileX();

      TGraphErrors *gr_theta_y_vs_p = ConvertToTGraphErrors(px_theta_y_vs_p);

      gr_.push_back(gr_theta_y_vs_p);

      h_theta_y_vs_p->SetName((stn+"_h_ThetaY_vs_Momentum").c_str());
      px_theta_y_vs_p->SetName((stn+"_px_ThetaY_vs_Momentum").c_str());
      gr_theta_y_vs_p->SetName((stn+"_gr_ThetaY_vs_Momentum").c_str());

      h_theta_y_vs_p->Write();
      px_theta_y_vs_p->Write();
      gr_theta_y_vs_p->Write();

      DrawGraph(gr_theta_y_vs_p, ";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / "+step+" MeV", ("../Images/Data/dMu/"+dataset+"/"+stn+"_gr_ThetaY_vs_Momentum_"+step+"MeV").c_str());

    }

    DrawOverlay(gr_, ";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / "+step+" MeV", ("../Images/Data/dMu/"+dataset+"/Overlay_gr_ThetaY_vs_Momentum_"+step+"MeV").c_str());

  }

	

  fin->Close();
  fout->Close();

  cout<<"Plots written to "<<foutName<<", "<<fout<<endl;

  return;
}

void VerticalOffsetVsMomentum() { 

  //Run("Run-1a");
  //Run("Run-1b");
  Run("Run-1c");
  Run("Run-1d");

  return;

}
