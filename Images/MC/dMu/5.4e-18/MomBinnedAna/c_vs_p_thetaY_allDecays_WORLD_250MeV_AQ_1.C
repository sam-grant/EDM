void c_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:09:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-409.8874,-0.1895285,3376.691,0.06888154);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[12] = {
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
   Double_t Graph0_fy1011[12] = {
   -0.09559834,
   -0.03800647,
   0.000661433,
   -0.002267729,
   -0.01642933,
   0.01638446,
   -0.002373372,
   -0.00503689,
   0.003735546,
   0.009110332,
   0.004955544,
   -0.009546348};
   Double_t Graph0_fex1011[12] = {
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
   Double_t Graph0_fey1011[12] = {
   0.05086183,
   0.02038995,
   0.0150427,
   0.01230191,
   0.0105835,
   0.009428734,
   0.008608468,
   0.008043103,
   0.007691385,
   0.007557076,
   0.007733205,
   0.008649526};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","",100,0,3122.951);
   Graph_Graph01011->SetMinimum(-0.1636875);
   Graph_Graph01011->SetMaximum(0.04304053);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01011->GetXaxis()->SetRange(0,96);
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
