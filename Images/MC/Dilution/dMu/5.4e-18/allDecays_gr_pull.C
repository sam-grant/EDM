void allDecays_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May  7 21:53:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.748,-3.657018,2740.76,1.327882);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_gr_pull_fx1001[7] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t allDecays_gr_pull_fy1001[7] = {
   0.2996927,
   0.4970655,
   0.1666063,
   -0.1436061,
   0.270894,
   -2.826201,
   0.1339038};
   Double_t allDecays_gr_pull_fex1001[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t allDecays_gr_pull_fey1001[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(7,allDecays_gr_pull_fx1001,allDecays_gr_pull_fy1001,allDecays_gr_pull_fex1001,allDecays_gr_pull_fey1001);
   gre->SetName("allDecays_gr_pull");
   gre->SetTitle(";Decay positron momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_allDecays_gr_pull1001 = new TH1F("Graph_allDecays_gr_pull1001","",100,723.8492,2516.659);
   Graph_allDecays_gr_pull1001->SetMinimum(-3.158528);
   Graph_allDecays_gr_pull1001->SetMaximum(0.8293921);
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
