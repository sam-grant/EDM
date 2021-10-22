void ABz_vs_p_overlay_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:17:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(123,-2.5,2877,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_fx1167[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0_ABz_vs_p_fy1167[9] = {
   0.2201636,
   0.2069925,
   0.1818178,
   0.1291915,
   0.1608393,
   0.2259594,
   0.1768458,
   0.1578268,
   0.1304434};
   Double_t S0_ABz_vs_p_fex1167[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_ABz_vs_p_fey1167[9] = {
   0.05555067,
   0.03552585,
   0.03207261,
   0.02943996,
   0.02740067,
   0.01828118,
   0.0250344,
   0.02470924,
   0.02482369};
   TGraphErrors *gre = new TGraphErrors(9,S0_ABz_vs_p_fx1167,S0_ABz_vs_p_fy1167,S0_ABz_vs_p_fex1167,S0_ABz_vs_p_fey1167);
   gre->SetName("S0_ABz_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p1167 = new TH1F("Graph_S0_ABz_vs_p1167","",100,420,2580);
   Graph_S0_ABz_vs_p1167->SetMinimum(-2);
   Graph_S0_ABz_vs_p1167->SetMaximum(2);
   Graph_S0_ABz_vs_p1167->SetDirectory(0);
   Graph_S0_ABz_vs_p1167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p1167->SetLineColor(ci);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetRange(0,101);
   Graph_S0_ABz_vs_p1167->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1167->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p1167->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1167->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1167->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1167->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p1167);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_fx1168[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12_ABz_vs_p_fy1168[9] = {
   0.1123738,
   0.2280776,
   0.127662,
   0.2428022,
   0.1851844,
   0.1456081,
   0.1517329,
   0.07499413,
   0.1238875};
   Double_t S12_ABz_vs_p_fex1168[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_ABz_vs_p_fey1168[9] = {
   0.05557717,
   0.03572169,
   0.03222538,
   0.02951627,
   0.02760024,
   0.01839765,
   0.02525174,
   0.02495622,
   0.02508984};
   gre = new TGraphErrors(9,S12_ABz_vs_p_fx1168,S12_ABz_vs_p_fy1168,S12_ABz_vs_p_fex1168,S12_ABz_vs_p_fey1168);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1168 = new TH1F("Graph_S12_ABz_vs_p1168","S12",100,420,2580);
   Graph_S12_ABz_vs_p1168->SetMinimum(0.02780985);
   Graph_S12_ABz_vs_p1168->SetMaximum(0.2945465);
   Graph_S12_ABz_vs_p1168->SetDirectory(0);
   Graph_S12_ABz_vs_p1168->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p1168->SetLineColor(ci);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetRange(0,101);
   Graph_S12_ABz_vs_p1168->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p1168->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p1168->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p1168->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1168->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1168->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p1168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p1168);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_fx1169[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S18_ABz_vs_p_fy1169[9] = {
   0.1973028,
   0.1826238,
   0.1721104,
   0.1601871,
   0.1435396,
   0.1401244,
   0.1326819,
   0.1147415,
   0.1365712};
   Double_t S18_ABz_vs_p_fex1169[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_ABz_vs_p_fey1169[9] = {
   0.05563339,
   0.03578551,
   0.03238783,
   0.02971537,
   0.02772917,
   0.01856926,
   0.02550852,
   0.0251446,
   0.02533482};
   gre = new TGraphErrors(9,S18_ABz_vs_p_fx1169,S18_ABz_vs_p_fy1169,S18_ABz_vs_p_fex1169,S18_ABz_vs_p_fey1169);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1169 = new TH1F("Graph_S18_ABz_vs_p1169","S18",100,420,2580);
   Graph_S18_ABz_vs_p1169->SetMinimum(0.07326301);
   Graph_S18_ABz_vs_p1169->SetMaximum(0.2692701);
   Graph_S18_ABz_vs_p1169->SetDirectory(0);
   Graph_S18_ABz_vs_p1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p1169->SetLineColor(ci);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetRange(0,101);
   Graph_S18_ABz_vs_p1169->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p1169->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p1169->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p1169->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1169->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1169->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p1169);
   
   gre->Draw("p ");
   
   Double_t S12S18_ABz_vs_p_fx1170[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S12S18_ABz_vs_p_fy1170[9] = {
   0.1545054,
   0.2050176,
   0.1503997,
   0.2022527,
   0.1644856,
   0.1426985,
   0.1422288,
   0.09445995,
   0.1299939};
   Double_t S12S18_ABz_vs_p_fex1170[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12S18_ABz_vs_p_fey1170[9] = {
   0.03932586,
   0.02528383,
   0.02284648,
   0.02094317,
   0.01956424,
   0.0130707,
   0.01794915,
   0.01771629,
   0.01783263};
   gre = new TGraphErrors(9,S12S18_ABz_vs_p_fx1170,S12S18_ABz_vs_p_fy1170,S12S18_ABz_vs_p_fex1170,S12S18_ABz_vs_p_fey1170);
   gre->SetName("S12S18_ABz_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p1170 = new TH1F("Graph_S12S18_ABz_vs_p1170","S12S18",100,420,2580);
   Graph_S12S18_ABz_vs_p1170->SetMinimum(0.06138788);
   Graph_S12S18_ABz_vs_p1170->SetMaximum(0.2456572);
   Graph_S12S18_ABz_vs_p1170->SetDirectory(0);
   Graph_S12S18_ABz_vs_p1170->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_ABz_vs_p1170->SetLineColor(ci);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetRange(0,101);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_ABz_vs_p1170->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_ABz_vs_p1170->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p1170->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p1170->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_ABz_vs_p1170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_ABz_vs_p1170);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_fx1171[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t S0S12S18_ABz_vs_p_fy1171[9] = {
   0.1764251,
   0.2056092,
   0.161478,
   0.1775731,
   0.1631938,
   0.1707752,
   0.1536389,
   0.1159964,
   0.1302188};
   Double_t S0S12S18_ABz_vs_p_fex1171[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_ABz_vs_p_fey1171[9] = {
   0.0321022,
   0.02060121,
   0.01860967,
   0.01706741,
   0.01592388,
   0.01063367,
   0.01458894,
   0.01439954,
   0.01448526};
   gre = new TGraphErrors(9,S0S12S18_ABz_vs_p_fx1171,S0S12S18_ABz_vs_p_fy1171,S0S12S18_ABz_vs_p_fex1171,S0S12S18_ABz_vs_p_fey1171);
   gre->SetName("S0S12S18_ABz_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p1171 = new TH1F("Graph_S0S12S18_ABz_vs_p1171","S0S12S18",100,420,2580);
   Graph_S0S12S18_ABz_vs_p1171->SetMinimum(0.08913551);
   Graph_S0S12S18_ABz_vs_p1171->SetMaximum(0.2386717);
   Graph_S0S12S18_ABz_vs_p1171->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p1171->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p1171->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p1171->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1171->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p1171);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_ABz_vs_p","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p","S0S12S18","lpf");
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
