void c_vs_p_slice_overlay_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-2.5,3712.5,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_slice_fx1497[15] = {
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
   Double_t S0_c_vs_p_slice_fy1497[15] = {
   -1.872516,
   -1.240597,
   -1.092599,
   0.1180903,
   0.02408834,
   0.1294285,
   0.02163848,
   -0.009226113,
   0.03087815,
   0.1057767,
   0.08878422,
   -0.005086808,
   -0.002995359,
   0.08990199,
   0.5045318};
   Double_t S0_c_vs_p_slice_fex1497[15] = {
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
   Double_t S0_c_vs_p_slice_fey1497[15] = {
   3.104726,
   0.4707751,
   0.1671696,
   0.1259177,
   0.108439,
   0.09843132,
   0.08997846,
   0.08304899,
   0.07862662,
   0.07667943,
   0.07457103,
   0.07489016,
   0.07743222,
   0.08422507,
   0.1084555};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_slice_fx1497,S0_c_vs_p_slice_fy1497,S0_c_vs_p_slice_fex1497,S0_c_vs_p_slice_fey1497);
   gre->SetName("S0_c_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_slice1497 = new TH1F("Graph_S0_c_vs_p_slice1497","",100,0,3300);
   Graph_S0_c_vs_p_slice1497->SetMinimum(-2);
   Graph_S0_c_vs_p_slice1497->SetMaximum(2);
   Graph_S0_c_vs_p_slice1497->SetDirectory(0);
   Graph_S0_c_vs_p_slice1497->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_slice1497->SetLineColor(ci);
   Graph_S0_c_vs_p_slice1497->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p_slice1497->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1497->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1497->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1497->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1497->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1497->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_slice1497->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1497->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_slice1497->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1497->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1497->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1497->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1497->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1497->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_slice1497->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_slice1497);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_slice_fx1498[15] = {
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
   Double_t S12_c_vs_p_slice_fy1498[15] = {
   -7.12113,
   -3.037621,
   -1.206802,
   -0.354578,
   0.03507479,
   0.0007782828,
   0.220255,
   -0.05803033,
   -0.1839338,
   0.1160456,
   0.01553187,
   0.02277163,
   0.01015801,
   -0.05540861,
   -0.1897623};
   Double_t S12_c_vs_p_slice_fex1498[15] = {
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
   Double_t S12_c_vs_p_slice_fey1498[15] = {
   2.113146,
   0.4629537,
   0.1663621,
   0.1256062,
   0.1087787,
   0.09854364,
   0.09045465,
   0.08464194,
   0.07986023,
   0.07643779,
   0.07623157,
   0.07536193,
   0.07911718,
   0.08198391,
   0.1134405};
   gre = new TGraphErrors(15,S12_c_vs_p_slice_fx1498,S12_c_vs_p_slice_fy1498,S12_c_vs_p_slice_fex1498,S12_c_vs_p_slice_fey1498);
   gre->SetName("S12_c_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_slice1498 = new TH1F("Graph_S12_c_vs_p_slice1498","S12",100,0,3300);
   Graph_S12_c_vs_p_slice1498->SetMinimum(-10.18877);
   Graph_S12_c_vs_p_slice1498->SetMaximum(1.265208);
   Graph_S12_c_vs_p_slice1498->SetDirectory(0);
   Graph_S12_c_vs_p_slice1498->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_slice1498->SetLineColor(ci);
   Graph_S12_c_vs_p_slice1498->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p_slice1498->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1498->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1498->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1498->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_slice1498->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1498->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_slice1498->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1498->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_slice1498->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1498->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1498->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_slice1498->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1498->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1498->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_slice1498->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_slice1498);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_slice_fx1499[15] = {
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
   Double_t S18_c_vs_p_slice_fy1499[15] = {
   -59.21465,
   -2.114904,
   -0.9006507,
   -0.1547068,
   0.1225869,
   0.07182684,
   -0.0114816,
   -0.1036018,
   -0.004188708,
   0.03901656,
   0.00327104,
   -0.02546051,
   0.08899422,
   -0.2026067,
   0.06033735};
   Double_t S18_c_vs_p_slice_fex1499[15] = {
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
   Double_t S18_c_vs_p_slice_fey1499[15] = {
   1.279899,
   0.4738124,
   0.1663562,
   0.1247319,
   0.110037,
   0.1000298,
   0.0910038,
   0.08488724,
   0.08009405,
   0.07668846,
   0.07614428,
   0.07715813,
   0.07836363,
   0.08608034,
   0.1116828};
   gre = new TGraphErrors(15,S18_c_vs_p_slice_fx1499,S18_c_vs_p_slice_fy1499,S18_c_vs_p_slice_fex1499,S18_c_vs_p_slice_fey1499);
   gre->SetName("S18_c_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_slice1499 = new TH1F("Graph_S18_c_vs_p_slice1499","S18",100,0,3300);
   Graph_S18_c_vs_p_slice1499->SetMinimum(-66.56727);
   Graph_S18_c_vs_p_slice1499->SetMaximum(6.305342);
   Graph_S18_c_vs_p_slice1499->SetDirectory(0);
   Graph_S18_c_vs_p_slice1499->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_slice1499->SetLineColor(ci);
   Graph_S18_c_vs_p_slice1499->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p_slice1499->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1499->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1499->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1499->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_slice1499->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1499->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_slice1499->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1499->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_slice1499->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1499->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1499->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_slice1499->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1499->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1499->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_slice1499->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_slice1499);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_slice_fx1500[15] = {
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
   Double_t S12S18_c_vs_p_slice_fy1500[15] = {
   -14.7935,
   -2.543741,
   -1.053564,
   -0.2565294,
   0.07577082,
   0.03675603,
   0.1025597,
   -0.07678964,
   -0.09269902,
   0.07891818,
   0.0100711,
   0.0006686236,
   0.04507157,
   -0.1242895,
   -0.15384};
   Double_t S12S18_c_vs_p_slice_fex1500[15] = {
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
   Double_t S12S18_c_vs_p_slice_fey1500[15] = {
   1.193286,
   0.335234,
   0.1178587,
   0.08861798,
   0.0774439,
   0.07028861,
   0.06425523,
   0.06005133,
   0.05666148,
   0.05427465,
   0.05403301,
   0.05418742,
   0.05611801,
   0.0603285,
   0.08886532};
   gre = new TGraphErrors(15,S12S18_c_vs_p_slice_fx1500,S12S18_c_vs_p_slice_fy1500,S12S18_c_vs_p_slice_fex1500,S12S18_c_vs_p_slice_fey1500);
   gre->SetName("S12S18_c_vs_p_slice");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_slice1500 = new TH1F("Graph_S12S18_c_vs_p_slice1500","S12S18",100,0,3300);
   Graph_S12S18_c_vs_p_slice1500->SetMinimum(-17.60214);
   Graph_S12S18_c_vs_p_slice1500->SetMaximum(1.782175);
   Graph_S12S18_c_vs_p_slice1500->SetDirectory(0);
   Graph_S12S18_c_vs_p_slice1500->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p_slice1500->SetLineColor(ci);
   Graph_S12S18_c_vs_p_slice1500->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_c_vs_p_slice1500->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_slice1500->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_slice1500->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_slice1500->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p_slice1500->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_slice1500->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p_slice1500->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_slice1500->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p_slice1500->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_slice1500->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_slice1500->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p_slice1500->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_slice1500->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_slice1500->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p_slice1500->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p_slice1500);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_slice_fx1501[15] = {
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
   Double_t S0S12S18_c_vs_p_slice_fy1501[15] = {
   -11.08071,
   -2.161377,
   -1.064188,
   -0.1275457,
   0.05671388,
   0.0697281,
   0.07349007,
   -0.0515008,
   -0.05029162,
   0.08679578,
   0.03684404,
   0.0008087687,
   0.02883315,
   -0.04448888,
   0.06847261};
   Double_t S0S12S18_c_vs_p_slice_fex1501[15] = {
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
   Double_t S0S12S18_c_vs_p_slice_fey1501[15] = {
   0.5190753,
   0.2753842,
   0.09644137,
   0.07253057,
   0.0630827,
   0.05725697,
   0.05233514,
   0.04871909,
   0.04604094,
   0.04436515,
   0.04384403,
   0.04404017,
   0.04572821,
   0.0496826,
   0.07212486};
   gre = new TGraphErrors(15,S0S12S18_c_vs_p_slice_fx1501,S0S12S18_c_vs_p_slice_fy1501,S0S12S18_c_vs_p_slice_fex1501,S0S12S18_c_vs_p_slice_fey1501);
   gre->SetName("S0S12S18_c_vs_p_slice");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p_slice1501 = new TH1F("Graph_S0S12S18_c_vs_p_slice1501","S0S12S18",100,0,3300);
   Graph_S0S12S18_c_vs_p_slice1501->SetMinimum(-12.77382);
   Graph_S0S12S18_c_vs_p_slice1501->SetMaximum(1.314635);
   Graph_S0S12S18_c_vs_p_slice1501->SetDirectory(0);
   Graph_S0S12S18_c_vs_p_slice1501->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p_slice1501->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p_slice1501->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_c_vs_p_slice1501->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_slice1501->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_slice1501->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_slice1501->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p_slice1501->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_slice1501->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p_slice1501->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_slice1501->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p_slice1501->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_slice1501->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_slice1501->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p_slice1501->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_slice1501->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_slice1501->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p_slice1501->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p_slice1501);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_slice","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p_slice","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p_slice","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_c_vs_p_slice","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p_slice","S0S12S18","lpf");
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
