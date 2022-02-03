void S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3826,-9.127573e-05,3406.967,1.848673e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[11] = {
   451.8173,
   653.2882,
   880.4177,
   1123.064,
   1371.036,
   1619.971,
   1866.583,
   2115.069,
   2362.842,
   2613.192,
   2787.647};
   Double_t Graph0_fy1173[11] = {
   1.710928e-06,
   5.050301e-08,
   -5.597712e-08,
   -2.122732e-08,
   5.528975e-08,
   5.046458e-08,
   -8.524461e-08,
   -1.352396e-07,
   2.963535e-07,
   -7.09857e-08,
   -2.890783e-05};
   Double_t Graph0_fex1173[11] = {
   0.11314,
   0.09526383,
   0.06881198,
   0.06717124,
   0.07180835,
   0.07951552,
   0.09313616,
   0.1168567,
   0.1525684,
   0.1856104,
   0.2333281};
   Double_t Graph0_fey1173[11] = {
   1.652001e-06,
   1.099576e-07,
   3.676119e-08,
   3.337557e-08,
   4.082841e-08,
   5.655857e-08,
   9.402967e-08,
   1.957441e-07,
   4.74494e-07,
   1.042205e-06,
   2.853839e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18_",100,218.0866,3021.498);
   Graph_Graph01173->SetMinimum(-8.029948e-05);
   Graph_Graph01173->SetMaximum(7.510487e-06);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01173->GetXaxis()->SetRange(0,101);
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
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
