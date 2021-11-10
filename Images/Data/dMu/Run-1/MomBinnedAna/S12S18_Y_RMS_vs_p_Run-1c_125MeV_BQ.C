void S12S18_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,10.53033,2727,21.56344);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[22] = {
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
   Double_t Graph0_fy1041[22] = {
   14.0084,
   13.46581,
   12.86825,
   12.59389,
   12.59014,
   12.56156,
   12.53752,
   12.51331,
   12.50254,
   12.50998,
   12.5115,
   12.51134,
   12.50125,
   12.46737,
   12.42069,
   12.3926,
   12.38684,
   12.3835,
   12.44791,
   12.64641,
   13.35301,
   18.29592};
   Double_t Graph0_fex1041[22] = {
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
   Double_t Graph0_fey1041[22] = {
   0.2412375,
   0.02393749,
   0.01299902,
   0.008784766,
   0.006967711,
   0.006221591,
   0.005909063,
   0.005726471,
   0.005760582,
   0.005856652,
   0.006265037,
   0.006644568,
   0.007449553,
   0.008174413,
   0.009278125,
   0.01028986,
   0.01187587,
   0.01431981,
   0.01717272,
   0.02139811,
   0.0622141,
   1.428671};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","S12S18",100,49.5,3199.5);
   Graph_Graph01041->SetMinimum(11.63364);
   Graph_Graph01041->SetMaximum(20.46013);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->SetRange(23,78);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
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
