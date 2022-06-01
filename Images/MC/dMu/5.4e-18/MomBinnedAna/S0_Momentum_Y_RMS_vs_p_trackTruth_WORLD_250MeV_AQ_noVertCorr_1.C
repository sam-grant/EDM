void S0_Momentum_Y_RMS_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9161,1.566146,3392.245,26.8971);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1067[12] = {
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
   Double_t Graph0_fy1067[12] = {
   5.890291,
   14.49653,
   17.33958,
   19.90973,
   21.52684,
   22.36694,
   22.66451,
   22.3379,
   21.41966,
   19.81366,
   17.16346,
   13.3446};
   Double_t Graph0_fex1067[12] = {
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
   Double_t Graph0_fey1067[12] = {
   0.10232,
   0.01238279,
   0.008145751,
   0.008783878,
   0.00951243,
   0.01012513,
   0.01075635,
   0.0113821,
   0.01206316,
   0.0128401,
   0.0137847,
   0.01771553};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1067,Graph0_fy1067,Graph0_fex1067,Graph0_fey1067);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01067 = new TH1F("Graph_Graph01067","S0_",100,0,3108.587);
   Graph_Graph01067->SetMinimum(4.099242);
   Graph_Graph01067->SetMaximum(24.364);
   Graph_Graph01067->SetDirectory(0);
   Graph_Graph01067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01067->SetLineColor(ci);
   Graph_Graph01067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01067->GetXaxis()->SetRange(1,97);
   Graph_Graph01067->GetXaxis()->CenterTitle(true);
   Graph_Graph01067->GetXaxis()->SetLabelFont(42);
   Graph_Graph01067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01067->GetXaxis()->SetTitleFont(42);
   Graph_Graph01067->GetYaxis()->CenterTitle(true);
   Graph_Graph01067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01067->GetYaxis()->SetLabelFont(42);
   Graph_Graph01067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01067->GetYaxis()->SetTitleFont(42);
   Graph_Graph01067->GetZaxis()->SetLabelFont(42);
   Graph_Graph01067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01067);
   
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
