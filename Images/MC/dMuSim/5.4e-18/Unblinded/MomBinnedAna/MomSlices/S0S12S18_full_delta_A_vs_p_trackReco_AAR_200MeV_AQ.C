void S0S12S18_full_delta_A_vs_p_trackReco_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 20:09:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.2057927,3456.75,2.199807);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1178[15] = {
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
   Double_t Graph0_fy1178[15] = {
   1.019472,
   0.2904534,
   0.08950892,
   0.1802882,
   0.1801945,
   0.1539734,
   0.1762285,
   0.1812917,
   0.1693371,
   0.1590766,
   0.1233857,
   0.09945952,
   0.1035643,
   0.07252704,
   0.05841668};
   Double_t Graph0_fex1178[15] = {
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
   Double_t Graph0_fey1178[15] = {
   0.7651736,
   0.08958767,
   0.02790195,
   0.02086566,
   0.01829458,
   0.01688493,
   0.01579653,
   0.01493384,
   0.01442311,
   0.01430881,
   0.01445825,
   0.01493099,
   0.01569164,
   0.0153594,
   0.0197864};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1178,Graph0_fy1178,Graph0_fex1178,Graph0_fey1178);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 100 < p < p #plus 100;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01178 = new TH1F("Graph_Graph01178","",100,0,3300);
   Graph_Graph01178->SetMinimum(0.03476725);
   Graph_Graph01178->SetMaximum(1.959247);
   Graph_Graph01178->SetDirectory(0);
   Graph_Graph01178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01178->SetLineColor(ci);
   Graph_Graph01178->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100");
   Graph_Graph01178->GetXaxis()->SetRange(0,93);
   Graph_Graph01178->GetXaxis()->CenterTitle(true);
   Graph_Graph01178->GetXaxis()->SetLabelFont(42);
   Graph_Graph01178->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01178->GetXaxis()->SetTitleFont(42);
   Graph_Graph01178->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph01178->GetYaxis()->CenterTitle(true);
   Graph_Graph01178->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01178->GetYaxis()->SetLabelFont(42);
   Graph_Graph01178->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01178->GetYaxis()->SetTitleFont(42);
   Graph_Graph01178->GetZaxis()->SetLabelFont(42);
   Graph_Graph01178->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01178);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
