void S12S18_EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noAccCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 29 14:17:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.35,3.166281e-19,4.85,1.115806e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1030[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1030[4] = {
   6.307462e-19,
   5.563522e-19,
   8.920816e-19,
   7.202239e-19};
   Double_t _fex1030[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1030[4] = {
   1.231968e-19,
   1.065278e-19,
   9.052786e-20,
   6.916737e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1030,_fy1030,_fex1030,_fey1030);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1030 = new TH1F("Graph_Graph1030","",100,0.8,4.4);
   Graph_Graph1030->SetMinimum(3.965459e-19);
   Graph_Graph1030->SetMaximum(1.035888e-18);
   Graph_Graph1030->SetDirectory(0);
   Graph_Graph1030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1030->SetLineColor(ci);
   Graph_Graph1030->GetXaxis()->SetBinLabel(6,"Run-1a");
   Graph_Graph1030->GetXaxis()->SetBinLabel(34,"Run-1b");
   Graph_Graph1030->GetXaxis()->SetBinLabel(62,"Run-1c");
   Graph_Graph1030->GetXaxis()->SetBinLabel(89,"Run-1d");
   Graph_Graph1030->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1030->GetXaxis()->CenterTitle(true);
   Graph_Graph1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph1030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph1030->GetYaxis()->CenterTitle(true);
   Graph_Graph1030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph1030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1030->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph1030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1030);
   
   
   TF1 *pol01031 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01031->SetFillColor(19);
   pol01031->SetFillStyle(0);
   pol01031->SetLineColor(2);
   pol01031->SetLineWidth(2);
   pol01031->SetChisquare(6.496952);
   pol01031->SetNDF(3);
   pol01031->GetXaxis()->SetLabelFont(42);
   pol01031->GetXaxis()->SetTitleOffset(1);
   pol01031->GetXaxis()->SetTitleFont(42);
   pol01031->GetYaxis()->SetLabelFont(42);
   pol01031->GetYaxis()->SetTitleFont(42);
   pol01031->SetParameter(0,7.21532e-19);
   pol01031->SetParError(0,4.540518e-20);
   pol01031->SetParLimits(0,0,0);
   pol01031->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01031);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
