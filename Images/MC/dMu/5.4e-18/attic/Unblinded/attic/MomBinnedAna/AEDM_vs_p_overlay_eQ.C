void AEDM_vs_p_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 10:38:04 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.04375,2850.5,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_AEDM_vs_p_fx1122[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S0_AEDM_vs_p_fy1122[17] = {
   0.1240622,
   0.2170054,
   0.2268274,
   0.175994,
   0.17892,
   0.1723462,
   0.2267131,
   0.1323054,
   0.218266,
   0.1096499,
   0.1690149,
   0.1724985,
   0.1956087,
   0.159927,
   0.1358276,
   0.1864758,
   0.1260797};
   Double_t S0_AEDM_vs_p_fex1122[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0_AEDM_vs_p_fey1122[17] = {
   0.05517442,
   0.05155146,
   0.04864502,
   0.04611268,
   0.04398843,
   0.04211741,
   0.04042851,
   0.03901702,
   0.03784783,
   0.03675427,
   0.03568344,
   0.03491242,
   0.03451133,
   0.03410932,
   0.03370088,
   0.03347856,
   0.0331852};
   TGraphErrors *gre = new TGraphErrors(17,S0_AEDM_vs_p_fx1122,S0_AEDM_vs_p_fy1122,S0_AEDM_vs_p_fex1122,S0_AEDM_vs_p_fey1122);
   gre->SetName("S0_AEDM_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_AEDM_vs_p1122 = new TH1F("Graph_S0_AEDM_vs_p1122","",100,530,2570);
   Graph_S0_AEDM_vs_p1122->SetMinimum(0);
   Graph_S0_AEDM_vs_p1122->SetMaximum(0.35);
   Graph_S0_AEDM_vs_p1122->SetDirectory(0);
   Graph_S0_AEDM_vs_p1122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_AEDM_vs_p1122->SetLineColor(ci);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetRange(0,101);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_AEDM_vs_p1122->GetYaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1122->GetZaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1122->GetZaxis()->SetTitleOffset(1);
   Graph_S0_AEDM_vs_p1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_AEDM_vs_p1122);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_fx1123[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S12_AEDM_vs_p_fy1123[17] = {
   0.2804885,
   0.2744965,
   0.1423143,
   0.1728481,
   0.1975055,
   0.06708109,
   0.2426395,
   0.2206398,
   0.1767883,
   0.1756622,
   0.1022554,
   0.187739,
   0.1109571,
   0.08728903,
   0.12958,
   0.1478747,
   0.1017119};
   Double_t S12_AEDM_vs_p_fex1123[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S12_AEDM_vs_p_fey1123[17] = {
   0.05507535,
   0.05157605,
   0.04866016,
   0.04613071,
   0.04427902,
   0.04241158,
   0.04066601,
   0.03914084,
   0.03794424,
   0.03689264,
   0.03590363,
   0.0351535,
   0.03470303,
   0.03434987,
   0.03396045,
   0.03378753,
   0.03374395};
   gre = new TGraphErrors(17,S12_AEDM_vs_p_fx1123,S12_AEDM_vs_p_fy1123,S12_AEDM_vs_p_fex1123,S12_AEDM_vs_p_fey1123);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1123 = new TH1F("Graph_S12_AEDM_vs_p1123","S12",100,530,2570);
   Graph_S12_AEDM_vs_p1123->SetMinimum(0.02220256);
   Graph_S12_AEDM_vs_p1123->SetMaximum(0.3666533);
   Graph_S12_AEDM_vs_p1123->SetDirectory(0);
   Graph_S12_AEDM_vs_p1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p1123->SetLineColor(ci);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetRange(0,101);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_AEDM_vs_p1123->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1123->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1123->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p1123);
   
   gre->Draw("p ");
   
   Double_t S18_AEDM_vs_p_fx1124[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S18_AEDM_vs_p_fy1124[17] = {
   0.1934114,
   0.06389379,
   0.1941252,
   0.0656557,
   0.164504,
   0.2236701,
   0.146336,
   0.1315491,
   0.2473164,
   0.1447224,
   0.1983224,
   0.1385367,
   0.1253884,
   0.1812537,
   0.1478525,
   0.1104375,
   0.1403588};
   Double_t S18_AEDM_vs_p_fex1124[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S18_AEDM_vs_p_fey1124[17] = {
   0.05516683,
   0.05169674,
   0.0487137,
   0.04645066,
   0.04445545,
   0.04259701,
   0.04089575,
   0.03943691,
   0.0382655,
   0.03695831,
   0.03617858,
   0.03556531,
   0.03489637,
   0.03476099,
   0.03426632,
   0.03386919,
   0.03392656};
   gre = new TGraphErrors(17,S18_AEDM_vs_p_fx1124,S18_AEDM_vs_p_fy1124,S18_AEDM_vs_p_fex1124,S18_AEDM_vs_p_fey1124);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1124 = new TH1F("Graph_S18_AEDM_vs_p1124","S18",100,530,2570);
   Graph_S18_AEDM_vs_p1124->SetMinimum(0.01097734);
   Graph_S18_AEDM_vs_p1124->SetMaximum(0.3129204);
   Graph_S18_AEDM_vs_p1124->SetDirectory(0);
   Graph_S18_AEDM_vs_p1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p1124->SetLineColor(ci);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetRange(0,101);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_AEDM_vs_p1124->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1124->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1124->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p1124);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_AEDM_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_AEDM_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_AEDM_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
