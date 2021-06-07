void S0S12S18_full_theta_Y_RMS_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:19 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-2.077861,3605.25,37.72735);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1467[15] = {
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
   Double_t Graph0_fy1467[15] = {
   29.0016,
   31.02694,
   29.15801,
   25.93367,
   22.61462,
   19.8084,
   17.4007,
   15.36713,
   13.59822,
   12.00609,
   10.54225,
   9.147738,
   7.700012,
   6.087457,
   4.573094};
   Double_t Graph0_fex1467[15] = {
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
   Double_t Graph0_fey1467[15] = {
   0.4113806,
   0.06620717,
   0.02266895,
   0.01762018,
   0.01561815,
   0.01443436,
   0.01348732,
   0.01276653,
   0.01232398,
   0.01218724,
   0.01229929,
   0.01275244,
   0.01338042,
   0.01307804,
   0.01675272};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1467,Graph0_fy1467,Graph0_fex1467,Graph0_fey1467);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigma#theta_{y} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01467 = new TH1F("Graph_Graph01467","",100,0,3300);
   Graph_Graph01467->SetMinimum(1.902661);
   Graph_Graph01467->SetMaximum(33.74683);
   Graph_Graph01467->SetDirectory(0);
   Graph_Graph01467->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01467->SetLineColor(ci);
   Graph_Graph01467->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01467->GetXaxis()->SetRange(0,97);
   Graph_Graph01467->GetXaxis()->CenterTitle(true);
   Graph_Graph01467->GetXaxis()->SetLabelFont(42);
   Graph_Graph01467->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01467->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01467->GetXaxis()->SetTitleFont(42);
   Graph_Graph01467->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad]");
   Graph_Graph01467->GetYaxis()->CenterTitle(true);
   Graph_Graph01467->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01467->GetYaxis()->SetLabelFont(42);
   Graph_Graph01467->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01467->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01467->GetYaxis()->SetTitleFont(42);
   Graph_Graph01467->GetZaxis()->SetLabelFont(42);
   Graph_Graph01467->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01467->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01467);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
