void S18_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:18:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8012,-0.1404426,3027.932,1.234778);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1116[22] = {
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
   Double_t Graph0_fy1116[22] = {
   5.443679,
   0.05244304,
   0.008662844,
   0.004964681,
   0.002444515,
   0.007163251,
   0.002348529,
   0.002017016,
   -0.002650075,
   -0.0005979381,
   -0.0007992182,
   -0.003768391,
   0.001497217,
   0.006534457,
   -0.003064028,
   6.665583e-05,
   0.0002242693,
   0.002523495,
   -0.001591708,
   0.007200251,
   0.02903531,
   1.587953};
   Double_t Graph0_fex1116[22] = {
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
   Double_t Graph0_fey1116[22] = {
   0.8820203,
   0.07976057,
   0.03866188,
   0.02381681,
   0.01666132,
   0.01376302,
   0.0121074,
   0.01094879,
   0.01038758,
   0.009886803,
   0.009918746,
   0.00967721,
   0.01016859,
   0.01033846,
   0.01094238,
   0.01123856,
   0.01192892,
   0.01312207,
   0.01399199,
   0.01570155,
   0.0415488,
   0.3098071};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1116,Graph0_fy1116,Graph0_fex1116,Graph0_fey1116);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01116 = new TH1F("Graph_Graph01116","S18",100,115.2427,3137.489);
   Graph_Graph01116->SetMinimum(-0.002920472);
   Graph_Graph01116->SetMaximum(1.097256);
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
