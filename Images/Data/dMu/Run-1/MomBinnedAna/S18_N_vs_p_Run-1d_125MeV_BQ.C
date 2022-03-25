void S18_N_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8372,-319874.7,3028.15,2943234);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1123[22] = {
   367.2774,
   457.4357,
   569.9772,
   694.5085,
   815.7124,
   938.4776,
   1062.814,
   1188.156,
   1312.577,
   1435.627,
   1561.978,
   1684.874,
   1810.461,
   1934.889,
   2060.232,
   2184.761,
   2309.022,
   2433.188,
   2559.837,
   2677.831,
   2781.311,
   2884.856};
   Double_t Graph0_fy1123[22] = {
   1610,
   153426,
   478629,
   973059,
   1512740,
   1873279,
   2062755,
   2181593,
   2126004,
   2044128,
   1776622,
   1560880,
   1216830,
   998685,
   763697,
   614236,
   453526,
   307545,
   221711,
   146419,
   18481,
   69};
   Double_t Graph0_fex1123[22] = {
   0.1542477,
   0.0772969,
   0.05113436,
   0.03585499,
   0.02910229,
   0.02638949,
   0.02501847,
   0.02428253,
   0.02485795,
   0.02507009,
   0.0270624,
   0.02872554,
   0.03273885,
   0.03590826,
   0.04133977,
   0.04585916,
   0.05343033,
   0.064887,
   0.07654414,
   0.08820872,
   0.1883314,
   0.9865718};
   Double_t Graph0_fey1123[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1123,Graph0_fy1123,Graph0_fex1123,Graph0_fey1123);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01123 = new TH1F("Graph_Graph01123","S18",100,115.2511,3137.715);
   Graph_Graph01123->SetMinimum(6436.131);
   Graph_Graph01123->SetMaximum(2616923);
   Graph_Graph01123->SetDirectory(0);
   Graph_Graph01123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01123->SetLineColor(ci);
   Graph_Graph01123->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01123->GetXaxis()->SetRange(22,88);
   Graph_Graph01123->GetXaxis()->CenterTitle(true);
   Graph_Graph01123->GetXaxis()->SetLabelFont(42);
   Graph_Graph01123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01123->GetXaxis()->SetTitleFont(42);
   Graph_Graph01123->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01123->GetYaxis()->CenterTitle(true);
   Graph_Graph01123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01123->GetYaxis()->SetLabelFont(42);
   Graph_Graph01123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01123->GetYaxis()->SetTitleFont(42);
   Graph_Graph01123->GetZaxis()->SetLabelFont(42);
   Graph_Graph01123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01123);
   
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
