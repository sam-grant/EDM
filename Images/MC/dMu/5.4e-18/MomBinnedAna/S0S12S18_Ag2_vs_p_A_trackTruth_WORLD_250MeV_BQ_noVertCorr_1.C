void S0S12S18_Ag2_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 13 12:27:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-377.6585,-23.74733,3398.926,24.83313);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1216[12] = {
   197.1837,
   451.9673,
   653.3489,
   880.33,
   1123.071,
   1371.146,
   1620.133,
   1867.045,
   2115.331,
   2363.045,
   2613.562,
   2792.136};
   Double_t Graph0_fy1216[12] = {
   0.5428975,
   -1.360306e-06,
   2.508837e-08,
   5.46967e-09,
   1.573192e-09,
   -2.872637e-09,
   -2.36108e-08,
   -2.816094e-08,
   -4.172951e-08,
   -1.526688e-07,
   -3.928076e-07,
   -8.781723e-06};
   Double_t Graph0_fex1216[12] = {
   0,
   0.06119317,
   0.05168435,
   0.03738165,
   0.03651084,
   0.03897018,
   0.04308696,
   0.05035664,
   0.06256782,
   0.08122338,
   0.09940193,
   0.1408526};
   Double_t Graph0_fey1216[12] = {
   16.19349,
   2.592643e-07,
   1.759569e-08,
   5.904454e-09,
   5.372086e-09,
   6.523751e-09,
   8.998389e-09,
   1.480215e-08,
   3.000335e-08,
   7.14363e-08,
   1.582246e-07,
   3.703321e-06};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1216,Graph0_fy1216,Graph0_fex1216,Graph0_fey1216);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01216 = new TH1F("Graph_Graph01216","S0S12S18_",100,0,3051.786);
   Graph_Graph01216->SetMinimum(-18.88929);
   Graph_Graph01216->SetMaximum(19.97508);
   Graph_Graph01216->SetDirectory(0);
   Graph_Graph01216->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01216->SetLineColor(ci);
   Graph_Graph01216->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01216->GetXaxis()->SetRange(1,99);
   Graph_Graph01216->GetXaxis()->CenterTitle(true);
   Graph_Graph01216->GetXaxis()->SetLabelFont(42);
   Graph_Graph01216->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01216->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01216->GetXaxis()->SetTitleFont(42);
   Graph_Graph01216->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01216->GetYaxis()->CenterTitle(true);
   Graph_Graph01216->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01216->GetYaxis()->SetLabelFont(42);
   Graph_Graph01216->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01216->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01216->GetYaxis()->SetTitleFont(42);
   Graph_Graph01216->GetZaxis()->SetLabelFont(42);
   Graph_Graph01216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01216->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01216);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
