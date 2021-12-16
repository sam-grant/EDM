void S12_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.7139,-1.935154,3047.74,1.990942);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_gr_pull_fx1057[8] = {
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236};
   Double_t S12_trackReco_gr_pull_fy1057[8] = {
   0.3378927,
   0.2525448,
   -1.280804,
   -0.05472823,
   1.336593,
   0.182363,
   -1.169497,
   0.3818092};
   Double_t S12_trackReco_gr_pull_fex1057[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_trackReco_gr_pull_fey1057[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S12_trackReco_gr_pull_fx1057,S12_trackReco_gr_pull_fy1057,S12_trackReco_gr_pull_fex1057,S12_trackReco_gr_pull_fey1057);
   gre->SetName("S12_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackReco_gr_pull1057 = new TH1F("Graph_S12_trackReco_gr_pull1057","",100,706.8166,2787.638);
   Graph_S12_trackReco_gr_pull1057->SetMinimum(-1.542544);
   Graph_S12_trackReco_gr_pull1057->SetMaximum(1.598332);
   Graph_S12_trackReco_gr_pull1057->SetDirectory(0);
   Graph_S12_trackReco_gr_pull1057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_trackReco_gr_pull1057->SetLineColor(ci);
   Graph_S12_trackReco_gr_pull1057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_trackReco_gr_pull1057->GetXaxis()->CenterTitle(true);
   Graph_S12_trackReco_gr_pull1057->GetXaxis()->SetLabelFont(42);
   Graph_S12_trackReco_gr_pull1057->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco_gr_pull1057->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_trackReco_gr_pull1057->GetXaxis()->SetTitleFont(42);
   Graph_S12_trackReco_gr_pull1057->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S12_trackReco_gr_pull1057->GetYaxis()->CenterTitle(true);
   Graph_S12_trackReco_gr_pull1057->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_trackReco_gr_pull1057->GetYaxis()->SetLabelFont(42);
   Graph_S12_trackReco_gr_pull1057->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco_gr_pull1057->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_trackReco_gr_pull1057->GetYaxis()->SetTitleFont(42);
   Graph_S12_trackReco_gr_pull1057->GetZaxis()->SetLabelFont(42);
   Graph_S12_trackReco_gr_pull1057->GetZaxis()->SetTitleOffset(1);
   Graph_S12_trackReco_gr_pull1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_trackReco_gr_pull1057);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
