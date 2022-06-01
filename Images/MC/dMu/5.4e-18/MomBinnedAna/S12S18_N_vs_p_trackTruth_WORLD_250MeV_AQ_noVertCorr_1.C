void S12S18_N_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9369,-1459865,3392.432,1.320589e+07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1185[12] = {
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
   Double_t Graph0_fy1185[12] = {
   7456,
   2865344,
   9417791,
   1.067278e+07,
   1.062152e+07,
   1.010916e+07,
   9190834,
   7961313,
   6490132,
   4853564,
   3116861,
   1137249};
   Double_t Graph0_fex1185[12] = {
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
   Double_t Graph0_fey1185[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1185,Graph0_fy1185,Graph0_fex1185,Graph0_fey1185);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01185 = new TH1F("Graph_Graph01185","S12S18_",100,0,3108.757);
   Graph_Graph01185->SetMinimum(6710.4);
   Graph_Graph01185->SetMaximum(1.173932e+07);
   Graph_Graph01185->SetDirectory(0);
   Graph_Graph01185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01185->SetLineColor(ci);
   Graph_Graph01185->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01185->GetXaxis()->SetRange(1,97);
   Graph_Graph01185->GetXaxis()->CenterTitle(true);
   Graph_Graph01185->GetXaxis()->SetLabelFont(42);
   Graph_Graph01185->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01185->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01185->GetXaxis()->SetTitleFont(42);
   Graph_Graph01185->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01185->GetYaxis()->CenterTitle(true);
   Graph_Graph01185->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01185->GetYaxis()->SetLabelFont(42);
   Graph_Graph01185->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01185->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01185->GetYaxis()->SetTitleFont(42);
   Graph_Graph01185->GetZaxis()->SetLabelFont(42);
   Graph_Graph01185->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01185);
   
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
