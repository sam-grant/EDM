void S0_AEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 12:13:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.4461,-2.470119e-05,3381.552,9.068318e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[11] = {
   451.6447,
   653.3486,
   879.8114,
   1123.227,
   1371.481,
   1620.746,
   1868.066,
   2116.654,
   2363.704,
   2615.694,
   2792.389};
   Double_t Graph0_fy1061[11] = {
   1.390704e-07,
   2.37708e-07,
   3.02451e-07,
   4.933524e-07,
   6.458706e-07,
   9.522384e-07,
   1.537532e-06,
   2.064941e-06,
   6.925363e-07,
   1.099702e-06,
   3.861253e-05};
   Double_t Graph0_fex1061[11] = {
   0.1707352,
   0.1455027,
   0.1059043,
   0.1035803,
   0.1102053,
   0.1218889,
   0.1397139,
   0.1687025,
   0.2119762,
   0.2651184,
   0.3376591};
   Double_t Graph0_fey1061[11] = {
   5.60953e-06,
   3.841048e-07,
   1.328022e-07,
   1.217205e-07,
   1.4761e-07,
   1.970039e-07,
   2.964836e-07,
   5.167415e-07,
   1.00801e-06,
   1.933941e-06,
   3.283992e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S0_",100,217.3487,3026.852);
   Graph_Graph01061->SetMinimum(-1.316275e-05);
   Graph_Graph01061->SetMaximum(7.914475e-05);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(0,100);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
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
