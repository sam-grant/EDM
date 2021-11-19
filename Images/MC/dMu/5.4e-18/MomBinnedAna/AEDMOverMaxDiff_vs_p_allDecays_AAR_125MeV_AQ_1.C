void AEDMOverMaxDiff_vs_p_allDecays_AAR_125MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 10:31:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(507.6262,-8.206596e-07,2754.496,1.813136e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[25] = {
   62.59046,
   187.2935,
   312.3073,
   437.2523,
   562.1969,
   687.1322,
   812.0961,
   937.0082,
   1062.005,
   1186.942,
   1311.832,
   1436.831,
   1561.662,
   1686.563,
   1811.454,
   1936.386,
   2061.134,
   2185.896,
   2310.694,
   2435.29,
   2559.837,
   2684.178,
   2807.577,
   2928.952,
   3031.66};
   Double_t Graph0_fy1018[25] = {
   4.556665e-11,
   7.725976e-11,
   4.615296e-10,
   8.725182e-10,
   1.27779e-09,
   1.126917e-09,
   2.511553e-09,
   2.520904e-09,
   3.391306e-09,
   4.372942e-09,
   5.148912e-09,
   6.676352e-09,
   7.081025e-09,
   1.040548e-08,
   1.19007e-08,
   1.438421e-08,
   1.248273e-08,
   1.664846e-08,
   2.625319e-08,
   3.023443e-08,
   3.533712e-08,
   3.993541e-08,
   7.205675e-08,
   1.047133e-07,
   4.96238e-07};
   Double_t Graph0_fex1018[25] = {
   0.0205668,
   0.02086169,
   0.02105778,
   0.02130379,
   0.02158929,
   0.02193838,
   0.02233788,
   0.02280296,
   0.02335155,
   0.02397632,
   0.0247069,
   0.02556717,
   0.02652061,
   0.02765152,
   0.02891195,
   0.03052323,
   0.03236776,
   0.03461589,
   0.03746187,
   0.04103157,
   0.04593108,
   0.05289149,
   0.06386886,
   0.08497045,
   0.1160732};
   Double_t Graph0_fey1018[25] = {
   2.200977e-11,
   7.196485e-11,
   1.034665e-10,
   1.349023e-10,
   1.683215e-10,
   1.982694e-10,
   2.462112e-10,
   2.804195e-10,
   3.456859e-10,
   4.160983e-10,
   4.947185e-10,
   6.069439e-10,
   7.083117e-10,
   9.530607e-10,
   1.163293e-09,
   1.468181e-09,
   1.753886e-09,
   2.341953e-09,
   3.379655e-09,
   4.681457e-09,
   6.959043e-09,
   1.123456e-08,
   2.254675e-08,
   6.165089e-08,
   8.779317e-07};
   TGraphErrors *gre = new TGraphErrors(25,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","",100,0,3328.697);
   Graph_Graph01018->SetMinimum(-5.572801e-07);
   Graph_Graph01018->SetMaximum(1.549756e-06);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(23,76);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
