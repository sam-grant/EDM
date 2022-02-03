void BrVsDS2_crossCheck()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 13 03:08:35 2022) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-2.05,-17.5,18.45,57.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[15] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15};
   Double_t _fy1001[15] = {
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000,
   1000000};
   Double_t _fex1001[15] = {
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
   Double_t _fey1001[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle(";Dataset;#LTB_{r}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerSize(0);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0,16.4);
   Graph_Graph1001->SetMinimum(-10);
   Graph_Graph1001->SetMaximum(50);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Dataset");
   Graph_Graph1001->GetXaxis()->SetBinLabel(7,"1a");
   Graph_Graph1001->GetXaxis()->SetBinLabel(13,"1b");
   Graph_Graph1001->GetXaxis()->SetBinLabel(19,"1c");
   Graph_Graph1001->GetXaxis()->SetBinLabel(25,"1d");
   Graph_Graph1001->GetXaxis()->SetBinLabel(31,"2b");
   Graph_Graph1001->GetXaxis()->SetBinLabel(37,"2c");
   Graph_Graph1001->GetXaxis()->SetBinLabel(43,"2d");
   Graph_Graph1001->GetXaxis()->SetBinLabel(49,"2e");
   Graph_Graph1001->GetXaxis()->SetBinLabel(55,"2f");
   Graph_Graph1001->GetXaxis()->SetBinLabel(61,"2g");
   Graph_Graph1001->GetXaxis()->SetBinLabel(68,"2h");
   Graph_Graph1001->GetXaxis()->SetBinLabel(74,"3N");
   Graph_Graph1001->GetXaxis()->SetBinLabel(80,"3O");
   Graph_Graph1001->GetXaxis()->SetBinLabel(86,"4");
   Graph_Graph1001->GetXaxis()->SetBinLabel(92,"5");
   Graph_Graph1001->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LTB_{r}#GT [ppm]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   Double_t _fx1002[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1002[4] = {
   20.33376,
   21.00419,
   27.37571,
   31.42354};
   Double_t _fex1002[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1002[4] = {
   7.265164,
   8.137406,
   8.18511,
   8.717587};
   gre = new TGraphErrors(4,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,0.7,4.3);
   Graph_Graph1002->SetMinimum(10.13935);
   Graph_Graph1002->SetMaximum(42.86856);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("p ");
   
   Double_t _fx1003[7] = {
   5,
   6,
   7,
   8,
   9,
   10,
   11};
   Double_t _fy1003[7] = {
   10.32569,
   13.59474,
   15.85739,
   11.61011,
   11.5462,
   13.49806,
   15.00912};
   Double_t _fex1003[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1003[7] = {
   3.529439,
   3.709878,
   6.01954,
   3.495119,
   3.493272,
   4.930136,
   4.946123};
   gre = new TGraphErrors(7,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,4.4,11.6);
   Graph_Graph1003->SetMinimum(5.288179);
   Graph_Graph1003->SetMaximum(23.385);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("p ");
   
   Double_t _fx1004[2] = {
   12,
   13};
   Double_t _fy1004[2] = {
   9.936719,
   9.866153};
   Double_t _fex1004[2] = {
   0,
   0};
   Double_t _fey1004[2] = {
   4.95436,
   5.386429};
   gre = new TGraphErrors(2,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","",100,11.9,13.1);
   Graph_Graph1004->SetMinimum(3.402439);
   Graph_Graph1004->SetMaximum(16.32987);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("p ");
   
   Double_t _fx1005[1] = {
   14};
   Double_t _fy1005[1] = {
   -0.4434922};
   Double_t _fex1005[1] = {
   0};
   Double_t _fey1005[1] = {
   1.951419};
   gre = new TGraphErrors(1,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,13.9,15.1);
   Graph_Graph1005->SetMinimum(-2.785194);
   Graph_Graph1005->SetMaximum(1.89821);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("p ");
   
   Double_t _fx1006[1] = {
   15};
   Double_t _fy1006[1] = {
   0.6208637};
   Double_t _fex1006[1] = {
   0};
   Double_t _fey1006[1] = {
   3.457781};
   gre = new TGraphErrors(1,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,14.9,16.1);
   Graph_Graph1006->SetMinimum(-3.528473);
   Graph_Graph1006->SetMaximum(4.7702);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.75,0.59,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Run-1","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-2","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-3","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-4","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Run-5","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
