void S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.363,12.83084,3405.267,24.64781);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1184[12] = {
   194.4445,
   428.4545,
   630.9718,
   875.1739,
   1123.98,
   1373.206,
   1622.299,
   1870.747,
   2119.212,
   2366.758,
   2612.558,
   2825.495};
   Double_t Graph0_fy1184[12] = {
   17.01994,
   14.80609,
   17.41597,
   19.88888,
   21.49374,
   22.36349,
   22.67299,
   22.51309,
   21.85082,
   20.58958,
   18.4648,
   15.69691};
   Double_t Graph0_fex1184[12] = {
   0.1644884,
   0.02888287,
   0.02243204,
   0.0215649,
   0.02191618,
   0.02263395,
   0.02384128,
   0.02587955,
   0.02915093,
   0.0343403,
   0.04346513,
   0.05528534};
   Double_t Graph0_fey1184[12] = {
   0.04762504,
   0.00575192,
   0.003894752,
   0.004217394,
   0.004626616,
   0.004975341,
   0.005322297,
   0.005740202,
   0.006284919,
   0.006997047,
   0.008002692,
   0.01172454};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1184,Graph0_fy1184,Graph0_fex1184,Graph0_fey1184);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01184 = new TH1F("Graph_Graph01184","S12S18_",100,0,3088.677);
   Graph_Graph01184->SetMinimum(14.01254);
   Graph_Graph01184->SetMaximum(23.46611);
   Graph_Graph01184->SetDirectory(0);
   Graph_Graph01184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01184->SetLineColor(ci);
   Graph_Graph01184->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01184->GetXaxis()->SetRange(1,98);
   Graph_Graph01184->GetXaxis()->CenterTitle(true);
   Graph_Graph01184->GetXaxis()->SetLabelFont(42);
   Graph_Graph01184->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01184->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01184->GetXaxis()->SetTitleFont(42);
   Graph_Graph01184->GetYaxis()->CenterTitle(true);
   Graph_Graph01184->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01184->GetYaxis()->SetLabelFont(42);
   Graph_Graph01184->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01184->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01184->GetYaxis()->SetTitleFont(42);
   Graph_Graph01184->GetZaxis()->SetLabelFont(42);
   Graph_Graph01184->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01184);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
