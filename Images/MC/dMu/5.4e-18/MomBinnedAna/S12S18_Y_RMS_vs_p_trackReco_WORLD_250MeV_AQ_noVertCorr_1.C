void S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.363,10.52896,3405.267,30.62797);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1183[12] = {
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
   Double_t Graph0_fy1183[12] = {
   27.18815,
   15.14168,
   14.08002,
   13.93325,
   13.88179,
   13.92413,
   13.99188,
   14.15203,
   14.38544,
   14.78059,
   15.49253,
   16.81429};
   Double_t Graph0_fex1183[12] = {
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
   Double_t Graph0_fey1183[12] = {
   0.08998752,
   0.005889171,
   0.003150132,
   0.002955383,
   0.002987698,
   0.003095972,
   0.003281643,
   0.003605289,
   0.004136644,
   0.005027449,
   0.006736387,
   0.01267574};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1183,Graph0_fy1183,Graph0_fex1183,Graph0_fey1183);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01183 = new TH1F("Graph_Graph01183","S12S18_",100,0,3088.677);
   Graph_Graph01183->SetMinimum(12.53886);
   Graph_Graph01183->SetMaximum(28.61807);
   Graph_Graph01183->SetDirectory(0);
   Graph_Graph01183->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01183->SetLineColor(ci);
   Graph_Graph01183->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01183->GetXaxis()->SetRange(1,98);
   Graph_Graph01183->GetXaxis()->CenterTitle(true);
   Graph_Graph01183->GetXaxis()->SetLabelFont(42);
   Graph_Graph01183->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01183->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01183->GetXaxis()->SetTitleFont(42);
   Graph_Graph01183->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01183->GetYaxis()->CenterTitle(true);
   Graph_Graph01183->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01183->GetYaxis()->SetLabelFont(42);
   Graph_Graph01183->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01183->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01183->GetYaxis()->SetTitleFont(42);
   Graph_Graph01183->GetZaxis()->SetLabelFont(42);
   Graph_Graph01183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01183);
   
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
