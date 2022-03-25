void S18_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8372,8.416815,3028.15,22.22497);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1121[22] = {
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
   Double_t Graph0_fy1121[22] = {
   13.91965,
   13.33923,
   12.76727,
   12.50824,
   12.47554,
   12.45735,
   12.44441,
   12.43138,
   12.43464,
   12.46671,
   12.47577,
   12.45728,
   12.41306,
   12.37921,
   12.33224,
   12.28821,
   12.24676,
   12.28224,
   12.3708,
   12.64001,
   13.97284,
   19.9667};
   Double_t Graph0_fex1121[22] = {
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
   Double_t Graph0_fey1121[22] = {
   0.2453777,
   0.02408549,
   0.01305039,
   0.008966614,
   0.007172701,
   0.006436152,
   0.006127086,
   0.00595172,
   0.006030705,
   0.006166347,
   0.006618938,
   0.007050747,
   0.007957069,
   0.008759275,
   0.009978601,
   0.01108691,
   0.01285923,
   0.01566097,
   0.01857855,
   0.02335998,
   0.07274166,
   1.71213};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1121,Graph0_fy1121,Graph0_fex1121,Graph0_fey1121);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01121 = new TH1F("Graph_Graph01121","S18",100,115.2511,3137.715);
   Graph_Graph01121->SetMinimum(9.797631);
   Graph_Graph01121->SetMaximum(20.84416);
   Graph_Graph01121->SetDirectory(0);
   Graph_Graph01121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01121->SetLineColor(ci);
   Graph_Graph01121->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01121->GetXaxis()->SetRange(22,88);
   Graph_Graph01121->GetXaxis()->CenterTitle(true);
   Graph_Graph01121->GetXaxis()->SetLabelFont(42);
   Graph_Graph01121->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01121->GetXaxis()->SetTitleFont(42);
   Graph_Graph01121->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01121->GetYaxis()->CenterTitle(true);
   Graph_Graph01121->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01121->GetYaxis()->SetLabelFont(42);
   Graph_Graph01121->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01121->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01121->GetYaxis()->SetTitleFont(42);
   Graph_Graph01121->GetZaxis()->SetLabelFont(42);
   Graph_Graph01121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01121);
   
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
