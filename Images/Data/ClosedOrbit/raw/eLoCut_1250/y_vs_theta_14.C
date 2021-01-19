void y_vs_theta_14()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 13 17:07:07 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,73.07797,443.8125,76.2539);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1002[24] = {
   74.38561,
   74.22155,
   75.24453,
   74.27104,
   74.8911,
   75.46902,
   75.67387,
   74.79312,
   73.65085,
   74.26883,
   73.85053,
   74.41581,
   74.77996,
   74.21469,
   75.68406,
   74.56719,
   74.80642,
   74.98854,
   74.28348,
   74.45967,
   74.00939,
   73.96666,
   74.2739,
   74.42193};
   Double_t Graph0_fex1002[24] = {
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
   Double_t Graph0_fey1002[24] = {
   0.0416368,
   0.04213052,
   0.04210294,
   0.04222195,
   0.03959451,
   0.04273108,
   0.04463921,
   0.04428738,
   0.04355383,
   0.04465793,
   0.04152677,
   0.04217667,
   0.03862983,
   0.04170161,
   0.04052612,
   0.04315379,
   0.04375786,
   0.0421192,
   0.04025796,
   0.04407195,
   0.04200202,
   0.04172178,
   0.0409364,
   0.04488661};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle(";#theta [deg];y [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","",100,0,394.5);
   Graph_Graph01002->SetMinimum(73.39557);
   Graph_Graph01002->SetMaximum(75.93631);
   Graph_Graph01002->SetDirectory(0);
   Graph_Graph01002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01002->SetLineColor(ci);
   Graph_Graph01002->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01002->GetXaxis()->CenterTitle(true);
   Graph_Graph01002->GetXaxis()->SetLabelFont(42);
   Graph_Graph01002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetXaxis()->SetTitleFont(42);
   Graph_Graph01002->GetYaxis()->SetTitle("y [mm]");
   Graph_Graph01002->GetYaxis()->CenterTitle(true);
   Graph_Graph01002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01002->GetYaxis()->SetLabelFont(42);
   Graph_Graph01002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01002->GetYaxis()->SetTitleFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelFont(42);
   Graph_Graph01002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01002);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
