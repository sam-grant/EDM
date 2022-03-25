void S18_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8372,-0.433733,3028.15,0.8440466);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1116[22] = {
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
   Double_t Graph0_fy1116[22] = {
   8.11236,
   2.502923,
   2.210155,
   -0.3004045,
   -0.01180154,
   0.3507669,
   -0.3876018,
   -0.2976365,
   -0.3412191,
   -0.1729478,
   -0.0194463,
   0.07890041,
   0.144439,
   0.2583852,
   0.2550893,
   0.3058759,
   0.3302224,
   0.3151821,
   0.3862844,
   0.4024112,
   0.1636724,
   0.3447688};
   Double_t Graph0_fex1116[22] = {
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
   Double_t Graph0_fey1116[22] = {
   0.8575741,
   0.07923312,
   0.03838653,
   0.02364796,
   0.01654305,
   0.01366573,
   0.01202216,
   0.01087183,
   0.01031461,
   0.009818615,
   0.009851068,
   0.009610377,
   0.01009801,
   0.01026962,
   0.01086776,
   0.01116358,
   0.01184785,
   0.01303542,
   0.01389577,
   0.01558865,
   0.04129181,
   0.3056089};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1116,Graph0_fy1116,Graph0_fex1116,Graph0_fey1116);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01116 = new TH1F("Graph_Graph01116","S18",100,115.2511,3137.715);
   Graph_Graph01116->SetMinimum(-0.305955);
   Graph_Graph01116->SetMaximum(0.7162686);
   Graph_Graph01116->SetDirectory(0);
   Graph_Graph01116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01116->SetLineColor(ci);
   Graph_Graph01116->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01116->GetXaxis()->SetRange(22,88);
   Graph_Graph01116->GetXaxis()->CenterTitle(true);
   Graph_Graph01116->GetXaxis()->SetLabelFont(42);
   Graph_Graph01116->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01116->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01116->GetXaxis()->SetTitleFont(42);
   Graph_Graph01116->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01116->GetYaxis()->CenterTitle(true);
   Graph_Graph01116->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01116->GetYaxis()->SetLabelFont(42);
   Graph_Graph01116->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01116->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01116->GetYaxis()->SetTitleFont(42);
   Graph_Graph01116->GetZaxis()->SetLabelFont(42);
   Graph_Graph01116->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01116->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01116);
   
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
