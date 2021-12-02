void h_yRunAvg_gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3_16355_16514()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 26 18:36:58 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_yRunAvg__2 = new TH1D("h_yRunAvg__2","",15000,0,150);
   h_yRunAvg__2->SetBinContent(7573,3);
   h_yRunAvg__2->SetBinContent(7574,2);
   h_yRunAvg__2->SetBinContent(7575,2);
   h_yRunAvg__2->SetBinContent(7577,4);
   h_yRunAvg__2->SetBinContent(7578,4);
   h_yRunAvg__2->SetBinContent(7579,5);
   h_yRunAvg__2->SetBinContent(7580,3);
   h_yRunAvg__2->SetBinContent(7581,4);
   h_yRunAvg__2->SetBinContent(7582,11);
   h_yRunAvg__2->SetBinContent(7583,5);
   h_yRunAvg__2->SetBinContent(7584,8);
   h_yRunAvg__2->SetBinContent(7585,17);
   h_yRunAvg__2->SetBinContent(7586,11);
   h_yRunAvg__2->SetBinContent(7587,11);
   h_yRunAvg__2->SetBinContent(7588,7);
   h_yRunAvg__2->SetBinContent(7589,2);
   h_yRunAvg__2->SetBinContent(7591,1);
   h_yRunAvg__2->SetBinContent(7592,1);
   h_yRunAvg__2->SetBinContent(7593,2);
   h_yRunAvg__2->SetBinContent(7594,1);
   h_yRunAvg__2->SetBinContent(7595,1);
   h_yRunAvg__2->SetBinContent(7596,1);
   h_yRunAvg__2->SetBinContent(7598,1);
   h_yRunAvg__2->SetEntries(107);
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
