void S12S18_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8774,-0.01839255,3034.328,0.1494911);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[22] = {
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
   Double_t Graph0_fy1181[22] = {
   0.007972698,
   0.009516309,
   0.006853322,
   0.002954413,
   0.003748267,
   0.002068923,
   0.003169292,
   0.000869355,
   0.002355854,
   0.001223143,
   0.001691576,
   0.0008720723,
   0.0006450883,
   0.002721185,
   0.00534582,
   0.001353222,
   0.006556357,
   0.005873513,
   0.002365606,
   -0.002348293,
   0.03278196,
   0.1722814};
   Double_t Graph0_fex1181[22] = {
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
   Double_t Graph0_fey1181[22] = {
   0.04216943,
   0.004250162,
   0.002442116,
   0.001679592,
   0.001336386,
   0.001197188,
   0.001142265,
   0.001106102,
   0.001113943,
   0.001130645,
   0.001206338,
   0.001278668,
   0.001432089,
   0.001579812,
   0.001796076,
   0.001985138,
   0.002296015,
   0.002770197,
   0.003283398,
   -0.003997836,
   0.01088411,
   0.05154273};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","S12S18",100,114.9753,3140.211);
   Graph_Graph01181->SetMinimum(-0.001604185);
   Graph_Graph01181->SetMaximum(0.1327027);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01181->GetXaxis()->SetRange(21,88);
   Graph_Graph01181->GetXaxis()->CenterTitle(true);
   Graph_Graph01181->GetXaxis()->SetLabelFont(42);
   Graph_Graph01181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01181->GetXaxis()->SetTitleFont(42);
   Graph_Graph01181->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01181->GetYaxis()->CenterTitle(true);
   Graph_Graph01181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01181->GetYaxis()->SetLabelFont(42);
   Graph_Graph01181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01181->GetYaxis()->SetTitleFont(42);
   Graph_Graph01181->GetZaxis()->SetLabelFont(42);
   Graph_Graph01181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01181);
   
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
