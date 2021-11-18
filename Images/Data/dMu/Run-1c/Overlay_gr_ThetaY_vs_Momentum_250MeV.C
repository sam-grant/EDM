void Overlay_gr_ThetaY_vs_Momentum_250MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 16:13:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(500.0625,-3.125,2744.438,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_gr_ThetaY_vs_Momentum_fx1010[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t S12_gr_ThetaY_vs_Momentum_fy1010[12] = {
   0,
   2.930075,
   0.4654179,
   0.1098701,
   -0.5119697,
   -0.6432125,
   -0.3098986,
   -0.1388791,
   -0.1318355,
   -0.07097823,
   0.04765302,
   0.1354555};
   Double_t S12_gr_ThetaY_vs_Momentum_fex1010[12] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fey1010[12] = {
   0,
   0.1130654,
   0.02836733,
   0.01426027,
   0.01081632,
   0.009373866,
   0.008970796,
   0.009097714,
   0.009580134,
   0.01045785,
   0.01206894,
   0.04343804};
   TGraphErrors *gre = new TGraphErrors(12,S12_gr_ThetaY_vs_Momentum_fx1010,S12_gr_ThetaY_vs_Momentum_fy1010,S12_gr_ThetaY_vs_Momentum_fex1010,S12_gr_ThetaY_vs_Momentum_fey1010);
   gre->SetName("S12_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010 = new TH1F("Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010","",100,0,3150);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->SetMinimum(-2.5);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->SetMaximum(2.5);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->SetDirectory(0);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->SetLineColor(ci);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetXaxis()->SetRange(24,80);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetXaxis()->CenterTitle(true);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetYaxis()->CenterTitle(true);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S12_gr_ThetaY_vs_Momentum10071010);
   
   gre->Draw("alp");
   
   Double_t S18_gr_ThetaY_vs_Momentum_fx1011[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t S18_gr_ThetaY_vs_Momentum_fy1011[12] = {
   0,
   2.756032,
   0.3979168,
   -0.03516741,
   -0.6193832,
   -0.5651673,
   -0.3365741,
   -0.2012333,
   -0.1665612,
   -0.1157799,
   -0.09265751,
   -0.2586192};
   Double_t S18_gr_ThetaY_vs_Momentum_fex1011[12] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fey1011[12] = {
   0,
   0.1086738,
   0.02781554,
   0.01447478,
   0.01107136,
   0.009755269,
   0.0094422,
   0.009807738,
   0.01048778,
   0.01156133,
   0.01323306,
   0.0500938};
   gre = new TGraphErrors(12,S18_gr_ThetaY_vs_Momentum_fx1011,S18_gr_ThetaY_vs_Momentum_fy1011,S18_gr_ThetaY_vs_Momentum_fex1011,S18_gr_ThetaY_vs_Momentum_fey1011);
   gre->SetName("S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011 = new TH1F("Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011","",100,0,3150);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->SetMinimum(-2.5);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->SetMaximum(2.5);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->SetDirectory(0);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->SetLineColor(ci);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetXaxis()->SetRange(24,80);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetXaxis()->CenterTitle(true);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetYaxis()->CenterTitle(true);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S18_gr_ThetaY_vs_Momentum10081011);
   
   gre->Draw("lp ");
   
   Double_t S12S18_gr_ThetaY_vs_Momentum_fx1012[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fy1012[12] = {
   0,
   2.840479,
   0.431156,
   0.03888459,
   -0.5642035,
   -0.6058936,
   -0.3224805,
   -0.167643,
   -0.1476316,
   -0.09099355,
   -0.01553317,
   -0.03255992};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fex1012[12] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fey1012[12] = {
   0,
   0.07835476,
   0.01986099,
   0.01015879,
   0.007736993,
   0.006759212,
   0.006503681,
   0.006670004,
   0.007073347,
   0.00775587,
   0.008918116,
   0.03284361};
   gre = new TGraphErrors(12,S12S18_gr_ThetaY_vs_Momentum_fx1012,S12S18_gr_ThetaY_vs_Momentum_fy1012,S12S18_gr_ThetaY_vs_Momentum_fex1012,S12S18_gr_ThetaY_vs_Momentum_fey1012);
   gre->SetName("S12S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012 = new TH1F("Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012","",100,0,3150);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->SetMinimum(-2.5);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->SetMaximum(2.5);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->SetDirectory(0);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->SetLineColor(ci);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetXaxis()->SetRange(24,80);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetXaxis()->CenterTitle(true);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetYaxis()->CenterTitle(true);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10091012);
   
   gre->Draw("lp ");
   
   TLegend *leg = new TLegend(0.31,0.91,0.78,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_gr_ThetaY_vs_Momentum","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_gr_ThetaY_vs_Momentum","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12S18_gr_ThetaY_vs_Momentum","S12 & S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
