void Ag2_vs_p_allDecays_AAR_125MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 10:31:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(507.6262,-2.44454e-05,2754.496,0.0001077792);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[25] = {
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
   Double_t Graph0_fy1011[25] = {
   2.932553e-08,
   -4.255813e-08,
   -4.849086e-08,
   1.349817e-08,
   2.362522e-08,
   -1.759497e-08,
   -1.250326e-08,
   2.52353e-08,
   -3.158572e-08,
   7.607941e-08,
   -3.555334e-08,
   2.350487e-09,
   -1.244884e-08,
   2.866257e-08,
   8.512955e-08,
   1.049616e-07,
   1.021555e-08,
   3.406799e-08,
   -1.687434e-08,
   1.120413e-07,
   -2.261641e-07,
   -6.859251e-07,
   -1.399534e-06,
   3.135466e-06,
   6.023688e-05};
   Double_t Graph0_fex1011[25] = {
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
   Double_t Graph0_fey1011[25] = {
   2.491218e-08,
   2.50508e-08,
   2.56413e-08,
   2.616598e-08,
   2.711189e-08,
   2.826037e-08,
   2.991539e-08,
   3.140224e-08,
   3.353442e-08,
   3.623586e-08,
   3.963606e-08,
   4.382488e-08,
   4.931415e-08,
   5.658248e-08,
   6.573838e-08,
   7.89016e-08,
   9.743229e-08,
   1.233825e-07,
   1.635602e-07,
   2.268121e-07,
   3.343604e-07,
   5.423042e-07,
   1.008429e-06,
   2.632968e-06,
   2.550492e-05};
   TGraphErrors *gre = new TGraphErrors(25,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{g#minus2} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","",100,0,3328.697);
   Graph_Graph01011->SetMinimum(-1.122294e-05);
   Graph_Graph01011->SetMaximum(9.455677e-05);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01011->GetXaxis()->SetRange(23,76);
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
