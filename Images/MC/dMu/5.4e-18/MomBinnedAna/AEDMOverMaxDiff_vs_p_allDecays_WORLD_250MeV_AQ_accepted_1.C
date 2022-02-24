void AEDMOverMaxDiff_vs_p_allDecays_WORLD_250MeV_AQ_accepted_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 01:35:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-394.2827,-0.0004423822,3548.544,0.003494168);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[12] = {
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
   Double_t Graph0_fy1048[12] = {
   -5.13751e-06,
   5.690536e-05,
   0.0001720083,
   0.0003931332,
   0.0007652008,
   0.001244717,
   0.001679568,
   0.001985764,
   0.001850704,
   0.002589014,
   0.002122474,
   0.001716367};
   Double_t Graph0_fex1048[12] = {
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
   Double_t Graph0_fey1048[12] = {
   -1.87394e-05,
   2.675998e-05,
   3.122239e-05,
   3.545822e-05,
   4.940089e-05,
   9.267897e-05,
   0.0001336701,
   0.0001857068,
   0.0001978676,
   0.0003563724,
   0.0003693151,
   0.0005690558};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","",100,0,3123.031);
   Graph_Graph01048->SetMinimum(-4.872722e-05);
   Graph_Graph01048->SetMaximum(0.003100513);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01048->GetXaxis()->SetRange(1,101);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
