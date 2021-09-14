void S0S12S18_full_thetaYMaxDiff_vs_p_trackTruth_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:39:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-19.55776,3411.2,221.1107);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1166[14] = {
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
   Double_t Graph0_fy1166[14] = {
   177.967,
   171.5345,
   139.3717,
   113.6416,
   100.7765,
   87.91141,
   75.04632,
   66.4696,
   57.89288,
   53.60452,
   45.02779,
   38.59525,
   32.16271,
   23.58599};
   Double_t Graph0_fex1166[14] = {
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
   Double_t Graph0_fey1166[14] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1166,Graph0_fy1166,Graph0_fex1166,Graph0_fey1166);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;(#Delta#theta_{y})_{MAX} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01166 = new TH1F("Graph_Graph01166","",100,0,3280);
   Graph_Graph01166->SetMinimum(4.509091);
   Graph_Graph01166->SetMaximum(197.0439);
   Graph_Graph01166->SetDirectory(0);
   Graph_Graph01166->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01166->SetLineColor(ci);
   Graph_Graph01166->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01166->GetXaxis()->SetRange(6,93);
   Graph_Graph01166->GetXaxis()->CenterTitle(true);
   Graph_Graph01166->GetXaxis()->SetLabelFont(42);
   Graph_Graph01166->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01166->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01166->GetXaxis()->SetTitleFont(42);
   Graph_Graph01166->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad]");
   Graph_Graph01166->GetYaxis()->CenterTitle(true);
   Graph_Graph01166->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01166->GetYaxis()->SetLabelFont(42);
   Graph_Graph01166->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01166->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01166->GetYaxis()->SetTitleFont(42);
   Graph_Graph01166->GetZaxis()->SetLabelFont(42);
   Graph_Graph01166->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01166->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01166);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
