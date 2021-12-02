void S12S18_N_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7271,-44882.78,2728.307,2927904);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1046[22] = {
   367.0214,
   457.1148,
   570.1625,
   694.8086,
   815.8612,
   938.5498,
   1062.827,
   1188.304,
   1312.637,
   1435.868,
   1561.967,
   1685.209,
   1810.572,
   1935.056,
   2060.278,
   2184.945,
   2309.063,
   2433.121,
   2559.624,
   2678.42,
   2781.164,
   2887.396};
   Double_t Graph0_fy1046[22] = {
   1690,
   158604,
   490985,
   1029596,
   1635562,
   2042079,
   2255150,
   2391920,
   2359469,
   2285500,
   1997582,
   1775863,
   1410474,
   1165111,
   897653,
   726508,
   544900,
   374550,
   263160,
   174958,
   23093,
   82};
   Double_t Graph0_fex1046[22] = {
   0.1545694,
   0.07591697,
   0.05049688,
   0.03485847,
   0.02797434,
   0.02526573,
   0.0239239,
   0.02321516,
   0.0235825,
   0.0237215,
   0.02554457,
   0.02691619,
   0.03038894,
   0.03327268,
   0.03815493,
   0.04221314,
   0.04875099,
   0.05875127,
   0.07016204,
   0.08089798,
   0.1660287,
   1.029838};
   Double_t Graph0_fey1046[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","S12S18",100,114.711,3140.582);
   Graph_Graph01046->SetMinimum(252395.9);
   Graph_Graph01046->SetMaximum(2630625);
   Graph_Graph01046->SetDirectory(0);
   Graph_Graph01046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01046->SetLineColor(ci);
   Graph_Graph01046->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01046->GetXaxis()->SetRange(21,79);
   Graph_Graph01046->GetXaxis()->CenterTitle(true);
   Graph_Graph01046->GetXaxis()->SetLabelFont(42);
   Graph_Graph01046->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01046->GetXaxis()->SetTitleFont(42);
   Graph_Graph01046->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01046->GetYaxis()->CenterTitle(true);
   Graph_Graph01046->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01046->GetYaxis()->SetLabelFont(42);
   Graph_Graph01046->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01046->GetYaxis()->SetTitleFont(42);
   Graph_Graph01046->GetZaxis()->SetLabelFont(42);
   Graph_Graph01046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01046);
   
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
