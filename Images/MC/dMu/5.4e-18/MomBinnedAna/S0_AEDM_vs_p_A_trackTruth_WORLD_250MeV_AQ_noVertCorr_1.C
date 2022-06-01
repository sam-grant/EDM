void S0_AEDM_vs_p_A_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9161,-0.002265198,3392.245,0.0004539298);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[12] = {
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
   Double_t Graph0_fy1063[12] = {
   -0.0009589508,
   -4.164549e-10,
   5.920912e-08,
   8.064218e-08,
   7.157218e-08,
   9.496579e-08,
   1.297604e-07,
   1.566425e-07,
   2.275658e-07,
   2.169649e-07,
   3.383616e-07,
   5.160729e-07};
   Double_t Graph0_fex1063[12] = {
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
   Double_t Graph0_fey1063[12] = {
   0.000853059,
   7.167339e-08,
   1.190987e-08,
   9.912199e-09,
   9.975905e-09,
   1.07232e-08,
   1.231812e-08,
   1.509197e-08,
   2.000729e-08,
   2.935154e-08,
   5.338794e-08,
   2.258081e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S0_",100,0,3108.587);
   Graph_Graph01063->SetMinimum(-0.001993285);
   Graph_Graph01063->SetMaximum(0.000182017);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(1,97);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
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
