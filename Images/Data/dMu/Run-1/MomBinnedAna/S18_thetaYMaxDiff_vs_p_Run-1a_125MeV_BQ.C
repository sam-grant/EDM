void S18_thetaYMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0181,-3.547705,3028.101,241.8666);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1125[22] = {
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
   Double_t Graph0_fy1125[22] = {
   154.6599,
   180.8048,
   174.1765,
   179.7,
   181.173,
   172.7035,
   169.7576,
   163.8658,
   148.0316,
   161.6564,
   167.5482,
   110.8396,
   149.1363,
   95.37359,
   85.7994,
   78.06641,
   78.06641,
   52.658,
   47.13444,
   52.658,
   34.61435,
   19.88484};
   Double_t Graph0_fex1125[22] = {
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
   Double_t Graph0_fey1125[22] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1125,Graph0_fy1125,Graph0_fex1125,Graph0_fey1125);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01125 = new TH1F("Graph_Graph01125","S18",100,114.316,3137.699);
   Graph_Graph01125->SetMinimum(20.99373);
   Graph_Graph01125->SetMaximum(217.3252);
   Graph_Graph01125->SetDirectory(0);
   Graph_Graph01125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01125->SetLineColor(ci);
   Graph_Graph01125->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01125->GetXaxis()->SetRange(22,88);
   Graph_Graph01125->GetXaxis()->CenterTitle(true);
   Graph_Graph01125->GetXaxis()->SetLabelFont(42);
   Graph_Graph01125->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01125->GetXaxis()->SetTitleFont(42);
   Graph_Graph01125->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01125->GetYaxis()->CenterTitle(true);
   Graph_Graph01125->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01125->GetYaxis()->SetLabelFont(42);
   Graph_Graph01125->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01125->GetYaxis()->SetTitleFont(42);
   Graph_Graph01125->GetZaxis()->SetLabelFont(42);
   Graph_Graph01125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01125);
   
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
