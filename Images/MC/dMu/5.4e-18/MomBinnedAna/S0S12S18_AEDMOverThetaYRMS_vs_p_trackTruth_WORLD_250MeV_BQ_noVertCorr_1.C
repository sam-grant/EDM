void S0S12S18_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 13 12:27:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-377.6585,-inf,3398.926,inf);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1225[12] = {
   197.1837,
   451.9673,
   653.3489,
   880.33,
   1123.071,
   1371.146,
   1620.133,
   1867.045,
   2115.331,
   2363.045,
   2613.562,
   2792.136};
   Double_t Graph0_fy1225[12] = {
   -inf,
   0.001355106,
   0.00504068,
   0.005708613,
   0.00706705,
   0.00908412,
   0.01141011,
   0.01171461,
   0.01061432,
   0.01124125,
   0.01530717,
   0.0002955045};
   Double_t Graph0_fex1225[12] = {
   0,
   0.06119317,
   0.05168435,
   0.03738165,
   0.03651084,
   0.03897018,
   0.04308696,
   0.05035664,
   0.06256782,
   0.08122338,
   0.09940193,
   0.1408526};
   Double_t Graph0_fey1225[12] = {
   nan,
   0.002620108,
   0.001059931,
   0.0007391091,
   0.000717121,
   0.000765834,
   0.0008477102,
   0.0009923138,
   0.00123378,
   0.001599974,
   0.002016332,
   0.005635141};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1225,Graph0_fy1225,Graph0_fex1225,Graph0_fey1225);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01225 = new TH1F("Graph_Graph01225","S0S12S18_",100,0,3051.786);
   Graph_Graph01225->SetMinimum(-inf);
   Graph_Graph01225->SetMaximum(inf);
   Graph_Graph01225->SetDirectory(0);
   Graph_Graph01225->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01225->SetLineColor(ci);
   Graph_Graph01225->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01225->GetXaxis()->SetRange(1,99);
   Graph_Graph01225->GetXaxis()->CenterTitle(true);
   Graph_Graph01225->GetXaxis()->SetLabelFont(42);
   Graph_Graph01225->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01225->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01225->GetXaxis()->SetTitleFont(42);
   Graph_Graph01225->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01225->GetYaxis()->CenterTitle(true);
   Graph_Graph01225->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01225->GetYaxis()->SetLabelFont(42);
   Graph_Graph01225->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01225->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01225->GetYaxis()->SetTitleFont(42);
   Graph_Graph01225->GetZaxis()->SetLabelFont(42);
   Graph_Graph01225->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01225);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.995,0.6079899,nan,"blNDC");
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
