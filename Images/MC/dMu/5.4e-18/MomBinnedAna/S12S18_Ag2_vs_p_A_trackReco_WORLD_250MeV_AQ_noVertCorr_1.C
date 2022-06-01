void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.363,-2.508373e-06,3405.267,1.062217e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[12] = {
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
   Double_t Graph0_fy1181[12] = {
   4.371438e-06,
   2.052959e-08,
   4.283677e-09,
   3.085075e-10,
   -9.155975e-10,
   -1.826264e-09,
   -6.102702e-09,
   -8.672987e-09,
   -1.432815e-08,
   -1.948587e-08,
   -6.007368e-08,
   -2.512295e-07};
   Double_t Graph0_fex1181[12] = {
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
   Double_t Graph0_fey1181[12] = {
   4.06231e-06,
   6.962579e-09,
   1.315052e-09,
   1.111973e-09,
   1.156034e-09,
   1.274881e-09,
   1.517456e-09,
   2.005349e-09,
   3.050282e-09,
   5.461975e-09,
   1.248264e-08,
   6.871949e-08};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18_",100,0,3088.677);
   Graph_Graph01181->SetMinimum(-1.195319e-06);
   Graph_Graph01181->SetMaximum(9.309117e-06);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01181->GetXaxis()->SetRange(1,98);
   Graph_Graph01181->GetXaxis()->CenterTitle(true);
   Graph_Graph01181->GetXaxis()->SetLabelFont(42);
   Graph_Graph01181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01181->GetXaxis()->SetTitleFont(42);
   Graph_Graph01181->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01181->GetYaxis()->CenterTitle(true);
   Graph_Graph01181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01181->GetYaxis()->SetLabelFont(42);
   Graph_Graph01181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01181->GetYaxis()->SetTitleFont(42);
   Graph_Graph01181->GetZaxis()->SetLabelFont(42);
   Graph_Graph01181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01181);
   
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
