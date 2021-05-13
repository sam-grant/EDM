void c_vs_p_slice_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 16:53:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-375.375,-0.69375,3378.375,0.24375);
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
   -1.729321,
   -2.021452,
   -1.264779,
   -0.1527849,
   -0.04379638,
   -0.05564972,
   0.005348301,
   -0.01669465,
   -0.04401628,
   -0.03432275,
   0.02369364,
   0.01847999,
   0.01416053,
   -0.023007,
   -0.01559628};
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
   0.7156165,
   0.1116705,
   0.03846695,
   0.0289277,
   0.02509875,
   0.02266117,
   0.02080468,
   0.01937468,
   0.01829656,
   0.01771633,
   0.01745505,
   0.01752195,
   0.0179806,
   0.0194823,
   0.02935747};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1165,S0_c_vs_p_fy1165,S0_c_vs_p_fex1165,S0_c_vs_p_fey1165);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1165 = new TH1F("Graph_S0_c_vs_p1165","",100,0,3300);
   Graph_S0_c_vs_p1165->SetMinimum(-0.6);
   Graph_S0_c_vs_p1165->SetMaximum(0.15);
   Graph_S0_c_vs_p1165->SetDirectory(0);
   Graph_S0_c_vs_p1165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1165->SetLineColor(ci);
   Graph_S0_c_vs_p1165->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
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
   -1.629672,
   -2.772971,
   -1.561491,
   -0.589476,
   -0.4049076,
   -0.3212128,
   -0.2588765,
   -0.1952778,
   -0.1621917,
   -0.1381182,
   -0.09710829,
   -0.07199175,
   -0.07067445,
   -0.04969447,
   -0.05946895};
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
   0.790911,
   0.1078096,
   0.03863413,
   0.02897069,
   0.02524489,
   0.02278936,
   0.02088409,
   0.01949599,
   0.0184047,
   0.01787047,
   0.01763922,
   0.01767652,
   0.01832019,
   0.01994675,
   0.03063904};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1166,S12_c_vs_p_fy1166,S12_c_vs_p_fex1166,S12_c_vs_p_fey1166);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1166 = new TH1F("Graph_S12_c_vs_p1166","S12",100,0,3300);
   Graph_S12_c_vs_p1166->SetMinimum(-3.165975);
   Graph_S12_c_vs_p1166->SetMaximum(0.2563651);
   Graph_S12_c_vs_p1166->SetDirectory(0);
   Graph_S12_c_vs_p1166->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1166->SetLineColor(ci);
   Graph_S12_c_vs_p1166->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
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
   -1.970581,
   -2.587976,
   -1.425159,
   -0.4895946,
   -0.3132621,
   -0.223703,
   -0.1987388,
   -0.1696234,
   -0.1323024,
   -0.1057688,
   -0.08838421,
   -0.07803309,
   -0.04236219,
   -0.08039393,
   0.01761857};
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
   0.7396392,
   0.1102849,
   0.0387291,
   0.02896389,
   0.02528168,
   0.02287866,
   0.02102672,
   0.01960169,
   0.01857164,
   0.01800012,
   0.01774722,
   0.01790064,
   0.01856282,
   0.02034412,
   0.0312069};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1167,S18_c_vs_p_fy1167,S18_c_vs_p_fex1167,S18_c_vs_p_fey1167);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1167 = new TH1F("Graph_S18_c_vs_p1167","S18",100,0,3300);
   Graph_S18_c_vs_p1167->SetMinimum(-2.986125);
   Graph_S18_c_vs_p1167->SetMaximum(0.3247301);
   Graph_S18_c_vs_p1167->SetDirectory(0);
   Graph_S18_c_vs_p1167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1167->SetLineColor(ci);
   Graph_S18_c_vs_p1167->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
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
   
   Double_t S12S18_c_vs_p_fx1168[15] = {
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
   Double_t S12S18_c_vs_p_fy1168[15] = {
   -2.024698,
   -2.680356,
   -1.493497,
   -0.5396327,
   -0.3592241,
   -0.2729035,
   -0.2288299,
   -0.1828029,
   -0.1474986,
   -0.1220318,
   -0.09284981,
   -0.07494671,
   -0.05614291,
   -0.06433637,
   -0.02407787};
   Double_t S12S18_c_vs_p_fex1168[15] = {
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
   Double_t S12S18_c_vs_p_fey1168[15] = {
   0.5816513,
   0.07715759,
   0.02735524,
   0.02048497,
   0.01786541,
   0.01614764,
   0.0148188,
   0.01382474,
   0.01307411,
   0.01268412,
   0.01251316,
   0.01258155,
   0.01304673,
   0.01425951,
   0.02204923};
   gre = new TGraphErrors(15,S12S18_c_vs_p_fx1168,S12S18_c_vs_p_fy1168,S12S18_c_vs_p_fex1168,S12S18_c_vs_p_fey1168);
   gre->SetName("S12S18_c_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p1168 = new TH1F("Graph_S12S18_c_vs_p1168","S12S18",100,0,3300);
   Graph_S12S18_c_vs_p1168->SetMinimum(-3.033062);
   Graph_S12S18_c_vs_p1168->SetMaximum(0.2735199);
   Graph_S12S18_c_vs_p1168->SetDirectory(0);
   Graph_S12S18_c_vs_p1168->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p1168->SetLineColor(ci);
   Graph_S12S18_c_vs_p1168->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12S18_c_vs_p1168->GetXaxis()->SetRange(1,91);
   Graph_S12S18_c_vs_p1168->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1168->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1168->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1168->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p1168->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1168->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p1168->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p1168->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p1168->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1168->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p1168->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p1168->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p1168->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p1168->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p1168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p1168);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_fx1169[15] = {
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
   Double_t S0S12S18_c_vs_p_fy1169[15] = {
   -1.983821,
   -2.462152,
   -1.415748,
   -0.4094101,
   -0.2527828,
   -0.1995041,
   -0.1497463,
   -0.1266632,
   -0.1122784,
   -0.09235382,
   -0.05331123,
   -0.04300507,
   -0.03213261,
   -0.04994267,
   -0.01890027};
   Double_t S0S12S18_c_vs_p_fex1169[15] = {
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
   Double_t S0S12S18_c_vs_p_fey1169[15] = {
   0.4808021,
   0.06351153,
   0.02229516,
   0.01671922,
   0.01455593,
   0.0131516,
   0.01207122,
   0.01125464,
   0.01063851,
   0.01031449,
   0.01017125,
   0.01022168,
   0.01056383,
   0.01151379,
   0.01775059};
   gre = new TGraphErrors(15,S0S12S18_c_vs_p_fx1169,S0S12S18_c_vs_p_fy1169,S0S12S18_c_vs_p_fex1169,S0S12S18_c_vs_p_fey1169);
   gre->SetName("S0S12S18_c_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p1169 = new TH1F("Graph_S0S12S18_c_vs_p1169","S0S12S18",100,0,3300);
   Graph_S0S12S18_c_vs_p1169->SetMinimum(-2.778115);
   Graph_S0S12S18_c_vs_p1169->SetMaximum(0.2513017);
   Graph_S0S12S18_c_vs_p1169->SetDirectory(0);
   Graph_S0S12S18_c_vs_p1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p1169->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p1169->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0S12S18_c_vs_p1169->GetXaxis()->SetRange(1,91);
   Graph_S0S12S18_c_vs_p1169->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1169->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1169->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p1169->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1169->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p1169->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1169->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p1169->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1169->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1169->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p1169->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1169->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1169->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p1169);
   
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
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
