void c_vs_p_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:46:56 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.69375,2850.5,0.24375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1176[17] = {
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
   Double_t S0_c_vs_p_fy1176[17] = {
   -0.09265498,
   -0.04615559,
   -0.03969041,
   -0.07217765,
   -0.03840616,
   0.02678908,
   -0.01641684,
   -0.05591032,
   0.02520337,
   -0.04554996,
   -0.04231685,
   -0.04415367,
   -0.02342628,
   0.004599448,
   0.04743098,
   0.04569793,
   -0.01544748};
   Double_t S0_c_vs_p_fex1176[17] = {
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
   Double_t S0_c_vs_p_fey1176[17] = {
   0.03925702,
   0.03650652,
   0.0343966,
   0.03269414,
   0.03131149,
   0.02996133,
   0.02879615,
   0.02775894,
   0.0269557,
   0.02610131,
   0.02556276,
   0.02514537,
   0.02485312,
   0.02468667,
   0.02456105,
   0.02470611,
   0.02466628};
   TGraphErrors *gre = new TGraphErrors(17,S0_c_vs_p_fx1176,S0_c_vs_p_fy1176,S0_c_vs_p_fex1176,S0_c_vs_p_fey1176);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1176 = new TH1F("Graph_S0_c_vs_p1176","",100,530,2570);
   Graph_S0_c_vs_p1176->SetMinimum(-0.6);
   Graph_S0_c_vs_p1176->SetMaximum(0.15);
   Graph_S0_c_vs_p1176->SetDirectory(0);
   Graph_S0_c_vs_p1176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1176->SetLineColor(ci);
   Graph_S0_c_vs_p1176->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1176->GetXaxis()->SetRange(0,101);
   Graph_S0_c_vs_p1176->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1176->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1176->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1176->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1176->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1176->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1176->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1176->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1176->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1176->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1176->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1176->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1176->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1176->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1176);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1177[17] = {
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
   Double_t S12_c_vs_p_fy1177[17] = {
   -0.5174283,
   -0.3864193,
   -0.4244765,
   -0.3238856,
   -0.3186935,
   -0.2701782,
   -0.2456055,
   -0.2063089,
   -0.1846013,
   -0.183495,
   -0.1410604,
   -0.1305279,
   -0.1457373,
   -0.09789376,
   -0.09508823,
   -0.06950456,
   -0.07681144};
   Double_t S12_c_vs_p_fex1177[17] = {
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
   Double_t S12_c_vs_p_fey1177[17] = {
   0.03930726,
   0.03669545,
   0.03461847,
   0.03295381,
   0.03140015,
   0.03008618,
   0.02889903,
   0.02792913,
   0.02712998,
   0.02630634,
   0.02566152,
   0.02535755,
   0.02508251,
   0.02489801,
   0.02488039,
   0.02484864,
   0.02498795};
   gre = new TGraphErrors(17,S12_c_vs_p_fx1177,S12_c_vs_p_fy1177,S12_c_vs_p_fex1177,S12_c_vs_p_fey1177);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1177 = new TH1F("Graph_S12_c_vs_p1177","S12",100,530,2570);
   Graph_S12_c_vs_p1177->SetMinimum(-0.6079435);
   Graph_S12_c_vs_p1177->SetMaximum(0.006552043);
   Graph_S12_c_vs_p1177->SetDirectory(0);
   Graph_S12_c_vs_p1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1177->SetLineColor(ci);
   Graph_S12_c_vs_p1177->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1177->GetXaxis()->SetRange(0,101);
   Graph_S12_c_vs_p1177->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1177->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1177->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1177->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1177->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1177->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1177->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1177->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1177->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1177->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1177->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1177->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1177->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1177);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1178[17] = {
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
   Double_t S18_c_vs_p_fy1178[17] = {
   -0.4029591,
   -0.3222016,
   -0.3043836,
   -0.2112508,
   -0.2365542,
   -0.223259,
   -0.1730434,
   -0.1725335,
   -0.1662571,
   -0.1440701,
   -0.1211575,
   -0.09024486,
   -0.1249515,
   -0.07187156,
   -0.1078568,
   -0.09720941,
   -0.05675179};
   Double_t S18_c_vs_p_fex1178[17] = {
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
   Double_t S18_c_vs_p_fey1178[17] = {
   0.03931669,
   0.03676912,
   0.03464235,
   0.03303317,
   0.03158283,
   0.03021121,
   0.02917341,
   0.02813019,
   0.02721857,
   0.02647429,
   0.02595692,
   0.02552306,
   0.02528859,
   0.02509754,
   0.02496465,
   0.02514125,
   0.02531926};
   gre = new TGraphErrors(17,S18_c_vs_p_fx1178,S18_c_vs_p_fy1178,S18_c_vs_p_fex1178,S18_c_vs_p_fey1178);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1178 = new TH1F("Graph_S18_c_vs_p1178","S18",100,530,2570);
   Graph_S18_c_vs_p1178->SetMinimum(-0.4833601);
   Graph_S18_c_vs_p1178->SetMaximum(0.009651794);
   Graph_S18_c_vs_p1178->SetDirectory(0);
   Graph_S18_c_vs_p1178->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1178->SetLineColor(ci);
   Graph_S18_c_vs_p1178->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1178->GetXaxis()->SetRange(0,101);
   Graph_S18_c_vs_p1178->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1178->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1178->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1178->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1178->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1178->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1178->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1178->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1178->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1178->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1178->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1178->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1178->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1178->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1178);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
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
