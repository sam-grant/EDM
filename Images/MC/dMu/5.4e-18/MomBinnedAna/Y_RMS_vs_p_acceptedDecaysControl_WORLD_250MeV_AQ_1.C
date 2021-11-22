void Y_RMS_vs_p_acceptedDecaysControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:10:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-374.5359,12.8932,3370.823,13.38132);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[12] = {
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
   Double_t Graph0_fy1018[12] = {
   12.9778,
   13.08596,
   13.1622,
   13.18372,
   13.17592,
   13.17882,
   13.19261,
   13.20672,
   13.20713,
   13.22894,
   13.25455,
   13.29368};
   Double_t Graph0_fex1018[12] = {
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
   Double_t Graph0_fey1018[12] = {
   0.003241292,
   0.002704292,
   0.002450848,
   0.002309775,
   0.002283318,
   0.002338071,
   0.002440021,
   0.002617024,
   0.002909385,
   0.003388576,
   0.004220418,
   0.006289329};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#sigma_{y} [mm] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","",100,0,3121.132);
   Graph_Graph01018->SetMinimum(12.94201);
   Graph_Graph01018->SetMaximum(13.33251);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(1,96);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
