void S0_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9161,-0.1049243,3392.245,0.04069895);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[12] = {
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
   Double_t Graph0_fy1073[12] = {
   -0.08065377,
   0.002255611,
   0.005900806,
   0.008917185,
   0.00833446,
   0.01152258,
   0.01287681,
   0.01318593,
   0.01530219,
   0.01336074,
   0.01357232,
   0.007288351};
   Double_t Graph0_fex1073[12] = {
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
   Double_t Graph0_fey1073[12] = {
   -0.03667617,
   0.001708923,
   0.0009377479,
   0.0008815753,
   0.0008827648,
   0.0009042678,
   0.0009482768,
   0.001018604,
   0.001126213,
   0.001293439,
   0.001605677,
   0.002651315};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S0_",100,0,3108.587);
   Graph_Graph01073->SetMinimum(-0.09036199);
   Graph_Graph01073->SetMaximum(0.02613662);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01073->GetXaxis()->SetRange(1,97);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
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
