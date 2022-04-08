void S18_theta_Y_RMS_vs_p_allDecays_WORLD_250MeV_AQ_noVertCorr_dataAccCorr_Run-1b_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:15:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6596,-3.249174,3407.936,65.28065);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1092[12] = {
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
   Double_t Graph0_fy1092[12] = {
   53.45999,
   36.37216,
   10.37494,
   9.927413,
   9.501872,
   8.95007,
   7.879113,
   6.847176,
   5.742296,
   4.737053,
   4.371658,
   4.008279};
   Double_t Graph0_fex1092[12] = {
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
   Double_t Graph0_fey1092[12] = {
   0.02008757,
   0.01072519,
   0.003107311,
   0.003083691,
   0.003093803,
   0.00309434,
   0.002934712,
   0.002798223,
   0.002643231,
   0.002554376,
   0.002959394,
   0.004048131};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1092,Graph0_fy1092,Graph0_fex1092,Graph0_fey1092);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01092 = new TH1F("Graph_Graph01092","S18_",100,0,3122.965);
   Graph_Graph01092->SetMinimum(3.603808);
   Graph_Graph01092->SetMaximum(58.42766);
   Graph_Graph01092->SetDirectory(0);
   Graph_Graph01092->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01092->SetLineColor(ci);
   Graph_Graph01092->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01092->GetXaxis()->SetRange(1,97);
   Graph_Graph01092->GetXaxis()->CenterTitle(true);
   Graph_Graph01092->GetXaxis()->SetLabelFont(42);
   Graph_Graph01092->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01092->GetXaxis()->SetTitleFont(42);
   Graph_Graph01092->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01092->GetYaxis()->CenterTitle(true);
   Graph_Graph01092->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01092->GetYaxis()->SetLabelFont(42);
   Graph_Graph01092->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01092->GetYaxis()->SetTitleFont(42);
   Graph_Graph01092->GetZaxis()->SetLabelFont(42);
   Graph_Graph01092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01092);
   
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
