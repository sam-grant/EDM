void S18_Ag2_vs_p_A_allDecays_WORLD_250MeV_AQ_noVertCorr_dataAccCorr_Run-1b_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:15:33 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6596,-2.042847e-07,3407.936,3.178531e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1091[12] = {
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
   Double_t Graph0_fy1091[12] = {
   -1.246926e-09,
   -2.789769e-08,
   -2.295021e-08,
   -1.367437e-08,
   5.400841e-09,
   8.594825e-09,
   3.13886e-08,
   3.835074e-08,
   3.366322e-08,
   7.80791e-08,
   4.695461e-08,
   5.67842e-08};
   Double_t Graph0_fex1091[12] = {
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
   Double_t Graph0_fey1091[12] = {
   6.261239e-09,
   3.031409e-09,
   3.143685e-09,
   3.498389e-09,
   4.012306e-09,
   4.796749e-09,
   6.079237e-09,
   8.28304e-09,
   1.258205e-08,
   2.201778e-08,
   4.815962e-08,
   1.740459e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1091,Graph0_fy1091,Graph0_fex1091,Graph0_fey1091);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01091 = new TH1F("Graph_Graph01091","S18_",100,0,3122.965);
   Graph_Graph01091->SetMinimum(-1.520709e-07);
   Graph_Graph01091->SetMaximum(2.656393e-07);
   Graph_Graph01091->SetDirectory(0);
   Graph_Graph01091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01091->SetLineColor(ci);
   Graph_Graph01091->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01091->GetXaxis()->SetRange(1,97);
   Graph_Graph01091->GetXaxis()->CenterTitle(true);
   Graph_Graph01091->GetXaxis()->SetLabelFont(42);
   Graph_Graph01091->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01091->GetXaxis()->SetTitleFont(42);
   Graph_Graph01091->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01091->GetYaxis()->CenterTitle(true);
   Graph_Graph01091->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01091->GetYaxis()->SetLabelFont(42);
   Graph_Graph01091->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01091->GetYaxis()->SetTitleFont(42);
   Graph_Graph01091->GetZaxis()->SetLabelFont(42);
   Graph_Graph01091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01091);
   
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
