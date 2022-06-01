void S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3528,-0.002746668,3405.175,0.03248851);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1190[12] = {
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
   Double_t Graph0_fy1190[12] = {
   0.01907181,
   0.003994363,
   0.004359853,
   0.006973067,
   0.007795211,
   0.01071451,
   0.01130128,
   0.01216381,
   0.01107761,
   0.01223085,
   0.01510045,
   0.01168621};
   Double_t Graph0_fex1190[12] = {
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
   Double_t Graph0_fey1190[12] = {
   0.00754417,
   0.0008685015,
   0.0005209412,
   0.0005069707,
   0.0005304531,
   0.0005642218,
   0.0006125262,
   0.0006905285,
   0.0008150314,
   0.001028458,
   0.001306567,
   0.002187645};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1190,Graph0_fy1190,Graph0_fex1190,Graph0_fey1190);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01190 = new TH1F("Graph_Graph01190","S12S18_",100,0,3088.594);
   Graph_Graph01190->SetMinimum(0.0007768495);
   Graph_Graph01190->SetMaximum(0.02896499);
   Graph_Graph01190->SetDirectory(0);
   Graph_Graph01190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01190->SetLineColor(ci);
   Graph_Graph01190->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01190->GetXaxis()->SetRange(1,98);
   Graph_Graph01190->GetXaxis()->CenterTitle(true);
   Graph_Graph01190->GetXaxis()->SetLabelFont(42);
   Graph_Graph01190->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01190->GetXaxis()->SetTitleFont(42);
   Graph_Graph01190->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01190->GetYaxis()->CenterTitle(true);
   Graph_Graph01190->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01190->GetYaxis()->SetLabelFont(42);
   Graph_Graph01190->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01190->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01190->GetYaxis()->SetTitleFont(42);
   Graph_Graph01190->GetZaxis()->SetLabelFont(42);
   Graph_Graph01190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01190->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01190);
   
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
