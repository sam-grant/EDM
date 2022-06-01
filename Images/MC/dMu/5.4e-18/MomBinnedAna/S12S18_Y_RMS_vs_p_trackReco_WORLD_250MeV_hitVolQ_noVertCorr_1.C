void S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3528,10.74909,3405.175,27.49117);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1183[12] = {
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
   Double_t Graph0_fy1183[12] = {
   24.59957,
   14.12673,
   13.6548,
   13.54287,
   13.55095,
   13.63633,
   13.73757,
   13.8275,
   13.86796,
   13.98929,
   14.02772,
   14.06992};
   Double_t Graph0_fex1183[12] = {
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
   Double_t Graph0_fey1183[12] = {
   0.1012491,
   0.006129313,
   0.00355947,
   0.003435827,
   0.003597491,
   0.003850048,
   0.004212458,
   0.004780158,
   0.005657708,
   0.007200494,
   0.009168416,
   0.01539323};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1183,Graph0_fy1183,Graph0_fex1183,Graph0_fey1183);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01183 = new TH1F("Graph_Graph01183","S12S18_",100,0,3088.594);
   Graph_Graph01183->SetMinimum(12.4233);
   Graph_Graph01183->SetMaximum(25.81696);
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
