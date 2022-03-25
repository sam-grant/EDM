void S18_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0181,8.577135,3028.101,23.05736);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1121[22] = {
   366.5718,
   457.0815,
   570.2768,
   694.4958,
   815.6467,
   938.5005,
   1062.783,
   1188.162,
   1312.628,
   1435.781,
   1561.988,
   1685.031,
   1810.405,
   1935.059,
   2060.338,
   2184.726,
   2309.137,
   2433.452,
   2559.776,
   2678.028,
   2781.271,
   2884.595};
   Double_t Graph0_fy1121[22] = {
   13.75307,
   13.62573,
   13.00746,
   12.74876,
   12.73772,
   12.70797,
   12.69141,
   12.68156,
   12.70608,
   12.70757,
   12.71653,
   12.70964,
   12.68808,
   12.65596,
   12.58119,
   12.54475,
   12.5313,
   12.55242,
   12.57942,
   12.764,
   13.93553,
   21.1};
   Double_t Graph0_fex1121[22] = {
   0.3072112,
   0.1507727,
   0.09980393,
   0.06933791,
   0.05635711,
   0.05117529,
   0.04849768,
   0.04705172,
   0.04807911,
   0.04855352,
   0.05210895,
   0.05537262,
   0.06271132,
   0.06865787,
   0.0791007,
   0.08736164,
   0.1013737,
   0.1229507,
   0.144539,
   0.1658783,
   0.3496264,
   1.155309};
   Double_t Graph0_fey1121[22] = {
   0.4745259,
   0.04773763,
   0.02590901,
   0.01769204,
   0.01416942,
   0.01272102,
   0.01211807,
   0.01175317,
   0.01191702,
   0.01214047,
   0.01299741,
   0.01385456,
   0.01558264,
   0.01713026,
   0.01946886,
   0.0215789,
   0.02503148,
   0.03029106,
   0.03571797,
   0.04428903,
   0.1344312,
   2.983991};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1121,Graph0_fy1121,Graph0_fex1121,Graph0_fey1121);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01121 = new TH1F("Graph_Graph01121","S18",100,114.316,3137.699);
   Graph_Graph01121->SetMinimum(10.02516);
   Graph_Graph01121->SetMaximum(21.60934);
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
