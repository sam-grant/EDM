void S18_theta_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:47:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8012,0.8499988,3027.932,32.457);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[22] = {
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
   Double_t Graph0_fy1032[22] = {
   35.54378,
   30.93602,
   26.47466,
   23.26763,
   20.30005,
   18.67144,
   17.25138,
   16.05289,
   15.03878,
   14.03703,
   13.12058,
   11.98386,
   11.09399,
   10.18174,
   9.37166,
   8.569532,
   7.744439,
   6.898773,
   6.136051,
   5.428878,
   5.008062,
   5.473208};
   Double_t Graph0_fex1032[22] = {
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
   Double_t Graph0_fey1032[22] = {
   0.6318956,
   0.05625307,
   0.02725854,
   0.01679799,
   0.01175407,
   0.009715478,
   0.008553646,
   0.007739526,
   0.007345044,
   0.006990577,
   0.007008636,
   0.006829786,
   0.007160598,
   0.007253597,
   0.007634592,
   0.007785267,
   0.008186328,
   0.008855883,
   0.009277982,
   0.01010042,
   0.02623569,
   0.4693237};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","S18",100,115.2427,3137.489);
   Graph_Graph01032->SetMinimum(4.010699);
   Graph_Graph01032->SetMaximum(29.2963);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01032->GetXaxis()->SetRange(22,88);
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
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
