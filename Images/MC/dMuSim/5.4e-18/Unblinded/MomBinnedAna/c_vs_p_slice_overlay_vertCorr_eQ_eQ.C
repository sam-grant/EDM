void c_vs_p_slice_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:18:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.325,3378.375,0.925);
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
   -0.0977003,
   -0.5522127,
   -0.2896275,
   -0.01030706,
   -0.0001579543,
   0.0004538926,
   0.0005509806,
   0.0005309844,
   0.000156431,
   -1.619718e-06,
   0.0001887316,
   -0.0008459781,
   0.001050233,
   3.388604e-05,
   0.001026681};
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
   0.7462208,
   0.1099215,
   0.03807217,
   0.02868815,
   0.02505574,
   0.02255336,
   0.02065688,
   0.01925068,
   0.01815377,
   0.01740742,
   0.01698114,
   0.01671942,
   0.01677942,
   0.0172607,
   0.02430279};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1165,S0_c_vs_p_fy1165,S0_c_vs_p_fex1165,S0_c_vs_p_fey1165);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1165 = new TH1F("Graph_S0_c_vs_p1165","",100,0,3300);
   Graph_S0_c_vs_p1165->SetMinimum(-2);
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
   -0.5260405,
   -0.9027508,
   -0.3803719,
   -0.04092909,
   -0.003189567,
   -0.0006109163,
   -0.0006383305,
   -0.0002250817,
   -0.0004196547,
   0.0004846599,
   0.0004806288,
   -0.0003816124,
   -0.0007051266,
   0.001700404,
   0.01201635};
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
   0.7101901,
   0.1065102,
   0.03830182,
   0.02867271,
   0.0250947,
   0.02266334,
   0.02079604,
   0.01930588,
   0.01825575,
   0.01750337,
   0.01711326,
   0.01692049,
   0.01709235,
   0.0176585,
   0.0252514};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1166,S12_c_vs_p_fy1166,S12_c_vs_p_fex1166,S12_c_vs_p_fey1166);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1166 = new TH1F("Graph_S12_c_vs_p1166","S12",100,0,3300);
   Graph_S12_c_vs_p1166->SetMinimum(-1.378269);
   Graph_S12_c_vs_p1166->SetMaximum(0.3261876);
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
   -0.07888193,
   -0.7192155,
   -0.3553448,
   -0.02684839,
   -0.0006655299,
   -0.0005312434,
   0.0002779528,
   0.0002512247,
   2.92319e-05,
   3.196327e-05,
   -0.0003289478,
   7.007427e-05,
   -0.001325034,
   0.002025843,
   0.003769621};
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
   0.6954877,
   0.1080228,
   0.03837179,
   0.02874185,
   0.0251757,
   0.02276991,
   0.02087623,
   0.01946821,
   0.01834866,
   0.01766498,
   0.01728914,
   0.01703938,
   0.01724605,
   0.01788343,
   0.02609269};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1167,S18_c_vs_p_fy1167,S18_c_vs_p_fex1167,S18_c_vs_p_fey1167);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1167 = new TH1F("Graph_S18_c_vs_p1167","S18",100,0,3300);
   Graph_S18_c_vs_p1167->SetMinimum(-0.9716228);
   Graph_S18_c_vs_p1167->SetMaximum(0.7609902);
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
