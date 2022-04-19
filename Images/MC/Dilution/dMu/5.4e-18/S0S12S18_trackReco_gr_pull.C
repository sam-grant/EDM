void S0S12S18_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.9742,-2.133993,3047.062,2.369121);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackReco_gr_pull_fx1017[8] = {
   880.3222,
   1123.094,
   1371.099,
   1620.134,
   1866.992,
   2115.379,
   2362.982,
   2613.714};
   Double_t S0S12S18_trackReco_gr_pull_fy1017[8] = {
   -1.383474,
   -1.093077,
   0.8578427,
   1.618602,
   0.7583536,
   -0.4953934,
   -1.061713,
   0.1868827};
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
   
   TH1F *Graph_S0S12S18_trackReco_gr_pull1017 = new TH1F("Graph_S0S12S18_trackReco_gr_pull1017","",100,706.983,2787.053);
   Graph_S0S12S18_trackReco_gr_pull1017->SetMinimum(-1.683681);
   Graph_S0S12S18_trackReco_gr_pull1017->SetMaximum(1.91881);
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
