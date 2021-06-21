void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:31:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-5.25,3605.25,7.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1546[15] = {
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
   Double_t S0_c_vs_p_fy1546[15] = {
   -6.284034,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15};
   Double_t S0_c_vs_p_fex1546[15] = {
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
   Double_t S0_c_vs_p_fey1546[15] = {
   2.052493e-06,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1546,S0_c_vs_p_fy1546,S0_c_vs_p_fex1546,S0_c_vs_p_fey1546);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1546 = new TH1F("Graph_S0_c_vs_p1546","",100,0,3300);
   Graph_S0_c_vs_p1546->SetMinimum(-4);
   Graph_S0_c_vs_p1546->SetMaximum(6);
   Graph_S0_c_vs_p1546->SetDirectory(0);
   Graph_S0_c_vs_p1546->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1546->SetLineColor(ci);
   Graph_S0_c_vs_p1546->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p1546->GetXaxis()->SetRange(0,97);
   Graph_S0_c_vs_p1546->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1546->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1546->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1546->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1546->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1546->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1546->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1546->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1546->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1546->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1546->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1546->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1546->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1546->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1546->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1546);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1547[15] = {
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
   Double_t S12_c_vs_p_fy1547[15] = {
   1.439755,
   2.565597,
   1.360371,
   0.6627374,
   0.4264619,
   0.2747027,
   0.2542693,
   0.2311756,
   0.2197563,
   0.164589,
   0.1093696,
   0.1438718,
   0.128084,
   0.1470868,
   0.04492196};
   Double_t S12_c_vs_p_fex1547[15] = {
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
   Double_t S12_c_vs_p_fey1547[15] = {
   0.9215847,
   0.1596016,
   0.0557997,
   0.04321322,
   0.03832433,
   0.03545971,
   0.03316547,
   0.0314081,
   0.03050556,
   0.03040434,
   0.03141836,
   0.03359168,
   0.03730219,
   0.03993281,
   0.05764325};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1547,S12_c_vs_p_fy1547,S12_c_vs_p_fex1547,S12_c_vs_p_fey1547);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1547 = new TH1F("Graph_S12_c_vs_p1547","S12",100,0,3300);
   Graph_S12_c_vs_p1547->SetMinimum(-0.2865133);
   Graph_S12_c_vs_p1547->SetMaximum(2.998991);
   Graph_S12_c_vs_p1547->SetDirectory(0);
   Graph_S12_c_vs_p1547->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1547->SetLineColor(ci);
   Graph_S12_c_vs_p1547->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p1547->GetXaxis()->SetRange(0,97);
   Graph_S12_c_vs_p1547->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1547->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1547->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1547->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1547->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1547->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1547->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1547->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1547->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1547->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1547->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1547->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1547->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1547->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1547->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1547);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1548[15] = {
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
   Double_t S18_c_vs_p_fy1548[15] = {
   0.8153823,
   2.042126,
   1.213744,
   0.424863,
   -0.1319804,
   -0.05760277,
   0.1282509,
   -0.003328086,
   -0.02769911,
   0.04835797,
   0.21033,
   0.2463782,
   0.2852863,
   0.3406446,
   0.02421213};
   Double_t S18_c_vs_p_fex1548[15] = {
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
   Double_t S18_c_vs_p_fey1548[15] = {
   0.965039,
   1.061105,
   0.5957882,
   0.3234152,
   0.2342432,
   0.1987842,
   0.1668492,
   0.145223,
   0.1311966,
   0.1258426,
   0.1248275,
   0.1269244,
   0.1225642,
   0.09793781,
   0.1032949};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1548,S18_c_vs_p_fy1548,S18_c_vs_p_fex1548,S18_c_vs_p_fey1548);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1548 = new TH1F("Graph_S18_c_vs_p1548","S18",100,0,3300);
   Graph_S18_c_vs_p1548->SetMinimum(-0.7131691);
   Graph_S18_c_vs_p1548->SetMaximum(3.450176);
   Graph_S18_c_vs_p1548->SetDirectory(0);
   Graph_S18_c_vs_p1548->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1548->SetLineColor(ci);
   Graph_S18_c_vs_p1548->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p1548->GetXaxis()->SetRange(0,97);
   Graph_S18_c_vs_p1548->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1548->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1548->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1548->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1548->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1548->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1548->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1548->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1548->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1548->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1548->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1548->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1548->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1548->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1548->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1548);
   
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
