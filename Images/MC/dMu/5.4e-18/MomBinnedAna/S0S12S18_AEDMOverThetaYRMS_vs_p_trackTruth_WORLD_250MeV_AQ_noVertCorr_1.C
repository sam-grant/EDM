void S0S12S18_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9276,-0.01603612,3392.348,0.02050123);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1229[12] = {
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
   Double_t Graph0_fy1229[12] = {
   -0.00994656,
   0.003904393,
   0.004764166,
   0.006985468,
   0.008610631,
   0.01102629,
   0.0120676,
   0.01336715,
   0.01294819,
   0.01383691,
   0.01360803,
   0.01059413};
   Double_t Graph0_fex1229[12] = {
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
   Double_t Graph0_fey1229[12] = {
   -0.01607737,
   0.00074988,
   0.0004132298,
   0.0003882519,
   0.0003891428,
   0.000398888,
   0.0004182243,
   0.0004494374,
   0.0004976301,
   0.0005747613,
   0.0007165883,
   0.001185922};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1229,Graph0_fy1229,Graph0_fex1229,Graph0_fey1229);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01229 = new TH1F("Graph_Graph01229","S0S12S18_",100,0,3108.681);
   Graph_Graph01229->SetMinimum(-0.01238238);
   Graph_Graph01229->SetMaximum(0.0168475);
   Graph_Graph01229->SetDirectory(0);
   Graph_Graph01229->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01229->SetLineColor(ci);
   Graph_Graph01229->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01229->GetXaxis()->SetRange(1,97);
   Graph_Graph01229->GetXaxis()->CenterTitle(true);
   Graph_Graph01229->GetXaxis()->SetLabelFont(42);
   Graph_Graph01229->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01229->GetXaxis()->SetTitleFont(42);
   Graph_Graph01229->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01229->GetYaxis()->CenterTitle(true);
   Graph_Graph01229->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01229->GetYaxis()->SetLabelFont(42);
   Graph_Graph01229->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01229->GetYaxis()->SetTitleFont(42);
   Graph_Graph01229->GetZaxis()->SetLabelFont(42);
   Graph_Graph01229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01229);
   
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
