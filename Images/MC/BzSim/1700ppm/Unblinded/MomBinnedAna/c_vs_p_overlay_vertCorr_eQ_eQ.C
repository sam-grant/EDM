void c_vs_p_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 25 01:08:03 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.079375,2850.5,0.064375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1232[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S0_c_vs_p_fy1232[17] = {
   -0.002591457,
   -0.0006184696,
   -0.0002167112,
   0.0003417258,
   -0.0001524651,
   0.0001056715,
   7.687523e-05,
   0.0001197136,
   -8.360294e-05,
   -0.0001991755,
   0.0004094523,
   -0.0001104692,
   -1.492008e-05,
   0.000256405,
   0.0004767542,
   -0.000410183,
   -0.0004667045};
   Double_t S0_c_vs_p_fex1232[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0_c_vs_p_fey1232[17] = {
   0.03925765,
   0.03650685,
   0.03439624,
   0.03269369,
   0.03131185,
   0.02996173,
   0.02879624,
   0.02775905,
   0.02695515,
   0.02609952,
   0.02556328,
   0.02514551,
   0.02485397,
   0.02468715,
   0.02456062,
   0.02470793,
   0.0246648};
   TGraphErrors *gre = new TGraphErrors(17,S0_c_vs_p_fx1232,S0_c_vs_p_fy1232,S0_c_vs_p_fex1232,S0_c_vs_p_fey1232);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1232 = new TH1F("Graph_S0_c_vs_p1232","",100,530,2570);
   Graph_S0_c_vs_p1232->SetMinimum(-0.065);
   Graph_S0_c_vs_p1232->SetMaximum(0.05);
   Graph_S0_c_vs_p1232->SetDirectory(0);
   Graph_S0_c_vs_p1232->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1232->SetLineColor(ci);
   Graph_S0_c_vs_p1232->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1232->GetXaxis()->SetRange(0,101);
   Graph_S0_c_vs_p1232->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1232->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1232->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1232->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1232->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1232->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1232->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1232->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1232->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1232->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1232->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1232->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1232->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1232->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1232);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1233[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S12_c_vs_p_fy1233[17] = {
   -0.0187644,
   -0.004195938,
   -0.001416294,
   -0.001296826,
   -0.0004619667,
   -0.001588271,
   0.0001802221,
   0.001168265,
   -0.0006986314,
   -0.000188723,
   0.0004011865,
   -9.056395e-05,
   0.001301296,
   0.0006787429,
   0.0001970304,
   0.0008111835,
   1.284137e-05};
   Double_t S12_c_vs_p_fex1233[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S12_c_vs_p_fey1233[17] = {
   0.03930789,
   0.03669651,
   0.03461908,
   0.03295437,
   0.03140147,
   0.03008489,
   0.02890019,
   0.02792783,
   0.02712974,
   0.02630759,
   0.02566045,
   0.02535702,
   0.02508443,
   0.02489769,
   0.02488119,
   0.02484932,
   0.0249883};
   gre = new TGraphErrors(17,S12_c_vs_p_fx1233,S12_c_vs_p_fy1233,S12_c_vs_p_fex1233,S12_c_vs_p_fey1233);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1233 = new TH1F("Graph_S12_c_vs_p1233","S12",100,530,2570);
   Graph_S12_c_vs_p1233->SetMinimum(-0.06719979);
   Graph_S12_c_vs_p1233->SetMaximum(0.04233029);
   Graph_S12_c_vs_p1233->SetDirectory(0);
   Graph_S12_c_vs_p1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1233->SetLineColor(ci);
   Graph_S12_c_vs_p1233->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1233->GetXaxis()->SetRange(0,101);
   Graph_S12_c_vs_p1233->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1233->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1233->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1233->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1233->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1233->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1233->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1233->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1233->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1233->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1233->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1233->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1233->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1233->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1233);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1234[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S18_c_vs_p_fy1234[17] = {
   -0.01292973,
   -0.003095355,
   -0.001873149,
   -0.0009046203,
   -9.38665e-05,
   -0.0002476922,
   0.0001658575,
   -5.708684e-05,
   0.0001202098,
   -0.000180933,
   -3.558141e-05,
   4.783393e-05,
   -0.000411701,
   0.0003932835,
   -0.0009280785,
   0.0005192748,
   -0.001376905};
   Double_t S18_c_vs_p_fex1234[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S18_c_vs_p_fey1234[17] = {
   0.03931879,
   0.03677043,
   0.03464279,
   0.03303287,
   0.0315852,
   0.0302125,
   0.02917347,
   0.02812946,
   0.0272187,
   0.02647416,
   0.02595784,
   0.02552405,
   0.02529074,
   0.02509516,
   0.02496436,
   0.0251406,
   0.02531627};
   gre = new TGraphErrors(17,S18_c_vs_p_fx1234,S18_c_vs_p_fy1234,S18_c_vs_p_fex1234,S18_c_vs_p_fey1234);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1234 = new TH1F("Graph_S18_c_vs_p1234","S18",100,530,2570);
   Graph_S18_c_vs_p1234->SetMinimum(-0.06084087);
   Graph_S18_c_vs_p1234->SetMaximum(0.04226743);
   Graph_S18_c_vs_p1234->SetDirectory(0);
   Graph_S18_c_vs_p1234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1234->SetLineColor(ci);
   Graph_S18_c_vs_p1234->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1234->GetXaxis()->SetRange(0,101);
   Graph_S18_c_vs_p1234->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1234->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1234->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1234->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1234->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1234->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1234->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1234->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1234->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1234->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1234->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1234->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1234->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1234->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1234->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1234);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_fx1235[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S0S12S18_c_vs_p_fy1235[17] = {
   -0.01104508,
   -0.002913727,
   -0.001330545,
   -0.0004873193,
   -0.0004892867,
   -0.0008078961,
   0.0002870836,
   -0.0001613194,
   -0.0002724701,
   -5.312243e-05,
   0.0009744671,
   -0.0003869004,
   0.0004133203,
   1.556255e-05,
   -0.0009266528,
   0.0002949177,
   -4.542747e-05};
   Double_t S0S12S18_c_vs_p_fex1235[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0S12S18_c_vs_p_fey1235[17] = {
   0.02269243,
   0.02116942,
   0.01995297,
   0.01899477,
   0.01815238,
   0.01737442,
   0.01672207,
   0.0161346,
   0.01565129,
   0.0151844,
   0.0148573,
   0.0146358,
   0.01448354,
   0.01437814,
   0.01432789,
   0.0143828,
   0.01443915};
   gre = new TGraphErrors(17,S0S12S18_c_vs_p_fx1235,S0S12S18_c_vs_p_fy1235,S0S12S18_c_vs_p_fex1235,S0S12S18_c_vs_p_fey1235);
   gre->SetName("S0S12S18_c_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p1235 = new TH1F("Graph_S0S12S18_c_vs_p1235","S0S12S18",100,530,2570);
   Graph_S0S12S18_c_vs_p1235->SetMinimum(-0.03897351);
   Graph_S0S12S18_c_vs_p1235->SetMaximum(0.02385842);
   Graph_S0S12S18_c_vs_p1235->SetDirectory(0);
   Graph_S0S12S18_c_vs_p1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p1235->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p1235->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0S12S18_c_vs_p1235->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_c_vs_p1235->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1235->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1235->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1235->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p1235->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1235->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p1235->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1235->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p1235->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1235->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1235->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p1235->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1235->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1235->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p1235);
   
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
