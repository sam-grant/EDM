void ABz_vs_p_slice_overlay_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 10:23:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-410,-2.5,3690,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_slice_fx1242[14] = {
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
   Double_t S0_ABz_vs_p_slice_fy1242[14] = {
   -0.6549891,
   0.0564102,
   0.2148803,
   0.2566768,
   0.140219,
   0.1017771,
   0.1166729,
   0.1857965,
   0.2173081,
   0.174024,
   0.1743827,
   0.1158485,
   0.1576967,
   0.1110576};
   Double_t S0_ABz_vs_p_slice_fex1242[14] = {
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
   Double_t S0_ABz_vs_p_slice_fey1242[14] = {
   0.8343991,
   0.1498866,
   0.07515198,
   0.05305669,
   0.0455472,
   0.04206595,
   0.040096,
   0.03848978,
   0.03866469,
   0.04012848,
   0.04158424,
   0.04444849,
   0.04689036,
   0.13009};
   TGraphErrors *gre = new TGraphErrors(14,S0_ABz_vs_p_slice_fx1242,S0_ABz_vs_p_slice_fy1242,S0_ABz_vs_p_slice_fex1242,S0_ABz_vs_p_slice_fey1242);
   gre->SetName("S0_ABz_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p_slice1242 = new TH1F("Graph_S0_ABz_vs_p_slice1242","",100,0,3280);
   Graph_S0_ABz_vs_p_slice1242->SetMinimum(-2);
   Graph_S0_ABz_vs_p_slice1242->SetMaximum(2);
   Graph_S0_ABz_vs_p_slice1242->SetDirectory(0);
   Graph_S0_ABz_vs_p_slice1242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p_slice1242->SetLineColor(ci);
   Graph_S0_ABz_vs_p_slice1242->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_ABz_vs_p_slice1242->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_slice1242->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1242->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_slice1242->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_slice1242->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_slice1242->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p_slice1242->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_slice1242->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p_slice1242->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1242->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_slice1242->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_slice1242->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_slice1242->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1242->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p_slice1242->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p_slice1242);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_slice_fx1243[14] = {
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
   Double_t S12_ABz_vs_p_slice_fy1243[14] = {
   -0.4601841,
   0.03140796,
   0.06470467,
   0.2533815,
   0.1170071,
   0.2454417,
   0.2483299,
   0.135488,
   0.137695,
   0.09680811,
   0.1636217,
   0.132877,
   0.1708545,
   -0.2729047};
   Double_t S12_ABz_vs_p_slice_fex1243[14] = {
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
   Double_t S12_ABz_vs_p_slice_fey1243[14] = {
   0.7790427,
   0.1499937,
   0.07537306,
   0.05296198,
   0.04534746,
   0.04178426,
   0.04001517,
   0.0388446,
   0.03969521,
   0.04212497,
   0.04512329,
   0.04847784,
   0.05104185,
   0.153357};
   gre = new TGraphErrors(14,S12_ABz_vs_p_slice_fx1243,S12_ABz_vs_p_slice_fy1243,S12_ABz_vs_p_slice_fex1243,S12_ABz_vs_p_slice_fey1243);
   gre->SetName("S12_ABz_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p_slice1243 = new TH1F("Graph_S12_ABz_vs_p_slice1243","S12",100,0,3280);
   Graph_S12_ABz_vs_p_slice1243->SetMinimum(-1.395035);
   Graph_S12_ABz_vs_p_slice1243->SetMaximum(0.4746672);
   Graph_S12_ABz_vs_p_slice1243->SetDirectory(0);
   Graph_S12_ABz_vs_p_slice1243->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p_slice1243->SetLineColor(ci);
   Graph_S12_ABz_vs_p_slice1243->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_ABz_vs_p_slice1243->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_slice1243->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1243->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_slice1243->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p_slice1243->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_slice1243->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p_slice1243->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_slice1243->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p_slice1243->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1243->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_slice1243->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p_slice1243->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_slice1243->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1243->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p_slice1243->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p_slice1243);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_slice_fx1244[14] = {
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
   Double_t S18_ABz_vs_p_slice_fy1244[14] = {
   0.07953541,
   0.08527743,
   0.07941135,
   0.1464754,
   0.1704021,
   0.1454765,
   0.124436,
   0.1530387,
   0.1539566,
   0.162858,
   0.1898209,
   0.07799905,
   0.002170744,
   -0.1845964};
   Double_t S18_ABz_vs_p_slice_fex1244[14] = {
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
   Double_t S18_ABz_vs_p_slice_fey1244[14] = {
   0.8001291,
   0.150755,
   0.07519927,
   0.05264541,
   0.04510752,
   0.04190288,
   0.04014523,
   0.03940554,
   0.04054904,
   0.04251978,
   0.04658568,
   0.04919843,
   0.05274196,
   0.1658278};
   gre = new TGraphErrors(14,S18_ABz_vs_p_slice_fx1244,S18_ABz_vs_p_slice_fy1244,S18_ABz_vs_p_slice_fex1244,S18_ABz_vs_p_slice_fey1244);
   gre->SetName("S18_ABz_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p_slice1244 = new TH1F("Graph_S18_ABz_vs_p_slice1244","S18",100,0,3280);
   Graph_S18_ABz_vs_p_slice1244->SetMinimum(-0.8806195);
   Graph_S18_ABz_vs_p_slice1244->SetMaximum(1.03969);
   Graph_S18_ABz_vs_p_slice1244->SetDirectory(0);
   Graph_S18_ABz_vs_p_slice1244->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p_slice1244->SetLineColor(ci);
   Graph_S18_ABz_vs_p_slice1244->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_ABz_vs_p_slice1244->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_slice1244->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1244->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_slice1244->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p_slice1244->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_slice1244->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p_slice1244->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_slice1244->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p_slice1244->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1244->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_slice1244->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p_slice1244->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_slice1244->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1244->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p_slice1244->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p_slice1244);
   
   gre->Draw("p ");
   
   Double_t S12S18_ABz_vs_p_slice_fx1245[14] = {
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
   Double_t S12S18_ABz_vs_p_slice_fy1245[14] = {
   -0.3384189,
   0.05870782,
   0.07190804,
   0.1991128,
   0.1447469,
   0.1959735,
   0.1877299,
   0.1439882,
   0.1465513,
   0.1280817,
   0.1771968,
   0.1090397,
   0.09220827,
   -0.1414283};
   Double_t S12S18_ABz_vs_p_slice_fex1245[14] = {
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
   Double_t S12S18_ABz_vs_p_slice_fey1245[14] = {
   0.5727692,
   0.106418,
   0.05325128,
   0.03734545,
   0.03198746,
   0.02959403,
   0.02834849,
   0.02767215,
   0.02837807,
   0.02994533,
   0.03244358,
   0.03460198,
   0.03681946,
   0.1207253};
   gre = new TGraphErrors(14,S12S18_ABz_vs_p_slice_fx1245,S12S18_ABz_vs_p_slice_fy1245,S12S18_ABz_vs_p_slice_fex1245,S12S18_ABz_vs_p_slice_fey1245);
   gre->SetName("S12S18_ABz_vs_p_slice");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p_slice1245 = new TH1F("Graph_S12S18_ABz_vs_p_slice1245","S12S18",100,0,3280);
   Graph_S12S18_ABz_vs_p_slice1245->SetMinimum(-1.025953);
   Graph_S12S18_ABz_vs_p_slice1245->SetMaximum(0.3512228);
   Graph_S12S18_ABz_vs_p_slice1245->SetDirectory(0);
   Graph_S12S18_ABz_vs_p_slice1245->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_ABz_vs_p_slice1245->SetLineColor(ci);
   Graph_S12S18_ABz_vs_p_slice1245->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_ABz_vs_p_slice1245->GetXaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_slice1245->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_slice1245->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_slice1245->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_ABz_vs_p_slice1245->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_slice1245->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_ABz_vs_p_slice1245->GetYaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_slice1245->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_ABz_vs_p_slice1245->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_slice1245->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_slice1245->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_ABz_vs_p_slice1245->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_slice1245->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_slice1245->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_ABz_vs_p_slice1245->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_ABz_vs_p_slice1245);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_slice_fx1246[14] = {
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
   Double_t S0S12S18_ABz_vs_p_slice_fy1246[14] = {
   -0.3161853,
   0.05712955,
   0.1198953,
   0.2188988,
   0.1442153,
   0.1643572,
   0.1636035,
   0.1582783,
   0.1706396,
   0.1448338,
   0.1752809,
   0.1120969,
   0.1164507,
   0.02124452};
   Double_t S0S12S18_ABz_vs_p_slice_fex1246[14] = {
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
   Double_t S0S12S18_ABz_vs_p_slice_fey1246[14] = {
   0.4801674,
   0.08682854,
   0.0434607,
   0.03054508,
   0.02618135,
   0.02420913,
   0.02315227,
   0.02247287,
   0.02288482,
   0.02400906,
   0.0255953,
   0.02733635,
   0.029027,
   0.09631491};
   gre = new TGraphErrors(14,S0S12S18_ABz_vs_p_slice_fx1246,S0S12S18_ABz_vs_p_slice_fy1246,S0S12S18_ABz_vs_p_slice_fex1246,S0S12S18_ABz_vs_p_slice_fey1246);
   gre->SetName("S0S12S18_ABz_vs_p_slice");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p_slice1246 = new TH1F("Graph_S0S12S18_ABz_vs_p_slice1246","S0S12S18",100,0,3280);
   Graph_S0S12S18_ABz_vs_p_slice1246->SetMinimum(-0.9009324);
   Graph_S0S12S18_ABz_vs_p_slice1246->SetMaximum(0.3540236);
   Graph_S0S12S18_ABz_vs_p_slice1246->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p_slice1246->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p_slice1246->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_ABz_vs_p_slice1246->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p_slice1246->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p_slice1246->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p_slice1246);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p_slice","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p_slice","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p_slice","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_ABz_vs_p_slice","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p_slice","S0S12S18","lpf");
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
