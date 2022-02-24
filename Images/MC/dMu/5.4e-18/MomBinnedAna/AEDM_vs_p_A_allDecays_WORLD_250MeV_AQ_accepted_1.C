void AEDM_vs_p_A_allDecays_WORLD_250MeV_AQ_accepted_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 01:35:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-394.2827,-2.543557e-08,3548.544,4.133956e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[12] = {
   124.3911,
   374.0145,
   623.706,
   873.2453,
   1122.825,
   1372.234,
   1621.448,
   1870.625,
   2119.352,
   2367.231,
   2613.18,
   2850.349};
   Double_t Graph0_fy1039[12] = {
   8.104669e-08,
   3.330461e-08,
   2.291607e-08,
   2.860011e-08,
   3.999629e-08,
   4.694448e-08,
   6.180626e-08,
   7.936873e-08,
   8.562267e-08,
   1.278178e-07,
   1.526903e-07,
   2.13363e-07};
   Double_t Graph0_fex1039[12] = {
   0.022956,
   0.02346665,
   0.02411141,
   0.02499881,
   0.02620537,
   0.02782515,
   0.02997202,
   0.03285355,
   0.03696012,
   0.0431715,
   0.05382126,
   0.07665942};
   Double_t Graph0_fey1039[12] = {
   1.580581e-10,
   1.156267e-09,
   1.454552e-09,
   1.680245e-09,
   1.955787e-09,
   2.345879e-09,
   2.926586e-09,
   3.826574e-09,
   5.34948e-09,
   8.314765e-09,
   1.564917e-08,
   4.877439e-08};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","",100,0,3123.031);
   Graph_Graph01039->SetMinimum(1.844755e-08);
   Graph_Graph01039->SetMaximum(3.695125e-07);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(1,101);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
