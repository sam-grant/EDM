void S18_AEDM_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(491.3947,-0.5684953,3023.315,1.294773);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[22] = {
   363.6742,
   456.9233,
   570.967,
   695.2657,
   815.5224,
   938.5771,
   1061.925,
   1188.005,
   1312.76,
   1436.187,
   1562.16,
   1685.106,
   1809.264,
   1935.72,
   2061.24,
   2185.339,
   2308.766,
   2432.082,
   2557.212,
   2678.382,
   2781.661,
   2879.577};
   Double_t Graph0_fy1029[22] = {
   19.45968,
   -0.7030904,
   -2.488748,
   0.9731399,
   -0.2825713,
   -0.486248,
   0.2538607,
   -0.2753355,
   0.3987617,
   -0.432753,
   0.2575126,
   0.07075238,
   0.2151489,
   -0.2031583,
   0.1965865,
   0.2611245,
   -0.1018805,
   0.3373695,
   0.1890101,
   -0.04142021,
   0.1638113,
   -5.217828};
   Double_t Graph0_fex1029[22] = {
   2.024653,
   1.162748,
   0.839956,
   0.5830775,
   0.4782164,
   0.4268731,
   0.4104285,
   0.3959997,
   0.3957923,
   0.4014006,
   0.4393616,
   0.4715054,
   0.5277951,
   0.5765813,
   0.6515722,
   0.7132642,
   0.8283014,
   1.013706,
   1.241928,
   1.421088,
   3.295854,
   1.395883};
   Double_t Graph0_fey1029[22] = {
   14.49035,
   1.685019,
   0.8672306,
   0.5479944,
   0.3875885,
   0.309814,
   0.2752516,
   0.2537079,
   0.2316166,
   0.2227145,
   0.2212669,
   0.2198896,
   0.2251803,
   0.2280277,
   0.2365696,
   0.2384499,
   0.2500341,
   0.2627947,
   0.2751468,
   0.2996187,
   0.4836073,
   3.941671};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","S18",100,109.7171,3132.906);
   Graph_Graph01029->SetMinimum(-0.3821685);
   Graph_Graph01029->SetMaximum(1.108446);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(22,88);
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
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
