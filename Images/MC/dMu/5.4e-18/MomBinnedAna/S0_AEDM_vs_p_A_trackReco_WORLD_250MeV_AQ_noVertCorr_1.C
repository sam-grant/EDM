void S0_AEDM_vs_p_A_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5522,-0.0001561125,3406.97,3.198274e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[12] = {
   195.823,
   429.6527,
   630.8,
   875.2732,
   1123.898,
   1373.276,
   1622.384,
   1870.824,
   2119.362,
   2366.93,
   2612.759,
   2826.954};
   Double_t Graph0_fy1063[12] = {
   -8.656273e-05,
   3.168082e-08,
   6.052604e-08,
   6.86663e-08,
   6.467119e-08,
   1.096624e-07,
   1.212251e-07,
   1.684267e-07,
   2.308143e-07,
   2.004487e-07,
   3.743204e-07,
   3.306873e-07};
   Double_t Graph0_fex1063[12] = {
   0.3433006,
   0.05845302,
   0.04584003,
   0.04397189,
   0.04462686,
   0.04604067,
   0.0485406,
   0.05262217,
   0.05904232,
   0.06922493,
   0.0867387,
   0.1101555};
   Double_t Graph0_fey1063[12] = {
   3.820058e-05,
   5.900187e-08,
   1.095927e-08,
   9.313981e-09,
   9.698547e-09,
   1.065268e-08,
   1.243854e-08,
   1.571942e-08,
   2.18725e-08,
   3.426708e-08,
   6.607547e-08,
   3.02842e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S0_",100,0,3090.222);
   Graph_Graph01063->SetMinimum(-0.000137303);
   Graph_Graph01063->SetMaximum(1.317321e-05);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(1,98);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
