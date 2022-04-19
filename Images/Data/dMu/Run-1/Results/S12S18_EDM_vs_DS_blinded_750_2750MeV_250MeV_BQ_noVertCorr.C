void S12S18_EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:23:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.35,7.267864e-19,4.85,2.393386e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1021[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1021[4] = {
   1.347393e-18,
   1.218553e-18,
   1.9355e-18,
   1.620732e-18};
   Double_t _fex1021[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1021[4] = {
   2.495574e-19,
   2.140003e-19,
   1.801192e-19,
   1.343063e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,0.8,4.4);
   Graph_Graph1021->SetMinimum(8.934464e-19);
   Graph_Graph1021->SetMaximum(2.226726e-18);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetBinLabel(6,"Run-1a");
   Graph_Graph1021->GetXaxis()->SetBinLabel(34,"Run-1b");
   Graph_Graph1021->GetXaxis()->SetBinLabel(62,"Run-1c");
   Graph_Graph1021->GetXaxis()->SetBinLabel(89,"Run-1d");
   Graph_Graph1021->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1021->GetXaxis()->CenterTitle(true);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->CenterTitle(true);
   Graph_Graph1021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   
   TF1 *pol01022 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01022->SetFillColor(19);
   pol01022->SetFillStyle(0);
   pol01022->SetLineColor(2);
   pol01022->SetLineWidth(2);
   pol01022->SetChisquare(7.688619);
   pol01022->SetNDF(3);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,1.592793e-18);
   pol01022->SetParError(0,8.974692e-20);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
