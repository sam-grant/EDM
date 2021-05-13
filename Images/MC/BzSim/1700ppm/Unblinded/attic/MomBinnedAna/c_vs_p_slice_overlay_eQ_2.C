void c_vs_p_slice_overlay_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-0.69375,3690,0.24375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_slice_fx1167[14] = {
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
   Double_t S0_c_vs_p_slice_fy1167[14] = {
   0.3158552,
   0.01729143,
   0.05948203,
   0.02957624,
   -0.01060138,
   0.01631002,
   -0.04160703,
   -0.07167862,
   0.02246688,
   0.01197348,
   0.008685367,
   0.01921452,
   0.0002185316,
   0.04587832};
   Double_t S0_c_vs_p_slice_fex1167[14] = {
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
   Double_t S0_c_vs_p_slice_fey1167[14] = {
   0.1580104,
   0.05430272,
   0.04087683,
   0.03544639,
   0.03201716,
   0.02939039,
   0.02734154,
   0.02574152,
   0.02478934,
   0.02410642,
   0.02370577,
   0.02356856,
   0.02443506,
   0.03406705};
   TGraphErrors *gre = new TGraphErrors(14,S0_c_vs_p_slice_fx1167,S0_c_vs_p_slice_fy1167,S0_c_vs_p_slice_fex1167,S0_c_vs_p_slice_fey1167);
   gre->SetName("S0_c_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_slice1167 = new TH1F("Graph_S0_c_vs_p_slice1167","",100,0,3280);
   Graph_S0_c_vs_p_slice1167->SetMinimum(-0.6);
   Graph_S0_c_vs_p_slice1167->SetMaximum(0.15);
   Graph_S0_c_vs_p_slice1167->SetDirectory(0);
   Graph_S0_c_vs_p_slice1167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_slice1167->SetLineColor(ci);
   Graph_S0_c_vs_p_slice1167->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p_slice1167->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1167->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1167->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1167->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1167->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1167->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_slice1167->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_slice1167->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_slice1167->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1167->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_slice1167->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_slice1167->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_slice1167->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_slice1167->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_slice1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_slice1167);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_slice_fx1168[14] = {
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
   Double_t S12_c_vs_p_slice_fy1168[14] = {
   0.1633994,
   -0.02586001,
   -0.03409693,
   0.009583142,
   -0.009462104,
   0.08650667,
   -0.03071508,
   -0.06776455,
   0.01223344,
   -0.01004858,
   0.01284648,
   0.008581579,
   -0.06089396,
   -0.07661246};
   Double_t S12_c_vs_p_slice_fex1168[14] = {
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
   Double_t S12_c_vs_p_slice_fey1168[14] = {
   0.1524691,
   0.05451148,
   0.04089027,
   0.03566129,
   0.03222526,
   0.02953879,
   0.02748961,
   0.02591004,
   0.02497086,
   0.02435575,
   0.02387104,
   0.02406328,
   0.02502787,
   0.03621918};
   gre = new TGraphErrors(14,S12_c_vs_p_slice_fx1168,S12_c_vs_p_slice_fy1168,S12_c_vs_p_slice_fex1168,S12_c_vs_p_slice_fey1168);
   gre->SetName("S12_c_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_slice1168 = new TH1F("Graph_S12_c_vs_p_slice1168","S12",100,0,3280);
   Graph_S12_c_vs_p_slice1168->SetMinimum(-0.1557016);
   Graph_S12_c_vs_p_slice1168->SetMaximum(0.3587386);
   Graph_S12_c_vs_p_slice1168->SetDirectory(0);
   Graph_S12_c_vs_p_slice1168->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_slice1168->SetLineColor(ci);
   Graph_S12_c_vs_p_slice1168->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p_slice1168->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1168->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1168->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1168->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_slice1168->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1168->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_slice1168->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_slice1168->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_slice1168->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1168->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_slice1168->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_slice1168->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_slice1168->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_slice1168->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_slice1168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_slice1168);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_slice_fx1169[14] = {
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
   Double_t S18_c_vs_p_slice_fy1169[14] = {
   -0.1873997,
   0.0369443,
   0.006403644,
   0.02814007,
   -0.08318564,
   -0.03661632,
   -0.03054198,
   0.01324301,
   0.01319095,
   -0.03654246,
   0.02539481,
   -0.01049436,
   0.01986274,
   -0.08275296};
   Double_t S18_c_vs_p_slice_fex1169[14] = {
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
   Double_t S18_c_vs_p_slice_fey1169[14] = {
   0.1551873,
   0.05466798,
   0.04088949,
   0.0357045,
   0.03232052,
   0.02974388,
   0.02765685,
   0.02610574,
   0.02508304,
   0.02446373,
   0.02422843,
   0.02448838,
   0.02559507,
   0.03713144};
   gre = new TGraphErrors(14,S18_c_vs_p_slice_fx1169,S18_c_vs_p_slice_fy1169,S18_c_vs_p_slice_fex1169,S18_c_vs_p_slice_fey1169);
   gre->SetName("S18_c_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_slice1169 = new TH1F("Graph_S18_c_vs_p_slice1169","S18",100,0,3280);
   Graph_S18_c_vs_p_slice1169->SetMinimum(-0.3860069);
   Graph_S18_c_vs_p_slice1169->SetMaximum(0.1350322);
   Graph_S18_c_vs_p_slice1169->SetDirectory(0);
   Graph_S18_c_vs_p_slice1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_slice1169->SetLineColor(ci);
   Graph_S18_c_vs_p_slice1169->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p_slice1169->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1169->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1169->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_slice1169->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1169->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_slice1169->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_slice1169->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_slice1169->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1169->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_slice1169->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_slice1169->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_slice1169->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_slice1169->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_slice1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_slice1169);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_slice_fx1170[14] = {
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
   Double_t S12S18_c_vs_p_slice_fy1170[14] = {
   -0.008301013,
   0.00580091,
   -0.01404357,
   0.01845038,
   -0.04607548,
   0.02524755,
   -0.0301348,
   -0.02753164,
   0.01268964,
   -0.02325362,
   0.01916236,
   -0.0003181593,
   -0.02239718,
   -0.07695329};
   Double_t S12S18_c_vs_p_slice_fex1170[14] = {
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
   Double_t S12S18_c_vs_p_slice_fey1170[14] = {
   0.1088529,
   0.03860519,
   0.02891632,
   0.02523382,
   0.02282272,
   0.02096114,
   0.01949942,
   0.01839227,
   0.01769923,
   0.01726323,
   0.01700928,
   0.01717016,
   0.01790969,
   0.02604319};
   gre = new TGraphErrors(14,S12S18_c_vs_p_slice_fx1170,S12S18_c_vs_p_slice_fy1170,S12S18_c_vs_p_slice_fex1170,S12S18_c_vs_p_slice_fey1170);
   gre->SetName("S12S18_c_vs_p_slice");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_slice1170 = new TH1F("Graph_S12S18_c_vs_p_slice1170","S12S18",100,0,3280);
   Graph_S12S18_c_vs_p_slice1170->SetMinimum(-0.1389245);
   Graph_S12S18_c_vs_p_slice1170->SetMaximum(0.1223225);
   Graph_S12S18_c_vs_p_slice1170->SetDirectory(0);
   Graph_S12S18_c_vs_p_slice1170->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p_slice1170->SetLineColor(ci);
   Graph_S12S18_c_vs_p_slice1170->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_c_vs_p_slice1170->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_slice1170->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_slice1170->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_slice1170->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p_slice1170->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_slice1170->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p_slice1170->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_slice1170->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p_slice1170->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_slice1170->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_slice1170->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p_slice1170->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_slice1170->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_slice1170->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p_slice1170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p_slice1170);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_slice_fx1171[14] = {
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
   Double_t S0S12S18_c_vs_p_slice_fy1171[14] = {
   0.09672882,
   0.009364974,
   0.01063383,
   0.02213494,
   -0.03412322,
   0.02222232,
   -0.03397045,
   -0.04243458,
   0.01584269,
   -0.01095097,
   0.01577493,
   0.006355279,
   -0.0141326,
   -0.03476403};
   Double_t S0S12S18_c_vs_p_slice_fex1171[14] = {
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
   Double_t S0S12S18_c_vs_p_slice_fey1171[14] = {
   0.08968401,
   0.03146732,
   0.02360895,
   0.0205585,
   0.01858597,
   0.01706719,
   0.01587697,
   0.01496639,
   0.01440606,
   0.01403749,
   0.01382224,
   0.01388122,
   0.01445141,
   0.02076017};
   gre = new TGraphErrors(14,S0S12S18_c_vs_p_slice_fx1171,S0S12S18_c_vs_p_slice_fy1171,S0S12S18_c_vs_p_slice_fex1171,S0S12S18_c_vs_p_slice_fey1171);
   gre->SetName("S0S12S18_c_vs_p_slice");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p_slice1171 = new TH1F("Graph_S0S12S18_c_vs_p_slice1171","S0S12S18",100,0,3280);
   Graph_S0S12S18_c_vs_p_slice1171->SetMinimum(-0.08178235);
   Graph_S0S12S18_c_vs_p_slice1171->SetMaximum(0.2107942);
   Graph_S0S12S18_c_vs_p_slice1171->SetDirectory(0);
   Graph_S0S12S18_c_vs_p_slice1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p_slice1171->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p_slice1171->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_c_vs_p_slice1171->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_slice1171->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_slice1171->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_slice1171->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p_slice1171->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_slice1171->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p_slice1171->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_slice1171->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p_slice1171->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_slice1171->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_slice1171->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p_slice1171->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_slice1171->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_slice1171->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p_slice1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p_slice1171);
   
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
