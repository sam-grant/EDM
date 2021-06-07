void A_vs_p_slice_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:25:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-193.875,-0.4375,3394.875,0.4375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1007[15] = {
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
   Double_t A_vs_p_fy1007[15] = {
   0.02004905,
   0.02019993,
   0.1308364,
   0.2415324,
   0.2637208,
   0.2518962,
   0.2463081,
   0.2451475,
   0.2288872,
   0.2245348,
   0.1828677,
   0.2008651,
   0.1549994,
   0.1297497,
   0.06521412};
   Double_t A_vs_p_fex1007[15] = {
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
   Double_t A_vs_p_fey1007[15] = {
   0.03308111,
   0.02132067,
   0.01633019,
   0.01340995,
   0.01102864,
   0.009477489,
   0.008434668,
   0.007631009,
   0.007012196,
   0.006621779,
   0.00635524,
   0.006229754,
   0.006195296,
   0.006384668,
   0.007112399};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1007,A_vs_p_fy1007,A_vs_p_fex1007,A_vs_p_fey1007);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1007 = new TH1F("Graph_A_vs_p1007","",100,0,3300);
   Graph_A_vs_p1007->SetMinimum(-0.35);
   Graph_A_vs_p1007->SetMaximum(0.35);
   Graph_A_vs_p1007->SetDirectory(0);
   Graph_A_vs_p1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1007->SetLineColor(ci);
   Graph_A_vs_p1007->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1007->GetXaxis()->SetRange(6,92);
   Graph_A_vs_p1007->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1007->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1007->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1007->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_A_vs_p1007->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1007->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1007->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1007->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1007->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1007->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1007);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1008[15] = {
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
   Double_t S0S12S18_A_vs_p_fy1008[15] = {
   -0.4465229,
   -0.1764085,
   0.1139971,
   0.08143227,
   0.2519833,
   0.1582454,
   0.1614682,
   0.178387,
   0.1757224,
   0.1722979,
   0.1253699,
   0.1723265,
   0.1350847,
   0.08811598,
   -0.007376401};
   Double_t S0S12S18_A_vs_p_fex1008[15] = {
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
   Double_t S0S12S18_A_vs_p_fey1008[15] = {
   0.8383037,
   0.1352431,
   0.04570566,
   0.03547325,
   0.03136754,
   0.02902322,
   0.02713111,
   0.02571586,
   0.0248201,
   0.0247737,
   0.02537859,
   0.02672002,
   0.02865168,
   0.02947653,
   0.04024553};
   gre = new TGraphErrors(15,S0S12S18_A_vs_p_fx1008,S0S12S18_A_vs_p_fy1008,S0S12S18_A_vs_p_fex1008,S0S12S18_A_vs_p_fey1008);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1008 = new TH1F("Graph_S0S12S18_A_vs_p1008","S0S12S18",100,0,3300);
   Graph_S0S12S18_A_vs_p1008->SetMinimum(-1.452487);
   Graph_S0S12S18_A_vs_p1008->SetMaximum(0.5594416);
   Graph_S0S12S18_A_vs_p1008->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1008->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetRange(6,92);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1008->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1008->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1008);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_A_vs_p","Reco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
