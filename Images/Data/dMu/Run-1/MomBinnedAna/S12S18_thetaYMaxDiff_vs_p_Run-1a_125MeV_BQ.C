void S12S18_thetaYMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.2453,5.62105,3029.52,243.3277);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1180[22] = {
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
   Double_t Graph0_fy1180[22] = {
   154.6599,
   181.9095,
   177.1224,
   179.7,
   183.0142,
   181.5412,
   169.7576,
   164.6023,
   161.6564,
   165.3388,
   167.5482,
   113.4172,
   149.1363,
   101.6336,
   85.7994,
   81.38055,
   78.06641,
   67.75575,
   55.23567,
   65.91456,
   58.18157,
   19.88484};
   Double_t Graph0_fex1180[22] = {
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
   Double_t Graph0_fey1180[22] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1180,Graph0_fy1180,Graph0_fex1180,Graph0_fey1180);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01180 = new TH1F("Graph_Graph01180","S12S18",100,114.3636,3139.169);
   Graph_Graph01180->SetMinimum(29.39172);
   Graph_Graph01180->SetMaximum(219.557);
   Graph_Graph01180->SetDirectory(0);
   Graph_Graph01180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01180->SetLineColor(ci);
   Graph_Graph01180->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01180->GetXaxis()->SetRange(22,88);
   Graph_Graph01180->GetXaxis()->CenterTitle(true);
   Graph_Graph01180->GetXaxis()->SetLabelFont(42);
   Graph_Graph01180->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01180->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01180->GetXaxis()->SetTitleFont(42);
   Graph_Graph01180->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01180->GetYaxis()->CenterTitle(true);
   Graph_Graph01180->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01180->GetYaxis()->SetLabelFont(42);
   Graph_Graph01180->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01180->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01180->GetYaxis()->SetTitleFont(42);
   Graph_Graph01180->GetZaxis()->SetLabelFont(42);
   Graph_Graph01180->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01180);
   
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
