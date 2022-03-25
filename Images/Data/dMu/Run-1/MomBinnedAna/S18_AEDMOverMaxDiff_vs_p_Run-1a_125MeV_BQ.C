void S18_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0181,-0.8447624,3028.101,0.1191872);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1126[22] = {
   366.5718,
   457.0815,
   570.2768,
   694.4958,
   815.6467,
   938.5005,
   1062.783,
   1188.162,
   1312.628,
   1435.781,
   1561.988,
   1685.031,
   1810.405,
   1935.059,
   2060.338,
   2184.726,
   2309.137,
   2433.452,
   2559.776,
   2678.028,
   2781.271,
   2884.595};
   Double_t Graph0_fy1126[22] = {
   0.1240594,
   -0.003993393,
   -0.0001667901,
   0.002368956,
   0.001606298,
   0.001940888,
   0.003870596,
   0.0004396501,
   0.001920189,
   -0.002698578,
   0.0009766958,
   0.001347413,
   0.0008300307,
   -0.001607926,
   0.005806147,
   0.004130557,
   -0.0004125961,
   0.002506179,
   0.002057376,
   -0.002130403,
   0.01925689,
   -1.660412};
   Double_t Graph0_fex1126[22] = {
   0.3072112,
   0.1507727,
   0.09980393,
   0.06933791,
   0.05635711,
   0.05117529,
   0.04849768,
   0.04705172,
   0.04807911,
   0.04855352,
   0.05210895,
   0.05537262,
   0.06271132,
   0.06865787,
   0.0791007,
   0.08736164,
   0.1013737,
   0.1229507,
   0.144539,
   0.1658783,
   0.3496264,
   1.155309};
   Double_t Graph0_fey1126[22] = {
   0.0628338,
   -0.007004755,
   -0.003996807,
   0.00278249,
   0.002229859,
   0.00200415,
   0.001914157,
   0.001856557,
   0.001880833,
   -0.001914484,
   0.002045977,
   0.002184675,
   0.002460706,
   -0.002711375,
   0.003106297,
   0.003435897,
   -0.0040091,
   0.004833094,
   0.005665127,
   -0.006906184,
   0.01916094,
   -0.3334447};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1126,Graph0_fy1126,Graph0_fex1126,Graph0_fey1126);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01126 = new TH1F("Graph_Graph01126","S18",100,114.316,3137.699);
   Graph_Graph01126->SetMinimum(-0.7483674);
   Graph_Graph01126->SetMaximum(0.02279223);
   Graph_Graph01126->SetDirectory(0);
   Graph_Graph01126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01126->SetLineColor(ci);
   Graph_Graph01126->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01126->GetXaxis()->SetRange(22,88);
   Graph_Graph01126->GetXaxis()->CenterTitle(true);
   Graph_Graph01126->GetXaxis()->SetLabelFont(42);
   Graph_Graph01126->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01126->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01126->GetXaxis()->SetTitleFont(42);
   Graph_Graph01126->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01126->GetYaxis()->CenterTitle(true);
   Graph_Graph01126->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01126->GetYaxis()->SetLabelFont(42);
   Graph_Graph01126->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01126->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01126->GetYaxis()->SetTitleFont(42);
   Graph_Graph01126->GetZaxis()->SetLabelFont(42);
   Graph_Graph01126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01126);
   
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
