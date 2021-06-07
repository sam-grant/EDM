void A_vs_p_full_overlay_trackReco_equalStats_250e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 01:13:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.625,3456.75,0.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1278[10] = {
   100,
   300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0_A_vs_p_fy1278[10] = {
   -2.829891,
   -0.260719,
   0.1488875,
   0.1236307,
   0.1247631,
   0.1460611,
   0.1513801,
   0.07716071,
   0.04274633,
   0.1317466};
   Double_t S0_A_vs_p_fex1278[10] = {
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
   Double_t S0_A_vs_p_fey1278[10] = {
   1.163204,
   0.2343443,
   0.04415912,
   0.0425354,
   0.0415242,
   0.04143937,
   0.04187968,
   0.04341598,
   0.04254379,
   0.05304686};
   TGraphErrors *gre = new TGraphErrors(10,S0_A_vs_p_fx1278,S0_A_vs_p_fy1278,S0_A_vs_p_fex1278,S0_A_vs_p_fey1278);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1278 = new TH1F("Graph_S0_A_vs_p1278","",100,0,3300);
   Graph_S0_A_vs_p1278->SetMinimum(-0.5);
   Graph_S0_A_vs_p1278->SetMaximum(0.5);
   Graph_S0_A_vs_p1278->SetDirectory(0);
   Graph_S0_A_vs_p1278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1278->SetLineColor(ci);
   Graph_S0_A_vs_p1278->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_A_vs_p1278->GetXaxis()->SetRange(0,93);
   Graph_S0_A_vs_p1278->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1278->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1278->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1278->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1278->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1278->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1278->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1278->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1278->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1278->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1278->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1278->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1278->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1278->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1278->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1278);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1279[10] = {
   100,
   300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12_A_vs_p_fy1279[10] = {
   -2.412853,
   0.1334992,
   0.2217514,
   0.1614487,
   0.1538993,
   0.1259923,
   0.09794815,
   0.1480243,
   0.09680566,
   -0.04694257};
   Double_t S12_A_vs_p_fex1279[10] = {
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
   Double_t S12_A_vs_p_fey1279[10] = {
   1.192518,
   0.2242981,
   0.04409779,
   0.04250828,
   0.04205449,
   0.04283091,
   0.04450082,
   0.04713684,
   0.04620363,
   0.05884375};
   gre = new TGraphErrors(10,S12_A_vs_p_fx1279,S12_A_vs_p_fy1279,S12_A_vs_p_fex1279,S12_A_vs_p_fey1279);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1279 = new TH1F("Graph_S12_A_vs_p1279","S12",100,0,3300);
   Graph_S12_A_vs_p1279->SetMinimum(-4.001688);
   Graph_S12_A_vs_p1279->SetMaximum(0.7541142);
   Graph_S12_A_vs_p1279->SetDirectory(0);
   Graph_S12_A_vs_p1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1279->SetLineColor(ci);
   Graph_S12_A_vs_p1279->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_A_vs_p1279->GetXaxis()->SetRange(0,93);
   Graph_S12_A_vs_p1279->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1279->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1279->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1279->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1279->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1279->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1279->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1279->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1279->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1279->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1279->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1279->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1279->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1279->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1279);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1280[10] = {
   100,
   300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S18_A_vs_p_fy1280[10] = {
   -4.127643,
   0.2462487,
   0.1874956,
   0.1485899,
   0.1772524,
   0.1379035,
   0.1014133,
   0.1332606,
   0.1250999,
   -0.02198775};
   Double_t S18_A_vs_p_fex1280[10] = {
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
   Double_t S18_A_vs_p_fey1280[10] = {
   1.147407,
   0.2297284,
   0.0442888,
   0.04272397,
   0.04286525,
   0.04376099,
   0.04619357,
   0.0487257,
   0.04694502,
   0.06170691};
   gre = new TGraphErrors(10,S18_A_vs_p_fx1280,S18_A_vs_p_fy1280,S18_A_vs_p_fex1280,S18_A_vs_p_fey1280);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1280 = new TH1F("Graph_S18_A_vs_p1280","S18",100,0,3300);
   Graph_S18_A_vs_p1280->SetMinimum(-5.850152);
   Graph_S18_A_vs_p1280->SetMaximum(1.05108);
   Graph_S18_A_vs_p1280->SetDirectory(0);
   Graph_S18_A_vs_p1280->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1280->SetLineColor(ci);
   Graph_S18_A_vs_p1280->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_A_vs_p1280->GetXaxis()->SetRange(0,93);
   Graph_S18_A_vs_p1280->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1280->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1280->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1280->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1280->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1280->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1280->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1280->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1280->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1280->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1280->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1280->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1280->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1280->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1280->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1280);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_A_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_A_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_A_vs_p","S18","lpf");
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
