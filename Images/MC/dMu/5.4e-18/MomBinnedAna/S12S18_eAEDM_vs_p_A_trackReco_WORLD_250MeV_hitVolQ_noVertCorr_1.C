void S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3528,-8.592132e-07,3405.175,7.749875e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1187[12] = {
   184.1649,
   431.3202,
   629.5098,
   873.9769,
   1122.573,
   1372.115,
   1620.821,
   1869.113,
   2116.82,
   2364.417,
   2614.913,
   2824.458};
   Double_t Graph0_fy1187[12] = {
   6.262868e-06,
   9.413817e-09,
   2.039709e-09,
   1.884089e-09,
   2.161924e-09,
   2.602985e-09,
   3.316571e-09,
   4.706926e-09,
   7.585344e-09,
   1.476316e-08,
   2.877152e-08,
   1.273323e-07};
   Double_t Graph0_fex1187[12] = {
   0.1970694,
   0.03028048,
   0.02630282,
   0.02583387,
   0.02707349,
   0.02878414,
   0.03120768,
   0.03514953,
   0.04135757,
   0.05218349,
   0.06590072,
   0.07954507};
   Double_t Graph0_fey1187[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1187,Graph0_fy1187,Graph0_fex1187,Graph0_fey1187);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01187 = new TH1F("Graph_Graph01187","S12S18_",100,0,3088.594);
   Graph_Graph01187->SetMinimum(1.69568e-09);
   Graph_Graph01187->SetMaximum(6.888966e-06);
   Graph_Graph01187->SetDirectory(0);
   Graph_Graph01187->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01187->SetLineColor(ci);
   Graph_Graph01187->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01187->GetXaxis()->SetRange(1,98);
   Graph_Graph01187->GetXaxis()->CenterTitle(true);
   Graph_Graph01187->GetXaxis()->SetLabelFont(42);
   Graph_Graph01187->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01187->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01187->GetXaxis()->SetTitleFont(42);
   Graph_Graph01187->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01187->GetYaxis()->CenterTitle(true);
   Graph_Graph01187->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01187->GetYaxis()->SetLabelFont(42);
   Graph_Graph01187->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01187->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01187->GetYaxis()->SetTitleFont(42);
   Graph_Graph01187->GetZaxis()->SetLabelFont(42);
   Graph_Graph01187->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01187);
   
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
