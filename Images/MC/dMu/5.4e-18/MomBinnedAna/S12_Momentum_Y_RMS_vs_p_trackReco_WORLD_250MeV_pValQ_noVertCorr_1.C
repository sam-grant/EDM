void S12_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:48:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5584,4.230196,3407.026,26.35216);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[12] = {
   189.5502,
   430.4081,
   629.9783,
   874.0959,
   1123.062,
   1372.523,
   1621.75,
   1870.433,
   2119.14,
   2366.938,
   2612.615,
   2826.429};
   Double_t Graph0_fy1106[12] = {
   7.971757,
   14.21103,
   17.15593,
   19.71841,
   21.38666,
   22.31182,
   22.65554,
   22.503,
   21.76623,
   20.3527,
   18.04095,
   14.97785};
   Double_t Graph0_fex1106[12] = {
   0.4410399,
   0.04598832,
   0.03725247,
   0.03688839,
   0.03835217,
   0.0403852,
   0.04321711,
   0.04742848,
   0.05379875,
   0.06324179,
   0.07984952,
   0.1016232};
   Double_t Graph0_fey1106[12] = {
   0.05456781,
   0.009139152,
   0.006367731,
   0.007138007,
   0.008044018,
   0.008842358,
   0.009619975,
   0.01048945,
   0.01151882,
   0.01269678,
   0.01432414,
   0.02030302};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","S12_",100,0,3090.273);
   Graph_Graph01106->SetMinimum(6.442392);
   Graph_Graph01106->SetMaximum(24.13996);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01106->GetXaxis()->SetRange(1,98);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->CenterTitle(true);
   Graph_Graph01106->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01106->GetYaxis()->SetLabelFont(42);
   Graph_Graph01106->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01106->GetYaxis()->SetTitleFont(42);
   Graph_Graph01106->GetZaxis()->SetLabelFont(42);
   Graph_Graph01106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01106);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
