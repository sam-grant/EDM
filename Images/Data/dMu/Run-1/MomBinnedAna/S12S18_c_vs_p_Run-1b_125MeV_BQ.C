void S12S18_c_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8774,-0.6527472,3034.328,1.352167);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[22] = {
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
   Double_t Graph0_fy1171[22] = {
   9.495511,
   3.280636,
   2.563238,
   0.06182762,
   0.3284903,
   0.5904424,
   -0.1944682,
   -0.2077265,
   -0.3247892,
   -0.2418515,
   -0.08851769,
   0.008005593,
   0.06569087,
   0.1219592,
   0.09751387,
   0.120012,
   0.1465809,
   0.1222763,
   0.1738559,
   0.223969,
   0.1330035,
   -1.119067};
   Double_t Graph0_fex1171[22] = {
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
   Double_t Graph0_fey1171[22] = {
   1.059507,
   0.09417136,
   0.04617181,
   0.02782445,
   0.01930496,
   0.01585866,
   0.01396882,
   0.01259816,
   0.01183253,
   0.01122875,
   0.01120582,
   0.01087981,
   0.01130249,
   0.01145572,
   0.01205111,
   0.01230946,
   0.01298969,
   0.01418938,
   0.01529045,
   0.01687565,
   0.04322151,
   0.2130488};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18",100,114.9753,3140.211);
   Graph_Graph01171->SetMinimum(-0.4522558);
   Graph_Graph01171->SetMaximum(1.151676);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(21,88);
   Graph_Graph01171->GetXaxis()->CenterTitle(true);
   Graph_Graph01171->GetXaxis()->SetLabelFont(42);
   Graph_Graph01171->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01171->GetXaxis()->SetTitleFont(42);
   Graph_Graph01171->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01171->GetYaxis()->CenterTitle(true);
   Graph_Graph01171->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01171->GetYaxis()->SetLabelFont(42);
   Graph_Graph01171->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01171->GetYaxis()->SetTitleFont(42);
   Graph_Graph01171->GetZaxis()->SetLabelFont(42);
   Graph_Graph01171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01171);
   
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
