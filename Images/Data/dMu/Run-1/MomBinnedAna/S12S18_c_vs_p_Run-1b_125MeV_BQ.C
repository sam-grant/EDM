void S12S18_c_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 16:15:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8897,-0.5561596,2728.021,0.5618392);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[22] = {
   367.2385,
   456.7075,
   570.1081,
   694.7359,
   815.8178,
   938.6514,
   1062.74,
   1188.098,
   1312.71,
   1435.778,
   1562.012,
   1685.106,
   1810.598,
   1935.076,
   2060.312,
   2184.99,
   2309.085,
   2433.14,
   2559.752,
   2678.662,
   2780.904,
   2886.857};
   Double_t Graph0_fy1039[22] = {
   9.297462,
   3.09753,
   2.39013,
   -0.1097634,
   0.160845,
   0.4176527,
   -0.3668365,
   -0.3803254,
   -0.4962537,
   -0.4157711,
   -0.260629,
   -0.1630286,
   -0.1055686,
   -0.05053066,
   -0.07540339,
   -0.05405529,
   -0.02652251,
   -0.05252758,
   0.0003906203,
   0.05331999,
   -0.04115552,
   -1.294229};
   Double_t Graph0_fex1039[22] = {
   0.1830309,
   0.09171714,
   0.06159356,
   0.04208012,
   0.03402449,
   0.03067219,
   0.02917568,
   0.02818454,
   0.02862272,
   0.02882038,
   0.03089893,
   0.03263451,
   0.03667816,
   0.04023789,
   0.04606633,
   0.05078197,
   0.05867116,
   0.07077055,
   0.0840277,
   0.09624685,
   0.1948998,
   1.250899};
   Double_t Graph0_fey1039[22] = {
   1.06764,
   0.09479619,
   0.04647171,
   0.02799799,
   0.01942381,
   0.01596028,
   0.01405716,
   0.0126777,
   0.01190574,
   0.01129849,
   0.01127467,
   0.01094698,
   0.01137093,
   0.01152521,
   0.01212355,
   0.01238261,
   0.01306206,
   0.01427149,
   0.01538747,
   0.01697534,
   0.04350563,
   0.2227779};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12S18",100,114.9502,3140.213);
   Graph_Graph01039->SetMinimum(-0.4443597);
   Graph_Graph01039->SetMaximum(0.4500393);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(21,79);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
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
