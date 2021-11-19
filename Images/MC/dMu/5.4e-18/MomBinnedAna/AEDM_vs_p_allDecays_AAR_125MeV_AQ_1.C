void AEDM_vs_p_allDecays_AAR_125MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 10:31:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(507.6262,-1.21882e-05,2754.496,2.708453e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[25] = {
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
   Double_t Graph0_fy1010[25] = {
   4.875387e-08,
   2.567713e-08,
   1.078667e-07,
   1.627628e-07,
   2.000063e-07,
   1.570603e-07,
   3.069578e-07,
   2.864796e-07,
   3.417639e-07,
   4.031843e-07,
   4.416079e-07,
   5.296663e-07,
   5.314049e-07,
   6.916479e-07,
   7.400003e-07,
   8.327435e-07,
   6.691305e-07,
   8.21038e-07,
   1.182123e-06,
   1.231734e-06,
   1.288076e-06,
   1.284431e-06,
   2.008535e-06,
   2.469766e-06,
   7.448168e-06};
   Double_t Graph0_fex1010[25] = {
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
   Double_t Graph0_fey1010[25] = {
   2.354887e-08,
   2.391623e-08,
   2.414122e-08,
   2.502571e-08,
   2.606008e-08,
   2.742104e-08,
   2.911182e-08,
   3.093689e-08,
   3.328462e-08,
   3.599967e-08,
   3.945361e-08,
   4.368903e-08,
   4.862647e-08,
   5.493256e-08,
   6.269044e-08,
   7.295221e-08,
   8.605981e-08,
   1.038786e-07,
   1.29695e-07,
   1.672385e-07,
   2.299213e-07,
   3.404373e-07,
   5.892707e-07,
   1.419005e-06,
   1.309091e-05};
   TGraphErrors *gre = new TGraphErrors(25,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","",100,0,3328.697);
   Graph_Graph01010->SetMinimum(-8.260924e-06);
   Graph_Graph01010->SetMaximum(2.315726e-05);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01010->GetXaxis()->SetRange(23,76);
   Graph_Graph01010->GetXaxis()->CenterTitle(true);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("A_{EDM}");
   Graph_Graph01010->GetYaxis()->CenterTitle(true);
   Graph_Graph01010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01010->GetYaxis()->SetLabelFont(42);
   Graph_Graph01010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01010->GetYaxis()->SetTitleFont(42);
   Graph_Graph01010->GetZaxis()->SetLabelFont(42);
   Graph_Graph01010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01010);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
