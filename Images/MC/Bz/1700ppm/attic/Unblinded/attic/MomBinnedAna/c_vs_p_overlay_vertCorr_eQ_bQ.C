void c_vs_p_overlay_vertCorr_eQ_bQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:03:15 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(488,-2.5,1712,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1121[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S0_c_vs_p_fy1121[8] = {
   -0.1917735,
   -0.1688693,
   -0.09148822,
   -0.06763114,
   -0.2626619,
   -0.08441237,
   -0.1020141,
   -0.1478983};
   Double_t S0_c_vs_p_fex1121[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0_c_vs_p_fey1121[8] = {
   0.06591488,
   0.05617828,
   0.0501577,
   0.04655677,
   0.04433189,
   0.04266044,
   0.04124356,
   0.04027874};
   TGraphErrors *gre = new TGraphErrors(8,S0_c_vs_p_fx1121,S0_c_vs_p_fy1121,S0_c_vs_p_fex1121,S0_c_vs_p_fey1121);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1121 = new TH1F("Graph_S0_c_vs_p1121","",100,620,1580);
   Graph_S0_c_vs_p1121->SetMinimum(-2);
   Graph_S0_c_vs_p1121->SetMaximum(2);
   Graph_S0_c_vs_p1121->SetDirectory(0);
   Graph_S0_c_vs_p1121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1121->SetLineColor(ci);
   Graph_S0_c_vs_p1121->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1121->GetXaxis()->SetRange(0,101);
   Graph_S0_c_vs_p1121->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1121->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1121->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1121->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1121->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1121->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1121->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1121->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1121->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1121->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1121->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1121->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1121);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1122[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S12_c_vs_p_fy1122[8] = {
   -0.1412869,
   -0.2809857,
   -0.159308,
   -0.1921724,
   -0.1251079,
   -0.2491014,
   -0.1986826,
   -0.1572668};
   Double_t S12_c_vs_p_fex1122[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S12_c_vs_p_fey1122[8] = {
   0.06578909,
   0.05616439,
   0.04993484,
   0.0464767,
   0.04415364,
   0.0424681,
   0.04099655,
   0.04026917};
   gre = new TGraphErrors(8,S12_c_vs_p_fx1122,S12_c_vs_p_fy1122,S12_c_vs_p_fex1122,S12_c_vs_p_fey1122);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1122 = new TH1F("Graph_S12_c_vs_p1122","S12",100,620,1580);
   Graph_S12_c_vs_p1122->SetMinimum(-0.3633154);
   Graph_S12_c_vs_p1122->SetMaximum(-0.04933254);
   Graph_S12_c_vs_p1122->SetDirectory(0);
   Graph_S12_c_vs_p1122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1122->SetLineColor(ci);
   Graph_S12_c_vs_p1122->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1122->GetXaxis()->SetRange(0,101);
   Graph_S12_c_vs_p1122->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1122->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1122->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1122->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1122->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1122->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1122->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1122->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1122->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1122->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1122->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1122->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1122->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1122->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1122);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1123[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S18_c_vs_p_fy1123[8] = {
   -0.1009555,
   -0.1987244,
   -0.1945598,
   -0.1291634,
   -0.1565138,
   -0.1608618,
   -0.1371493,
   -0.1822528};
   Double_t S18_c_vs_p_fex1123[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S18_c_vs_p_fey1123[8] = {
   0.0655076,
   0.05599518,
   0.04945174,
   0.04599309,
   0.04408026,
   0.04237827,
   0.04124477,
   0.04043747};
   gre = new TGraphErrors(8,S18_c_vs_p_fx1123,S18_c_vs_p_fy1123,S18_c_vs_p_fex1123,S18_c_vs_p_fey1123);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1123 = new TH1F("Graph_S18_c_vs_p1123","S18",100,620,1580);
   Graph_S18_c_vs_p1123->SetMinimum(-0.2766468);
   Graph_S18_c_vs_p1123->SetMaximum(-0.01352071);
   Graph_S18_c_vs_p1123->SetDirectory(0);
   Graph_S18_c_vs_p1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1123->SetLineColor(ci);
   Graph_S18_c_vs_p1123->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1123->GetXaxis()->SetRange(0,101);
   Graph_S18_c_vs_p1123->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1123->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1123->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1123->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1123->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1123->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1123->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1123->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1123->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1123->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1123->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1123->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1123->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1123);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_fx1124[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S0S12S18_c_vs_p_fy1124[8] = {
   -0.1445332,
   -0.2169128,
   -0.1491741,
   -0.128553,
   -0.1816311,
   -0.1645296,
   -0.1457781,
   -0.1630837};
   Double_t S0S12S18_c_vs_p_fex1124[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0S12S18_c_vs_p_fey1124[8] = {
   0.03798128,
   0.03241725,
   0.02879343,
   0.02676861,
   0.02552769,
   0.02455293,
   0.02377971,
   0.02329889};
   gre = new TGraphErrors(8,S0S12S18_c_vs_p_fx1124,S0S12S18_c_vs_p_fy1124,S0S12S18_c_vs_p_fex1124,S0S12S18_c_vs_p_fey1124);
   gre->SetName("S0S12S18_c_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p1124 = new TH1F("Graph_S0S12S18_c_vs_p1124","S0S12S18",100,620,1580);
   Graph_S0S12S18_c_vs_p1124->SetMinimum(-0.2640846);
   Graph_S0S12S18_c_vs_p1124->SetMaximum(-0.08702978);
   Graph_S0S12S18_c_vs_p1124->SetDirectory(0);
   Graph_S0S12S18_c_vs_p1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p1124->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1124->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1124->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p1124);
   
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
   entry=leg->AddEntry("S0S12S18_c_vs_p","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
