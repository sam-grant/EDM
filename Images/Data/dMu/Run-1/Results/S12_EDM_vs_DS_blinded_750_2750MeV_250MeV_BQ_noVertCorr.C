void S12_EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 29 14:17:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.15,3.711681e-19,4.65,2.585284e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1019[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1019[4] = {
   1.886723e-18,
   1.021044e-18,
   1.835286e-18,
   1.54133e-18};
   Double_t _fex1019[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1019[4] = {
   3.295415e-19,
   2.808569e-19,
   2.333638e-19,
   1.718772e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,0.6,4.2);
   Graph_Graph1019->SetMinimum(5.925797e-19);
   Graph_Graph1019->SetMaximum(2.363872e-18);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph1019->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph1019->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph1019->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph1019->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1019->GetXaxis()->CenterTitle(true);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->CenterTitle(true);
   Graph_Graph1019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
