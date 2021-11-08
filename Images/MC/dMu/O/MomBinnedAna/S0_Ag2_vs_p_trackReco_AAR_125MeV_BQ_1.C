void S0_Ag2_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-45.54161,2727,13.38015);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1013[22] = {
   -34.7306,
   0.2484823,
   0.1926957,
   -0.03825078,
   0.1979299,
   0.1401587,
   0.1239215,
   -0.1663181,
   -0.0415022,
   -0.1351168,
   -0.001416395,
   0.1097754,
   -0.006462141,
   0.009579884,
   -0.02758041,
   -0.03336136,
   -0.01035808,
   0.03152737,
   -0.02830644,
   -0.1233012,
   -0.05815728,
   3.238117};
   Double_t Graph0_fex1013[22] = {
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
   Double_t Graph0_fey1013[22] = {
   0.9907141,
   0.4303859,
   0.2769027,
   0.1653516,
   0.1256774,
   0.1091531,
   0.09889313,
   0.09309334,
   0.08867777,
   0.08555964,
   0.08427892,
   0.08222167,
   0.08175482,
   0.08193725,
   0.08288628,
   0.08374506,
   0.08459023,
   0.08680696,
   0.08763152,
   0.08285301,
   0.126542,
   0.3217359};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","S0_",100,49.5,3199.5);
   Graph_Graph01013->SetMinimum(-39.64943);
   Graph_Graph01013->SetMaximum(7.48797);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01013->GetXaxis()->SetRange(23,78);
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
