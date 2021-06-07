void full_A_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 09:49:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.1951934,3456.75,0.3724078);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[15] = {
   100,
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
   Double_t Graph0_fy1047[15] = {
   -0.06752032,
   0.0285407,
   0.1150358,
   0.2341642,
   0.2667692,
   0.2578508,
   0.2669497,
   0.242711,
   0.223766,
   0.2148914,
   0.1881832,
   0.1653335,
   0.1236694,
   0.1035716,
   0.04345263};
   Double_t Graph0_fex1047[15] = {
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
   100,
   100};
   Double_t Graph0_fey1047[15] = {
   0.03307286,
   0.02125911,
   0.01629939,
   0.0134056,
   0.01103841,
   0.009486094,
   0.008445031,
   0.007628902,
   0.006999138,
   0.006560069,
   0.006232728,
   0.005999948,
   0.00580281,
   0.005697105,
   0.00585747};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","",100,0,3300);
   Graph_Graph01047->SetMinimum(-0.1384333);
   Graph_Graph01047->SetMaximum(0.3156477);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01047->GetXaxis()->SetRange(0,93);
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
