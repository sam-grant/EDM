void S12S18_AEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:55:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8606,-9.728993e-06,3379.773,4.166441e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1172[11] = {
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
   Double_t Graph0_fy1172[11] = {
   4.808746e-08,
   1.988629e-07,
   1.017475e-07,
   1.102966e-07,
   1.665107e-07,
   2.162829e-07,
   3.812126e-07,
   4.441448e-07,
   6.498994e-07,
   2.17579e-06,
   2.036945e-05};
   Double_t Graph0_fex1172[11] = {
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
   Double_t Graph0_fey1172[11] = {
   1.211514e-06,
   8.37787e-08,
   2.865258e-08,
   2.630108e-08,
   3.248328e-08,
   4.419535e-08,
   7.046763e-08,
   1.377164e-07,
   3.004741e-07,
   5.72277e-07,
   1.272939e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1172,Graph0_fy1172,Graph0_fex1172,Graph0_fey1172);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01172 = new TH1F("Graph_Graph01172","S12S18_",100,217.6791,3025.309);
   Graph_Graph01172->SetMinimum(-4.589653e-06);
   Graph_Graph01172->SetMaximum(3.652507e-05);
   Graph_Graph01172->SetDirectory(0);
   Graph_Graph01172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01172->SetLineColor(ci);
   Graph_Graph01172->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01172->GetXaxis()->SetRange(0,100);
   Graph_Graph01172->GetXaxis()->CenterTitle(true);
   Graph_Graph01172->GetXaxis()->SetLabelFont(42);
   Graph_Graph01172->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01172->GetXaxis()->SetTitleFont(42);
   Graph_Graph01172->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01172->GetYaxis()->CenterTitle(true);
   Graph_Graph01172->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01172->GetYaxis()->SetLabelFont(42);
   Graph_Graph01172->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01172->GetYaxis()->SetTitleFont(42);
   Graph_Graph01172->GetZaxis()->SetLabelFont(42);
   Graph_Graph01172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01172);
   
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
