void BrRes_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec 16 20:33:15 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,-0.03985186,1.502589e+07,0.06638249);
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
   0.02805144,
   -0.007927473,
   -0.001848685,
   0.002407702,
   0.01117601,
   0.01154222,
   -0.005331324,
   -0.0051406,
   -0.005980619,
   -0.001584543,
   -0.01129513,
   -0.002170272,
   0.004235234};
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
   0.02062533,
   0.01421867,
   0.01161966,
   0.009819919,
   0.009202686,
   0.008550647,
   0.007785382,
   0.007378227,
   0.006531357,
   0.00642646,
   0.006220654,
   0.005998059,
   0.005626584};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1211,Graph0_fy1211,Graph0_fex1211,Graph0_fey1211);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs / setting;Meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01211 = new TH1F("Graph_Graph01211","",100,0,1.362893e+07);
   Graph_Graph01211->SetMinimum(-0.02922843);
   Graph_Graph01211->SetMaximum(0.05575905);
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
   Graph_Graph01211->GetYaxis()->SetTitle("Meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
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
   TGaxis *gaxis = new TGaxis(0,0.05575905,1.335635e+07,0.05575905,0,344.5,510,"-");
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
