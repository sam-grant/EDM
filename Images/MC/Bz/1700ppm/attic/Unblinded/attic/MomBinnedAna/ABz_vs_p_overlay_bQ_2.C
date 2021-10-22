void ABz_vs_p_overlay_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:33:31 2021) by ROOT version 6.22/08
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
   0.2932079,
   0.2566768,
   0.140219,
   0.1017771,
   0.1166729,
   0.1857965,
   0.2173081,
   0.174024,
   0.1743827};
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
   0.09303846,
   0.05305669,
   0.0455472,
   0.04206595,
   0.040096,
   0.03848978,
   0.03866469,
   0.04012848,
   0.04158424};
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
   0.1941956,
   0.2533815,
   0.1170071,
   0.2454417,
   0.2483299,
   0.135488,
   0.137695,
   0.09680811,
   0.1636217};
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
   0.09305494,
   0.05296198,
   0.04534746,
   0.04178426,
   0.04001517,
   0.0388446,
   0.03969521,
   0.04212497,
   0.04512329};
   gre = new TGraphErrors(9,S12_ABz_vs_p_fx1168,S12_ABz_vs_p_fy1168,S12_ABz_vs_p_fex1168,S12_ABz_vs_p_fey1168);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1168 = new TH1F("Graph_S12_ABz_vs_p1168","S12",100,420,2580);
   Graph_S12_ABz_vs_p1168->SetMinimum(0.02951711);
   Graph_S12_ABz_vs_p1168->SetMaximum(0.3315095);
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
   0.1530054,
   0.1464754,
   0.1704021,
   0.1454765,
   0.124436,
   0.1530387,
   0.1539566,
   0.162858,
   0.1898209};
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
   0.09278831,
   0.05264541,
   0.04510752,
   0.04190288,
   0.04014523,
   0.03940554,
   0.04054904,
   0.04251978,
   0.04658568};
   gre = new TGraphErrors(9,S18_ABz_vs_p_fx1169,S18_ABz_vs_p_fy1169,S18_ABz_vs_p_fex1169,S18_ABz_vs_p_fey1169);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1169 = new TH1F("Graph_S18_ABz_vs_p1169","S18",100,420,2580);
   Graph_S18_ABz_vs_p1169->SetMinimum(0.04165943);
   Graph_S18_ABz_vs_p1169->SetMaximum(0.2643514);
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
   0.1724102,
   0.1991128,
   0.1447469,
   0.1959735,
   0.1877299,
   0.1439882,
   0.1465513,
   0.1280817,
   0.1771968};
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
   0.06573965,
   0.03734545,
   0.03198746,
   0.02959403,
   0.02834849,
   0.02767215,
   0.02837807,
   0.02994533,
   0.03244358};
   gre = new TGraphErrors(9,S12S18_ABz_vs_p_fx1170,S12S18_ABz_vs_p_fy1170,S12S18_ABz_vs_p_fex1170,S12S18_ABz_vs_p_fey1170);
   gre->SetName("S12S18_ABz_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p1170 = new TH1F("Graph_S12S18_ABz_vs_p1170","S12S18",100,420,2580);
   Graph_S12S18_ABz_vs_p1170->SetMinimum(0.08413499);
   Graph_S12S18_ABz_vs_p1170->SetMaximum(0.2521512);
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
   0.2128299,
   0.2188988,
   0.1442153,
   0.1643572,
   0.1636035,
   0.1582783,
   0.1706396,
   0.1448338,
   0.1752809};
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
   0.05371104,
   0.03054508,
   0.02618135,
   0.02420913,
   0.02315227,
   0.02247287,
   0.02288482,
   0.02400906,
   0.0255953};
   gre = new TGraphErrors(9,S0S12S18_ABz_vs_p_fx1171,S0S12S18_ABz_vs_p_fy1171,S0S12S18_ABz_vs_p_fex1171,S0S12S18_ABz_vs_p_fey1171);
   gre->SetName("S0S12S18_ABz_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p1171 = new TH1F("Graph_S0S12S18_ABz_vs_p1171","S0S12S18",100,420,2580);
   Graph_S0S12S18_ABz_vs_p1171->SetMinimum(0.1031833);
   Graph_S0S12S18_ABz_vs_p1171->SetMaximum(0.2813916);
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
