void c_vs_p_overlay_eQ_coarse()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May  3 21:41:24 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(123,-0.69375,2877,0.24375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1162[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0_c_vs_p_fy1162[9] = {
   -0.09265498,
   -0.04379638,
   -0.05564972,
   0.005348301,
   -0.01669465,
   -0.04401628,
   -0.03432275,
   0.02369364,
   0.01847999};
   Double_t S0_c_vs_p_fex1162[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_c_vs_p_fey1162[9] = {
   0.03925702,
   0.02509875,
   0.02266117,
   0.02080468,
   0.01937468,
   0.01829656,
   0.01771633,
   0.01745505,
   0.01752195};
   TGraphErrors *gre = new TGraphErrors(9,S0_c_vs_p_fx1162,S0_c_vs_p_fy1162,S0_c_vs_p_fex1162,S0_c_vs_p_fey1162);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1162 = new TH1F("Graph_S0_c_vs_p1162","",100,420,2580);
   Graph_S0_c_vs_p1162->SetMinimum(-0.6);
   Graph_S0_c_vs_p1162->SetMaximum(0.15);
   Graph_S0_c_vs_p1162->SetDirectory(0);
   Graph_S0_c_vs_p1162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1162->SetLineColor(ci);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p1162->GetXaxis()->SetRange(0,101);
   Graph_S0_c_vs_p1162->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1162->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1162->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1162->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1162->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1162->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1162->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1162->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1162->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1162->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1162);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1163[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12_c_vs_p_fy1163[9] = {
   -0.5174283,
   -0.4049076,
   -0.3212128,
   -0.2588765,
   -0.1952778,
   -0.1621917,
   -0.1381182,
   -0.09710829,
   -0.07199175};
   Double_t S12_c_vs_p_fex1163[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_c_vs_p_fey1163[9] = {
   0.03930726,
   0.02524489,
   0.02278936,
   0.02088409,
   0.01949599,
   0.0184047,
   0.01787047,
   0.01763922,
   0.01767652};
   gre = new TGraphErrors(9,S12_c_vs_p_fx1163,S12_c_vs_p_fy1163,S12_c_vs_p_fex1163,S12_c_vs_p_fey1163);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1163 = new TH1F("Graph_S12_c_vs_p1163","S12",100,420,2580);
   Graph_S12_c_vs_p1163->SetMinimum(-0.6069776);
   Graph_S12_c_vs_p1163->SetMaximum(-0.004073194);
   Graph_S12_c_vs_p1163->SetDirectory(0);
   Graph_S12_c_vs_p1163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1163->SetLineColor(ci);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p1163->GetXaxis()->SetRange(0,101);
   Graph_S12_c_vs_p1163->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1163->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1163->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1163->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1163->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1163->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1163->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1163->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1163->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1163);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1164[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S18_c_vs_p_fy1164[9] = {
   -0.4029591,
   -0.3132621,
   -0.223703,
   -0.1987388,
   -0.1696234,
   -0.1323024,
   -0.1057688,
   -0.08838421,
   -0.07803309};
   Double_t S18_c_vs_p_fex1164[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_c_vs_p_fey1164[9] = {
   0.03931669,
   0.02528168,
   0.02287866,
   0.02102672,
   0.01960169,
   0.01857164,
   0.01800012,
   0.01774722,
   0.01790064};
   gre = new TGraphErrors(9,S18_c_vs_p_fx1164,S18_c_vs_p_fy1164,S18_c_vs_p_fex1164,S18_c_vs_p_fey1164);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1164 = new TH1F("Graph_S18_c_vs_p1164","S18",100,420,2580);
   Graph_S18_c_vs_p1164->SetMinimum(-0.4804901);
   Graph_S18_c_vs_p1164->SetMaximum(-0.02191812);
   Graph_S18_c_vs_p1164->SetDirectory(0);
   Graph_S18_c_vs_p1164->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1164->SetLineColor(ci);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p1164->GetXaxis()->SetRange(0,101);
   Graph_S18_c_vs_p1164->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1164->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1164->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1164->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1164->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1164->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1164->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1164->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1164->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1164->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1164);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_fx1165[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12S18_c_vs_p_fy1165[9] = {
   -0.4599244,
   -0.3592241,
   -0.2729035,
   -0.2288299,
   -0.1828029,
   -0.1474986,
   -0.1220318,
   -0.09284981,
   -0.07494671};
   Double_t S12S18_c_vs_p_fex1165[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12S18_c_vs_p_fey1165[9] = {
   0.02780268,
   0.01786541,
   0.01614764,
   0.0148188,
   0.01382474,
   0.01307411,
   0.01268412,
   0.01251316,
   0.01258155};
   gre = new TGraphErrors(9,S12S18_c_vs_p_fx1165,S12S18_c_vs_p_fy1165,S12S18_c_vs_p_fex1165,S12S18_c_vs_p_fey1165);
   gre->SetName("S12S18_c_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p1165 = new TH1F("Graph_S12S18_c_vs_p1165","S12S18",100,420,2580);
   Graph_S12S18_c_vs_p1165->SetMinimum(-0.5302633);
   Graph_S12S18_c_vs_p1165->SetMaximum(-0.01982895);
   Graph_S12S18_c_vs_p1165->SetDirectory(0);
   Graph_S12S18_c_vs_p1165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p1165->SetLineColor(ci);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetRange(0,101);
   Graph_S12S18_c_vs_p1165->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p1165->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p1165->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p1165->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1165->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1165->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p1165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p1165);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_fx1166[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0S12S18_c_vs_p_fy1166[9] = {
   -0.3364323,
   -0.2527828,
   -0.1995041,
   -0.1497463,
   -0.1266632,
   -0.1122784,
   -0.09235382,
   -0.05331123,
   -0.04300507};
   Double_t S0S12S18_c_vs_p_fex1166[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_c_vs_p_fey1166[9] = {
   0.02269237,
   0.01455593,
   0.0131516,
   0.01207122,
   0.01125464,
   0.01063851,
   0.01031449,
   0.01017125,
   0.01022168};
   gre = new TGraphErrors(9,S0S12S18_c_vs_p_fx1166,S0S12S18_c_vs_p_fy1166,S0S12S18_c_vs_p_fex1166,S0S12S18_c_vs_p_fey1166);
   gre->SetName("S0S12S18_c_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p1166 = new TH1F("Graph_S0S12S18_c_vs_p1166","S0S12S18",100,420,2580);
   Graph_S0S12S18_c_vs_p1166->SetMinimum(-0.3917588);
   Graph_S0S12S18_c_vs_p1166->SetMaximum(-0.0001492671);
   Graph_S0S12S18_c_vs_p1166->SetDirectory(0);
   Graph_S0S12S18_c_vs_p1166->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p1166->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p1166->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p1166->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1166->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1166->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p1166->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p1166);
   
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
   entry=leg->AddEntry("S12S18_c_vs_p","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p","S0S12S18","lpf");
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
