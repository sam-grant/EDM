void S0S12S18_full_theta_Y_RMS_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:51 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,1.420886,3605.25,36.92036);
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
   30.21168,
   30.89168,
   29.28187,
   26.2365,
   23.48913,
   21.60151,
   20.61784,
   20.48091,
   20.97959,
   21.42206,
   22.08979,
   21.65688,
   18.53824,
   12.23036,
   7.372196};
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
   0.6470631,
   0.1121031,
   0.03923597,
   0.03040663,
   0.02728139,
   0.02601462,
   0.02574355,
   0.02648745,
   0.02842152,
   0.03114468,
   0.03528658,
   0.039675,
   0.0410365,
   0.03308113,
   0.03472972};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1467,Graph0_fy1467,Graph0_fex1467,Graph0_fey1467);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigma#theta_{y} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01467 = new TH1F("Graph_Graph01467","",100,0,3300);
   Graph_Graph01467->SetMinimum(4.970834);
   Graph_Graph01467->SetMaximum(33.37042);
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
