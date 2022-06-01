void S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.363,-5.510764e-07,3405.267,4.969574e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1187[12] = {
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
   Double_t Graph0_fy1187[12] = {
   4.016017e-06,
   6.824756e-09,
   1.288205e-09,
   1.098545e-09,
   1.147959e-09,
   1.264991e-09,
   1.475365e-09,
   1.868639e-09,
   2.62506e-09,
   4.194652e-09,
   8.314373e-09,
   4.025152e-08};
   Double_t Graph0_fex1187[12] = {
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
   
   TH1F *Graph_Graph01187 = new TH1F("Graph_Graph01187","S12S18_",100,0,3088.677);
   Graph_Graph01187->SetMinimum(9.886906e-10);
   Graph_Graph01187->SetMaximum(4.417509e-06);
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
