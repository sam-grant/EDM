void S18_c_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec 17 14:44:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0523,-6.050153,3028.099,0.7092903);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1116[22] = {
   366.6108,
   457.1028,
   570.2676,
   694.5045,
   815.6442,
   938.5045,
   1062.791,
   1188.168,
   1312.631,
   1435.783,
   1561.985,
   1685.031,
   1810.403,
   1935.07,
   2060.344,
   2184.717,
   2309.137,
   2433.457,
   2559.791,
   2678.02,
   2781.349,
   2884.595};
   Double_t Graph0_fy1116[22] = {
   2.056626,
   0.07658507,
   0.009459536,
   0.003426245,
   0.02887404,
   -0.001751889,
   0.004074651,
   -0.00304867,
   -0.00831495,
   0.003312199,
   -0.002373647,
   0.004413522,
   -0.003414059,
   -0.004839991,
   -0.00490844,
   0.008825483,
   0.01170198,
   -0.000387743,
   0.0146036,
   -0.004495369,
   -0.01687311,
   -11.81276};
   Double_t Graph0_fex1116[22] = {
   0.3102122,
   0.1519888,
   0.1005352,
   0.06984739,
   0.05677918,
   0.05154475,
   0.04885287,
   0.04739523,
   0.04842386,
   0.04890634,
   0.05247658,
   0.05577436,
   0.06316181,
   0.06915618,
   0.07965764,
   0.08793112,
   0.1021086,
   0.1237632,
   0.1455347,
   0.1671362,
   0.3532232,
   1.155309};
   Double_t Graph0_fey1116[22] = {
   1.545375,
   0.1555257,
   0.0754697,
   0.04619696,
   0.03229634,
   0.02665644,
   0.02343752,
   0.0211622,
   0.02001124,
   0.01904267,
   0.01905659,
   0.01856604,
   0.01941086,
   0.01970866,
   0.02088256,
   0.02141558,
   0.02272665,
   0.02476094,
   0.02653178,
   0.02922037,
   0.07585312,
   1.078309};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1116,Graph0_fy1116,Graph0_fex1116,Graph0_fey1116);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01116 = new TH1F("Graph_Graph01116","S18",100,114.3557,3137.695);
   Graph_Graph01116->SetMinimum(-5.374209);
   Graph_Graph01116->SetMaximum(0.03334589);
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
