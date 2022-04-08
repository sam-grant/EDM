void S12S18_Ag2_vs_p_A_allDecays_WORLD_250MeV_AQ_noVertCorr_dataAccCorr_Run-1c_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:17:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6596,-1.464407e-07,3407.936,3.757118e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1130[12] = {
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
   Double_t Graph0_fy1130[12] = {
   -1.246926e-09,
   -2.899492e-08,
   -2.874115e-08,
   -1.629765e-08,
   3.491128e-09,
   8.594825e-09,
   3.13886e-08,
   4.867902e-08,
   6.962973e-08,
   1.05701e-07,
   4.964146e-08,
   1.146355e-07};
   Double_t Graph0_fex1130[12] = {
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
   Double_t Graph0_fey1130[12] = {
   6.261239e-09,
   3.038642e-09,
   3.147915e-09,
   3.502528e-09,
   4.01299e-09,
   4.796749e-09,
   6.079237e-09,
   8.281021e-09,
   1.257856e-08,
   2.201591e-08,
   4.815931e-08,
   1.740508e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1130,Graph0_fy1130,Graph0_fex1130,Graph0_fey1130);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01130 = new TH1F("Graph_Graph01130","S12S18_",100,0,3122.965);
   Graph_Graph01130->SetMinimum(-9.422547e-08);
   Graph_Graph01130->SetMaximum(3.234965e-07);
   Graph_Graph01130->SetDirectory(0);
   Graph_Graph01130->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01130->SetLineColor(ci);
   Graph_Graph01130->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01130->GetXaxis()->SetRange(1,97);
   Graph_Graph01130->GetXaxis()->CenterTitle(true);
   Graph_Graph01130->GetXaxis()->SetLabelFont(42);
   Graph_Graph01130->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01130->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01130->GetXaxis()->SetTitleFont(42);
   Graph_Graph01130->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01130->GetYaxis()->CenterTitle(true);
   Graph_Graph01130->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01130->GetYaxis()->SetLabelFont(42);
   Graph_Graph01130->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01130->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01130->GetYaxis()->SetTitleFont(42);
   Graph_Graph01130->GetZaxis()->SetLabelFont(42);
   Graph_Graph01130->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01130->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01130);
   
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
