void S12S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3528,-3.958283,3405.175,49.80437);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1182[12] = {
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
   Double_t Graph0_fy1182[12] = {
   40.68994,
   33.93664,
   28.12043,
   23.16092,
   19.5225,
   16.62014,
   14.21333,
   12.16717,
   10.35182,
   8.662314,
   6.793559,
   5.007636};
   Double_t Graph0_fex1182[12] = {
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
   Double_t Graph0_fey1182[12] = {
   0.1539872,
   0.01475368,
   0.007331921,
   0.00587602,
   0.005182453,
   0.004691882,
   0.004357533,
   0.004205224,
   0.004222178,
   0.004457066,
   0.004438161,
   0.005476841};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1182,Graph0_fy1182,Graph0_fex1182,Graph0_fey1182);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01182 = new TH1F("Graph_Graph01182","S12S18_",100,0,3088.594);
   Graph_Graph01182->SetMinimum(1.417982);
   Graph_Graph01182->SetMaximum(44.4281);
   Graph_Graph01182->SetDirectory(0);
   Graph_Graph01182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01182->SetLineColor(ci);
   Graph_Graph01182->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01182->GetXaxis()->SetRange(1,98);
   Graph_Graph01182->GetXaxis()->CenterTitle(true);
   Graph_Graph01182->GetXaxis()->SetLabelFont(42);
   Graph_Graph01182->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01182->GetXaxis()->SetTitleFont(42);
   Graph_Graph01182->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01182->GetYaxis()->CenterTitle(true);
   Graph_Graph01182->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01182->GetYaxis()->SetLabelFont(42);
   Graph_Graph01182->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01182->GetYaxis()->SetTitleFont(42);
   Graph_Graph01182->GetZaxis()->SetLabelFont(42);
   Graph_Graph01182->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01182);
   
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
