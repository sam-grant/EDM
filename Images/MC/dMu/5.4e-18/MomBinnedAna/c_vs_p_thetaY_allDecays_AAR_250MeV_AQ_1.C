void c_vs_p_thetaY_allDecays_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 12:55:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-409.8874,-0.1890834,3376.692,0.06906268);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[12] = {
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
   Double_t Graph0_fy1011[12] = {
   -0.09519692,
   -0.03808022,
   0.000543378,
   -0.002501766,
   -0.01630596,
   0.01660968,
   -0.002913423,
   -0.004984423,
   0.003786525,
   0.008476749,
   0.005088215,
   -0.009176137};
   Double_t Graph0_fex1011[12] = {
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
   Double_t Graph0_fey1011[12] = {
   0.05086212,
   0.02039006,
   0.01504261,
   0.01230197,
   0.01058374,
   0.009428653,
   0.008608346,
   0.00804271,
   0.007690564,
   0.007556209,
   0.007730449,
   0.008643452};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","",100,0,3122.952);
   Graph_Graph01011->SetMinimum(-0.1632688);
   Graph_Graph01011->SetMaximum(0.04324807);
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
