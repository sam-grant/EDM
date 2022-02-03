void S12_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:38:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.8725,-2.840348,3047.641,2.466799);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_gr_pull_fx1005[8] = {
   880.334,
   1123.155,
   1371.138,
   1620.288,
   1866.777,
   2114.885,
   2362.581,
   2614.18};
   Double_t S12_trackReco_gr_pull_fy1005[8] = {
   -0.9543715,
   -0.1961982,
   -0.9396078,
   0.646694,
   1.582274,
   1.509695,
   -1.955823,
   -0.2080617};
   Double_t S12_trackReco_gr_pull_fex1005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_trackReco_gr_pull_fey1005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S12_trackReco_gr_pull_fx1005,S12_trackReco_gr_pull_fy1005,S12_trackReco_gr_pull_fex1005,S12_trackReco_gr_pull_fey1005);
   gre->SetName("S12_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackReco_gr_pull1005 = new TH1F("Graph_S12_trackReco_gr_pull1005","",100,706.9494,2787.564);
   Graph_S12_trackReco_gr_pull1005->SetMinimum(-2.309633);
   Graph_S12_trackReco_gr_pull1005->SetMaximum(1.936084);
   Graph_S12_trackReco_gr_pull1005->SetDirectory(0);
   Graph_S12_trackReco_gr_pull1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_trackReco_gr_pull1005->SetLineColor(ci);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->CenterTitle(true);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetLabelFont(42);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetTitleFont(42);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->CenterTitle(true);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetLabelFont(42);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetTitleFont(42);
   Graph_S12_trackReco_gr_pull1005->GetZaxis()->SetLabelFont(42);
   Graph_S12_trackReco_gr_pull1005->GetZaxis()->SetTitleOffset(1);
   Graph_S12_trackReco_gr_pull1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_trackReco_gr_pull1005);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
