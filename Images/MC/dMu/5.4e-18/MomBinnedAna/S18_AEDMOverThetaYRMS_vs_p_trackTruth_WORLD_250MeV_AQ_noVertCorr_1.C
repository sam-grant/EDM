void S18_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.8896,-0.006921718,3392.006,0.07540937);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1151[12] = {
   108.5446,
   434.6476,
   631.5638,
   875.6019,
   1124.352,
   1373.451,
   1622.525,
   1871.337,
   2119.952,
   2367.654,
   2613.27,
   2835.462};
   Double_t Graph0_fy1151[12] = {
   0.03648388,
   0.002645906,
   0.004663544,
   0.006711329,
   0.009090895,
   0.01045148,
   0.01158143,
   0.01299542,
   0.01285639,
   0.01581278,
   0.01500643,
   0.009306052};
   Double_t Graph0_fex1151[12] = {
   1.225218,
   0.03944693,
   0.03276533,
   0.03126549,
   0.0314118,
   0.03219687,
   0.03374371,
   0.03626405,
   0.04010891,
   0.04633167,
   0.05744501,
   0.08325579};
   Double_t Graph0_fey1151[12] = {
   0.02471792,
   0.001188803,
   0.0006527087,
   0.0006133267,
   0.000615066,
   0.0006309551,
   0.0006614767,
   0.0007114265,
   0.0007878301,
   0.0009126757,
   0.00114093,
   0.001892891};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1151,Graph0_fy1151,Graph0_fex1151,Graph0_fey1151);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01151 = new TH1F("Graph_Graph01151","S18_",100,0,3108.367);
   Graph_Graph01151->SetMinimum(0.001311392);
   Graph_Graph01151->SetMaximum(0.06717627);
   Graph_Graph01151->SetDirectory(0);
   Graph_Graph01151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01151->SetLineColor(ci);
   Graph_Graph01151->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01151->GetXaxis()->SetRange(1,97);
   Graph_Graph01151->GetXaxis()->CenterTitle(true);
   Graph_Graph01151->GetXaxis()->SetLabelFont(42);
   Graph_Graph01151->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01151->GetXaxis()->SetTitleFont(42);
   Graph_Graph01151->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01151->GetYaxis()->CenterTitle(true);
   Graph_Graph01151->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01151->GetYaxis()->SetLabelFont(42);
   Graph_Graph01151->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01151->GetYaxis()->SetTitleFont(42);
   Graph_Graph01151->GetZaxis()->SetLabelFont(42);
   Graph_Graph01151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01151);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
