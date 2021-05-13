void ABz_vs_p_overlay_bQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:57:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,-2.5,2850.5,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_fx1179[17] = {
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
   Double_t S0_ABz_vs_p_fy1179[17] = {
   0.2932079,
   0.2755203,
   0.2402057,
   0.1298899,
   0.1493359,
   0.08305959,
   0.1200864,
   0.1601979,
   0.07228534,
   0.1751763,
   0.1954797,
   0.2621118,
   0.1618494,
   0.1234386,
   0.2397047,
   0.1463258,
   0.2108317};
   Double_t S0_ABz_vs_p_fex1179[17] = {
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
   Double_t S0_ABz_vs_p_fey1179[17] = {
   0.09303846,
   0.07926966,
   0.071041,
   0.06603104,
   0.06259381,
   0.06039216,
   0.05835087,
   0.05712421,
   0.05606131,
   0.05449821,
   0.05411446,
   0.05408362,
   0.05497811,
   0.05599466,
   0.05712076,
   0.05802296,
   0.05897799};
   TGraphErrors *gre = new TGraphErrors(17,S0_ABz_vs_p_fx1179,S0_ABz_vs_p_fy1179,S0_ABz_vs_p_fex1179,S0_ABz_vs_p_fey1179);
   gre->SetName("S0_ABz_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p1179 = new TH1F("Graph_S0_ABz_vs_p1179","",100,530,2570);
   Graph_S0_ABz_vs_p1179->SetMinimum(-2);
   Graph_S0_ABz_vs_p1179->SetMaximum(2);
   Graph_S0_ABz_vs_p1179->SetDirectory(0);
   Graph_S0_ABz_vs_p1179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p1179->SetLineColor(ci);
   Graph_S0_ABz_vs_p1179->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_ABz_vs_p1179->GetXaxis()->SetRange(0,101);
   Graph_S0_ABz_vs_p1179->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1179->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1179->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1179->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1179->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1179->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p1179->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1179->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p1179->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1179->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1179->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1179->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1179->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1179->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p1179);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_fx1180[17] = {
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
   Double_t S12_ABz_vs_p_fy1180[17] = {
   0.1941956,
   0.2241196,
   0.2807124,
   0.1631897,
   0.07296853,
   0.2298344,
   0.2610238,
   0.2355758,
   0.26383,
   0.1246114,
   0.1502606,
   0.1577655,
   0.1107915,
   0.1429312,
   0.04205568,
   0.1755833,
   0.1515262};
   Double_t S12_ABz_vs_p_fex1180[17] = {
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
   Double_t S12_ABz_vs_p_fey1180[17] = {
   0.09305494,
   0.07947483,
   0.0706547,
   0.06564591,
   0.06241028,
   0.05993497,
   0.05805457,
   0.05711438,
   0.05582495,
   0.05486954,
   0.05475797,
   0.05554133,
   0.05641605,
   0.05844168,
   0.06032279,
   0.06221857,
   0.06487086};
   gre = new TGraphErrors(17,S12_ABz_vs_p_fx1180,S12_ABz_vs_p_fy1180,S12_ABz_vs_p_fex1180,S12_ABz_vs_p_fey1180);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1180 = new TH1F("Graph_S12_ABz_vs_p1180","S12",100,530,2570);
   Graph_S12_ABz_vs_p1180->SetMinimum(-0.05523053);
   Graph_S12_ABz_vs_p1180->SetMaximum(0.3883305);
   Graph_S12_ABz_vs_p1180->SetDirectory(0);
   Graph_S12_ABz_vs_p1180->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p1180->SetLineColor(ci);
   Graph_S12_ABz_vs_p1180->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_ABz_vs_p1180->GetXaxis()->SetRange(0,101);
   Graph_S12_ABz_vs_p1180->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1180->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1180->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1180->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p1180->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1180->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p1180->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1180->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p1180->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1180->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1180->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p1180->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1180->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1180->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p1180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p1180);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_fx1181[17] = {
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
   Double_t S18_ABz_vs_p_fy1181[17] = {
   0.1530054,
   0.08525928,
   0.2021925,
   0.1010527,
   0.2446654,
   0.108162,
   0.191687,
   0.1341285,
   0.1134059,
   0.1409975,
   0.1759804,
   0.2416579,
   0.04634424,
   0.1145622,
   0.218411,
   0.2233183,
   0.1437748};
   Double_t S18_ABz_vs_p_fex1181[17] = {
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
   Double_t S18_ABz_vs_p_fey1181[17] = {
   0.09278831,
   0.0792153,
   0.07005167,
   0.06496012,
   0.06240415,
   0.05975557,
   0.05853225,
   0.05714993,
   0.05614186,
   0.05528198,
   0.05591361,
   0.05628893,
   0.05812158,
   0.05904547,
   0.06069136,
   0.06433755,
   0.06672602};
   gre = new TGraphErrors(17,S18_ABz_vs_p_fx1181,S18_ABz_vs_p_fy1181,S18_ABz_vs_p_fex1181,S18_ABz_vs_p_fey1181);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1181 = new TH1F("Graph_S18_ABz_vs_p1181","S18",100,530,2570);
   Graph_S18_ABz_vs_p1181->SetMinimum(-0.04366203);
   Graph_S18_ABz_vs_p1181->SetMaximum(0.3389542);
   Graph_S18_ABz_vs_p1181->SetDirectory(0);
   Graph_S18_ABz_vs_p1181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p1181->SetLineColor(ci);
   Graph_S18_ABz_vs_p1181->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_ABz_vs_p1181->GetXaxis()->SetRange(0,101);
   Graph_S18_ABz_vs_p1181->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1181->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1181->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1181->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p1181->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1181->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p1181->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1181->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p1181->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1181->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1181->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p1181->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1181->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1181->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p1181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p1181);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p","S18","lpf");
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
