void thetaYMaxDiff_vs_p_allDecays_AAR_125MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 10:31:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(507.6262,-135.2582,2754.496,1325.116);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[25] = {
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
   Double_t Graph0_fy1017[25] = {
   1069.946,
   332.348,
   233.7157,
   186.5437,
   156.5252,
   139.3717,
   122.2183,
   113.6416,
   100.7765,
   92.19977,
   85.76723,
   79.33469,
   75.04632,
   66.4696,
   62.18124,
   57.89288,
   53.60452,
   49.31616,
   45.02779,
   40.73943,
   36.45107,
   32.16271,
   27.87435,
   23.58599,
   15.00926};
   Double_t Graph0_fex1017[25] = {
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
   Double_t Graph0_fey1017[25] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(25,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","",100,0,3328.697);
   Graph_Graph01017->SetMinimum(10.77924);
   Graph_Graph01017->SetMaximum(1179.079);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(23,76);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
