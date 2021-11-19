void N_vs_p_allDecays_AAR_125MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 10:31:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(507.6262,-380446.4,2754.496,3761139);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[25] = {
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
   Double_t Graph0_fy1015[25] = {
   3046115,
   2993502,
   2936290,
   2867335,
   2792132,
   2704457,
   2608468,
   2502089,
   2386608,
   2264258,
   2131108,
   1993201,
   1851676,
   1702377,
   1554831,
   1397450,
   1241172,
   1085688,
   925789,
   769815,
   614058,
   461869,
   313451,
   169991,
   37458};
   Double_t Graph0_fex1015[25] = {
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
   Double_t Graph0_fey1015[25] = {
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];Positrons / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,0,3328.697);
   Graph_Graph01015->SetMinimum(33712.2);
   Graph_Graph01015->SetMaximum(3346981);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01015->GetXaxis()->SetRange(23,76);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
