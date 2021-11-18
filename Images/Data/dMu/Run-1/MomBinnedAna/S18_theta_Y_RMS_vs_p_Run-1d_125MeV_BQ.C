void S18_theta_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.8015,-2.711432,2721.93,43.42158);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1030[22] = {
   367.2526,
   457.422,
   569.9567,
   694.5039,
   815.7076,
   938.4818,
   1062.812,
   1188.157,
   1312.58,
   1435.625,
   1561.978,
   1684.876,
   1810.456,
   1934.89,
   2060.235,
   2184.761,
   2309.021,
   2433.199,
   2559.827,
   2677.84,
   2781.306,
   2884.655};
   Double_t Graph0_fy1030[22] = {
   35.10917,
   31.10406,
   26.5297,
   23.28095,
   20.30854,
   18.67598,
   17.25351,
   16.05375,
   15.03948,
   14.03761,
   13.12077,
   11.98387,
   11.094,
   10.18176,
   9.371681,
   8.569623,
   7.744496,
   6.898787,
   6.136081,
   5.428869,
   5.007748,
   5.444244};
   Double_t Graph0_fex1030[22] = {
   0.15606,
   0.07784876,
   0.05150938,
   0.03611359,
   0.02931009,
   0.02657695,
   0.02519619,
   0.02445622,
   0.02503412,
   0.02524446,
   0.02724839,
   0.02892473,
   0.03296513,
   0.03615436,
   0.04161878,
   0.04617134,
   0.05378732,
   0.06532279,
   0.07707671,
   0.08880628,
   0.1895636,
   0.9802771};
   Double_t Graph0_fey1030[22] = {
   0.6235782,
   0.05653696,
   0.02731253,
   0.01680712,
   0.01175881,
   0.009717772,
   0.008554675,
   0.007739934,
   0.007345376,
   0.006990863,
   0.00700874,
   0.006829789,
   0.007160605,
   0.007253612,
   0.007634609,
   0.00778535,
   0.008186388,
   0.008855902,
   0.009278028,
   0.0101004,
   0.02623404,
   0.4668401};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01030 = new TH1F("Graph_Graph01030","S18",100,115.2427,3137.489);
   Graph_Graph01030->SetMinimum(1.90187);
   Graph_Graph01030->SetMaximum(38.80828);
   Graph_Graph01030->SetDirectory(0);
   Graph_Graph01030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01030->SetLineColor(ci);
   Graph_Graph01030->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01030->GetXaxis()->SetRange(22,79);
   Graph_Graph01030->GetXaxis()->CenterTitle(true);
   Graph_Graph01030->GetXaxis()->SetLabelFont(42);
   Graph_Graph01030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01030->GetXaxis()->SetTitleFont(42);
   Graph_Graph01030->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01030->GetYaxis()->CenterTitle(true);
   Graph_Graph01030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01030->GetYaxis()->SetLabelFont(42);
   Graph_Graph01030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01030->GetYaxis()->SetTitleFont(42);
   Graph_Graph01030->GetZaxis()->SetLabelFont(42);
   Graph_Graph01030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01030);
   
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
