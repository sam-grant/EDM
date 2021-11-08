void S12_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 10:22:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-0.1254234,2727,0.4542329);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1022[22] = {
   -0.0247324,
   -0.0006349286,
   -0.000759788,
   -0.0003120565,
   -1.639329e-05,
   9.012516e-05,
   -0.0001164814,
   6.115787e-05,
   -0.0001756635,
   -0.000636794,
   0.0001488314,
   -0.0001656434,
   -0.001259509,
   8.773536e-05,
   -0.0004960831,
   0.001005342,
   -0.0005199125,
   0.001646867,
   -0.0001692399,
   0.0003888524,
   0.003596673,
   0.1644048};
   Double_t Graph0_fex1022[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1022[22] = {
   -0.02411674,
   -0.001191968,
   -0.0006429661,
   -0.0004387729,
   -0.0003192835,
   0.0003044889,
   -0.0002707264,
   0.0002396614,
   -0.0002699669,
   -0.0002783722,
   0.0003358129,
   -0.0003610284,
   -0.0004404853,
   0.0004734531,
   -0.0005951768,
   0.0006404992,
   -0.0007097565,
   0.0007203364,
   -0.0009772767,
   0.001013916,
   0.00333607,
   0.1932188};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01022 = new TH1F("Graph_Graph01022","S12",100,49.5,3199.5);
   Graph_Graph01022->SetMinimum(-0.06745773);
   Graph_Graph01022->SetMaximum(0.3962673);
   Graph_Graph01022->SetDirectory(0);
   Graph_Graph01022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01022->SetLineColor(ci);
   Graph_Graph01022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01022->GetXaxis()->SetRange(23,78);
   Graph_Graph01022->GetXaxis()->CenterTitle(true);
   Graph_Graph01022->GetXaxis()->SetLabelFont(42);
   Graph_Graph01022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01022->GetXaxis()->SetTitleFont(42);
   Graph_Graph01022->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01022->GetYaxis()->CenterTitle(true);
   Graph_Graph01022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01022->GetYaxis()->SetLabelFont(42);
   Graph_Graph01022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01022->GetYaxis()->SetTitleFont(42);
   Graph_Graph01022->GetZaxis()->SetLabelFont(42);
   Graph_Graph01022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01022);
   
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
