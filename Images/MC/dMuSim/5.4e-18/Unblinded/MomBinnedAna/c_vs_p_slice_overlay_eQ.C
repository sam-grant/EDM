void c_vs_p_slice_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:17:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-3.45,3378.375,1.05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1165[15] = {
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
   Double_t S0_c_vs_p_fy1165[15] = {
   -0.009984429,
   -1.220638,
   -1.079457,
   -0.1096864,
   0.002379607,
   0.0003389081,
   -0.01324786,
   0.03374711,
   0.004458808,
   -0.01686141,
   -0.002663718,
   -0.009547191,
   -0.001035556,
   -0.0170003,
   -0.01281904};
   Double_t S0_c_vs_p_fex1165[15] = {
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
   Double_t S0_c_vs_p_fey1165[15] = {
   0.7427628,
   0.1099332,
   0.03808649,
   0.02868908,
   0.02505567,
   0.02255334,
   0.02065695,
   0.01925043,
   0.01815389,
   0.01740734,
   0.01698124,
   0.01671971,
   0.01677882,
   0.01726116,
   0.02430983};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1165,S0_c_vs_p_fy1165,S0_c_vs_p_fex1165,S0_c_vs_p_fey1165);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1165 = new TH1F("Graph_S0_c_vs_p1165","",100,0,3300);
   Graph_S0_c_vs_p1165->SetMinimum(-3);
   Graph_S0_c_vs_p1165->SetMaximum(0.6);
   Graph_S0_c_vs_p1165->SetDirectory(0);
   Graph_S0_c_vs_p1165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1165->SetLineColor(ci);
   Graph_S0_c_vs_p1165->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_S0_c_vs_p1165->GetXaxis()->SetRange(1,91);
   Graph_S0_c_vs_p1165->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1165->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1165->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1165->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1165->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1165->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1165->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1165->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1165->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1165->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1165->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1165->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1165->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1165->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1165);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1166[15] = {
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
   Double_t S12_c_vs_p_fy1166[15] = {
   -0.9229315,
   -2.09631,
   -1.443148,
   -0.563141,
   -0.4064294,
   -0.2465827,
   -0.2175602,
   -0.195859,
   -0.1875369,
   -0.149592,
   -0.117665,
   -0.108809,
   -0.1064658,
   -0.1176701,
   -0.07691742};
   Double_t S12_c_vs_p_fex1166[15] = {
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
   Double_t S12_c_vs_p_fey1166[15] = {
   0.7063315,
   0.1066347,
   0.03831592,
   0.02867379,
   0.02509524,
   0.02266273,
   0.02079479,
   0.01930604,
   0.01825716,
   0.01750386,
   0.01711338,
   0.01691912,
   0.01709212,
   0.0176575,
   0.02526037};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1166,S12_c_vs_p_fy1166,S12_c_vs_p_fex1166,S12_c_vs_p_fey1166);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1166 = new TH1F("Graph_S12_c_vs_p1166","S12",100,0,3300);
   Graph_S12_c_vs_p1166->SetMinimum(-2.418074);
   Graph_S12_c_vs_p1166->SetMaximum(0.1634717);
   Graph_S12_c_vs_p1166->SetDirectory(0);
   Graph_S12_c_vs_p1166->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1166->SetLineColor(ci);
   Graph_S12_c_vs_p1166->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_S12_c_vs_p1166->GetXaxis()->SetRange(1,91);
   Graph_S12_c_vs_p1166->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1166->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1166->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1166->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1166->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1166->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1166->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1166->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1166->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1166->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1166->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1166->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1166->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1166->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1166->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1166);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1167[15] = {
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
   Double_t S18_c_vs_p_fy1167[15] = {
   -1.354475,
   -1.719315,
   -1.392948,
   -0.3499842,
   -0.1840196,
   -0.2402572,
   -0.1329559,
   -0.1193758,
   -0.1427676,
   -0.1079668,
   -0.08022456,
   -0.08955381,
   -0.07862877,
   -0.1005368,
   -0.05271573};
   Double_t S18_c_vs_p_fex1167[15] = {
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
   Double_t S18_c_vs_p_fey1167[15] = {
   0.6968829,
   0.1080613,
   0.03839204,
   0.02874246,
   0.02517529,
   0.02276992,
   0.0208762,
   0.01946894,
   0.0183486,
   0.01766553,
   0.01728862,
   0.01703822,
   0.0172464,
   0.01788452,
   0.02609222};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1167,S18_c_vs_p_fy1167,S18_c_vs_p_fex1167,S18_c_vs_p_fey1167);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1167 = new TH1F("Graph_S18_c_vs_p1167","S18",100,0,3300);
   Graph_S18_c_vs_p1167->SetMinimum(-2.253831);
   Graph_S18_c_vs_p1167->SetMaximum(0.1758499);
   Graph_S18_c_vs_p1167->SetDirectory(0);
   Graph_S18_c_vs_p1167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1167->SetLineColor(ci);
   Graph_S18_c_vs_p1167->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_S18_c_vs_p1167->GetXaxis()->SetRange(1,91);
   Graph_S18_c_vs_p1167->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1167->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1167->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1167->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1167->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1167->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1167->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1167->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1167->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1167->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1167->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1167->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1167->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1167->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1167);
   
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
