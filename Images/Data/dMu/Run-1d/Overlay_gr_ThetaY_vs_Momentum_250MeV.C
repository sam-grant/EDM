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
   
   Double_t S12_gr_ThetaY_vs_Momentum_fx1022[12] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fy1022[12] = {
   0,
   2.069536,
   -0.03658911,
   -0.2409712,
   -0.7924915,
   -0.8506415,
   -0.4841469,
   -0.2949412,
   -0.2534465,
   -0.1980212,
   -0.02510931,
   0.105196};
   Double_t S12_gr_ThetaY_vs_Momentum_fex1022[12] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fey1022[12] = {
   0,
   0.08098593,
   0.02047372,
   0.01034097,
   0.007885288,
   0.006830473,
   0.006535377,
   0.006650371,
   0.006996612,
   0.007640124,
   0.008763008,
   0.03100099};
   TGraphErrors *gre = new TGraphErrors(12,S12_gr_ThetaY_vs_Momentum_fx1022,S12_gr_ThetaY_vs_Momentum_fy1022,S12_gr_ThetaY_vs_Momentum_fex1022,S12_gr_ThetaY_vs_Momentum_fey1022);
   gre->SetName("S12_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022 = new TH1F("Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022","",100,0,3150);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->SetMinimum(-2.5);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->SetMaximum(2.5);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->SetDirectory(0);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->SetLineColor(ci);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetXaxis()->SetRange(24,80);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetXaxis()->CenterTitle(true);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetYaxis()->CenterTitle(true);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S12_gr_ThetaY_vs_Momentum10191022);
   
   gre->Draw("alp");
   
   Double_t S18_gr_ThetaY_vs_Momentum_fx1023[12] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fy1023[12] = {
   0,
   1.986165,
   -0.02585154,
   -0.3663519,
   -0.8914288,
   -0.8086883,
   -0.5247661,
   -0.3568382,
   -0.2703879,
   -0.2281003,
   -0.1577336,
   -0.3747214};
   Double_t S18_gr_ThetaY_vs_Momentum_fex1023[12] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fey1023[12] = {
   0,
   0.0796775,
   0.0204227,
   0.01063274,
   0.00813975,
   0.007180681,
   0.006948199,
   0.007235936,
   0.007744389,
   0.008563493,
   0.00974567,
   0.03713724};
   gre = new TGraphErrors(12,S18_gr_ThetaY_vs_Momentum_fx1023,S18_gr_ThetaY_vs_Momentum_fy1023,S18_gr_ThetaY_vs_Momentum_fex1023,S18_gr_ThetaY_vs_Momentum_fey1023);
   gre->SetName("S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023 = new TH1F("Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023","",100,0,3150);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->SetMinimum(-2.5);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->SetMaximum(2.5);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->SetDirectory(0);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->SetLineColor(ci);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetXaxis()->SetRange(24,80);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetXaxis()->CenterTitle(true);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetYaxis()->CenterTitle(true);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S18_gr_ThetaY_vs_Momentum10201023);
   
   gre->Draw("lp ");
   
   Double_t S12S18_gr_ThetaY_vs_Momentum_fx1024[12] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fy1024[12] = {
   0,
   2.027659,
   -0.03122951,
   -0.3015978,
   -0.840135,
   -0.8307809,
   -0.5030884,
   -0.3231137,
   -0.2610507,
   -0.2112397,
   -0.08367844,
   -0.09156682};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fex1024[12] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fey1024[12] = {
   0,
   0.05680139,
   0.01445916,
   0.00741331,
   0.005663664,
   0.004949082,
   0.004760562,
   0.004896564,
   0.005191649,
   0.005701165,
   0.006516978,
   0.02382507};
   gre = new TGraphErrors(12,S12S18_gr_ThetaY_vs_Momentum_fx1024,S12S18_gr_ThetaY_vs_Momentum_fy1024,S12S18_gr_ThetaY_vs_Momentum_fex1024,S12S18_gr_ThetaY_vs_Momentum_fey1024);
   gre->SetName("S12S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024 = new TH1F("Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024","",100,0,3150);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->SetMinimum(-2.5);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->SetMaximum(2.5);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->SetDirectory(0);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->SetLineColor(ci);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetXaxis()->SetRange(24,80);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetXaxis()->CenterTitle(true);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetYaxis()->CenterTitle(true);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10211024);
   
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
