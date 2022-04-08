void S12S18_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:55:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8606,-0.2333018,3379.773,0.3306093);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1169[11] = {
   451.7518,
   653.2229,
   880.2632,
   1123.071,
   1371.013,
   1619.993,
   1866.917,
   2114.638,
   2362.809,
   2614.031,
   2791.098};
   Double_t Graph0_fy1169[11] = {
   -0.002494799,
   0.1904538,
   0.1178046,
   0.1033189,
   0.1415034,
   0.1069649,
   0.1197624,
   0.06668543,
   0.08477211,
   0.1069077,
   0.1213538};
   Double_t Graph0_fex1169[11] = {
   0.1035381,
   0.08766436,
   0.06353574,
   0.06219258,
   0.06665977,
   0.07378829,
   0.08642576,
   0.1084152,
   0.1425546,
   0.1739441,
   0.2423387};
   Double_t Graph0_fey1169[11] = {
   0.1368218,
   0.04617032,
   0.02659686,
   0.02184719,
   0.02014716,
   0.01921653,
   0.01936131,
   0.020567,
   0.02225656,
   0.02205888,
   0.04948646};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1169,Graph0_fy1169,Graph0_fex1169,Graph0_fey1169);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01169 = new TH1F("Graph_Graph01169","S12S18_",100,217.6791,3025.309);
   Graph_Graph01169->SetMinimum(-0.1769107);
   Graph_Graph01169->SetMaximum(0.2742182);
   Graph_Graph01169->SetDirectory(0);
   Graph_Graph01169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01169->SetLineColor(ci);
   Graph_Graph01169->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01169->GetXaxis()->SetRange(0,100);
   Graph_Graph01169->GetXaxis()->CenterTitle(true);
   Graph_Graph01169->GetXaxis()->SetLabelFont(42);
   Graph_Graph01169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01169->GetXaxis()->SetTitleFont(42);
   Graph_Graph01169->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01169->GetYaxis()->CenterTitle(true);
   Graph_Graph01169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01169->GetYaxis()->SetLabelFont(42);
   Graph_Graph01169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01169->GetYaxis()->SetTitleFont(42);
   Graph_Graph01169->GetZaxis()->SetLabelFont(42);
   Graph_Graph01169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01169);
   
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
