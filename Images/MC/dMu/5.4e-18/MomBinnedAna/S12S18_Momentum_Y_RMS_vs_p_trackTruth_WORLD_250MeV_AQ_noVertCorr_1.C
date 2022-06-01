void S12S18_Momentum_Y_RMS_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9369,1.571036,3392.432,26.81108);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1184[12] = {
   107.8023,
   434.3893,
   631.5325,
   875.624,
   1124.372,
   1373.465,
   1622.528,
   1871.403,
   2119.994,
   2367.76,
   2613.31,
   2835.806};
   Double_t Graph0_fy1184[12] = {
   5.825415,
   14.36412,
   17.23263,
   19.80291,
   21.44165,
   22.31915,
   22.59913,
   22.29558,
   21.3732,
   19.7555,
   17.12243,
   13.30184};
   Double_t Graph0_fex1184[12] = {
   0.8640106,
   0.02780434,
   0.02310701,
   0.02205123,
   0.02213118,
   0.02267947,
   0.02377318,
   0.0255351,
   0.02824668,
   0.03257415,
   0.04033212,
   0.05848003};
   Double_t Graph0_fey1184[12] = {
   0.04770445,
   0.006000338,
   0.003970653,
   0.004286227,
   0.004652107,
   0.004963695,
   0.005271077,
   0.00558742,
   0.005932363,
   0.006340779,
   0.006857908,
   0.008820005};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1184,Graph0_fy1184,Graph0_fex1184,Graph0_fey1184);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01184 = new TH1F("Graph_Graph01184","S12S18_",100,0,3108.757);
   Graph_Graph01184->SetMinimum(4.095041);
   Graph_Graph01184->SetMaximum(24.28707);
   Graph_Graph01184->SetDirectory(0);
   Graph_Graph01184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01184->SetLineColor(ci);
   Graph_Graph01184->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01184->GetXaxis()->SetRange(1,97);
   Graph_Graph01184->GetXaxis()->CenterTitle(true);
   Graph_Graph01184->GetXaxis()->SetLabelFont(42);
   Graph_Graph01184->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01184->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01184->GetXaxis()->SetTitleFont(42);
   Graph_Graph01184->GetYaxis()->CenterTitle(true);
   Graph_Graph01184->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01184->GetYaxis()->SetLabelFont(42);
   Graph_Graph01184->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01184->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01184->GetYaxis()->SetTitleFont(42);
   Graph_Graph01184->GetZaxis()->SetLabelFont(42);
   Graph_Graph01184->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01184);
   
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
