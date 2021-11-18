void S12S18_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:55:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.2994,-0.2833901,2723.26,0.1060537);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1046[22] = {
   366.6885,
   456.94,
   570.4296,
   694.9006,
   815.8333,
   938.5324,
   1062.751,
   1188.29,
   1312.702,
   1435.864,
   1561.907,
   1685.205,
   1810.549,
   1935.124,
   2060.256,
   2184.912,
   2309.216,
   2433.15,
   2559.65,
   2678.438,
   2781.416,
   2886.078};
   Double_t Graph0_fy1046[22] = {
   0.03037204,
   0.0002249018,
   0.0002447673,
   0.000239142,
   0.0002961741,
   0.0003211222,
   0.0002686687,
   0.0001213584,
   0.0002982659,
   6.07381e-05,
   0.0002293449,
   0.00024939,
   0.0001144072,
   1.616764e-05,
   0.0005680931,
   0.0002897309,
   0.0001245982,
   0.0005209147,
   2.483906e-05,
   3.18472e-05,
   0.0006641032,
   -0.2184828};
   Double_t Graph0_fex1046[22] = {
   0.2309951,
   0.1093191,
   0.07258434,
   0.04967013,
   0.04000918,
   0.03615285,
   0.0342411,
   0.033146,
   0.03361641,
   0.03385663,
   0.03629752,
   0.03830532,
   0.04317216,
   0.04718171,
   0.05405557,
   0.0596571,
   0.06883895,
   0.08280096,
   0.09835486,
   0.1130508,
   0.2337414,
   1.023868};
   Double_t Graph0_fey1046[22] = {
   0.01077435,
   0.000459086,
   0.0002595601,
   0.0001923811,
   0.0001382892,
   0.0001303277,
   0.0001183986,
   0.0001033052,
   0.0001099169,
   0.0001137043,
   0.0001121086,
   0.0001597909,
   0.0001253969,
   0.0001877232,
   0.0002321075,
   0.0002467695,
   0.0002726285,
   0.0003309226,
   0.0004272773,
   0.000387684,
   0.001102669,
   -0.05032826};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","S12S18",100,114.3931,3139.166);
   Graph_Graph01046->SetMinimum(-0.2444457);
   Graph_Graph01046->SetMaximum(0.06710931);
   Graph_Graph01046->SetDirectory(0);
   Graph_Graph01046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01046->SetLineColor(ci);
   Graph_Graph01046->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01046->GetXaxis()->SetRange(22,79);
   Graph_Graph01046->GetXaxis()->CenterTitle(true);
   Graph_Graph01046->GetXaxis()->SetLabelFont(42);
   Graph_Graph01046->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01046->GetXaxis()->SetTitleFont(42);
   Graph_Graph01046->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01046->GetYaxis()->CenterTitle(true);
   Graph_Graph01046->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01046->GetYaxis()->SetLabelFont(42);
   Graph_Graph01046->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01046->GetYaxis()->SetTitleFont(42);
   Graph_Graph01046->GetZaxis()->SetLabelFont(42);
   Graph_Graph01046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01046);
   
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
