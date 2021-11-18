void c_vs_p_allDecays_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:34:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.998,-0.1895281,2752.101,0.06888194);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[12] = {
   124.3992,
   374.0378,
   623.6659,
   873.2514,
   1122.83,
   1372.241,
   1621.488,
   1870.589,
   2119.347,
   2367.26,
   2613.214,
   2850.255};
   Double_t Graph0_fy1009[12] = {
   -0.09559791,
   -0.03800604,
   0.0006618567,
   -0.002267309,
   -0.01642891,
   0.01638487,
   -0.002372956,
   -0.005036493,
   0.003735953,
   0.009110692,
   0.00495588,
   -0.009546104};
   Double_t Graph0_fex1009[12] = {
   0.02929484,
   0.0299443,
   0.03076585,
   0.0318993,
   0.0334412,
   0.03552109,
   0.03823314,
   0.0419347,
   0.04715824,
   0.05508999,
   0.06872665,
   0.09775045};
   Double_t Graph0_fey1009[12] = {
   0.05086182,
   0.02038995,
   0.0150427,
   0.01230191,
   0.0105835,
   0.009428733,
   0.008608468,
   0.008043103,
   0.007691385,
   0.007557076,
   0.007733205,
   0.008649525};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","",100,0,3122.951);
   Graph_Graph01009->SetMinimum(-0.1636871);
   Graph_Graph01009->SetMaximum(0.04304094);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01009->SetLineColor(ci);
   Graph_Graph01009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01009->GetXaxis()->SetRange(25,81);
   Graph_Graph01009->GetXaxis()->CenterTitle(true);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01009->GetYaxis()->CenterTitle(true);
   Graph_Graph01009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
