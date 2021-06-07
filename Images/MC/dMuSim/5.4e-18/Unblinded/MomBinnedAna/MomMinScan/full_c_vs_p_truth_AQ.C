void full_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 09:49:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.04966213,3330.25,0.01576285);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1094[15] = {
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
   Double_t Graph0_fy1094[15] = {
   -0.03662995,
   -0.03608727,
   -0.03241486,
   -0.02476957,
   -0.0177803,
   -0.01516104,
   -0.01153164,
   -0.008302176,
   -0.00599474,
   -0.003504459,
   -0.003299138,
   -0.002946204,
   -0.003028619,
   0.001435139,
   -0.006945914};
   Double_t Graph0_fex1094[15] = {
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
   Double_t Graph0_fey1094[15] = {
   0.002128009,
   0.002117048,
   0.00208997,
   0.002043721,
   0.001981814,
   0.001943085,
   0.00193376,
   0.001953314,
   0.002007174,
   0.002103859,
   0.002250837,
   0.002474262,
   0.002821353,
   0.003423549,
   0.004691388};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1094,Graph0_fy1094,Graph0_fex1094,Graph0_fey1094);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01094 = new TH1F("Graph_Graph01094","",100,0,3080);
   Graph_Graph01094->SetMinimum(-0.04311963);
   Graph_Graph01094->SetMaximum(0.009220354);
   Graph_Graph01094->SetDirectory(0);
   Graph_Graph01094->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01094->SetLineColor(ci);
   Graph_Graph01094->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01094->GetXaxis()->SetRange(0,96);
   Graph_Graph01094->GetXaxis()->CenterTitle(true);
   Graph_Graph01094->GetXaxis()->SetLabelFont(42);
   Graph_Graph01094->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01094->GetXaxis()->SetTitleFont(42);
   Graph_Graph01094->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01094->GetYaxis()->CenterTitle(true);
   Graph_Graph01094->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01094->GetYaxis()->SetLabelFont(42);
   Graph_Graph01094->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01094->GetYaxis()->SetTitleFont(42);
   Graph_Graph01094->GetZaxis()->SetLabelFont(42);
   Graph_Graph01094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01094);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
