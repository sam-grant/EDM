void S18_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.7303,-2.495573,3045.18,2.421074);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_trackReco_gr_pull_fx1061[8] = {
   880.6386,
   1123.037,
   1370.835,
   1619.675,
   1866.351,
   2115.144,
   2363.223,
   2612.271};
   Double_t S18_trackReco_gr_pull_fy1061[8] = {
   -0.8488224,
   0.4692145,
   -0.1407345,
   1.240581,
   0.6966772,
   -1.667529,
   -1.676132,
   1.601633};
   Double_t S18_trackReco_gr_pull_fex1061[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_trackReco_gr_pull_fey1061[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S18_trackReco_gr_pull_fx1061,S18_trackReco_gr_pull_fy1061,S18_trackReco_gr_pull_fex1061,S18_trackReco_gr_pull_fey1061);
   gre->SetName("S18_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_trackReco_gr_pull1061 = new TH1F("Graph_S18_trackReco_gr_pull1061","",100,707.4753,2785.435);
   Graph_S18_trackReco_gr_pull1061->SetMinimum(-2.003908);
   Graph_S18_trackReco_gr_pull1061->SetMaximum(1.929409);
   Graph_S18_trackReco_gr_pull1061->SetDirectory(0);
   Graph_S18_trackReco_gr_pull1061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_trackReco_gr_pull1061->SetLineColor(ci);
   Graph_S18_trackReco_gr_pull1061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_trackReco_gr_pull1061->GetXaxis()->CenterTitle(true);
   Graph_S18_trackReco_gr_pull1061->GetXaxis()->SetLabelFont(42);
   Graph_S18_trackReco_gr_pull1061->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_trackReco_gr_pull1061->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_trackReco_gr_pull1061->GetXaxis()->SetTitleFont(42);
   Graph_S18_trackReco_gr_pull1061->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S18_trackReco_gr_pull1061->GetYaxis()->CenterTitle(true);
   Graph_S18_trackReco_gr_pull1061->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_trackReco_gr_pull1061->GetYaxis()->SetLabelFont(42);
   Graph_S18_trackReco_gr_pull1061->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_trackReco_gr_pull1061->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_trackReco_gr_pull1061->GetYaxis()->SetTitleFont(42);
   Graph_S18_trackReco_gr_pull1061->GetZaxis()->SetLabelFont(42);
   Graph_S18_trackReco_gr_pull1061->GetZaxis()->SetTitleOffset(1);
   Graph_S18_trackReco_gr_pull1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_trackReco_gr_pull1061);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
