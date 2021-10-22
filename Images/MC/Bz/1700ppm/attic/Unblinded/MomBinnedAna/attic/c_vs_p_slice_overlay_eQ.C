void c_vs_p_slice_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 19:13:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-3.45,3712.5,1.05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_slice_fx1175[15] = {
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
   Double_t S0_c_vs_p_slice_fy1175[15] = {
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
   Double_t S0_c_vs_p_slice_fex1175[15] = {
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
   Double_t S0_c_vs_p_slice_fey1175[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_slice_fx1175,S0_c_vs_p_slice_fy1175,S0_c_vs_p_slice_fex1175,S0_c_vs_p_slice_fey1175);
   gre->SetName("S0_c_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_slice1175 = new TH1F("Graph_S0_c_vs_p_slice1175","",100,0,3300);
   Graph_S0_c_vs_p_slice1175->SetMinimum(-3);
   Graph_S0_c_vs_p_slice1175->SetMaximum(0.6);
   Graph_S0_c_vs_p_slice1175->SetDirectory(0);
   Graph_S0_c_vs_p_slice1175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_slice1175->SetLineColor(ci);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p_slice1175->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1175->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_slice1175->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1175->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1175->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1175->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_slice1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_slice1175);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_slice_fx1176[15] = {
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
   Double_t S12_c_vs_p_slice_fy1176[15] = {
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
   Double_t S12_c_vs_p_slice_fex1176[15] = {
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
   Double_t S12_c_vs_p_slice_fey1176[15] = {
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
   gre = new TGraphErrors(15,S12_c_vs_p_slice_fx1176,S12_c_vs_p_slice_fy1176,S12_c_vs_p_slice_fex1176,S12_c_vs_p_slice_fey1176);
   gre->SetName("S12_c_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_slice1176 = new TH1F("Graph_S12_c_vs_p_slice1176","S12",100,0,3300);
   Graph_S12_c_vs_p_slice1176->SetMinimum(-3.165975);
   Graph_S12_c_vs_p_slice1176->SetMaximum(0.2563651);
   Graph_S12_c_vs_p_slice1176->SetDirectory(0);
   Graph_S12_c_vs_p_slice1176->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_slice1176->SetLineColor(ci);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p_slice1176->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_slice1176->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_slice1176->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_slice1176->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1176->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1176->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_slice1176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_slice1176);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_slice_fx1177[15] = {
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
   Double_t S18_c_vs_p_slice_fy1177[15] = {
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
   Double_t S18_c_vs_p_slice_fex1177[15] = {
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
   Double_t S18_c_vs_p_slice_fey1177[15] = {
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
   gre = new TGraphErrors(15,S18_c_vs_p_slice_fx1177,S18_c_vs_p_slice_fy1177,S18_c_vs_p_slice_fex1177,S18_c_vs_p_slice_fey1177);
   gre->SetName("S18_c_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_slice1177 = new TH1F("Graph_S18_c_vs_p_slice1177","S18",100,0,3300);
   Graph_S18_c_vs_p_slice1177->SetMinimum(-2.986125);
   Graph_S18_c_vs_p_slice1177->SetMaximum(0.3247301);
   Graph_S18_c_vs_p_slice1177->SetDirectory(0);
   Graph_S18_c_vs_p_slice1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_slice1177->SetLineColor(ci);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p_slice1177->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_slice1177->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_slice1177->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_slice1177->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1177->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1177->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_slice1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_slice1177);
   
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
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
