void S12S18_AEDM_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.2453,-2.144367,3029.52,0.330539);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1172[22] = {
   366.6594,
   456.9386,
   570.4297,
   694.8892,
   815.8357,
   938.5304,
   1062.746,
   1188.287,
   1312.696,
   1435.866,
   1561.91,
   1685.206,
   1810.551,
   1935.122,
   2060.256,
   2184.911,
   2309.21,
   2433.149,
   2559.631,
   2678.445,
   2781.382,
   2886.078};
   Double_t Graph0_fy1172[22] = {
   4.650467,
   0.07582176,
   0.07234257,
   0.05347853,
   0.06922918,
   0.06857448,
   0.05075129,
   0.02318162,
   0.05690243,
   0.01115067,
   0.0399869,
   0.02632653,
   0.01431299,
   0.003495867,
   0.04860337,
   0.02324661,
   0.00799606,
   0.03526118,
   -0.001541392,
   0.005707228,
   0.03409009,
   -4.261735};
   Double_t Graph0_fex1172[22] = {
   0.2286714,
   0.1084643,
   0.07206375,
   0.04930902,
   0.03971615,
   0.03589624,
   0.03399364,
   0.03291034,
   0.03338084,
   0.03361833,
   0.03604724,
   0.03804064,
   0.04287073,
   0.04685643,
   0.05368643,
   0.05926724,
   0.06838202,
   0.08224478,
   0.09770881,
   0.1122532,
   0.2317398,
   1.023868};
   Double_t Graph0_fey1172[22] = {
   1.691729,
   0.1575371,
   0.07674186,
   0.04626704,
   0.03205653,
   0.02633039,
   0.0231715,
   0.02088427,
   0.01963489,
   0.01863314,
   0.01860448,
   0.01801159,
   0.01868108,
   0.01878163,
   0.01968554,
   0.01994143,
   0.02088854,
   0.02247938,
   0.02363978,
   0.02555831,
   0.06309393,
   0.6406632};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1172,Graph0_fy1172,Graph0_fex1172,Graph0_fey1172);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01172 = new TH1F("Graph_Graph01172","S12S18",100,114.3636,3139.169);
   Graph_Graph01172->SetMinimum(-1.896877);
   Graph_Graph01172->SetMaximum(0.08304835);
   Graph_Graph01172->SetDirectory(0);
   Graph_Graph01172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01172->SetLineColor(ci);
   Graph_Graph01172->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01172->GetXaxis()->SetRange(22,88);
   Graph_Graph01172->GetXaxis()->CenterTitle(true);
   Graph_Graph01172->GetXaxis()->SetLabelFont(42);
   Graph_Graph01172->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01172->GetXaxis()->SetTitleFont(42);
   Graph_Graph01172->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01172->GetYaxis()->CenterTitle(true);
   Graph_Graph01172->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01172->GetYaxis()->SetLabelFont(42);
   Graph_Graph01172->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01172->GetYaxis()->SetTitleFont(42);
   Graph_Graph01172->GetZaxis()->SetLabelFont(42);
   Graph_Graph01172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01172);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
