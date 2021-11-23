void S12S18_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:24:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8897,-0.03181924,2728.021,0.114815);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1046[22] = {
   367.2385,
   456.7075,
   570.1081,
   694.7359,
   815.8178,
   938.6514,
   1062.74,
   1188.098,
   1312.71,
   1435.778,
   1562.012,
   1685.106,
   1810.598,
   1935.076,
   2060.312,
   2184.99,
   2309.085,
   2433.14,
   2559.752,
   2678.662,
   2780.904,
   2886.857};
   Double_t Graph0_fy1046[22] = {
   0.001485201,
   0.0009747284,
   0.0005334432,
   0.0002655804,
   0.0003200199,
   0.0001704283,
   0.0002476085,
   6.539927e-05,
   0.0001893269,
   9.073004e-05,
   0.0001209411,
   0.0001018904,
   6.392864e-05,
   0.0002684858,
   0.0005820448,
   0.00012145,
   0.0007251823,
   0.0005594493,
   0.0002232153,
   -0.0001722858,
   0.003263105,
   0.0689344};
   Double_t Graph0_fex1046[22] = {
   0.1830309,
   0.09171714,
   0.06159356,
   0.04208012,
   0.03402449,
   0.03067219,
   0.02917568,
   0.02818454,
   0.02862272,
   0.02882038,
   0.03089893,
   0.03263451,
   0.03667816,
   0.04023789,
   0.04606633,
   0.05078197,
   0.05867116,
   0.07077055,
   0.0840277,
   0.09624685,
   0.1948998,
   1.250899};
   Double_t Graph0_fey1046[22] = {
   0.008865392,
   0.0004089133,
   0.0001965064,
   0.0001489118,
   0.000114521,
   0.000100437,
   8.849717e-05,
   9.203547e-05,
   9.611581e-05,
   8.296643e-05,
   0.0001020911,
   0.0001337454,
   0.0001360485,
   0.0001721587,
   0.0001808756,
   0.0001781002,
   0.0002557906,
   0.0002663469,
   0.0003533104,
   -0.0003668028,
   0.001073622,
   0.0214416};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","S12S18",100,114.9502,3140.213);
   Graph_Graph01046->SetMinimum(-0.01715581);
   Graph_Graph01046->SetMaximum(0.1001516);
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
