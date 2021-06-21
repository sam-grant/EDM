void full_theta_Y_RMS_vs_p_truthAllDecays_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 18 15:33:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-0.006833339,3605.25,0.1034554);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1042[15] = {
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
   Double_t Graph0_fy1042[15] = {
   0.0844242,
   0.05589009,
   0.04065089,
   0.03251944,
   0.02716071,
   0.02321124,
   0.02011786,
   0.0175531,
   0.01537007,
   0.01342345,
   0.01163912,
   0.009951127,
   0.008299699,
   0.006583436,
   0.004666143};
   Double_t Graph0_fex1042[15] = {
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
   Double_t Graph0_fey1042[15] = {
   2.372988e-05,
   1.427537e-05,
   1.058445e-05,
   8.677059e-06,
   7.47368e-06,
   6.633049e-06,
   6.016439e-06,
   5.544422e-06,
   5.183961e-06,
   4.891424e-06,
   4.663624e-06,
   4.48955e-06,
   4.372366e-06,
   4.314293e-06,
   4.432754e-06};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p_{WORLD}  [MeV] in range: p #minus 100 < p < p #plus 100 MeV;#sigma_{#thetay} [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01042 = new TH1F("Graph_Graph01042","",100,0,3300);
   Graph_Graph01042->SetMinimum(0.004195539);
   Graph_Graph01042->SetMaximum(0.09242655);
   Graph_Graph01042->SetDirectory(0);
   Graph_Graph01042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01042->SetLineColor(ci);
   Graph_Graph01042->GetXaxis()->SetTitle("e^{+} p_{WORLD}  [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01042->GetXaxis()->SetRange(0,97);
   Graph_Graph01042->GetXaxis()->CenterTitle(true);
   Graph_Graph01042->GetXaxis()->SetLabelFont(42);
   Graph_Graph01042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01042->GetXaxis()->SetTitleFont(42);
   Graph_Graph01042->GetYaxis()->SetTitle("#sigma_{#thetay} [rad]");
   Graph_Graph01042->GetYaxis()->CenterTitle(true);
   Graph_Graph01042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01042->GetYaxis()->SetLabelFont(42);
   Graph_Graph01042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01042->GetYaxis()->SetTitleFont(42);
   Graph_Graph01042->GetZaxis()->SetLabelFont(42);
   Graph_Graph01042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01042);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
