void full_c_vs_p_truthAllDecays_MRF_200MeV_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 21 17:01:39 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-423.5,-0.0008495529,3503.5,0.0009875558);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1097[15] = {
   -0.0001191023,
   -0.000128237,
   -7.585131e-05,
   -0.0001041008,
   -2.482662e-05,
   -4.525594e-05,
   8.363641e-05,
   0.0001971447,
   0.0001101849,
   8.399887e-05,
   0.0002449908,
   0.0002159732,
   0.0002063977,
   0.0003639636,
   -2.229677e-05};
   Double_t Graph0_fex1097[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1097[15] = {
   8.419066e-05,
   9.292184e-05,
   0.0001009719,
   0.0001085867,
   0.0001166549,
   0.0001252974,
   0.0001342968,
   0.0001437502,
   0.0001550626,
   0.0001701595,
   0.0001915884,
   0.0002195469,
   0.0002572377,
   0.0003174074,
   0.0005210714};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];c [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","",100,0,3080);
   Graph_Graph01097->SetMinimum(-0.0006658421);
   Graph_Graph01097->SetMaximum(0.0008038449);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01097->GetXaxis()->SetRange(0,101);
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("c [rad]");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
