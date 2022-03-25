void S12S18_AEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8774,-0.09028918,3034.328,0.7259072);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1172[22] = {
   367.2599,
   456.702,
   570.109,
   694.7359,
   815.8153,
   938.6517,
   1062.738,
   1188.104,
   1312.708,
   1435.78,
   1562.009,
   1685.106,
   1810.596,
   1935.088,
   2060.306,
   2184.998,
   2309.084,
   2433.154,
   2559.736,
   2678.654,
   2780.909,
   2886.857};
   Double_t Graph0_fy1172[22] = {
   0.2897403,
   0.2974287,
   0.1829586,
   0.06916876,
   0.07659029,
   0.03881111,
   0.05487995,
   0.01402087,
   0.03549052,
   0.01720733,
   0.02225804,
   0.01049038,
   0.007180886,
   0.02776026,
   0.05019128,
   0.01163611,
   0.05096612,
   0.04073353,
   0.01461692,
   -0.01283476,
   0.1625793,
   0.8337355};
   Double_t Graph0_fex1172[22] = {
   0.1816034,
   0.09112972,
   0.06120878,
   0.04181207,
   0.03380812,
   0.0304767,
   0.02899594,
   0.02800799,
   0.02844741,
   0.02864512,
   0.03070991,
   0.03243555,
   0.03645912,
   0.03999234,
   0.04578523,
   0.05047818,
   0.05834179,
   0.07036082,
   0.08349635,
   0.0956473,
   0.1938715,
   1.250899};
   Double_t Graph0_fey1172[22] = {
   1.532491,
   0.1328357,
   0.06519519,
   0.03932261,
   0.02730703,
   0.02245813,
   0.01977962,
   0.01783911,
   0.01678134,
   0.01590605,
   0.01587319,
   0.01538143,
   0.01594149,
   0.01611649,
   0.01686309,
   0.01706982,
   0.01784807,
   0.01921158,
   0.02028788,
   0.02185043,
   0.05397158,
   0.2356565};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1172,Graph0_fy1172,Graph0_fex1172,Graph0_fey1172);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01172 = new TH1F("Graph_Graph01172","S12S18",100,114.9753,3140.211);
   Graph_Graph01172->SetMinimum(-0.008669535);
   Graph_Graph01172->SetMaximum(0.6442875);
   Graph_Graph01172->SetDirectory(0);
   Graph_Graph01172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01172->SetLineColor(ci);
   Graph_Graph01172->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01172->GetXaxis()->SetRange(21,88);
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
