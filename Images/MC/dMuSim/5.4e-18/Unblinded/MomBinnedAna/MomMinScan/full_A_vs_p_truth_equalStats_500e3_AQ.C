void full_A_vs_p_truth_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:56 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.01871186,3330.25,0.4085151);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1090[15] = {
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
   Double_t Graph0_fy1090[15] = {
   0.2682828,
   0.259408,
   0.2788,
   0.2968845,
   0.2842694,
   0.2555409,
   0.2434984,
   0.2311678,
   0.2052998,
   0.1899048,
   0.1582805,
   0.1315404,
   0.1052953,
   0.08421221,
   0.03569371};
   Double_t Graph0_fex1090[15] = {
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
   Double_t Graph0_fey1090[15] = {
   0.04425029,
   0.04299008,
   0.04091591,
   0.03807935,
   0.03475645,
   0.03160618,
   0.02874893,
   0.02614695,
   0.0237322,
   0.02139355,
   0.01908225,
   0.01670836,
   0.01435348,
   0.01186254,
   0.009015002};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1090,Graph0_fy1090,Graph0_fex1090,Graph0_fey1090);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01090 = new TH1F("Graph_Graph01090","",100,0,3080);
   Graph_Graph01090->SetMinimum(0.02401083);
   Graph_Graph01090->SetMaximum(0.3657924);
   Graph_Graph01090->SetDirectory(0);
   Graph_Graph01090->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01090->SetLineColor(ci);
   Graph_Graph01090->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01090->GetXaxis()->SetRange(0,96);
   Graph_Graph01090->GetXaxis()->CenterTitle(true);
   Graph_Graph01090->GetXaxis()->SetLabelFont(42);
   Graph_Graph01090->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01090->GetXaxis()->SetTitleFont(42);
   Graph_Graph01090->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01090->GetYaxis()->CenterTitle(true);
   Graph_Graph01090->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01090->GetYaxis()->SetLabelFont(42);
   Graph_Graph01090->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01090->GetYaxis()->SetTitleFont(42);
   Graph_Graph01090->GetZaxis()->SetLabelFont(42);
   Graph_Graph01090->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01090);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
