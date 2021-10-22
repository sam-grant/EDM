void A_vs_p_full_overlay_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.31875,3330.25,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1400[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S0_A_vs_p_fy1400[15] = {
   0.1326764,
   0.1332117,
   0.1405851,
   0.1666122,
   0.1738466,
   0.1563041,
   0.160399,
   0.1781622,
   0.1877984,
   0.1767274,
   0.1550206,
   0.1364258,
   0.1065774,
   0.1005784,
   0.07105905};
   Double_t S0_A_vs_p_fex1400[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_A_vs_p_fey1400[15] = {
   0.01801158,
   0.01801194,
   0.01796327,
   0.01767867,
   0.01747345,
   0.01752249,
   0.01783321,
   0.01846561,
   0.01946212,
   0.02099317,
   0.02323016,
   0.0264765,
   0.03148765,
   0.04014554,
   0.06250171};
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1400,S0_A_vs_p_fy1400,S0_A_vs_p_fex1400,S0_A_vs_p_fey1400);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1400 = new TH1F("Graph_S0_A_vs_p1400","",100,0,3080);
   Graph_S0_A_vs_p1400->SetMinimum(-0.25);
   Graph_S0_A_vs_p1400->SetMaximum(0.3);
   Graph_S0_A_vs_p1400->SetDirectory(0);
   Graph_S0_A_vs_p1400->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1400->SetLineColor(ci);
   Graph_S0_A_vs_p1400->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1400->GetXaxis()->SetRange(0,96);
   Graph_S0_A_vs_p1400->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1400->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1400->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1400->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1400->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1400->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_A_vs_p1400->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1400->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1400->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1400->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1400->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1400->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1400->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1400->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1400->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1400);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1401[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S12_A_vs_p_fy1401[15] = {
   0.09689272,
   0.09708423,
   0.1088201,
   0.1362768,
   0.1711949,
   0.1553464,
   0.1547987,
   0.1377315,
   0.1145218,
   0.1293246,
   0.1209993,
   0.1182347,
   0.1070795,
   0.04224813,
   -0.108404};
   Double_t S12_A_vs_p_fex1401[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_A_vs_p_fey1401[15] = {
   0.01824483,
   0.01824459,
   0.01819607,
   0.01793664,
   0.01777157,
   0.0178692,
   0.01826334,
   0.01901397,
   0.02022629,
   0.02208918,
   0.02475548,
   0.02860505,
   0.03411352,
   0.04293732,
   0.07181054};
   gre = new TGraphErrors(15,S12_A_vs_p_fx1401,S12_A_vs_p_fy1401,S12_A_vs_p_fex1401,S12_A_vs_p_fey1401);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1401 = new TH1F("Graph_S12_A_vs_p1401","S12",100,0,3080);
   Graph_S12_A_vs_p1401->SetMinimum(-0.2171326);
   Graph_S12_A_vs_p1401->SetMaximum(0.2258845);
   Graph_S12_A_vs_p1401->SetDirectory(0);
   Graph_S12_A_vs_p1401->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1401->SetLineColor(ci);
   Graph_S12_A_vs_p1401->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1401->GetXaxis()->SetRange(0,100);
   Graph_S12_A_vs_p1401->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1401->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1401->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1401->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1401->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1401->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_A_vs_p1401->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1401->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1401->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1401->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1401->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1401->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1401->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1401->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1401->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1401);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1402[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S18_A_vs_p_fy1402[15] = {
   0.101161,
   0.1010802,
   0.1093502,
   0.1264975,
   0.1499362,
   0.138592,
   0.1475974,
   0.1495321,
   0.1463695,
   0.1134947,
   0.1023815,
   0.1334336,
   0.08420243,
   0.03092626,
   -0.008920471};
   Double_t S18_A_vs_p_fex1402[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_A_vs_p_fey1402[15] = {
   0.01837519,
   0.01837509,
   0.01832467,
   0.01807334,
   0.0179454,
   0.01809443,
   0.01854756,
   0.01937624,
   0.02069758,
   0.02264012,
   0.02546285,
   0.02942206,
   0.034793,
   0.04406915,
   0.07225879};
   gre = new TGraphErrors(15,S18_A_vs_p_fx1402,S18_A_vs_p_fy1402,S18_A_vs_p_fex1402,S18_A_vs_p_fey1402);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1402 = new TH1F("Graph_S18_A_vs_p1402","S18",100,0,3080);
   Graph_S18_A_vs_p1402->SetMinimum(-0.106188);
   Graph_S18_A_vs_p1402->SetMaximum(0.1939171);
   Graph_S18_A_vs_p1402->SetDirectory(0);
   Graph_S18_A_vs_p1402->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1402->SetLineColor(ci);
   Graph_S18_A_vs_p1402->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1402->GetXaxis()->SetRange(0,100);
   Graph_S18_A_vs_p1402->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1402->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1402->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1402->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1402->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1402->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_A_vs_p1402->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1402->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1402->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1402->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1402->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1402->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1402->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1402->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1402->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1402);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_A_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_A_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_A_vs_p","S18","lpf");
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
