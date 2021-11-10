void S18_AEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 09:18:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-3.618293,2727,3.906117);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[22] = {
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
   Double_t Graph0_fy1028[22] = {
   0.6079959,
   0.2195818,
   0.05251512,
   0.07734867,
   0.07826894,
   0.0583667,
   0.05374822,
   0.04707331,
   0.006174791,
   0.05218219,
   0.02004414,
   0.01147117,
   0.01028969,
   0.01284349,
   0.07433022,
   0.003623721,
   0.05245935,
   0.0398558,
   0.03455309,
   -0.04459035,
   0.1896418,
   -0.7470382};
   Double_t Graph0_fex1028[22] = {
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
   Double_t Graph0_fey1028[22] = {
   2.044053,
   0.1854949,
   0.09068824,
   0.05534511,
   0.038903,
   0.03220156,
   0.02836592,
   0.02562912,
   0.02423306,
   0.02311028,
   0.02301794,
   0.02245822,
   0.02337703,
   0.02378728,
   0.02507117,
   0.02541383,
   0.02661829,
   0.02877177,
   0.0300961,
   0.03242304,
   0.08203005,
   1.617187};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S18",100,49.5,3199.5);
   Graph_Graph01028->SetMinimum(-2.865852);
   Graph_Graph01028->SetMaximum(3.153676);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->SetRange(23,78);
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
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
