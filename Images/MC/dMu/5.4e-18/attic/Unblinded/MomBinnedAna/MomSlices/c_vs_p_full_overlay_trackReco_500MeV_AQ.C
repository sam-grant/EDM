void c_vs_p_full_overlay_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-5.25,3378.375,7.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1256[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t S0_c_vs_p_fy1256[6] = {
   2.089632,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15};
   Double_t S0_c_vs_p_fex1256[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t S0_c_vs_p_fey1256[6] = {
   76.21243,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12};
   TGraphErrors *gre = new TGraphErrors(6,S0_c_vs_p_fx1256,S0_c_vs_p_fy1256,S0_c_vs_p_fex1256,S0_c_vs_p_fey1256);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1256 = new TH1F("Graph_S0_c_vs_p1256","",100,0,3300);
   Graph_S0_c_vs_p1256->SetMinimum(-4);
   Graph_S0_c_vs_p1256->SetMaximum(6);
   Graph_S0_c_vs_p1256->SetDirectory(0);
   Graph_S0_c_vs_p1256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1256->SetLineColor(ci);
   Graph_S0_c_vs_p1256->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_S0_c_vs_p1256->GetXaxis()->SetRange(1,91);
   Graph_S0_c_vs_p1256->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1256->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1256->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1256->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1256->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1256->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1256->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1256->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1256->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1256->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1256->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1256->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1256->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1256->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1256->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1256);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1257[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t S12_c_vs_p_fy1257[6] = {
   -2.057928,
   -0.6257123,
   -0.2654338,
   -0.1977705,
   -0.1249358,
   -0.1243222};
   Double_t S12_c_vs_p_fex1257[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t S12_c_vs_p_fey1257[6] = {
   0.07756196,
   0.02703544,
   0.02162268,
   0.01956929,
   0.02129957,
   0.02893144};
   gre = new TGraphErrors(6,S12_c_vs_p_fx1257,S12_c_vs_p_fy1257,S12_c_vs_p_fex1257,S12_c_vs_p_fey1257);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1257 = new TH1F("Graph_S12_c_vs_p1257","S12",100,0,3300);
   Graph_S12_c_vs_p1257->SetMinimum(-2.3395);
   Graph_S12_c_vs_p1257->SetMaximum(0.1086192);
   Graph_S12_c_vs_p1257->SetDirectory(0);
   Graph_S12_c_vs_p1257->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1257->SetLineColor(ci);
   Graph_S12_c_vs_p1257->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_S12_c_vs_p1257->GetXaxis()->SetRange(1,91);
   Graph_S12_c_vs_p1257->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1257->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1257->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1257->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1257->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1257->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1257->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1257->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1257->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1257->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1257->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1257->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1257->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1257->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1257->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1257);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1258[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t S18_c_vs_p_fy1258[6] = {
   -0.3461691,
   -0.1550042,
   -0.04366693,
   -0.000540541,
   -0.2457284,
   -0.2564983};
   Double_t S18_c_vs_p_fex1258[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t S18_c_vs_p_fey1258[6] = {
   0.6986445,
   0.183959,
   0.1095133,
   0.0826801,
   0.0803877,
   0.07833569};
   gre = new TGraphErrors(6,S18_c_vs_p_fx1258,S18_c_vs_p_fy1258,S18_c_vs_p_fex1258,S18_c_vs_p_fey1258);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1258 = new TH1F("Graph_S18_c_vs_p1258","S18",100,0,3300);
   Graph_S18_c_vs_p1258->SetMinimum(-1.184542);
   Graph_S18_c_vs_p1258->SetMaximum(0.4922043);
   Graph_S18_c_vs_p1258->SetDirectory(0);
   Graph_S18_c_vs_p1258->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1258->SetLineColor(ci);
   Graph_S18_c_vs_p1258->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_S18_c_vs_p1258->GetXaxis()->SetRange(1,91);
   Graph_S18_c_vs_p1258->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1258->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1258->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1258->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1258->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1258->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1258->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1258->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1258->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1258->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1258->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1258->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1258->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1258->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1258->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1258);
   
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
