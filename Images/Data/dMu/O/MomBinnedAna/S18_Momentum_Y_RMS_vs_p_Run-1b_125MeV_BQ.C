void S18_Momentum_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8475,3.578226,2727.136,23.81482);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
   367.3383,
   456.566,
   569.9738,
   694.4401,
   815.6403,
   938.5725,
   1062.713,
   1187.891,
   1312.687,
   1435.591,
   1562.019,
   1684.943,
   1810.534,
   1934.963,
   2060.319,
   2184.85,
   2308.939,
   2433.329,
   2560.086,
   2677.913,
   2780.761,
   2885.117};
   Double_t Graph0_fy1028[22] = {
   12.97651,
   14.18943,
   15.16994,
   16.16885,
   16.58247,
   17.55263,
   18.31602,
   19.06903,
   19.68657,
   20.12231,
   20.42242,
   20.15956,
   20.04786,
   19.70164,
   19.33908,
   18.79755,
   17.88251,
   16.79463,
   15.74299,
   14.55608,
   13.65095,
   8.443627};
   Double_t Graph0_fex1028[22] = {
   0.2758887,
   0.1401129,
   0.09337128,
   0.06458879,
   0.05290353,
   0.04783934,
   0.04561247,
   0.04414911,
   0.04516617,
   0.04561095,
   0.04898217,
   0.05212218,
   0.05891221,
   0.06491275,
   0.0746884,
   0.08261501,
   0.09596225,
   0.1164331,
   0.1370073,
   0.1562653,
   0.3178764,
   2.044752};
   Double_t Graph0_fey1028[22] = {
   0.4067092,
   0.04609146,
   0.0281935,
   0.02092715,
   0.01728436,
   0.01645559,
   0.01641502,
   0.01660443,
   0.01734709,
   0.01810751,
   0.01962771,
   0.02066492,
   0.02314989,
   0.02520727,
   0.02826143,
   0.03049157,
   0.03372809,
   0.03840039,
   0.04221172,
   0.04766571,
   0.1233978,
   1.492637};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,115.0524,3139.172);
   Graph_Graph01028->SetMinimum(5.601885);
   Graph_Graph01028->SetMaximum(21.79116);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(21,79);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] /  125 MeV");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
