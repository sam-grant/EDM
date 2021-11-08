void h_yRunAvg_Run5_Nearline_45581_45586()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov  4 14:40:39 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_yRunAvg__2 = new TH1D("h_yRunAvg__2","",15000,0,150);
   h_yRunAvg__2->SetBinContent(7496,1);
   h_yRunAvg__2->SetBinContent(7497,3);
   h_yRunAvg__2->SetBinContent(7498,1);
   h_yRunAvg__2->SetBinContent(7505,1);
   h_yRunAvg__2->SetEntries(6);
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
