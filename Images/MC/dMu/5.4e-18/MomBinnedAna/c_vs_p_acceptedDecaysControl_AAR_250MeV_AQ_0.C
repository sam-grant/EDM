void c_vs_p_acceptedDecaysControl_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:34:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.691,-0.9718214,2750.498,0.2051694);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[12] = {
   141.6991,
   381.0661,
   628.328,
   876.3509,
   1124.574,
   1373.652,
   1622.836,
   1871.414,
   2119.624,
   2367.726,
   2613.52,
   2850.227};
   Double_t Graph0_fy1009[12] = {
   -0.7443093,
   -0.2704443,
   -0.1121167,
   -0.04775664,
   -0.02533346,
   -0.02650616,
   -0.01671308,
   -0.004526266,
   0.001433935,
   -0.008168206,
   0.005418533,
   -0.002873535};
   Double_t Graph0_fex1009[12] = {
   0.02289401,
   0.02098567,
   0.01898876,
   0.01784357,
   0.01766279,
   0.01809788,
   0.01885087,
   0.02018248,
   0.02240582,
   0.02600361,
   0.03208372,
   0.04542578};
   Double_t Graph0_fey1009[12] = {
   0.03134697,
   0.0130843,
   0.008561373,
   0.006412411,
   0.005302469,
   0.004608454,
   0.004106178,
   0.003787606,
   0.003604082,
   0.00353337,
   0.003585768,
   0.004016313};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","",100,0,3121.132);
   Graph_Graph01009->SetMinimum(-0.8541223);
   Graph_Graph01009->SetMaximum(0.08747036);
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
