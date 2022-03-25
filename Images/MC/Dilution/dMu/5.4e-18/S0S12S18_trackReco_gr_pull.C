void S0S12S18_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.9782,-2.651534,3047.066,3.064608);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackReco_gr_pull_fx1017[8] = {
   880.3261,
   1123.092,
   1371.063,
   1620.182,
   1866.969,
   2115.425,
   2363.004,
   2613.718};
   Double_t S0S12S18_trackReco_gr_pull_fy1017[8] = {
   -1.386207,
   -1.460467,
   0.627433,
   2.111917,
   0.8826466,
   -0.02860068,
   -1.698844,
   0.241555};
   Double_t S0S12S18_trackReco_gr_pull_fex1017[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_trackReco_gr_pull_fey1017[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S0S12S18_trackReco_gr_pull_fx1017,S0S12S18_trackReco_gr_pull_fy1017,S0S12S18_trackReco_gr_pull_fex1017,S0S12S18_trackReco_gr_pull_fey1017);
   gre->SetName("S0S12S18_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackReco_gr_pull1017 = new TH1F("Graph_S0S12S18_trackReco_gr_pull1017","",100,706.9869,2787.057);
   Graph_S0S12S18_trackReco_gr_pull1017->SetMinimum(-2.07992);
   Graph_S0S12S18_trackReco_gr_pull1017->SetMaximum(2.492993);
   Graph_S0S12S18_trackReco_gr_pull1017->SetDirectory(0);
   Graph_S0S12S18_trackReco_gr_pull1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackReco_gr_pull1017->SetLineColor(ci);
   Graph_S0S12S18_trackReco_gr_pull1017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackReco_gr_pull1017->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_trackReco_gr_pull1017->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco_gr_pull1017->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackReco_gr_pull1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_trackReco_gr_pull1017->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco_gr_pull1017->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S0S12S18_trackReco_gr_pull1017->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_trackReco_gr_pull1017->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_trackReco_gr_pull1017->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco_gr_pull1017->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackReco_gr_pull1017->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_trackReco_gr_pull1017->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco_gr_pull1017->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco_gr_pull1017->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco_gr_pull1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackReco_gr_pull1017);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
