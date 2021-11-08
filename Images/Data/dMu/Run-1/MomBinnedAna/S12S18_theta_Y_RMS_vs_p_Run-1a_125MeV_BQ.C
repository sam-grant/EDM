void S12S18_theta_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 11:18:35 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-3.299075,2727,42.79812);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[22] = {
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
   Double_t Graph0_fy1040[22] = {
   34.24868,
   31.39815,
   26.63292,
   23.33951,
   20.39489,
   18.72545,
   17.28056,
   16.08607,
   15.03305,
   14.04443,
   13.13808,
   11.99015,
   11.09839,
   10.169,
   9.356261,
   8.54849,
   7.754163,
   6.938873,
   6.165838,
   5.473577,
   4.986088,
   4.920681};
   Double_t Graph0_fex1040[22] = {
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
   Double_t Graph0_fey1040[22] = {
   0.8665694,
   0.07982817,
   0.038573,
   0.0232315,
   0.01611066,
   0.01324401,
   0.01164425,
   0.01050291,
   0.00986879,
   0.00936438,
   0.009351383,
   0.00904902,
   0.009380793,
   0.00944717,
   0.009893336,
   0.01002334,
   0.01049921,
   0.01130236,
   0.01191569,
   0.0129002,
   0.03211688,
   0.5368903};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12S18",100,49.5,3199.5);
   Graph_Graph01040->SetMinimum(1.310645);
   Graph_Graph01040->SetMaximum(38.1884);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(23,78);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
