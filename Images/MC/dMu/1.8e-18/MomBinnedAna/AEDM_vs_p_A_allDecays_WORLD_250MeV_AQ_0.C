void AEDM_vs_p_A_allDecays_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:18:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-409.8919,-1.823561e-07,3376.728,5.935432e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[12] = {
   124.4185,
   373.9945,
   623.7008,
   873.2417,
   1122.797,
   1372.228,
   1621.535,
   1870.683,
   2119.321,
   2367.288,
   2613.167,
   2850.317};
   Double_t Graph0_fy1016[12] = {
   -8.799062e-10,
   -1.130652e-09,
   -3.072229e-09,
   -5.672908e-09,
   7.579161e-11,
   -2.470847e-09,
   -3.613449e-09,
   -6.04682e-09,
   2.318255e-08,
   -2.876279e-08,
   5.378557e-08,
   2.688286e-07};
   Double_t Graph0_fex1016[12] = {
   0.0208215,
   0.02129586,
   0.02188303,
   0.02268929,
   0.02377664,
   0.02523901,
   0.02719507,
   0.02982735,
   0.03354456,
   0.03919428,
   0.04883968,
   0.06956392};
   Double_t Graph0_fey1016[12] = {
   3.145079e-09,
   3.269142e-09,
   3.513224e-09,
   3.87156e-09,
   4.443122e-09,
   5.283314e-09,
   6.700763e-09,
   9.143676e-09,
   1.386409e-08,
   2.427678e-08,
   5.328031e-08,
   1.953981e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{#gminus2} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","",100,0,3122.986);
   Graph_Graph01016->SetMinimum(-1.047662e-07);
   Graph_Graph01016->SetMaximum(5.159533e-07);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01016->GetXaxis()->SetRange(0,96);
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("A_{#gminus2} / 250 MeV");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
