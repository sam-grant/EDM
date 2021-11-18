void c_vs_p_acceptedDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:29:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.6857,-0.9612959,2750.47,0.2033616);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[12] = {
   141.6721,
   381.0619,
   628.3411,
   876.335,
   1124.572,
   1373.653,
   1622.832,
   1871.413,
   2119.63,
   2367.742,
   2613.509,
   2850.19};
   Double_t Graph0_fy1009[12] = {
   -0.7321456,
   -0.2729976,
   -0.1115663,
   -0.04530482,
   -0.02537523,
   -0.02537986,
   -0.01540589,
   -0.003404344,
   -0.00304849,
   -0.009418555,
   0.005244254,
   -0.001439542};
   Double_t Graph0_fex1009[12] = {
   0.02559166,
   0.02344866,
   0.02122027,
   0.01994385,
   0.01973856,
   0.02022728,
   0.02106702,
   0.02255001,
   0.02503883,
   0.02905949,
   0.03585111,
   0.0507559};
   Double_t Graph0_fey1009[12] = {
   0.03504074,
   0.01462107,
   0.009568041,
   0.007167244,
   0.00592544,
   0.005150281,
   0.004588465,
   0.004232183,
   0.004027529,
   0.003948451,
   0.004007764,
   0.004489732};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","",100,0,3121.1);
   Graph_Graph01009->SetMinimum(-0.8448302);
   Graph_Graph01009->SetMaximum(0.08689585);
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
