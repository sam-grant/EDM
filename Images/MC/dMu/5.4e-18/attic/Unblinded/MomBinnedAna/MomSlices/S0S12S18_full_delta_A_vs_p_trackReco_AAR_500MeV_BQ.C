void S0S12S18_full_delta_A_vs_p_trackReco_AAR_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Sep 11 15:27:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.2039581,3456.75,0.2298176);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1088[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1088[6] = {
   -0.02339443,
   0.1349064,
   0.1379724,
   0.1468228,
   0.09028664,
   0.08102342};
   Double_t Graph0_fex1088[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1088[6] = {
   0.1082677,
   0.01837812,
   0.0117094,
   0.01069885,
   0.01163116,
   0.01529632};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1088,Graph0_fy1088,Graph0_fex1088,Graph0_fey1088);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 250 < p < p #plus 250;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01088 = new TH1F("Graph_Graph01088","",100,0,3300);
   Graph_Graph01088->SetMinimum(-0.1605805);
   Graph_Graph01088->SetMaximum(0.18644);
   Graph_Graph01088->SetDirectory(0);
   Graph_Graph01088->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01088->SetLineColor(ci);
   Graph_Graph01088->GetXaxis()->SetTitle("p [MeV] in range: p #minus 250 < p < p #plus 250");
   Graph_Graph01088->GetXaxis()->SetRange(0,93);
   Graph_Graph01088->GetXaxis()->CenterTitle(true);
   Graph_Graph01088->GetXaxis()->SetLabelFont(42);
   Graph_Graph01088->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01088->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01088->GetXaxis()->SetTitleFont(42);
   Graph_Graph01088->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph01088->GetYaxis()->CenterTitle(true);
   Graph_Graph01088->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01088->GetYaxis()->SetLabelFont(42);
   Graph_Graph01088->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01088->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01088->GetYaxis()->SetTitleFont(42);
   Graph_Graph01088->GetZaxis()->SetLabelFont(42);
   Graph_Graph01088->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01088);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
