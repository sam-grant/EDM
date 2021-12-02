void S12S18_AEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7271,-0.004825196,2728.307,0.08781478);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[22] = {
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
   Double_t Graph0_fy1040[22] = {
   -0.0003995375,
   0.1287816,
   0.07382176,
   0.07341937,
   0.0265603,
   0.04093747,
   0.04950744,
   0.06451892,
   0.04269798,
   0.04599998,
   0.042645,
   0.05762421,
   0.04713626,
   0.06476011,
   0.05545186,
   0.02345704,
   0.06420056,
   0.003402603,
   0.06984718,
   0.02352413,
   0.0184576,
   0.09535762};
   Double_t Graph0_fex1040[22] = {
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
   Double_t Graph0_fey1040[22] = {
   1.19668,
   0.11073,
   0.05375778,
   0.03259455,
   0.02257634,
   0.01854445,
   0.0162916,
   0.01472873,
   0.01387773,
   0.01314912,
   0.01317172,
   0.01276639,
   0.01324189,
   0.01335391,
   0.01396238,
   0.01423106,
   0.01486514,
   0.01601781,
   0.01698604,
   0.01852303,
   0.04631599,
   0.4518397};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12S18",100,114.711,3140.582);
   Graph_Graph01040->SetMinimum(0.004438802);
   Graph_Graph01040->SetMaximum(0.07855078);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(21,79);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
