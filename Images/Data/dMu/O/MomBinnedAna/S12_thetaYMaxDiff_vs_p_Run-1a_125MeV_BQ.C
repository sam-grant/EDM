void S12_thetaYMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 19:14:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.1083,-28.10276,2725.349,380.0148);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[22] = {
   366.4807,
   456.7343,
   570.5426,
   695.251,
   815.9612,
   938.4982,
   1062.71,
   1188.361,
   1312.739,
   1435.916,
   1561.843,
   1685.365,
   1810.672,
   1935.19,
   2060.201,
   2185.038,
   2309.334,
   2433.003,
   2559.541,
   2678.772,
   2781.283,
   2887.705};
   Double_t Graph0_fy1021[22] = {
   147.9485,
   306.6178,
   276.5993,
   242.2924,
   227.2832,
   195.1204,
   192.9763,
   197.2646,
   162.9577,
   150.0926,
   124.3625,
   111.4974,
   94.34395,
   87.91141,
   72.90214,
   68.61378,
   64.32542,
   68.61378,
   53.60452,
   55.7487,
   40.73943,
   17.15345};
   Double_t Graph0_fex1021[22] = {
   0.384646,
   0.1721968,
   0.1145503,
   0.0772643,
   0.06172717,
   0.05561102,
   0.05263646,
   0.05089841,
   0.05132909,
   0.05157249,
   0.05534517,
   0.05804077,
   0.06517134,
   0.07120831,
   0.08126697,
   0.08967208,
   0.1030685,
   0.1231302,
   0.1477272,
   0.1694471,
   0.3433133,
   1.655531};
   Double_t Graph0_fey1021[22] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","S12",100,113.7696,3141.687);
   Graph_Graph01021->SetMinimum(12.709);
   Graph_Graph01021->SetMaximum(339.2031);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01021->GetXaxis()->SetRange(22,79);
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
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
