void A_vs_p_fit_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:19:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-2.5,3650,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1422[15] = {
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
   Double_t S0_A_vs_p_fy1422[15] = {
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
   Double_t S0_A_vs_p_fex1422[15] = {
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
   Double_t S0_A_vs_p_fey1422[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1422,S0_A_vs_p_fy1422,S0_A_vs_p_fex1422,S0_A_vs_p_fey1422);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1422 = new TH1F("Graph_S0_A_vs_p1422","",100,-400,3200);
   Graph_S0_A_vs_p1422->SetMinimum(-2);
   Graph_S0_A_vs_p1422->SetMaximum(2);
   Graph_S0_A_vs_p1422->SetDirectory(0);
   Graph_S0_A_vs_p1422->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1422->SetLineColor(ci);
   Graph_S0_A_vs_p1422->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1422->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1422->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1422->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1422->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1422->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1422->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_A_vs_p1422->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1422->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1422->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1422->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1422->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1422->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1422->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1422->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1422->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1422);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1423[15] = {
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
   Double_t S12_A_vs_p_fy1423[15] = {
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
   Double_t S12_A_vs_p_fex1423[15] = {
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
   Double_t S12_A_vs_p_fey1423[15] = {
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
   gre = new TGraphErrors(15,S12_A_vs_p_fx1423,S12_A_vs_p_fy1423,S12_A_vs_p_fex1423,S12_A_vs_p_fey1423);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1423 = new TH1F("Graph_S12_A_vs_p1423","S12",100,-400,3200);
   Graph_S12_A_vs_p1423->SetMinimum(-0.2171326);
   Graph_S12_A_vs_p1423->SetMaximum(0.2258845);
   Graph_S12_A_vs_p1423->SetDirectory(0);
   Graph_S12_A_vs_p1423->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1423->SetLineColor(ci);
   Graph_S12_A_vs_p1423->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1423->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1423->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1423->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1423->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1423->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1423->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_A_vs_p1423->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1423->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1423->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1423->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1423->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1423->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1423->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1423->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1423->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1423);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1424[15] = {
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
   Double_t S18_A_vs_p_fy1424[15] = {
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
   Double_t S18_A_vs_p_fex1424[15] = {
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
   Double_t S18_A_vs_p_fey1424[15] = {
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
   gre = new TGraphErrors(15,S18_A_vs_p_fx1424,S18_A_vs_p_fy1424,S18_A_vs_p_fex1424,S18_A_vs_p_fey1424);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1424 = new TH1F("Graph_S18_A_vs_p1424","S18",100,-400,3200);
   Graph_S18_A_vs_p1424->SetMinimum(-0.106188);
   Graph_S18_A_vs_p1424->SetMaximum(0.1939171);
   Graph_S18_A_vs_p1424->SetDirectory(0);
   Graph_S18_A_vs_p1424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1424->SetLineColor(ci);
   Graph_S18_A_vs_p1424->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1424->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1424->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1424->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1424->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1424->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1424->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_A_vs_p1424->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1424->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1424->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1424->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1424->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1424->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1424->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1424->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1424->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1424);
   
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
