void S18_Ag2_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.8896,-0.8864299,3392.006,2.237132);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1139[12] = {
   108.5446,
   434.6476,
   631.5638,
   875.6019,
   1124.352,
   1373.451,
   1622.525,
   1871.337,
   2119.952,
   2367.654,
   2613.27,
   2835.462};
   Double_t Graph0_fy1139[12] = {
   0.6753512,
   -0.04378339,
   -0.003961955,
   -0.04252539,
   -0.0108841,
   -0.009463656,
   -0.01023392,
   0.003914386,
   -0.009838396,
   0.008005763,
   0.007933186,
   -0.00228978};
   Double_t Graph0_fex1139[12] = {
   1.225218,
   0.03944693,
   0.03276533,
   0.03126549,
   0.0314118,
   0.03219687,
   0.03374371,
   0.03626405,
   0.04010891,
   0.04633167,
   0.05744501,
   0.08325579};
   Double_t Graph0_fey1139[12] = {
   1.041187,
   0.03955637,
   0.01798169,
   0.01396006,
   0.0117904,
   0.01029413,
   0.009280555,
   0.008578663,
   0.008160936,
   0.008017274,
   0.008231678,
   0.0105695};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1139,Graph0_fy1139,Graph0_fex1139,Graph0_fey1139);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01139 = new TH1F("Graph_Graph01139","S18_",100,0,3108.367);
   Graph_Graph01139->SetMinimum(-0.5740736);
   Graph_Graph01139->SetMaximum(1.924776);
   Graph_Graph01139->SetDirectory(0);
   Graph_Graph01139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01139->SetLineColor(ci);
   Graph_Graph01139->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01139->GetXaxis()->SetRange(1,97);
   Graph_Graph01139->GetXaxis()->CenterTitle(true);
   Graph_Graph01139->GetXaxis()->SetLabelFont(42);
   Graph_Graph01139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01139->GetXaxis()->SetTitleFont(42);
   Graph_Graph01139->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01139->GetYaxis()->CenterTitle(true);
   Graph_Graph01139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01139->GetYaxis()->SetLabelFont(42);
   Graph_Graph01139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01139->GetYaxis()->SetTitleFont(42);
   Graph_Graph01139->GetZaxis()->SetLabelFont(42);
   Graph_Graph01139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01139);
   
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
