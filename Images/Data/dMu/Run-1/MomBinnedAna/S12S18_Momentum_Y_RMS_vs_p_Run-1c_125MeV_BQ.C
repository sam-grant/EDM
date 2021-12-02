void S12S18_Momentum_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7271,13.28394,2728.307,23.54568);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[22] = {
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
   Double_t Graph0_fy1045[22] = {
   13.05045,
   14.22802,
   15.15113,
   16.14467,
   16.57234,
   17.52593,
   18.30857,
   19.05707,
   19.7055,
   20.10849,
   20.47804,
   20.1913,
   20.05043,
   19.67067,
   19.23138,
   18.67534,
   17.86749,
   16.83301,
   15.72884,
   14.6353,
   13.81662,
   13.56174};
   Double_t Graph0_fex1045[22] = {
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
   Double_t Graph0_fey1045[22] = {
   0.2244746,
   0.02526458,
   0.01529025,
   0.01125104,
   0.009163379,
   0.008672577,
   0.00862156,
   0.008713823,
   0.009071974,
   0.009406436,
   0.01024649,
   0.01071504,
   0.01193886,
   0.01288704,
   0.01435346,
   0.01549337,
   0.01711595,
   0.01944914,
   0.02168124,
   0.02474186,
   0.06429744,
   1.058994};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S12S18",100,114.711,3140.582);
   Graph_Graph01045->SetMinimum(14.31012);
   Graph_Graph01045->SetMaximum(22.51951);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01045->GetXaxis()->SetRange(21,79);
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
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
