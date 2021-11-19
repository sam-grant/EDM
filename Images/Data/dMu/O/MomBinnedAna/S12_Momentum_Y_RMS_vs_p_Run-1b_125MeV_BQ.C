void S12_Momentum_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6005,9.622435,2723.732,22.8091);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[22] = {
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
   Double_t Graph0_fy1018[22] = {
   13.73493,
   14.35102,
   15.23785,
   16.24063,
   16.67802,
   17.61118,
   18.41082,
   19.1716,
   19.79407,
   20.20112,
   20.59232,
   20.30177,
   20.21365,
   19.74426,
   19.3201,
   18.76271,
   17.97359,
   16.90531,
   15.84259,
   14.68131,
   13.67695,
   14.10899};
   Double_t Graph0_fex1018[22] = {
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
   Double_t Graph0_fey1018[22] = {
   0.4568169,
   0.04816377,
   0.02954948,
   0.02138391,
   0.01726872,
   0.01628421,
   0.01623963,
   0.01636698,
   0.01693359,
   0.01748696,
   0.01900315,
   0.01978837,
   0.02194309,
   0.02357054,
   0.02611879,
   0.02808129,
   0.03097101,
   0.03507175,
   0.03923717,
   0.04431944,
   0.1107455,
   2.288781};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,114.6618,3139.67);
   Graph_Graph01018->SetMinimum(10.9411);
   Graph_Graph01018->SetMaximum(21.49043);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(22,79);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] /  125 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
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
