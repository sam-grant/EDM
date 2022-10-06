#ifdef __CLING__
#pragma cling optimize(0)
#endif
void allDecays_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  5 03:04:11 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.3568,-4.267585,3513.211,3.90893);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_gr_pull_fx1001[12] = {
   124.3991,
   374.0341,
   623.7056,
   873.2706,
   1122.785,
   1372.229,
   1621.527,
   1870.634,
   2119.341,
   2367.305,
   2613.177,
   2850.267};
   Double_t allDecays_gr_pull_fy1001[12] = {
   -1.274744,
   -0.6837726,
   1.16613,
   -0.2890036,
   -0.6081172,
   -1.607472,
   2.546177,
   1.583944,
   0.6490687,
   -1.549607,
   0.4307348,
   -2.904833};
   Double_t allDecays_gr_pull_fex1001[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t allDecays_gr_pull_fey1001[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,allDecays_gr_pull_fx1001,allDecays_gr_pull_fy1001,allDecays_gr_pull_fex1001,allDecays_gr_pull_fey1001);
   gre->SetName("allDecays_gr_pull");
   gre->SetTitle(";Decay positron momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_allDecays_gr_pull1001 = new TH1F("Graph_allDecays_gr_pull1001","",100,0,3122.854);
   Graph_allDecays_gr_pull1001->SetMinimum(-3.449934);
   Graph_allDecays_gr_pull1001->SetMaximum(3.091278);
   Graph_allDecays_gr_pull1001->SetDirectory(0);
   Graph_allDecays_gr_pull1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_allDecays_gr_pull1001->SetLineColor(ci);
   Graph_allDecays_gr_pull1001->GetXaxis()->SetTitle("Decay positron momentum [MeV]");
   Graph_allDecays_gr_pull1001->GetXaxis()->CenterTitle(true);
   Graph_allDecays_gr_pull1001->GetXaxis()->SetLabelFont(42);
   Graph_allDecays_gr_pull1001->GetXaxis()->SetTitleSize(0.04);
   Graph_allDecays_gr_pull1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_allDecays_gr_pull1001->GetXaxis()->SetTitleFont(42);
   Graph_allDecays_gr_pull1001->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_allDecays_gr_pull1001->GetYaxis()->CenterTitle(true);
   Graph_allDecays_gr_pull1001->GetYaxis()->SetNdivisions(4000510);
   Graph_allDecays_gr_pull1001->GetYaxis()->SetLabelFont(42);
   Graph_allDecays_gr_pull1001->GetYaxis()->SetTitleSize(0.04);
   Graph_allDecays_gr_pull1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_allDecays_gr_pull1001->GetYaxis()->SetTitleFont(42);
   Graph_allDecays_gr_pull1001->GetZaxis()->SetLabelFont(42);
   Graph_allDecays_gr_pull1001->GetZaxis()->SetTitleOffset(1);
   Graph_allDecays_gr_pull1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_allDecays_gr_pull1001);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
