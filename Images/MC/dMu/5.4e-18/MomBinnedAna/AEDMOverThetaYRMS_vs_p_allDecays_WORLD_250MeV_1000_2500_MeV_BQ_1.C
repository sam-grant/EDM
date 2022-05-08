void AEDMOverThetaYRMS_vs_p_allDecays_WORLD_250MeV_1000_2500_MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 22:26:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6596,-0.0008809165,3407.936,0.02228878);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t Graph0_fy1049[12] = {
   0.002169148,
   0.006651969,
   0.00899989,
   0.01146963,
   0.01338418,
   0.01468225,
   0.01570337,
   0.01692888,
   0.01459097,
   0.01722281,
   0.01310079,
   0.01082914};
   Double_t Graph0_fex1049[12] = {
   0.02908963,
   0.02973433,
   0.03055162,
   0.03167911,
   0.03320863,
   0.0352714,
   0.03796636,
   0.04164352,
   0.04682622,
   0.05470628,
   0.06824828,
   0.09707939};
   Double_t Graph0_fey1049[12] = {
   0.0005735333,
   0.0005818383,
   0.0005981042,
   0.0006206062,
   0.0006507084,
   0.0006911623,
   0.000744539,
   0.0008169121,
   0.0009202418,
   0.001078443,
   0.001354952,
   0.002021403};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM}/#sigma#theta_{y} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","",100,0,3122.965);
   Graph_Graph01049->SetMinimum(0.001436054);
   Graph_Graph01049->SetMaximum(0.01997181);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(1,97);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
