void S0S12S18_AEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:55:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0369,-5.61825e-06,3380.183,2.388532e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1209[11] = {
   451.6625,
   653.2306,
   880.1522,
   1123.109,
   1371.16,
   1620.232,
   1867.231,
   2115.224,
   2363.097,
   2614.532,
   2791.457};
   Double_t Graph0_fy1209[11] = {
   5.931595e-08,
   1.358782e-07,
   7.649776e-08,
   9.867849e-08,
   1.322751e-07,
   1.87181e-07,
   3.301735e-07,
   4.392667e-07,
   5.126104e-07,
   1.076405e-06,
   1.225295e-05};
   Double_t Graph0_fex1209[11] = {
   0.08852516,
   0.07493234,
   0.05436515,
   0.05319776,
   0.05691237,
   0.06298955,
   0.07334976,
   0.09100092,
   0.1180313,
   0.1452257,
   0.1956995};
   Double_t Graph0_fey1209[11] = {
   7.603048e-07,
   5.239108e-08,
   1.794502e-08,
   1.646124e-08,
   2.023914e-08,
   2.741431e-08,
   4.30466e-08,
   8.107538e-08,
   1.717064e-07,
   3.272669e-07,
   6.7151e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1209,Graph0_fy1209,Graph0_fex1209,Graph0_fey1209);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01209 = new TH1F("Graph_Graph01209","S0S12S18_",100,217.5661,3025.661);
   Graph_Graph01209->SetMinimum(-2.667893e-06);
   Graph_Graph01209->SetMaximum(2.093496e-05);
   Graph_Graph01209->SetDirectory(0);
   Graph_Graph01209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01209->SetLineColor(ci);
   Graph_Graph01209->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01209->GetXaxis()->SetRange(0,100);
   Graph_Graph01209->GetXaxis()->CenterTitle(true);
   Graph_Graph01209->GetXaxis()->SetLabelFont(42);
   Graph_Graph01209->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01209->GetXaxis()->SetTitleFont(42);
   Graph_Graph01209->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01209->GetYaxis()->CenterTitle(true);
   Graph_Graph01209->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01209->GetYaxis()->SetLabelFont(42);
   Graph_Graph01209->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01209->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01209->GetYaxis()->SetTitleFont(42);
   Graph_Graph01209->GetZaxis()->SetLabelFont(42);
   Graph_Graph01209->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01209);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
