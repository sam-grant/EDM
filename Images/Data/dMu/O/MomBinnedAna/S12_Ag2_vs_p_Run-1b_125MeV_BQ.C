void S12_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6005,-6.754306,2723.732,7.135989);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[22] = {
   367.0269,
   456.6667,
   570.2027,
   694.9963,
   815.9344,
   938.7277,
   1062.744,
   1188.292,
   1312.721,
   1435.939,
   1561.982,
   1685.236,
   1810.656,
   1935.236,
   2060.309,
   2185.156,
   2309.179,
   2433.028,
   2559.419,
   2679.279,
   2780.747,
   2885.683};
   Double_t Graph0_fy1015[22] = {
   1.991647,
   0.3044573,
   -0.229973,
   -0.1221763,
   -0.02053554,
   -0.003012975,
   -0.0331527,
   -0.04298674,
   0.03185448,
   0.07009596,
   0.01301545,
   -0.0571535,
   -0.0184359,
   0.01390587,
   0.004101942,
   -0.04602539,
   -0.008507601,
   -9.779249e-05,
   -0.0725722,
   -0.04894614,
   -0.05460317,
   -1.745165};
   Double_t Graph0_fex1015[22] = {
   0.2809989,
   0.1434501,
   0.09718036,
   0.06560101,
   0.05251597,
   0.04720066,
   0.04485482,
   0.04328223,
   0.04380127,
   0.04396092,
   0.04712161,
   0.04946722,
   0.05541415,
   0.06060924,
   0.06907715,
   0.07608883,
   0.08791489,
   0.1052625,
   0.125985,
   0.1449659,
   0.290637,
   1.90302};
   Double_t Graph0_fey1015[22] = {
   2.829292,
   0.2754537,
   0.1342518,
   0.0797882,
   0.05499653,
   0.04503116,
   0.03966082,
   0.03576854,
   0.03349282,
   0.03164732,
   0.03157626,
   0.03040423,
   0.03145167,
   0.03158838,
   0.03293368,
   0.03330977,
   0.03478986,
   0.03729615,
   0.03973083,
   0.04283722,
   0.1031094,
   2.694093};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","S12",100,114.6618,3139.67);
   Graph_Graph01015->SetMinimum(-5.365277);
   Graph_Graph01015->SetMaximum(5.746959);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01015->GetXaxis()->SetRange(22,79);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
