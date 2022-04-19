void S12_EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noAccCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:23:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.15,1.593451e-19,4.65,1.304251e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1028[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1028[4] = {
   9.436212e-19,
   4.955304e-19,
   8.723419e-19,
   7.28002e-19};
   Double_t _fex1028[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1028[4] = {
   1.698121e-19,
   1.453676e-19,
   1.212886e-19,
   9.063059e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1028,_fy1028,_fex1028,_fey1028);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","",100,0.6,4.2);
   Graph_Graph1028->SetMinimum(2.738357e-19);
   Graph_Graph1028->SetMaximum(1.18976e-18);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph1028->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph1028->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph1028->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph1028->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1028->GetXaxis()->CenterTitle(true);
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->CenterTitle(true);
   Graph_Graph1028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
