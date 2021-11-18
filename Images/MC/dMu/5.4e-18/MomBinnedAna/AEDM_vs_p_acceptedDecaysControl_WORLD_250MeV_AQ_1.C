void AEDM_vs_p_acceptedDecaysControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:29:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.691,-0.002109986,2750.498,0.3507466);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[12] = {
   141.6991,
   381.0661,
   628.328,
   876.3509,
   1124.574,
   1373.652,
   1622.836,
   1871.414,
   2119.624,
   2367.726,
   2613.52,
   2850.227};
   Double_t Graph0_fy1010[12] = {
   0.2475976,
   0.2722366,
   0.2471647,
   0.2621817,
   0.2579979,
   0.2532684,
   0.2322391,
   0.2155134,
   0.1866109,
   0.1509086,
   0.1117554,
   0.0614348};
   Double_t Graph0_fex1010[12] = {
   0.02289401,
   0.02098567,
   0.01898876,
   0.01784357,
   0.01766279,
   0.01809788,
   0.01885087,
   0.02018248,
   0.02240582,
   0.02600361,
   0.03208372,
   0.04542578};
   Double_t Graph0_fey1010[12] = {
   0.04433958,
   0.01848812,
   0.01208914,
   0.009059758,
   0.00749271,
   0.006509676,
   0.005786374,
   0.005301229,
   0.004976071,
   0.004754545,
   0.004607989,
   0.004735354};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","",100,0,3121.132);
   Graph_Graph01010->SetMinimum(0.03317568);
   Graph_Graph01010->SetMaximum(0.315461);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01010->GetXaxis()->SetRange(25,81);
   Graph_Graph01010->GetXaxis()->CenterTitle(true);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01010->GetYaxis()->CenterTitle(true);
   Graph_Graph01010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01010->GetYaxis()->SetLabelFont(42);
   Graph_Graph01010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01010->GetYaxis()->SetTitleFont(42);
   Graph_Graph01010->GetZaxis()->SetLabelFont(42);
   Graph_Graph01010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01010);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
