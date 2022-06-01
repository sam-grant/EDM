void S0_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5522,-1.694155,3406.97,0.4188807);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[12] = {
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
   Double_t Graph0_fy1061[12] = {
   -0.7766999,
   0.01286096,
   -0.08497131,
   -0.003074849,
   -0.02371841,
   0.002638977,
   -0.02188608,
   -0.03322249,
   -0.03145093,
   -0.03030109,
   -0.03147186,
   0.002973155};
   Double_t Graph0_fex1061[12] = {
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
   Double_t Graph0_fey1061[12] = {
   0.5652822,
   0.05384718,
   0.02559067,
   0.02001622,
   0.01715896,
   0.01517821,
   0.01385873,
   0.01310422,
   0.01285604,
   0.01318216,
   0.0145048,
   0.022177};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S0_",100,0,3090.222);
   Graph_Graph01061->SetMinimum(-1.482851);
   Graph_Graph01061->SetMaximum(0.2075771);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(1,98);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
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
