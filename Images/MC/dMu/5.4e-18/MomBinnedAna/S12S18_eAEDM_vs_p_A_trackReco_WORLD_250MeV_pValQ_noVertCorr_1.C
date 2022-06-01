void S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5156,-1.978086e-06,3406.64,1.782034e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1187[12] = {
   188.5023,
   430.658,
   629.9831,
   874.0428,
   1123.04,
   1372.476,
   1621.754,
   1870.356,
   2119.083,
   2366.832,
   2612.557,
   2826.056};
   Double_t Graph0_fy1187[12] = {
   1.440063e-05,
   1.098941e-08,
   2.096371e-09,
   1.951395e-09,
   2.194667e-09,
   2.571855e-09,
   3.141602e-09,
   4.1228e-09,
   5.89507e-09,
   9.413241e-09,
   1.859763e-08,
   8.849723e-08};
   Double_t Graph0_fex1187[12] = {
   0.3182369,
   0.03264543,
   0.0264061,
   0.0261527,
   0.0272132,
   0.02867602,
   0.03067767,
   0.03369066,
   0.03820728,
   0.04498019,
   0.05686534,
   0.07229706};
   Double_t Graph0_fey1187[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1187,Graph0_fy1187,Graph0_fex1187,Graph0_fey1187);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01187 = new TH1F("Graph_Graph01187","S12S18_",100,0,3089.923);
   Graph_Graph01187->SetMinimum(1.756255e-09);
   Graph_Graph01187->SetMaximum(1.584049e-05);
   Graph_Graph01187->SetDirectory(0);
   Graph_Graph01187->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01187->SetLineColor(ci);
   Graph_Graph01187->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01187->GetXaxis()->SetRange(1,98);
   Graph_Graph01187->GetXaxis()->CenterTitle(true);
   Graph_Graph01187->GetXaxis()->SetLabelFont(42);
   Graph_Graph01187->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01187->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01187->GetXaxis()->SetTitleFont(42);
   Graph_Graph01187->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01187->GetYaxis()->CenterTitle(true);
   Graph_Graph01187->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01187->GetYaxis()->SetLabelFont(42);
   Graph_Graph01187->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01187->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01187->GetYaxis()->SetTitleFont(42);
   Graph_Graph01187->GetZaxis()->SetLabelFont(42);
   Graph_Graph01187->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01187);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
