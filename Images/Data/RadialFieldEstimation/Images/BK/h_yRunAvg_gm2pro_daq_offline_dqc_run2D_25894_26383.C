void h_yRunAvg_gm2pro_daq_offline_dqc_run2D_25894_26383()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 25 06:12:59 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_yRunAvg__2 = new TH1D("h_yRunAvg__2","",15000,0,150);
   h_yRunAvg__2->SetBinContent(7516,4);
   h_yRunAvg__2->SetBinContent(7517,10);
   h_yRunAvg__2->SetBinContent(7518,5);
   h_yRunAvg__2->SetBinContent(7519,10);
   h_yRunAvg__2->SetBinContent(7520,2);
   h_yRunAvg__2->SetBinContent(7521,4);
   h_yRunAvg__2->SetBinContent(7522,5);
   h_yRunAvg__2->SetBinContent(7523,2);
   h_yRunAvg__2->SetBinContent(7525,1);
   h_yRunAvg__2->SetBinContent(7528,1);
   h_yRunAvg__2->SetBinContent(7531,1);
   h_yRunAvg__2->SetBinContent(7532,1);
   h_yRunAvg__2->SetBinContent(7533,7);
   h_yRunAvg__2->SetBinContent(7534,6);
   h_yRunAvg__2->SetBinContent(7535,1);
   h_yRunAvg__2->SetBinContent(7536,12);
   h_yRunAvg__2->SetBinContent(7537,11);
   h_yRunAvg__2->SetBinContent(7538,19);
   h_yRunAvg__2->SetBinContent(7539,18);
   h_yRunAvg__2->SetBinContent(7540,24);
   h_yRunAvg__2->SetBinContent(7541,25);
   h_yRunAvg__2->SetBinContent(7542,17);
   h_yRunAvg__2->SetBinContent(7543,9);
   h_yRunAvg__2->SetBinContent(7544,12);
   h_yRunAvg__2->SetBinContent(7545,7);
   h_yRunAvg__2->SetBinContent(7546,3);
   h_yRunAvg__2->SetBinContent(7547,1);
   h_yRunAvg__2->SetBinContent(7548,1);
   h_yRunAvg__2->SetBinContent(7549,1);
   h_yRunAvg__2->SetBinContent(7553,2);
   h_yRunAvg__2->SetBinContent(7555,1);
   h_yRunAvg__2->SetBinContent(7562,1);
   h_yRunAvg__2->SetEntries(224);
   h_yRunAvg__2->GetXaxis()->SetTitle("#LTy_{All calos}#GT [mm]");
   h_yRunAvg__2->GetXaxis()->CenterTitle(true);
   h_yRunAvg__2->GetXaxis()->SetLabelFont(42);
   h_yRunAvg__2->GetXaxis()->SetLabelSize(0.035);
   h_yRunAvg__2->GetXaxis()->SetTitleOffset(1.1);
   h_yRunAvg__2->GetXaxis()->SetTitleFont(42);
   h_yRunAvg__2->GetYaxis()->SetTitle("Runs");
   h_yRunAvg__2->GetYaxis()->CenterTitle(true);
   h_yRunAvg__2->GetYaxis()->SetNdivisions(4000510);
   h_yRunAvg__2->GetYaxis()->SetLabelFont(42);
   h_yRunAvg__2->GetYaxis()->SetLabelSize(0.035);
   h_yRunAvg__2->GetYaxis()->SetTitleOffset(1.1);
   h_yRunAvg__2->GetYaxis()->SetTitleFont(42);
   h_yRunAvg__2->GetZaxis()->SetLabelFont(42);
   h_yRunAvg__2->GetZaxis()->SetLabelSize(0.035);
   h_yRunAvg__2->GetZaxis()->SetTitleSize(0.035);
   h_yRunAvg__2->GetZaxis()->SetTitleFont(42);
   h_yRunAvg__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
