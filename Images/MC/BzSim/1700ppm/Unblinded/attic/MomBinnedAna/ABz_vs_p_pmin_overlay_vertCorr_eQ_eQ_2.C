void ABz_vs_p_pmin_overlay_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:58 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-2.5,2600,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_pmin_fx1512[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0_ABz_vs_p_pmin_fy1512[9] = {
   0.1349719,
   0.09627031,
   0.08540386,
   0.1204005,
   0.1406392,
   0.1306333,
   0.118086,
   0.1557869,
   0.1030511};
   Double_t S0_ABz_vs_p_pmin_fex1512[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_ABz_vs_p_pmin_fey1512[9] = {
   0.04601853,
   0.04508313,
   0.0448887,
   0.04537788,
   0.04660419,
   0.04883786,
   0.0524353,
   0.05773326,
   0.06676721};
   TGraphErrors *gre = new TGraphErrors(9,S0_ABz_vs_p_pmin_fx1512,S0_ABz_vs_p_pmin_fy1512,S0_ABz_vs_p_pmin_fex1512,S0_ABz_vs_p_pmin_fey1512);
   gre->SetName("S0_ABz_vs_p_pmin");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p_pmin1512 = new TH1F("Graph_S0_ABz_vs_p_pmin1512","",100,440,2360);
   Graph_S0_ABz_vs_p_pmin1512->SetMinimum(-2);
   Graph_S0_ABz_vs_p_pmin1512->SetMaximum(2);
   Graph_S0_ABz_vs_p_pmin1512->SetDirectory(0);
   Graph_S0_ABz_vs_p_pmin1512->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p_pmin1512->SetLineColor(ci);
   Graph_S0_ABz_vs_p_pmin1512->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_ABz_vs_p_pmin1512->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_pmin1512->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_pmin1512->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_pmin1512->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_pmin1512->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_pmin1512->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p_pmin1512->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_pmin1512->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p_pmin1512->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_pmin1512->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_pmin1512->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_pmin1512->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_pmin1512->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_pmin1512->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p_pmin1512->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p_pmin1512);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_pmin_fx1513[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12_ABz_vs_p_pmin_fy1513[9] = {
   0.1505332,
   0.1873651,
   0.1642669,
   0.1994278,
   0.1180249,
   0.15479,
   0.10706,
   0.07873612,
   0.08520553};
   Double_t S12_ABz_vs_p_pmin_fex1513[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_ABz_vs_p_pmin_fey1513[9] = {
   0.04628177,
   0.04543425,
   0.04532652,
   0.04585324,
   0.04728374,
   0.04943157,
   0.05298513,
   0.05871072,
   0.06716168};
   gre = new TGraphErrors(9,S12_ABz_vs_p_pmin_fx1513,S12_ABz_vs_p_pmin_fy1513,S12_ABz_vs_p_pmin_fex1513,S12_ABz_vs_p_pmin_fey1513);
   gre->SetName("S12_ABz_vs_p_pmin");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p_pmin1513 = new TH1F("Graph_S12_ABz_vs_p_pmin1513","S12",100,440,2360);
   Graph_S12_ABz_vs_p_pmin1513->SetMinimum(0.01623947);
   Graph_S12_ABz_vs_p_pmin1513->SetMaximum(0.2680048);
   Graph_S12_ABz_vs_p_pmin1513->SetDirectory(0);
   Graph_S12_ABz_vs_p_pmin1513->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p_pmin1513->SetLineColor(ci);
   Graph_S12_ABz_vs_p_pmin1513->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_ABz_vs_p_pmin1513->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_pmin1513->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_pmin1513->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_pmin1513->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p_pmin1513->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_pmin1513->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p_pmin1513->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_pmin1513->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p_pmin1513->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_pmin1513->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_pmin1513->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p_pmin1513->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_pmin1513->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_pmin1513->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p_pmin1513->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p_pmin1513);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_pmin_fx1514[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S18_ABz_vs_p_pmin_fy1514[9] = {
   0.1545872,
   0.1705558,
   0.185342,
   0.1776969,
   0.1885582,
   0.1644215,
   0.1752739,
   0.08739612,
   0.1284381};
   Double_t S18_ABz_vs_p_pmin_fex1514[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_ABz_vs_p_pmin_fey1514[9] = {
   0.04671944,
   0.04594541,
   0.04571701,
   0.04612676,
   0.04742488,
   0.04986498,
   0.0535376,
   0.05961981,
   0.06875596};
   gre = new TGraphErrors(9,S18_ABz_vs_p_pmin_fx1514,S18_ABz_vs_p_pmin_fy1514,S18_ABz_vs_p_pmin_fex1514,S18_ABz_vs_p_pmin_fey1514);
   gre->SetName("S18_ABz_vs_p_pmin");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p_pmin1514 = new TH1F("Graph_S18_ABz_vs_p_pmin1514","S18",100,440,2360);
   Graph_S18_ABz_vs_p_pmin1514->SetMinimum(0.006955636);
   Graph_S18_ABz_vs_p_pmin1514->SetMaximum(0.2568037);
   Graph_S18_ABz_vs_p_pmin1514->SetDirectory(0);
   Graph_S18_ABz_vs_p_pmin1514->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p_pmin1514->SetLineColor(ci);
   Graph_S18_ABz_vs_p_pmin1514->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_ABz_vs_p_pmin1514->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_pmin1514->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_pmin1514->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_pmin1514->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p_pmin1514->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_pmin1514->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p_pmin1514->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_pmin1514->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p_pmin1514->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_pmin1514->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_pmin1514->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p_pmin1514->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_pmin1514->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_pmin1514->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p_pmin1514->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p_pmin1514);
   
   gre->Draw("p ");
   
   Double_t S12S18_ABz_vs_p_pmin_fx1515[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12S18_ABz_vs_p_pmin_fy1515[9] = {
   0.1525899,
   0.1791374,
   0.1745739,
   0.1898521,
   0.1544489,
   0.1595674,
   0.140011,
   0.08173531,
   0.1054694};
   Double_t S12S18_ABz_vs_p_pmin_fex1515[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_ABz_vs_p_pmin_fey1515[9] = {
   0.03288621,
   0.0323132,
   0.03219756,
   0.03253675,
   0.0335046,
   0.03513095,
   0.03769718,
   0.04188981,
   0.04817421};
   gre = new TGraphErrors(9,S12S18_ABz_vs_p_pmin_fx1515,S12S18_ABz_vs_p_pmin_fy1515,S12S18_ABz_vs_p_pmin_fex1515,S12S18_ABz_vs_p_pmin_fey1515);
   gre->SetName("S12S18_ABz_vs_p_pmin");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p_pmin1515 = new TH1F("Graph_S12S18_ABz_vs_p_pmin1515","S12S18",100,440,2360);
   Graph_S12S18_ABz_vs_p_pmin1515->SetMinimum(0.02159117);
   Graph_S12S18_ABz_vs_p_pmin1515->SetMaximum(0.2406432);
   Graph_S12S18_ABz_vs_p_pmin1515->SetDirectory(0);
   Graph_S12S18_ABz_vs_p_pmin1515->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_ABz_vs_p_pmin1515->SetLineColor(ci);
   Graph_S12S18_ABz_vs_p_pmin1515->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12S18_ABz_vs_p_pmin1515->GetXaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_pmin1515->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_pmin1515->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_pmin1515->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_ABz_vs_p_pmin1515->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_pmin1515->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_ABz_vs_p_pmin1515->GetYaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_pmin1515->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_ABz_vs_p_pmin1515->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_pmin1515->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_pmin1515->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_ABz_vs_p_pmin1515->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_pmin1515->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_pmin1515->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_ABz_vs_p_pmin1515->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_ABz_vs_p_pmin1515);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_pmin_fx1516[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0S12S18_ABz_vs_p_pmin_fy1516[9] = {
   0.1468622,
   0.1515482,
   0.145152,
   0.1675414,
   0.1513093,
   0.1512716,
   0.1335041,
   0.1067799,
   0.1068166};
   Double_t S0S12S18_ABz_vs_p_pmin_fex1516[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_ABz_vs_p_pmin_fey1516[9] = {
   0.02676218,
   0.02627243,
   0.02617487,
   0.02646065,
   0.0272331,
   0.02856227,
   0.03066308,
   0.03397575,
   0.03917298};
   gre = new TGraphErrors(9,S0S12S18_ABz_vs_p_pmin_fx1516,S0S12S18_ABz_vs_p_pmin_fy1516,S0S12S18_ABz_vs_p_pmin_fex1516,S0S12S18_ABz_vs_p_pmin_fey1516);
   gre->SetName("S0S12S18_ABz_vs_p_pmin");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p_pmin1516 = new TH1F("Graph_S0S12S18_ABz_vs_p_pmin1516","S0S12S18",100,440,2360);
   Graph_S0S12S18_ABz_vs_p_pmin1516->SetMinimum(0.0550078);
   Graph_S0S12S18_ABz_vs_p_pmin1516->SetMaximum(0.2066379);
   Graph_S0S12S18_ABz_vs_p_pmin1516->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p_pmin1516->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p_pmin1516->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p_pmin1516->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p_pmin1516);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p_pmin","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p_pmin","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p_pmin","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_ABz_vs_p_pmin","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p_pmin","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
