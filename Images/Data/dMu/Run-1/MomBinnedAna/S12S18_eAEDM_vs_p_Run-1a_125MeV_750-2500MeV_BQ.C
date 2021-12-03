void S12S18_eAEDM_vs_p_Run-1a_125MeV_750-2500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:18:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.2707,0.009439471,3029.518,0.06021694);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[22] = {
   366.6885,
   456.9353,
   570.4228,
   694.9017,
   815.8352,
   938.5325,
   1062.75,
   1188.288,
   1312.703,
   1435.863,
   1561.905,
   1685.207,
   1810.547,
   1935.125,
   2060.257,
   2184.91,
   2309.213,
   2433.147,
   2559.646,
   2678.447,
   2781.41,
   2886.078};
   Double_t Graph0_fy1047[22] = {
   1.699543,
   0.1584867,
   0.07720688,
   0.04655146,
   0.03226863,
   0.02650011,
   0.02331634,
   0.02101646,
   0.01975454,
   0.01875078,
   0.0187163,
   0.0181214,
   0.01879552,
   0.01889253,
   0.01980577,
   0.02005937,
   0.02100823,
   0.02260818,
   0.02377696,
   0.02571035,
   0.06365528,
   0.6431839};
   Double_t Graph0_fex1047[22] = {
   0.2309951,
   0.1092124,
   0.07251533,
   0.04962127,
   0.03997118,
   0.03612002,
   0.0342106,
   0.0331161,
   0.03358597,
   0.0338255,
   0.03626653,
   0.03827066,
   0.04313196,
   0.04714073,
   0.05401014,
   0.05961023,
   0.0687829,
   0.08272529,
   0.09827916,
   0.1129676,
   0.233546,
   1.023868};
   Double_t Graph0_fey1047[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","S12S18",100,114.3931,3139.166);
   Graph_Graph01047->SetMinimum(0.01451722);
   Graph_Graph01047->SetMaximum(0.0551392);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01047->GetXaxis()->SetRange(22,88);
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
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
