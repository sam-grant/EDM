void AEDMOverMaxDiff_vs_p_acceptedDecaysControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:29:21 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(526.691,-0.0003138934,2750.498,0.004534727);
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
   0.0002314113,
   0.001164819,
   0.001579073,
   0.002145192,
   0.0025601,
   0.00288095,
   0.00309461,
   0.003465892,
   0.003481253,
   0.003351455,
   0.003065903,
   0.002203991};
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
   4.144614e-05,
   8.053587e-05,
   8.30721e-05,
   9.125617e-05,
   0.0001070603,
   0.0001239276,
   0.0001469024,
   0.0001893021,
   0.0002177119,
   0.0002491775,
   0.0002846597,
   0.0002938469};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","",100,0,3121.132);
   Graph_Graph01018->SetMinimum(0.0001709686);
   Graph_Graph01018->SetMaximum(0.004049865);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(25,81);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
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
