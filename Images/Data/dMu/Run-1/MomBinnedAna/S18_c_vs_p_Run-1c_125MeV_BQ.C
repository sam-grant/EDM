void S18_c_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.5287,-0.6804306,2721.883,0.1877022);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
   367.0177,
   457.2363,
   570.0312,
   694.4722,
   815.6727,
   938.5327,
   1062.881,
   1188.195,
   1312.611,
   1435.71,
   1561.996,
   1685.037,
   1810.509,
   1934.917,
   2060.265,
   2184.762,
   2308.999,
   2433.429,
   2559.667,
   2677.99,
   2781.676,
   2884.375};
   Double_t Graph0_fy1028[22] = {
   7.715262,
   2.712907,
   2.089119,
   -0.431004,
   -0.1955883,
   0.100748,
   -0.66456,
   -0.5768084,
   -0.631821,
   -0.4940657,
   -0.372613,
   -0.2937506,
   -0.2329735,
   -0.1633943,
   -0.175803,
   -0.1494566,
   -0.08988974,
   -0.1455319,
   -0.08855633,
   -0.08111952,
   -0.3040101,
   0.219459};
   Double_t Graph0_fex1028[22] = {
   0.2108591,
   0.1060616,
   0.07018618,
   0.04922973,
   0.03989433,
   0.03617714,
   0.03425647,
   0.03330809,
   0.0340638,
   0.03436938,
   0.03710766,
   0.03930702,
   0.04469014,
   0.04907403,
   0.05659448,
   0.0626717,
   0.0728264,
   0.08818203,
   0.104193,
   0.1211257,
   0.258964,
   1.230174};
   Double_t Graph0_fey1028[22] = {
   1.142337,
   0.1089256,
   0.05272662,
   0.03240525,
   0.0226661,
   0.01871403,
   0.01646049,
   0.01487497,
   0.01408893,
   0.01343162,
   0.01346766,
   0.01313954,
   0.01376282,
   0.01400922,
   0.01478575,
   0.01521823,
   0.01612398,
   0.017624,
   0.01895399,
   0.02131143,
   0.05605476,
   0.2673362};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,114.9269,3137.485);
   Graph_Graph01028->SetMinimum(-0.5936173);
   Graph_Graph01028->SetMaximum(0.1008889);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(22,79);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
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
