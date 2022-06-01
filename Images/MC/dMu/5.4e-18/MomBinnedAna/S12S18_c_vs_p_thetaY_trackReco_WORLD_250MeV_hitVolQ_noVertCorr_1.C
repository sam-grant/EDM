void S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3528,-3.105445,3405.175,2.818616);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1176[12] = {
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
   Double_t Graph0_fy1176[12] = {
   1.613679,
   -2.097203,
   -0.775884,
   -0.3790803,
   -0.2373348,
   -0.1780929,
   -0.1648626,
   -0.1419657,
   -0.1445034,
   -0.1376708,
   -0.08873551,
   -0.004956901};
   Double_t Graph0_fex1176[12] = {
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
   Double_t Graph0_fey1176[12] = {
   0.2175927,
   0.02089844,
   0.01038446,
   0.008316162,
   0.007330004,
   0.006638184,
   0.006180488,
   0.006002437,
   0.006108259,
   0.006614591,
   0.006905453,
   0.009183368};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1176,Graph0_fy1176,Graph0_fex1176,Graph0_fey1176);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01176 = new TH1F("Graph_Graph01176","S12S18_",100,0,3088.594);
   Graph_Graph01176->SetMinimum(-2.513039);
   Graph_Graph01176->SetMaximum(2.22621);
   Graph_Graph01176->SetDirectory(0);
   Graph_Graph01176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01176->SetLineColor(ci);
   Graph_Graph01176->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01176->GetXaxis()->SetRange(1,98);
   Graph_Graph01176->GetXaxis()->CenterTitle(true);
   Graph_Graph01176->GetXaxis()->SetLabelFont(42);
   Graph_Graph01176->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01176->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01176->GetXaxis()->SetTitleFont(42);
   Graph_Graph01176->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01176->GetYaxis()->CenterTitle(true);
   Graph_Graph01176->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01176->GetYaxis()->SetLabelFont(42);
   Graph_Graph01176->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01176->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01176->GetYaxis()->SetTitleFont(42);
   Graph_Graph01176->GetZaxis()->SetLabelFont(42);
   Graph_Graph01176->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01176);
   
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
