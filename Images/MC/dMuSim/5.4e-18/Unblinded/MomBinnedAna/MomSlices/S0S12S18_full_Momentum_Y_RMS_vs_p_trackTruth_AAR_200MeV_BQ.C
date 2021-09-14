void S0S12S18_full_Momentum_Y_RMS_vs_p_trackTruth_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:39:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,9.836662,3411.2,23.66859);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1163[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1163[14] = {
   12.216,
   15.13643,
   17.19981,
   18.70296,
   19.92847,
   20.77625,
   21.28396,
   21.34935,
   21.0863,
   20.35973,
   19.18562,
   17.4957,
   15.34796,
   13.00114};
   Double_t Graph0_fex1163[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1163[14] = {
   0.07401871,
   0.01698657,
   0.01138841,
   0.01008799,
   0.01053015,
   0.01148729,
   0.01267628,
   0.01392149,
   0.01574235,
   0.01805119,
   0.020672,
   0.02326947,
   0.02552611,
   0.08178919};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1163,Graph0_fy1163,Graph0_fex1163,Graph0_fey1163);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigma_{p_{y}} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01163 = new TH1F("Graph_Graph01163","",100,0,3280);
   Graph_Graph01163->SetMinimum(11.21986);
   Graph_Graph01163->SetMaximum(22.2854);
   Graph_Graph01163->SetDirectory(0);
   Graph_Graph01163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01163->SetLineColor(ci);
   Graph_Graph01163->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01163->GetXaxis()->SetRange(6,93);
   Graph_Graph01163->GetXaxis()->CenterTitle(true);
   Graph_Graph01163->GetXaxis()->SetLabelFont(42);
   Graph_Graph01163->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01163->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01163->GetXaxis()->SetTitleFont(42);
   Graph_Graph01163->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV]");
   Graph_Graph01163->GetYaxis()->CenterTitle(true);
   Graph_Graph01163->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01163->GetYaxis()->SetLabelFont(42);
   Graph_Graph01163->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01163->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01163->GetYaxis()->SetTitleFont(42);
   Graph_Graph01163->GetZaxis()->SetLabelFont(42);
   Graph_Graph01163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01163);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
