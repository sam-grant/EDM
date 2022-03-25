void S18_AEDM_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0181,-4.348495,3028.101,0.6074695);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1117[22] = {
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
   Double_t Graph0_fy1117[22] = {
   4.315639,
   -0.1240695,
   -0.004422309,
   0.05519746,
   0.03265406,
   0.03622945,
   0.06664032,
   0.007045375,
   0.02876621,
   -0.03776145,
   0.01277667,
   0.01608466,
   0.009171638,
   -0.01631298,
   0.05427235,
   0.03536918,
   -0.00319278,
   0.01727781,
   0.01264307,
   -0.01156745,
   0.09453404,
   -8.544973};
   Double_t Graph0_fex1117[22] = {
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
   Double_t Graph0_fey1117[22] = {
   2.180713,
   0.2176281,
   0.1059722,
   0.06483291,
   0.04533026,
   0.03741032,
   0.03295612,
   0.02975124,
   0.02817661,
   0.02678952,
   0.02676449,
   0.02607943,
   0.0271902,
   0.02750785,
   0.02903566,
   0.02942088,
   0.03102349,
   0.03331974,
   0.03481356,
   0.03749849,
   0.09405861,
   1.218336};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1117,Graph0_fy1117,Graph0_fex1117,Graph0_fey1117);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01117 = new TH1F("Graph_Graph01117","S18",100,114.316,3137.699);
   Graph_Graph01117->SetMinimum(-3.852898);
   Graph_Graph01117->SetMaximum(0.111873);
   Graph_Graph01117->SetDirectory(0);
   Graph_Graph01117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01117->SetLineColor(ci);
   Graph_Graph01117->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01117->GetXaxis()->SetRange(22,88);
   Graph_Graph01117->GetXaxis()->CenterTitle(true);
   Graph_Graph01117->GetXaxis()->SetLabelFont(42);
   Graph_Graph01117->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01117->GetXaxis()->SetTitleFont(42);
   Graph_Graph01117->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01117->GetYaxis()->CenterTitle(true);
   Graph_Graph01117->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01117->GetYaxis()->SetLabelFont(42);
   Graph_Graph01117->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01117->GetYaxis()->SetTitleFont(42);
   Graph_Graph01117->GetZaxis()->SetLabelFont(42);
   Graph_Graph01117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01117);
   
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
