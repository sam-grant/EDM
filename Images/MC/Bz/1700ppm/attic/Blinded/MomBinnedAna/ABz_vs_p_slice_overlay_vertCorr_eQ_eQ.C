void ABz_vs_p_slice_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 18:46:04 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-375.375,-0.10625,3378.375,0.45625);
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
   -1.982866,
   -0.1746324,
   0.06772579,
   0.1790689,
   0.2067459,
   0.1821672,
   0.1291381,
   0.1610842,
   0.226063,
   0.1776299,
   0.1588043,
   0.1291816,
   0.1252642,
   0.06220565,
   0.06795085};
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
   0.9764197,
   0.1577446,
   0.05435599,
   0.04088778,
   0.03552575,
   0.03207266,
   0.02944017,
   0.02740014,
   0.02585292,
   0.02503419,
   0.0247093,
   0.02482334,
   0.02550652,
   0.0275571,
   0.0419182};
   TGraphErrors *gre = new TGraphErrors(15,S0_ABz_vs_p_fx1180,S0_ABz_vs_p_fy1180,S0_ABz_vs_p_fex1180,S0_ABz_vs_p_fey1180);
   gre->SetName("S0_ABz_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p1180 = new TH1F("Graph_S0_ABz_vs_p1180","",100,0,3300);
   Graph_S0_ABz_vs_p1180->SetMinimum(-0.05);
   Graph_S0_ABz_vs_p1180->SetMaximum(0.4);
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
   -2.295383,
   -0.4876669,
   0.01505797,
   0.0468549,
   0.2287792,
   0.1281954,
   0.2428136,
   0.1849427,
   0.1458978,
   0.1525162,
   0.07504055,
   0.1240295,
   0.08270234,
   0.13715,
   0.005693422};
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
   1.113408,
   0.1522147,
   0.05463239,
   0.04099317,
   0.03572398,
   0.03222595,
   0.02951619,
   0.02759944,
   0.02601946,
   0.0252515,
   0.02495649,
   0.02508976,
   0.02594339,
   0.02811711,
   0.04302251};
   gre = new TGraphErrors(15,S12_ABz_vs_p_fx1181,S12_ABz_vs_p_fy1181,S12_ABz_vs_p_fex1181,S12_ABz_vs_p_fey1181);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1181 = new TH1F("Graph_S12_ABz_vs_p1181","S12",100,0,3300);
   Graph_S12_ABz_vs_p1181->SetMinimum(-3.776904);
   Graph_S12_ABz_vs_p1181->SetMaximum(0.6404419);
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
   -0.8191729,
   -0.1042831,
   0.06681345,
   0.1344295,
   0.1819999,
   0.1722744,
   0.1617225,
   0.1431527,
   0.1398551,
   0.1319627,
   0.114148,
   0.1365346,
   0.1101815,
   0.04786025,
   0.004346341};
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
   1.063333,
   0.1565654,
   0.05474886,
   0.040983,
   0.03578683,
   0.03238903,
   0.02971526,
   0.02773032,
   0.02626092,
   0.02551019,
   0.02514394,
   0.02533294,
   0.02620495,
   0.02857696,
   0.04402873};
   gre = new TGraphErrors(15,S18_ABz_vs_p_fx1182,S18_ABz_vs_p_fy1182,S18_ABz_vs_p_fex1182,S18_ABz_vs_p_fey1182);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1182 = new TH1F("Graph_S18_ABz_vs_p1182","S18",100,0,3300);
   Graph_S18_ABz_vs_p1182->SetMinimum(-2.095172);
   Graph_S18_ABz_vs_p1182->SetMaximum(0.4568267);
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
   -0.7357778,
   -0.3041249,
   0.04049864,
   0.09000539,
   0.2051021,
   0.1507064,
   0.2029675,
   0.1641991,
   0.1427805,
   0.1422881,
   0.09422409,
   0.1300121,
   0.09699587,
   0.09448374,
   0.0008638224};
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
   0.8156509,
   0.1092249,
   0.03867673,
   0.02898583,
   0.02528503,
   0.02284702,
   0.02094304,
   0.01956436,
   0.0184852,
   0.01794963,
   0.01771614,
   0.01783201,
   0.01844702,
   0.02006403,
   0.03102243};
   gre = new TGraphErrors(15,S12S18_ABz_vs_p_fx1183,S12S18_ABz_vs_p_fy1183,S12S18_ABz_vs_p_fex1183,S12S18_ABz_vs_p_fey1183);
   gre->SetName("S12S18_ABz_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p1183 = new TH1F("Graph_S12S18_ABz_vs_p1183","S12S18",100,0,3300);
   Graph_S12S18_ABz_vs_p1183->SetMinimum(-1.72961);
   Graph_S12S18_ABz_vs_p1183->SetMaximum(0.4085687);
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
   -0.8795747,
   -0.2636024,
   0.05013481,
   0.1199078,
   0.2056312,
   0.1616626,
   0.1777996,
   0.1632413,
   0.1709044,
   0.1538856,
   0.1161553,
   0.1298167,
   0.1062734,
   0.08322485,
   0.02736145};
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
   0.6711376,
   0.08984228,
   0.03151601,
   0.02364832,
   0.02060127,
   0.01860973,
   0.01706706,
   0.01592363,
   0.01503835,
   0.01458911,
   0.01439936,
   0.01448482,
   0.01495355,
   0.01623047,
   0.02510121};
   gre = new TGraphErrors(15,S0S12S18_ABz_vs_p_fx1184,S0S12S18_ABz_vs_p_fy1184,S0S12S18_ABz_vs_p_fex1184,S0S12S18_ABz_vs_p_fey1184);
   gre->SetName("S0S12S18_ABz_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p1184 = new TH1F("Graph_S0S12S18_ABz_vs_p1184","S0S12S18",100,0,3300);
   Graph_S0S12S18_ABz_vs_p1184->SetMinimum(-1.728407);
   Graph_S0S12S18_ABz_vs_p1184->SetMaximum(0.4039269);
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
