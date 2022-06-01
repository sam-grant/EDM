void S0_Ag2_vs_p_A_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9161,-0.002036474,3392.245,0.0004080903);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[12] = {
   110.482,
   435.4285,
   631.2811,
   875.7082,
   1124.336,
   1373.612,
   1622.589,
   1871.451,
   2120.168,
   2367.803,
   2613.44,
   2835.746};
   Double_t Graph0_fy1064[12] = {
   -0.0008877497,
   4.097448e-07,
   3.355268e-09,
   3.105065e-09,
   -1.809411e-08,
   4.846407e-10,
   -5.996308e-09,
   -1.551823e-08,
   -7.817419e-09,
   2.474641e-08,
   7.25438e-08,
   2.698789e-07};
   Double_t Graph0_fex1064[12] = {
   1.857077,
   0.056166,
   0.04715544,
   0.04495869,
   0.04507164,
   0.04614307,
   0.04839848,
   0.05191887,
   0.05731782,
   0.06582408,
   0.08079891,
   0.1167379};
   Double_t Graph0_fey1064[12] = {
   0.0007412972,
   7.336262e-08,
   1.224463e-08,
   1.005602e-08,
   1.004897e-08,
   1.080295e-08,
   1.258726e-08,
   1.606475e-08,
   2.290223e-08,
   3.811994e-08,
   8.014204e-08,
   3.929904e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S0_",100,0,3108.587);
   Graph_Graph01064->SetMinimum(-0.001792018);
   Graph_Graph01064->SetMaximum(0.0001636338);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(1,97);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
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
