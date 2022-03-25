void S12S18_chi2NDF_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.2453,0.240273,3029.52,1.935981);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1174[22] = {
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
   Double_t Graph0_fy1174[22] = {
   1.309284,
   0.857933,
   0.8661634,
   0.4978355,
   1.07336,
   1.292521,
   0.7637262,
   0.7184168,
   1.285751,
   1.421434,
   1.472787,
   0.8660295,
   1.196167,
   1.19643,
   0.7766921,
   0.8073388,
   0.64413,
   1.168862,
   0.8586468,
   1.142746,
   1.329151,
   1.546051};
   Double_t Graph0_fex1174[22] = {
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
   Double_t Graph0_fey1174[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1174,Graph0_fy1174,Graph0_fex1174,Graph0_fey1174);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01174 = new TH1F("Graph_Graph01174","S12S18",100,114.3636,3139.169);
   Graph_Graph01174->SetMinimum(0.4098438);
   Graph_Graph01174->SetMaximum(1.76641);
   Graph_Graph01174->SetDirectory(0);
   Graph_Graph01174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01174->SetLineColor(ci);
   Graph_Graph01174->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01174->GetXaxis()->SetRange(22,88);
   Graph_Graph01174->GetXaxis()->CenterTitle(true);
   Graph_Graph01174->GetXaxis()->SetLabelFont(42);
   Graph_Graph01174->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01174->GetXaxis()->SetTitleFont(42);
   Graph_Graph01174->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_Graph01174->GetYaxis()->CenterTitle(true);
   Graph_Graph01174->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01174->GetYaxis()->SetLabelFont(42);
   Graph_Graph01174->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01174->GetYaxis()->SetTitleFont(42);
   Graph_Graph01174->GetZaxis()->SetLabelFont(42);
   Graph_Graph01174->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01174);
   
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
