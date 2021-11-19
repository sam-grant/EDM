void c_vs_p_allDecays_AAR_125MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 10:31:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(507.6262,-1.708956e-05,2754.496,7.349359e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[25] = {
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
   Double_t Graph0_fy1009[25] = {
   -1.025266e-08,
   -2.383836e-08,
   -2.926631e-08,
   1.004329e-10,
   7.61434e-09,
   -2.43788e-08,
   -1.278219e-08,
   1.976784e-08,
   -3.47705e-08,
   -4.859368e-08,
   5.918444e-09,
   3.301741e-08,
   -7.328942e-09,
   2.011918e-08,
   -2.552786e-08,
   6.321604e-09,
   1.659409e-07,
   -1.715965e-07,
   1.703168e-07,
   -9.788162e-08,
   1.026234e-07,
   2.384333e-07,
   -1.202076e-06,
   2.405179e-06,
   3.804541e-05};
   Double_t Graph0_fex1009[25] = {
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
   Double_t Graph0_fey1009[25] = {
   1.776099e-08,
   1.801242e-08,
   1.813947e-08,
   1.864437e-08,
   1.926137e-08,
   2.006613e-08,
   2.111149e-08,
   2.222408e-08,
   2.371942e-08,
   2.557057e-08,
   2.797621e-08,
   3.104016e-08,
   3.494575e-08,
   4.022755e-08,
   4.703364e-08,
   5.678005e-08,
   7.071005e-08,
   9.054367e-08,
   1.214821e-07,
   1.705358e-07,
   2.556484e-07,
   4.190855e-07,
   7.902919e-07,
   2.089055e-06,
   2.035099e-05};
   TGraphErrors *gre = new TGraphErrors(25,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","",100,0,3328.697);
   Graph_Graph01009->SetMinimum(-8.031245e-06);
   Graph_Graph01009->SetMaximum(6.443528e-05);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01009->SetLineColor(ci);
   Graph_Graph01009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01009->GetXaxis()->SetRange(23,76);
   Graph_Graph01009->GetXaxis()->CenterTitle(true);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01009->GetYaxis()->CenterTitle(true);
   Graph_Graph01009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
