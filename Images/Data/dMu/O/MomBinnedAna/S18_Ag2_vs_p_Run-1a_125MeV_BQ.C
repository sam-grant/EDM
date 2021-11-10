void S18_Ag2_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 11:23:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-6.099195,2727,9.86437);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[22] = {
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
   Double_t Graph0_fy1025[22] = {
   -0.2892627,
   -0.1789059,
   0.2538561,
   0.1407095,
   0.08999322,
   -0.04023285,
   -0.0534868,
   0.08889733,
   -0.02398247,
   0.04465899,
   -0.0320729,
   0.02989552,
   0.005781798,
   0.03882598,
   0.02215613,
   0.02372424,
   -0.03873032,
   -0.03304024,
   0.002452025,
   -0.1351011,
   0.05154214,
   3.621502};
   Double_t Graph0_fex1025[22] = {
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
   Double_t Graph0_fey1025[22] = {
   3.149338,
   0.3094273,
   0.1513014,
   0.09195554,
   0.06468061,
   0.05336207,
   0.04693365,
   0.04256289,
   0.04017483,
   0.03825829,
   0.03826339,
   0.03729798,
   0.03883369,
   0.03935893,
   0.04141934,
   0.04188742,
   0.04426422,
   0.04773715,
   0.04993801,
   0.0534565,
   0.1309911,
   3.582274};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","S18",100,49.5,3199.5);
   Graph_Graph01025->SetMinimum(-4.502838);
   Graph_Graph01025->SetMaximum(8.268013);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01025->GetXaxis()->SetRange(23,78);
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
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
