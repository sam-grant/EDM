void h_yRunAvg_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2_15921_15991()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jul  1 06:09:35 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_yRunAvg__2 = new TH1D("h_yRunAvg__2","",15000,0,150);
   h_yRunAvg__2->SetBinContent(7545,1);
   h_yRunAvg__2->SetBinContent(7546,2);
   h_yRunAvg__2->SetBinContent(7547,2);
   h_yRunAvg__2->SetBinContent(7548,1);
   h_yRunAvg__2->SetBinContent(7549,5);
   h_yRunAvg__2->SetBinContent(7550,5);
   h_yRunAvg__2->SetBinContent(7551,4);
   h_yRunAvg__2->SetBinContent(7553,1);
   h_yRunAvg__2->SetBinContent(7554,3);
   h_yRunAvg__2->SetBinContent(7555,1);
   h_yRunAvg__2->SetBinContent(7556,1);
   h_yRunAvg__2->SetBinContent(7558,1);
   h_yRunAvg__2->SetBinContent(7559,2);
   h_yRunAvg__2->SetBinContent(7560,1);
   h_yRunAvg__2->SetBinContent(7561,2);
   h_yRunAvg__2->SetBinContent(7562,3);
   h_yRunAvg__2->SetBinContent(7563,4);
   h_yRunAvg__2->SetBinContent(7564,5);
   h_yRunAvg__2->SetBinContent(7566,1);
   h_yRunAvg__2->SetBinContent(7567,1);
   h_yRunAvg__2->SetBinContent(7568,2);
   h_yRunAvg__2->SetBinContent(7569,1);
   h_yRunAvg__2->SetBinContent(7574,4);
   h_yRunAvg__2->SetBinContent(7575,1);
   h_yRunAvg__2->SetBinContent(7576,2);
   h_yRunAvg__2->SetBinContent(7577,1);
   h_yRunAvg__2->SetBinContent(7578,1);
   h_yRunAvg__2->SetBinContent(7579,1);
   h_yRunAvg__2->SetBinContent(7580,2);
   h_yRunAvg__2->SetEntries(61);
   h_yRunAvg__2->SetLineWidth(3);
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
