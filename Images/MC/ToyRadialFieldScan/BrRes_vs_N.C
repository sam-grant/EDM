void BrRes_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,-0.04962709,1.502589e+07,0.05698002);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1211[13] = {
   941716,
   1907064,
   2868345,
   3792445,
   4758726,
   5723857,
   6686373,
   7651067,
   8616015,
   9581050,
   1.054512e+07,
   1.151148e+07,
   1.247554e+07};
   Double_t Graph0_fy1211[13] = {
   -0.006783333,
   0.015125,
   0.02493333,
   0.005683333,
   -0.01411667,
   -0.006875,
   0.01173333,
   0.001833333,
   0.000825,
   -0.005775,
   -0.0009166667,
   0.009166667,
   0.007333333};
   Double_t Graph0_fex1211[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1211[13] = {
   0.02507591,
   0.01730068,
   0.01427884,
   0.01232232,
   0.0114881,
   0.00999897,
   0.00945528,
   0.008730787,
   0.008565768,
   0.007734859,
   0.007536706,
   0.007287356,
   0.006991709};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1211,Graph0_fy1211,Graph0_fex1211,Graph0_fey1211);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs / setting;Meas #minus true #LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01211 = new TH1F("Graph_Graph01211","",100,0,1.362893e+07);
   Graph_Graph01211->SetMinimum(-0.03896638);
   Graph_Graph01211->SetMaximum(0.04631931);
   Graph_Graph01211->SetDirectory(0);
   Graph_Graph01211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01211->SetLineColor(ci);
   Graph_Graph01211->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Graph01211->GetXaxis()->SetRange(1,98);
   Graph_Graph01211->GetXaxis()->CenterTitle(true);
   Graph_Graph01211->GetXaxis()->SetLabelFont(42);
   Graph_Graph01211->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01211->GetXaxis()->SetTitleFont(42);
   Graph_Graph01211->GetYaxis()->SetTitle("Meas #minus true #LTB_{r}^{b}#GT [ppm]");
   Graph_Graph01211->GetYaxis()->CenterTitle(true);
   Graph_Graph01211->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01211->GetYaxis()->SetLabelFont(42);
   Graph_Graph01211->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01211->GetYaxis()->SetTitleFont(42);
   Graph_Graph01211->GetZaxis()->SetLabelFont(42);
   Graph_Graph01211->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01211);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.04631931,1.335635e+07,0.04631931,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs / setting");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
