void S0S12S18_AEDM_vs_p_A_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9276,-0.0001479758,3392.348,3.877112e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1219[12] = {
   108.2896,
   434.5899,
   631.4838,
   875.6403,
   1124.365,
   1373.494,
   1622.54,
   1871.412,
   2120.028,
   2367.769,
   2613.336,
   2835.794};
   Double_t Graph0_fy1219[12] = {
   -5.460236e-05,
   2.523125e-08,
   9.254828e-09,
   1.119247e-08,
   1.420616e-08,
   1.956567e-08,
   2.354457e-08,
   3.056732e-08,
   3.576386e-08,
   4.691871e-08,
   6.46634e-08,
   1.566853e-07};
   Double_t Graph0_fex1219[12] = {
   0.7834909,
   0.02492032,
   0.02074975,
   0.01979805,
   0.01986555,
   0.02035385,
   0.02133799,
   0.02291371,
   0.02533708,
   0.02919491,
   0.03608619,
   0.05228636};
   Double_t Graph0_fey1219[12] = {
   6.224899e-05,
   6.051083e-09,
   1.017893e-09,
   8.465271e-10,
   8.538174e-10,
   9.197768e-10,
   1.056358e-09,
   1.297398e-09,
   1.724592e-09,
   2.572037e-09,
   4.741127e-09,
   2.020327e-08};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1219,Graph0_fy1219,Graph0_fex1219,Graph0_fey1219);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01219 = new TH1F("Graph_Graph01219","S0S12S18_",100,0,3108.681);
   Graph_Graph01219->SetMinimum(-0.0001293011);
   Graph_Graph01219->SetMaximum(2.009643e-05);
   Graph_Graph01219->SetDirectory(0);
   Graph_Graph01219->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01219->SetLineColor(ci);
   Graph_Graph01219->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01219->GetXaxis()->SetRange(1,97);
   Graph_Graph01219->GetXaxis()->CenterTitle(true);
   Graph_Graph01219->GetXaxis()->SetLabelFont(42);
   Graph_Graph01219->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01219->GetXaxis()->SetTitleFont(42);
   Graph_Graph01219->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01219->GetYaxis()->CenterTitle(true);
   Graph_Graph01219->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01219->GetYaxis()->SetLabelFont(42);
   Graph_Graph01219->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01219->GetYaxis()->SetTitleFont(42);
   Graph_Graph01219->GetZaxis()->SetLabelFont(42);
   Graph_Graph01219->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01219->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01219);
   
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
