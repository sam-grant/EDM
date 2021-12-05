void c_vs_p_A_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 21:35:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.7686,-5.108182e-08,3033.167,6.807311e-09);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[12] = {
   124.3988,
   374.0376,
   623.6681,
   873.2521,
   1122.83,
   1372.241,
   1621.489,
   1870.59,
   2119.347,
   2367.262,
   2613.214,
   2850.256};
   Double_t Graph0_fy1014[12] = {
   1.227502e-10,
   -2.371749e-10,
   -1.023141e-09,
   2.03323e-10,
   -5.070295e-09,
   -1.391906e-09,
   7.601771e-10,
   -7.248682e-12,
   8.564608e-10,
   -2.101802e-09,
   -8.588488e-09,
   -5.878802e-08};
   Double_t Graph0_fex1014[12] = {
   0.02929449,
   0.0299445,
   0.03076586,
   0.03189946,
   0.03344109,
   0.03552055,
   0.03823304,
   0.04193465,
   0.04715784,
   0.05508997,
   0.06872581,
   0.0977494};
   Double_t Graph0_fey1014[12] = {
   2.086182e-09,
   2.16359e-09,
   2.369932e-09,
   2.546077e-09,
   2.900239e-09,
   3.467863e-09,
   4.408592e-09,
   6.0681e-09,
   9.375555e-09,
   1.679638e-08,
   3.911039e-08,
   1.399216e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,0,3122.952);
   Graph_Graph01014->SetMinimum(-4.52929e-08);
   Graph_Graph01014->SetMaximum(1.018398e-09);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01014->GetXaxis()->SetRange(25,89);
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
