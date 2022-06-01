void S0S12S18_Ag2_vs_p_A_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9276,-6.038928e-05,3392.348,0.0001270596);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1220[12] = {
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
   Double_t Graph0_fy1220[12] = {
   3.333515e-05,
   6.071998e-08,
   5.590709e-09,
   7.949594e-10,
   -8.808522e-10,
   2.413371e-10,
   -4.275173e-09,
   -4.46438e-09,
   -7.657064e-09,
   -6.910985e-09,
   -6.045237e-09,
   -2.499123e-08};
   Double_t Graph0_fex1220[12] = {
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
   Double_t Graph0_fey1220[12] = {
   6.248295e-05,
   6.224348e-09,
   1.044185e-09,
   8.594975e-10,
   8.60427e-10,
   9.257348e-10,
   1.080756e-09,
   1.380472e-09,
   1.983468e-09,
   3.327632e-09,
   7.130348e-09,
   3.506895e-08};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1220,Graph0_fy1220,Graph0_fex1220,Graph0_fey1220);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01220 = new TH1F("Graph_Graph01220","S0S12S18_",100,0,3108.681);
   Graph_Graph01220->SetMinimum(-4.16444e-05);
   Graph_Graph01220->SetMaximum(0.0001083147);
   Graph_Graph01220->SetDirectory(0);
   Graph_Graph01220->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01220->SetLineColor(ci);
   Graph_Graph01220->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01220->GetXaxis()->SetRange(1,97);
   Graph_Graph01220->GetXaxis()->CenterTitle(true);
   Graph_Graph01220->GetXaxis()->SetLabelFont(42);
   Graph_Graph01220->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01220->GetXaxis()->SetTitleFont(42);
   Graph_Graph01220->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01220->GetYaxis()->CenterTitle(true);
   Graph_Graph01220->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01220->GetYaxis()->SetLabelFont(42);
   Graph_Graph01220->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01220->GetYaxis()->SetTitleFont(42);
   Graph_Graph01220->GetZaxis()->SetLabelFont(42);
   Graph_Graph01220->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01220->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01220);
   
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
