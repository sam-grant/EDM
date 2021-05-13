void ABz_vs_p_slice_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 16:57:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-375.375,-0.04375,3378.375,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_fx1180[15] = {
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
   Double_t S0_ABz_vs_p_fy1180[15] = {
   -1.977783,
   -0.03875757,
   0.1157743,
   0.1820338,
   0.2069925,
   0.1818178,
   0.1291915,
   0.1608393,
   0.2259594,
   0.1768458,
   0.1578268,
   0.1304434,
   0.1259068,
   0.06382684,
   0.06487191};
   Double_t S0_ABz_vs_p_fex1180[15] = {
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
   Double_t S0_ABz_vs_p_fey1180[15] = {
   0.9783457,
   0.1578215,
   0.0543841,
   0.04088663,
   0.03552585,
   0.03207261,
   0.02943996,
   0.02740067,
   0.02585349,
   0.0250344,
   0.02470924,
   0.02482369,
   0.02550468,
   0.02755306,
   0.04193698};
   TGraphErrors *gre = new TGraphErrors(15,S0_ABz_vs_p_fx1180,S0_ABz_vs_p_fy1180,S0_ABz_vs_p_fex1180,S0_ABz_vs_p_fey1180);
   gre->SetName("S0_ABz_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p1180 = new TH1F("Graph_S0_ABz_vs_p1180","",100,0,3300);
   Graph_S0_ABz_vs_p1180->SetMinimum(0);
   Graph_S0_ABz_vs_p1180->SetMaximum(0.35);
   Graph_S0_ABz_vs_p1180->SetDirectory(0);
   Graph_S0_ABz_vs_p1180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p1180->SetLineColor(ci);
   Graph_S0_ABz_vs_p1180->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_ABz_vs_p1180->GetXaxis()->SetRange(1,91);
   Graph_S0_ABz_vs_p1180->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1180->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1180->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1180->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1180->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1180->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p1180->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1180->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p1180->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1180->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1180->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1180->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1180->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1180->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p1180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p1180);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_fx1181[15] = {
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
   Double_t S12_ABz_vs_p_fy1181[15] = {
   -2.641477,
   -0.3250569,
   0.05588574,
   0.05184409,
   0.2280776,
   0.127662,
   0.2428022,
   0.1851844,
   0.1456081,
   0.1517329,
   0.07499413,
   0.1238875,
   0.08228347,
   0.1342836,
   -0.002534944};
   Double_t S12_ABz_vs_p_fex1181[15] = {
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
   Double_t S12_ABz_vs_p_fey1181[15] = {
   1.115154,
   0.152391,
   0.05466109,
   0.04099021,
   0.03572169,
   0.03222538,
   0.02951627,
   0.02760024,
   0.02601821,
   0.02525174,
   0.02495622,
   0.02508984,
   0.02594579,
   0.02812134,
   0.04302401};
   gre = new TGraphErrors(15,S12_ABz_vs_p_fx1181,S12_ABz_vs_p_fy1181,S12_ABz_vs_p_fex1181,S12_ABz_vs_p_fey1181);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1181 = new TH1F("Graph_S12_ABz_vs_p1181","S12",100,0,3300);
   Graph_S12_ABz_vs_p1181->SetMinimum(-4.159526);
   Graph_S12_ABz_vs_p1181->SetMaximum(0.6752134);
   Graph_S12_ABz_vs_p1181->SetDirectory(0);
   Graph_S12_ABz_vs_p1181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p1181->SetLineColor(ci);
   Graph_S12_ABz_vs_p1181->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_ABz_vs_p1181->GetXaxis()->SetRange(1,91);
   Graph_S12_ABz_vs_p1181->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1181->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1181->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1181->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p1181->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1181->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p1181->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1181->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p1181->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1181->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1181->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p1181->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1181->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1181->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p1181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p1181);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_fx1182[15] = {
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
   Double_t S18_ABz_vs_p_fy1182[15] = {
   -0.508411,
   -0.08330857,
   0.09665071,
   0.1427044,
   0.1826238,
   0.1721104,
   0.1601871,
   0.1435396,
   0.1401244,
   0.1326819,
   0.1147415,
   0.1365712,
   0.1093486,
   0.04944431,
   -0.002009603};
   Double_t S18_ABz_vs_p_fex1182[15] = {
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
   Double_t S18_ABz_vs_p_fey1182[15] = {
   1.078879,
   0.156687,
   0.0547745,
   0.04097975,
   0.03578551,
   0.03238783,
   0.02971537,
   0.02772917,
   0.02626089,
   0.02550852,
   0.0251446,
   0.02533482,
   0.02620349,
   0.02858159,
   0.04402022};
   gre = new TGraphErrors(15,S18_ABz_vs_p_fx1182,S18_ABz_vs_p_fy1182,S18_ABz_vs_p_fex1182,S18_ABz_vs_p_fey1182);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1182 = new TH1F("Graph_S18_ABz_vs_p1182","S18",100,0,3300);
   Graph_S18_ABz_vs_p1182->SetMinimum(-1.803066);
   Graph_S18_ABz_vs_p1182->SetMaximum(0.7862439);
   Graph_S18_ABz_vs_p1182->SetDirectory(0);
   Graph_S18_ABz_vs_p1182->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p1182->SetLineColor(ci);
   Graph_S18_ABz_vs_p1182->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_ABz_vs_p1182->GetXaxis()->SetRange(1,91);
   Graph_S18_ABz_vs_p1182->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1182->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1182->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1182->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p1182->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1182->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p1182->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1182->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p1182->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1182->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1182->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p1182->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1182->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1182->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p1182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p1182);
   
   gre->Draw("p ");
   
   Double_t S12S18_ABz_vs_p_fx1183[15] = {
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
   Double_t S12S18_ABz_vs_p_fy1183[15] = {
   -0.6127511,
   -0.2074496,
   0.0758872,
   0.0965769,
   0.2050176,
   0.1503997,
   0.2022527,
   0.1644856,
   0.1426985,
   0.1422288,
   0.09445995,
   0.1299939,
   0.09632875,
   0.09383991,
   -0.005859427};
   Double_t S12S18_ABz_vs_p_fex1183[15] = {
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
   Double_t S12S18_ABz_vs_p_fey1183[15] = {
   0.8228683,
   0.1093335,
   0.03869597,
   0.02898367,
   0.02528383,
   0.02284648,
   0.02094317,
   0.01956424,
   0.01848477,
   0.01794915,
   0.01771629,
   0.01783263,
   0.01844746,
   0.02006723,
   0.03102477};
   gre = new TGraphErrors(15,S12S18_ABz_vs_p_fx1183,S12S18_ABz_vs_p_fy1183,S12S18_ABz_vs_p_fex1183,S12S18_ABz_vs_p_fey1183);
   gre->SetName("S12S18_ABz_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p1183 = new TH1F("Graph_S12S18_ABz_vs_p1183","S12S18",100,0,3300);
   Graph_S12S18_ABz_vs_p1183->SetMinimum(-1.602211);
   Graph_S12S18_ABz_vs_p1183->SetMaximum(0.3968935);
   Graph_S12S18_ABz_vs_p1183->SetDirectory(0);
   Graph_S12S18_ABz_vs_p1183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_ABz_vs_p1183->SetLineColor(ci);
   Graph_S12S18_ABz_vs_p1183->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12S18_ABz_vs_p1183->GetXaxis()->SetRange(1,91);
   Graph_S12S18_ABz_vs_p1183->GetXaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p1183->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p1183->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p1183->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_ABz_vs_p1183->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p1183->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_ABz_vs_p1183->GetYaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p1183->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_ABz_vs_p1183->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p1183->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p1183->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_ABz_vs_p1183->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p1183->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p1183->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_ABz_vs_p1183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_ABz_vs_p1183);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_fx1184[15] = {
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
   Double_t S0S12S18_ABz_vs_p_fy1184[15] = {
   -0.9836846,
   -0.1525907,
   0.09003562,
   0.1254053,
   0.2056092,
   0.161478,
   0.1775731,
   0.1631938,
   0.1707752,
   0.1536389,
   0.1159964,
   0.1302188,
   0.1060412,
   0.08331201,
   0.02197315};
   Double_t S0S12S18_ABz_vs_p_fex1184[15] = {
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
   Double_t S0S12S18_ABz_vs_p_fey1184[15] = {
   0.6763195,
   0.08992105,
   0.03153224,
   0.02364737,
   0.02060121,
   0.01860967,
   0.01706741,
   0.01592388,
   0.01503828,
   0.01458894,
   0.01439954,
   0.01448526,
   0.01495363,
   0.01623126,
   0.02510823};
   gre = new TGraphErrors(15,S0S12S18_ABz_vs_p_fx1184,S0S12S18_ABz_vs_p_fy1184,S0S12S18_ABz_vs_p_fex1184,S0S12S18_ABz_vs_p_fey1184);
   gre->SetName("S0S12S18_ABz_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p1184 = new TH1F("Graph_S0S12S18_ABz_vs_p1184","S0S12S18",100,0,3300);
   Graph_S0S12S18_ABz_vs_p1184->SetMinimum(-1.848626);
   Graph_S0S12S18_ABz_vs_p1184->SetMaximum(0.4148318);
   Graph_S0S12S18_ABz_vs_p1184->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p1184->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p1184->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p1184->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0S12S18_ABz_vs_p1184->GetXaxis()->SetRange(1,91);
   Graph_S0S12S18_ABz_vs_p1184->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1184->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1184->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1184->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p1184->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1184->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p1184->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1184->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p1184->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1184->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1184->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p1184->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1184->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1184->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p1184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p1184);
   
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
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p","S0S12S18","lpf");
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
