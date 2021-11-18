void theta_Y_RMS_vs_p_acceptedDecays_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:34:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.6857,-7.115941,2750.47,108.9995);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1012[12] = {
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
   Double_t Graph0_fy1012[12] = {
   88.96376,
   44.8068,
   32.51108,
   25.87819,
   21.63388,
   18.35528,
   15.64586,
   13.38212,
   11.29799,
   9.283446,
   7.232604,
   4.997757};
   Double_t Graph0_fex1012[12] = {
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
   Double_t Graph0_fey1012[12] = {
   0.02483753,
   0.01034668,
   0.006765361,
   0.005067252,
   0.004189877,
   0.003639704,
   0.003234063,
   0.00296307,
   0.002781378,
   0.002657299,
   0.002573243,
   0.002642434};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#sigma#theta_{y} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01012 = new TH1F("Graph_Graph01012","",100,0,3121.1);
   Graph_Graph01012->SetMinimum(4.495603);
   Graph_Graph01012->SetMaximum(97.38795);
   Graph_Graph01012->SetDirectory(0);
   Graph_Graph01012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01012->SetLineColor(ci);
   Graph_Graph01012->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01012->GetXaxis()->SetRange(25,81);
   Graph_Graph01012->GetXaxis()->CenterTitle(true);
   Graph_Graph01012->GetXaxis()->SetLabelFont(42);
   Graph_Graph01012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01012->GetXaxis()->SetTitleFont(42);
   Graph_Graph01012->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01012->GetYaxis()->CenterTitle(true);
   Graph_Graph01012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01012->GetYaxis()->SetLabelFont(42);
   Graph_Graph01012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01012->GetYaxis()->SetTitleFont(42);
   Graph_Graph01012->GetZaxis()->SetLabelFont(42);
   Graph_Graph01012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01012);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
