void S12S18_Ag2_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_noVertCorr_dataAccCorr_Run-1d_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:19:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6596,-0.09577474,3407.936,0.05543784);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1127[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t Graph0_fy1127[12] = {
   -0.01008752,
   -0.04919021,
   -0.03283467,
   -0.007891788,
   -0.004483991,
   -0.002237351,
   0.0007323604,
   0.01130072,
   0.001368777,
   -0.001103108,
   -0.01373737,
   -0.003446896};
   Double_t Graph0_fex1127[12] = {
   0.02908963,
   0.02973433,
   0.03055162,
   0.03167911,
   0.03320863,
   0.0352714,
   0.03796636,
   0.04164352,
   0.04682622,
   0.05470628,
   0.06824828,
   0.09707939};
   Double_t Graph0_fey1127[12] = {
   0.04032326,
   0.02138243,
   0.005424576,
   0.005423911,
   0.005586343,
   0.005711248,
   0.005458884,
   0.005194085,
   0.004869958,
   0.004689103,
   0.006149752,
   0.01036879};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1127,Graph0_fy1127,Graph0_fex1127,Graph0_fey1127);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01127 = new TH1F("Graph_Graph01127","S12S18_",100,0,3122.965);
   Graph_Graph01127->SetMinimum(-0.08065348);
   Graph_Graph01127->SetMaximum(0.04031658);
   Graph_Graph01127->SetDirectory(0);
   Graph_Graph01127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01127->SetLineColor(ci);
   Graph_Graph01127->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01127->GetXaxis()->SetRange(1,97);
   Graph_Graph01127->GetXaxis()->CenterTitle(true);
   Graph_Graph01127->GetXaxis()->SetLabelFont(42);
   Graph_Graph01127->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01127->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01127->GetXaxis()->SetTitleFont(42);
   Graph_Graph01127->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01127->GetYaxis()->CenterTitle(true);
   Graph_Graph01127->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01127->GetYaxis()->SetLabelFont(42);
   Graph_Graph01127->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01127->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01127->GetYaxis()->SetTitleFont(42);
   Graph_Graph01127->GetZaxis()->SetLabelFont(42);
   Graph_Graph01127->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01127);
   
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
