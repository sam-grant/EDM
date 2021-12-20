void S18_Momentum_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec 17 14:47:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8012,9.430615,3027.932,26.17964);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1122[22] = {
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
   Double_t Graph0_fy1122[22] = {
   12.89772,
   14.15434,
   15.08333,
   16.10203,
   16.52304,
   17.49258,
   18.29521,
   19.02862,
   19.69111,
   20.09655,
   20.42577,
   20.14928,
   20.0508,
   19.66955,
   19.28456,
   18.7018,
   17.85895,
   16.76649,
   15.68479,
   14.51519,
   13.8738,
   14.07975};
   Double_t Graph0_fex1122[22] = {
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
   Double_t Graph0_fey1122[22] = {
   0.229078,
   0.02573041,
   0.01552946,
   0.01162495,
   0.009567442,
   0.009102516,
   0.009071991,
   0.009175172,
   0.009618588,
   0.01001016,
   0.01091304,
   0.01148475,
   0.01294286,
   0.01401387,
   0.01571071,
   0.01699065,
   0.01887845,
   0.02152335,
   0.0237168,
   0.02700641,
   0.07269651,
   1.216305};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1122,Graph0_fy1122,Graph0_fex1122,Graph0_fey1122);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01122 = new TH1F("Graph_Graph01122","S18",100,115.2427,3137.489);
   Graph_Graph01122->SetMinimum(11.10552);
   Graph_Graph01122->SetMaximum(24.50474);
   Graph_Graph01122->SetDirectory(0);
   Graph_Graph01122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01122->SetLineColor(ci);
   Graph_Graph01122->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01122->GetXaxis()->SetRange(22,88);
   Graph_Graph01122->GetXaxis()->CenterTitle(true);
   Graph_Graph01122->GetXaxis()->SetLabelFont(42);
   Graph_Graph01122->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01122->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01122->GetXaxis()->SetTitleFont(42);
   Graph_Graph01122->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01122->GetYaxis()->CenterTitle(true);
   Graph_Graph01122->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01122->GetYaxis()->SetLabelFont(42);
   Graph_Graph01122->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01122->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01122->GetYaxis()->SetTitleFont(42);
   Graph_Graph01122->GetZaxis()->SetLabelFont(42);
   Graph_Graph01122->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01122);
   
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
