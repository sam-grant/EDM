void S12S18_N_vs_p_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3528,-1019388,3405.175,9608069);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1185[12] = {
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
   Double_t Graph0_fy1185[12] = {
   48175,
   2667309,
   7364396,
   7772855,
   7097824,
   6275523,
   5320533,
   4186241,
   3005973,
   1888863,
   1171697,
   418119};
   Double_t Graph0_fex1185[12] = {
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
   Double_t Graph0_fey1185[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1185,Graph0_fy1185,Graph0_fex1185,Graph0_fey1185);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01185 = new TH1F("Graph_Graph01185","S12S18_",100,0,3088.594);
   Graph_Graph01185->SetMinimum(43357.5);
   Graph_Graph01185->SetMaximum(8545323);
   Graph_Graph01185->SetDirectory(0);
   Graph_Graph01185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01185->SetLineColor(ci);
   Graph_Graph01185->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01185->GetXaxis()->SetRange(1,98);
   Graph_Graph01185->GetXaxis()->CenterTitle(true);
   Graph_Graph01185->GetXaxis()->SetLabelFont(42);
   Graph_Graph01185->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01185->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01185->GetXaxis()->SetTitleFont(42);
   Graph_Graph01185->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01185->GetYaxis()->CenterTitle(true);
   Graph_Graph01185->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01185->GetYaxis()->SetLabelFont(42);
   Graph_Graph01185->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01185->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01185->GetYaxis()->SetTitleFont(42);
   Graph_Graph01185->GetZaxis()->SetLabelFont(42);
   Graph_Graph01185->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01185);
   
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
