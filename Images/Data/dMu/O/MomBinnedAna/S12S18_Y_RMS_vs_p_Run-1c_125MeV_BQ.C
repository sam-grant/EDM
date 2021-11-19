void S12S18_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.836,10.8288,2728.07,19.9882);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[22] = {
   367.1623,
   457.1238,
   570.1453,
   694.7801,
   815.8457,
   938.5329,
   1062.817,
   1188.293,
   1312.63,
   1435.855,
   1561.931,
   1685.197,
   1810.575,
   1935.047,
   2060.265,
   2184.882,
   2309.029,
   2433.132,
   2559.653,
   2678.385,
   2780.888,
   2886.946};
   Double_t Graph0_fy1037[22] = {
   13.96286,
   13.43902,
   12.85232,
   12.57964,
   12.57389,
   12.54935,
   12.52531,
   12.50118,
   12.49096,
   12.49325,
   12.50155,
   12.50012,
   12.48486,
   12.46189,
   12.41202,
   12.37531,
   12.36847,
   12.38386,
   12.42186,
   12.59204,
   12.99471,
   16.973};
   Double_t Graph0_fex1037[22] = {
   0.1665134,
   0.08299863,
   0.05531789,
   0.0382026,
   0.03068863,
   0.02772217,
   0.0262764,
   0.02551509,
   0.02594171,
   0.02610396,
   0.02813113,
   0.02965413,
   0.03349714,
   0.03670287,
   0.04213071,
   0.04660818,
   0.05393212,
   0.06499286,
   0.07753794,
   0.08964244,
   0.1821461,
   1.217803};
   Double_t Graph0_fey1037[22] = {
   0.2642511,
   0.02610961,
   0.01420835,
   0.009607478,
   0.007627304,
   0.006815779,
   0.006477485,
   0.006282172,
   0.006326127,
   0.006430316,
   0.006887354,
   0.007308167,
   0.008194171,
   0.009003453,
   0.01022737,
   0.01133402,
   0.01309932,
   0.01582967,
   0.01892763,
   0.0235768,
   0.06691553,
   1.488631};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","S12S18",100,114.879,3140.281);
   Graph_Graph01037->SetMinimum(11.74474);
   Graph_Graph01037->SetMaximum(19.07226);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(21,79);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
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
