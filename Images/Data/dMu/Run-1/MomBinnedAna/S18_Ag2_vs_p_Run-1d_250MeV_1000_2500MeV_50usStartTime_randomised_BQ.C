#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_Ag2_vs_p_Run-1d_250MeV_1000_2500MeV_50usStartTime_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 11:40:46 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.3487,-0.03663138,2703.496,0.04352187);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1074[11] = {
   456.4516,
   653.3441,
   883.6048,
   1127.183,
   1372.834,
   1619.467,
   1866.49,
   2115.652,
   2359.14,
   2606.684,
   2781.155};
   Double_t Graph0_fy1074[11] = {
   0.1344571,
   0.01260476,
   0.0305452,
   0.01633616,
   -0.01230146,
   0.01455247,
   -0.03643316,
   0.01063758,
   -0.005409186,
   0.0143931,
   -0.01736232};
   Double_t Graph0_fex1074[11] = {
   0.09432122,
   0.06716796,
   0.04563289,
   0.0415835,
   0.04148536,
   0.04630593,
   0.05732059,
   0.07282875,
   0.0969775,
   0.1332929,
   0.2302059};
   Double_t Graph0_fey1074[11] = {
   0.1308644,
   0.03384887,
   0.01767084,
   0.01354516,
   0.01196254,
   0.01160573,
   0.0121671,
   0.01318618,
   0.01488997,
   0.01759558,
   0.06866154};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1074,Graph0_fy1074,Graph0_fex1074,Graph0_fey1074);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01074 = new TH1F("Graph_Graph01074","S18",100,223.8545,3013.888);
   Graph_Graph01074->SetMinimum(-0.02861605);
   Graph_Graph01074->SetMaximum(0.03550655);
   Graph_Graph01074->SetDirectory(0);
   Graph_Graph01074->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01074->SetLineColor(ci);
   Graph_Graph01074->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01074->GetXaxis()->SetRange(28,82);
   Graph_Graph01074->GetXaxis()->CenterTitle(true);
   Graph_Graph01074->GetXaxis()->SetLabelFont(42);
   Graph_Graph01074->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01074->GetXaxis()->SetTitleFont(42);
   Graph_Graph01074->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01074->GetYaxis()->CenterTitle(true);
   Graph_Graph01074->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01074->GetYaxis()->SetLabelFont(42);
   Graph_Graph01074->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01074->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01074->GetYaxis()->SetTitleFont(42);
   Graph_Graph01074->GetZaxis()->SetLabelFont(42);
   Graph_Graph01074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01074);
   
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
