void c_vs_p_overlay_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 00:10:14 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(488,-2.5,1712,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1121[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S0_c_vs_p_fy1121[8] = {
   -0.002591457,
   -0.0006184696,
   -0.0002167112,
   0.0003417258,
   -0.0001524651,
   0.0001056715,
   7.687523e-05,
   0.0001197136};
   Double_t S0_c_vs_p_fex1121[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0_c_vs_p_fey1121[8] = {
   0.03925765,
   0.03650685,
   0.03439624,
   0.03269369,
   0.03131185,
   0.02996173,
   0.02879624,
   0.02775905};
   TGraphErrors *gre = new TGraphErrors(8,S0_c_vs_p_fx1121,S0_c_vs_p_fy1121,S0_c_vs_p_fex1121,S0_c_vs_p_fey1121);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1121 = new TH1F("Graph_S0_c_vs_p1121","",100,620,1580);
   Graph_S0_c_vs_p1121->SetMinimum(-2);
   Graph_S0_c_vs_p1121->SetMaximum(2);
   Graph_S0_c_vs_p1121->SetDirectory(0);
   Graph_S0_c_vs_p1121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1121->SetLineColor(ci);
   Graph_S0_c_vs_p1121->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1121->GetXaxis()->SetRange(0,101);
   Graph_S0_c_vs_p1121->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1121->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1121->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1121->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1121->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1121->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1121->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1121->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1121->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1121->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1121->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1121->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1121);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1122[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S12_c_vs_p_fy1122[8] = {
   -0.0187644,
   -0.004195938,
   -0.001416294,
   -0.001296826,
   -0.0004619667,
   -0.001588271,
   0.0001802221,
   0.001168265};
   Double_t S12_c_vs_p_fex1122[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S12_c_vs_p_fey1122[8] = {
   0.03930789,
   0.03669651,
   0.03461908,
   0.03295437,
   0.03140147,
   0.03008489,
   0.02890019,
   0.02792783};
   gre = new TGraphErrors(8,S12_c_vs_p_fx1122,S12_c_vs_p_fy1122,S12_c_vs_p_fex1122,S12_c_vs_p_fey1122);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1122 = new TH1F("Graph_S12_c_vs_p1122","S12",100,620,1580);
   Graph_S12_c_vs_p1122->SetMinimum(-0.06719979);
   Graph_S12_c_vs_p1122->SetMaximum(0.04233029);
   Graph_S12_c_vs_p1122->SetDirectory(0);
   Graph_S12_c_vs_p1122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1122->SetLineColor(ci);
   Graph_S12_c_vs_p1122->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1122->GetXaxis()->SetRange(0,101);
   Graph_S12_c_vs_p1122->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1122->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1122->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1122->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1122->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1122->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1122->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1122->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1122->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1122->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1122->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1122->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1122->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1122->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1122);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1123[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S18_c_vs_p_fy1123[8] = {
   -0.01292973,
   -0.003095355,
   -0.001873149,
   -0.0009046203,
   -9.38665e-05,
   -0.0002476922,
   0.0001658575,
   -5.708684e-05};
   Double_t S18_c_vs_p_fex1123[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S18_c_vs_p_fey1123[8] = {
   0.03931879,
   0.03677043,
   0.03464279,
   0.03303287,
   0.0315852,
   0.0302125,
   0.02917347,
   0.02812946};
   gre = new TGraphErrors(8,S18_c_vs_p_fx1123,S18_c_vs_p_fy1123,S18_c_vs_p_fex1123,S18_c_vs_p_fey1123);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1123 = new TH1F("Graph_S18_c_vs_p1123","S18",100,620,1580);
   Graph_S18_c_vs_p1123->SetMinimum(-0.06084087);
   Graph_S18_c_vs_p1123->SetMaximum(0.04226743);
   Graph_S18_c_vs_p1123->SetDirectory(0);
   Graph_S18_c_vs_p1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1123->SetLineColor(ci);
   Graph_S18_c_vs_p1123->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1123->GetXaxis()->SetRange(0,101);
   Graph_S18_c_vs_p1123->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1123->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1123->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1123->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1123->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1123->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1123->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1123->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1123->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1123->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1123->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1123->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1123->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1123);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_fx1124[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t S0S12S18_c_vs_p_fy1124[8] = {
   -0.01104508,
   -0.002913727,
   -0.001330545,
   -0.0004873193,
   -0.0004892867,
   -0.0008078961,
   0.0002870836,
   -0.0001613194};
   Double_t S0S12S18_c_vs_p_fex1124[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0S12S18_c_vs_p_fey1124[8] = {
   0.02269243,
   0.02116942,
   0.01995297,
   0.01899477,
   0.01815238,
   0.01737442,
   0.01672207,
   0.0161346};
   gre = new TGraphErrors(8,S0S12S18_c_vs_p_fx1124,S0S12S18_c_vs_p_fy1124,S0S12S18_c_vs_p_fex1124,S0S12S18_c_vs_p_fey1124);
   gre->SetName("S0S12S18_c_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p1124 = new TH1F("Graph_S0S12S18_c_vs_p1124","S0S12S18",100,620,1580);
   Graph_S0S12S18_c_vs_p1124->SetMinimum(-0.03897351);
   Graph_S0S12S18_c_vs_p1124->SetMaximum(0.02385842);
   Graph_S0S12S18_c_vs_p1124->SetDirectory(0);
   Graph_S0S12S18_c_vs_p1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p1124->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p1124->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p1124->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p1124->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p1124->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p1124);
   
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

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
