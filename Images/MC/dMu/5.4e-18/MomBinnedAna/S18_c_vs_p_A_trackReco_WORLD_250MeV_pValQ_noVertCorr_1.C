void S18_c_vs_p_A_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4819,-0.0001305549,3406.337,2.603766e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1140[12] = {
   187.4361,
   430.9137,
   629.988,
   873.9891,
   1123.018,
   1372.429,
   1621.758,
   1870.278,
   2119.025,
   2366.724,
   2612.496,
   2825.666};
   Double_t Graph0_fy1140[12] = {
   -7.478165e-05,
   -1.592997e-06,
   -1.897439e-07,
   -7.031056e-08,
   -6.871507e-08,
   -6.632426e-08,
   -7.936054e-08,
   -1.084661e-07,
   -1.419224e-07,
   -1.718674e-07,
   -4.402553e-07,
   -1.083311e-06};
   Double_t Graph0_fex1140[12] = {
   0.4589345,
   0.04634719,
   0.03743593,
   0.03708336,
   0.03861978,
   0.04072494,
   0.04355441,
   0.04786604,
   0.05427081,
   0.06398772,
   0.08100211,
   0.1028567};
   Double_t Graph0_fey1140[12] = {
   2.967445e-05,
   2.288903e-08,
   4.322659e-09,
   3.986928e-09,
   4.452464e-09,
   5.233547e-09,
   6.550688e-09,
   9.090473e-09,
   1.435244e-08,
   2.64437e-08,
   6.217601e-08,
   3.495908e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1140,Graph0_fy1140,Graph0_fex1140,Graph0_fey1140);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01140 = new TH1F("Graph_Graph01140","S18_",100,0,3089.648);
   Graph_Graph01140->SetMinimum(-0.0001148956);
   Graph_Graph01140->SetMaximum(1.037841e-05);
   Graph_Graph01140->SetDirectory(0);
   Graph_Graph01140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01140->SetLineColor(ci);
   Graph_Graph01140->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01140->GetXaxis()->SetRange(1,98);
   Graph_Graph01140->GetXaxis()->CenterTitle(true);
   Graph_Graph01140->GetXaxis()->SetLabelFont(42);
   Graph_Graph01140->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01140->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01140->GetXaxis()->SetTitleFont(42);
   Graph_Graph01140->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01140->GetYaxis()->CenterTitle(true);
   Graph_Graph01140->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01140->GetYaxis()->SetLabelFont(42);
   Graph_Graph01140->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01140->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01140->GetYaxis()->SetTitleFont(42);
   Graph_Graph01140->GetZaxis()->SetLabelFont(42);
   Graph_Graph01140->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01140->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01140);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
