void S12S18_AEDMOverMaxDiff_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7189,-0.02200587,2728.306,0.03243377);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1046[22] = {
   367.013,
   457.1131,
   570.1616,
   694.8084,
   815.8621,
   938.5497,
   1062.83,
   1188.304,
   1312.637,
   1435.868,
   1561.967,
   1685.209,
   1810.571,
   1935.056,
   2060.278,
   2184.951,
   2309.062,
   2433.121,
   2559.618,
   2678.416,
   2781.164,
   2887.396};
   Double_t Graph0_fy1046[22] = {
   -0.001976737,
   0.0003887239,
   0.0002381634,
   0.0002722457,
   9.296161e-05,
   0.0001750089,
   0.0002316511,
   0.0003096843,
   0.0001917718,
   0.0002721101,
   0.000191388,
   0.0004637488,
   0.0003208655,
   0.000571045,
   0.0005020978,
   0.000228396,
   0.0007318788,
   3.209755e-05,
   0.0011019,
   0.0003916531,
   0.0004678783,
   0.005213949};
   Double_t Graph0_fex1046[22] = {
   0.1548013,
   0.07599472,
   0.05054269,
   0.03489086,
   0.02799997,
   0.02528911,
   0.0239459,
   0.02323562,
   0.02360337,
   0.02374271,
   0.02556684,
   0.02693996,
   0.03041498,
   0.0333021,
   0.0381874,
   0.04225042,
   0.04879519,
   0.05880174,
   0.07022048,
   0.08097267,
   0.1662002,
   1.029838};
   Double_t Graph0_fey1046[22] = {
   -0.005264236,
   0.0003290592,
   0.000172118,
   0.0001228073,
   8.502546e-05,
   8.094918e-05,
   8.014016e-05,
   7.572251e-05,
   6.617632e-05,
   8.312693e-05,
   6.619374e-05,
   0.0001090324,
   9.841156e-05,
   0.0001232957,
   0.0001338558,
   0.0001584335,
   0.0001755149,
   0.0002494441,
   0.000278907,
   0.0002991636,
   0.0009848358,
   0.01814655};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","S12S18",100,114.7014,3140.583);
   Graph_Graph01046->SetMinimum(-0.01656191);
   Graph_Graph01046->SetMaximum(0.0269898);
   Graph_Graph01046->SetDirectory(0);
   Graph_Graph01046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01046->SetLineColor(ci);
   Graph_Graph01046->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01046->GetXaxis()->SetRange(21,79);
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
