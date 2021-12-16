void S18_AEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:18:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8012,-0.1102027,3027.932,1.057738);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1117[22] = {
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
   Double_t Graph0_fy1117[22] = {
   0.3790438,
   0.03442645,
   0.1373877,
   0.06234683,
   0.01965776,
   0.02887239,
   0.02382781,
   0.02304099,
   0.03993523,
   0.06085374,
   0.01199779,
   0.04019958,
   0.04360261,
   0.05687321,
   0.07673721,
   0.03004656,
   0.05725363,
   0.03340705,
   0.008175362,
   0.05170744,
   0.1059513,
   1.300073};
   Double_t Graph0_fex1117[22] = {
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
   Double_t Graph0_fey1117[22] = {
   1.223797,
   0.1130436,
   0.05462946,
   0.033687,
   0.02356431,
   0.01946597,
   0.0171387,
   0.01551721,
   0.01472035,
   0.01400806,
   0.01404255,
   0.01368873,
   0.01433973,
   0.01452973,
   0.0153017,
   0.01557115,
   0.01639365,
   0.01774414,
   0.01858786,
   0.02017631,
   0.05230957,
   0.5876478};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1117,Graph0_fy1117,Graph0_fex1117,Graph0_fey1117);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01117 = new TH1F("Graph_Graph01117","S18",100,115.2427,3137.489);
   Graph_Graph01117->SetMinimum(0.006591414);
   Graph_Graph01117->SetMaximum(0.9409443);
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
