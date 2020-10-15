void QuadScans_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct 14 22:34:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1001[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1001[2] = {
   -1.636273,
   -1.30964};
   Double_t -30.000000 ppm_fex1001[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1001[2] = {
   0.02922466,
   0.02922466};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1001,-30.000000 ppm_fy1001,-30.000000 ppm_fex1001,-30.000000 ppm_fey1001);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1001 = new TH1F("Graph_mI30dO000000sPppm1001","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1001->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1001->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1001->SetDirectory(0);
   Graph_mI30dO000000sPppm1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1001->SetLineColor(ci);
   Graph_mI30dO000000sPppm1001->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1001->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1001->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1001->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1001->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1001->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1001->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1001->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1001->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1001->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1001->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1001->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1001);
   
   
   TF1 *quadLineFit1002 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1002->SetFillColor(19);
   quadLineFit1002->SetFillStyle(0);
   quadLineFit1002->SetLineWidth(2);
   quadLineFit1002->SetChisquare(1.311022e-20);
   quadLineFit1002->SetNDF(0);
   quadLineFit1002->GetXaxis()->SetLabelFont(42);
   quadLineFit1002->GetXaxis()->SetTitleOffset(1);
   quadLineFit1002->GetXaxis()->SetTitleFont(42);
   quadLineFit1002->GetYaxis()->SetLabelFont(42);
   quadLineFit1002->GetYaxis()->SetTitleFont(42);
   quadLineFit1002->SetParameter(0,-2.942807);
   quadLineFit1002->SetParError(0,0.1871291);
   quadLineFit1002->SetParLimits(0,0,0);
   quadLineFit1002->SetParameter(1,0.08165835);
   quadLineFit1002->SetParError(1,0.01033248);
   quadLineFit1002->SetParLimits(1,0,0);
   quadLineFit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1002);
   gre->Draw("ap");
   
   TF1 *quadLineFit1003 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1003->SetFillColor(19);
   quadLineFit1003->SetFillStyle(0);
   quadLineFit1003->SetLineWidth(2);
   quadLineFit1003->SetChisquare(1.311022e-20);
   quadLineFit1003->SetNDF(0);
   quadLineFit1003->GetXaxis()->SetLabelFont(42);
   quadLineFit1003->GetXaxis()->SetTitleOffset(1);
   quadLineFit1003->GetXaxis()->SetTitleFont(42);
   quadLineFit1003->GetYaxis()->SetLabelFont(42);
   quadLineFit1003->GetYaxis()->SetTitleFont(42);
   quadLineFit1003->SetParameter(0,-2.942807);
   quadLineFit1003->SetParError(0,0.1871291);
   quadLineFit1003->SetParLimits(0,0,0);
   quadLineFit1003->SetParameter(1,0.08165835);
   quadLineFit1003->SetParError(1,0.01033248);
   quadLineFit1003->SetParLimits(1,0,0);
   quadLineFit1003->Draw("same");
   
   Double_t -10.000000 ppm_fx1003[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1003[2] = {
   -0.1875005,
   -0.1520575};
   Double_t -10.000000 ppm_fex1003[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1003[2] = {
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1003,-10.000000 ppm_fy1003,-10.000000 ppm_fex1003,-10.000000 ppm_fey1003);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1003 = new TH1F("Graph_mI10dO000000sPppm1003","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1003->SetMinimum(-0.2261144);
   Graph_mI10dO000000sPppm1003->SetMaximum(-0.1134436);
   Graph_mI10dO000000sPppm1003->SetDirectory(0);
   Graph_mI10dO000000sPppm1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1003->SetLineColor(ci);
   Graph_mI10dO000000sPppm1003->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1003->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1003->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1003->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1003->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1003->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1003->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1003);
   
   
   TF1 *quadLineFit1004 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1004->SetFillColor(19);
   quadLineFit1004->SetFillStyle(0);
   quadLineFit1004->SetLineColor(2);
   quadLineFit1004->SetLineWidth(2);
   quadLineFit1004->SetChisquare(6.22684e-25);
   quadLineFit1004->SetNDF(0);
   quadLineFit1004->GetXaxis()->SetLabelFont(42);
   quadLineFit1004->GetXaxis()->SetTitleOffset(1);
   quadLineFit1004->GetXaxis()->SetTitleFont(42);
   quadLineFit1004->GetYaxis()->SetLabelFont(42);
   quadLineFit1004->GetYaxis()->SetTitleFont(42);
   quadLineFit1004->SetParameter(0,-0.3292728);
   quadLineFit1004->SetParError(0,0.1871291);
   quadLineFit1004->SetParLimits(0,0,0);
   quadLineFit1004->SetParameter(1,0.008860765);
   quadLineFit1004->SetParError(1,0.01033248);
   quadLineFit1004->SetParLimits(1,0,0);
   quadLineFit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1004);
   gre->Draw("p ");
   
   TF1 *quadLineFit1005 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1005->SetFillColor(19);
   quadLineFit1005->SetFillStyle(0);
   quadLineFit1005->SetLineColor(2);
   quadLineFit1005->SetLineWidth(2);
   quadLineFit1005->SetChisquare(6.22684e-25);
   quadLineFit1005->SetNDF(0);
   quadLineFit1005->GetXaxis()->SetLabelFont(42);
   quadLineFit1005->GetXaxis()->SetTitleOffset(1);
   quadLineFit1005->GetXaxis()->SetTitleFont(42);
   quadLineFit1005->GetYaxis()->SetLabelFont(42);
   quadLineFit1005->GetYaxis()->SetTitleFont(42);
   quadLineFit1005->SetParameter(0,-0.3292728);
   quadLineFit1005->SetParError(0,0.1871291);
   quadLineFit1005->SetParLimits(0,0,0);
   quadLineFit1005->SetParameter(1,0.008860765);
   quadLineFit1005->SetParError(1,0.01033248);
   quadLineFit1005->SetParLimits(1,0,0);
   quadLineFit1005->Draw("same");
   
   Double_t 10.000000 ppm_fx1005[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1005[2] = {
   1.374805,
   1.061595};
   Double_t 10.000000 ppm_fex1005[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1005[2] = {
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(2,10.000000 ppm_fx1005,10.000000 ppm_fy1005,10.000000 ppm_fex1005,10.000000 ppm_fey1005);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1005 = new TH1F("Graph_10dO000000sPppm1005","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1005->SetMinimum(0.995205);
   Graph_10dO000000sPppm1005->SetMaximum(1.441196);
   Graph_10dO000000sPppm1005->SetDirectory(0);
   Graph_10dO000000sPppm1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1005->SetLineColor(ci);
   Graph_10dO000000sPppm1005->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1005->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1005->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1005->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1005->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1005->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1005->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1005);
   
   
   TF1 *quadLineFit1006 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1006->SetFillColor(19);
   quadLineFit1006->SetFillStyle(0);
   quadLineFit1006->SetLineColor(3);
   quadLineFit1006->SetLineWidth(2);
   quadLineFit1006->SetChisquare(1.334782e-18);
   quadLineFit1006->SetNDF(0);
   quadLineFit1006->GetXaxis()->SetLabelFont(42);
   quadLineFit1006->GetXaxis()->SetTitleOffset(1);
   quadLineFit1006->GetXaxis()->SetTitleFont(42);
   quadLineFit1006->GetYaxis()->SetLabelFont(42);
   quadLineFit1006->GetYaxis()->SetTitleFont(42);
   quadLineFit1006->SetParameter(0,2.627643);
   quadLineFit1006->SetParError(0,0.1871291);
   quadLineFit1006->SetParLimits(0,0,0);
   quadLineFit1006->SetParameter(1,-0.07830237);
   quadLineFit1006->SetParError(1,0.01033248);
   quadLineFit1006->SetParLimits(1,0,0);
   quadLineFit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1006);
   gre->Draw("p ");
   
   TF1 *quadLineFit1007 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1007->SetFillColor(19);
   quadLineFit1007->SetFillStyle(0);
   quadLineFit1007->SetLineColor(3);
   quadLineFit1007->SetLineWidth(2);
   quadLineFit1007->SetChisquare(1.334782e-18);
   quadLineFit1007->SetNDF(0);
   quadLineFit1007->GetXaxis()->SetLabelFont(42);
   quadLineFit1007->GetXaxis()->SetTitleOffset(1);
   quadLineFit1007->GetXaxis()->SetTitleFont(42);
   quadLineFit1007->GetYaxis()->SetLabelFont(42);
   quadLineFit1007->GetYaxis()->SetTitleFont(42);
   quadLineFit1007->SetParameter(0,2.627643);
   quadLineFit1007->SetParError(0,0.1871291);
   quadLineFit1007->SetParLimits(0,0,0);
   quadLineFit1007->SetParameter(1,-0.07830237);
   quadLineFit1007->SetParError(1,0.01033248);
   quadLineFit1007->SetParLimits(1,0,0);
   quadLineFit1007->Draw("same");
   
   Double_t 30.000000 ppm_fx1007[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1007[2] = {
   2.834796,
   2.270044};
   Double_t 30.000000 ppm_fex1007[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1007[2] = {
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(2,30.000000 ppm_fx1007,30.000000 ppm_fy1007,30.000000 ppm_fex1007,30.000000 ppm_fey1007);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1007 = new TH1F("Graph_30dO000000sPppm1007","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1007->SetMinimum(2.1785);
   Graph_30dO000000sPppm1007->SetMaximum(2.926341);
   Graph_30dO000000sPppm1007->SetDirectory(0);
   Graph_30dO000000sPppm1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1007->SetLineColor(ci);
   Graph_30dO000000sPppm1007->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1007->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1007->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1007->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1007->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1007->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1007->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1007);
   
   
   TF1 *quadLineFit1008 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1008->SetFillColor(19);
   quadLineFit1008->SetFillStyle(0);
   quadLineFit1008->SetLineColor(4);
   quadLineFit1008->SetLineWidth(2);
   quadLineFit1008->SetChisquare(9.042431e-20);
   quadLineFit1008->SetNDF(0);
   quadLineFit1008->GetXaxis()->SetLabelFont(42);
   quadLineFit1008->GetXaxis()->SetTitleOffset(1);
   quadLineFit1008->GetXaxis()->SetTitleFont(42);
   quadLineFit1008->GetYaxis()->SetLabelFont(42);
   quadLineFit1008->GetYaxis()->SetTitleFont(42);
   quadLineFit1008->SetParameter(0,5.093804);
   quadLineFit1008->SetParError(0,0.1871291);
   quadLineFit1008->SetParLimits(0,0,0);
   quadLineFit1008->SetParameter(1,-0.141188);
   quadLineFit1008->SetParError(1,0.01033248);
   quadLineFit1008->SetParLimits(1,0,0);
   quadLineFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1008);
   gre->Draw("p ");
   
   TF1 *quadLineFit1009 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1009->SetFillColor(19);
   quadLineFit1009->SetFillStyle(0);
   quadLineFit1009->SetLineColor(4);
   quadLineFit1009->SetLineWidth(2);
   quadLineFit1009->SetChisquare(9.042431e-20);
   quadLineFit1009->SetNDF(0);
   quadLineFit1009->GetXaxis()->SetLabelFont(42);
   quadLineFit1009->GetXaxis()->SetTitleOffset(1);
   quadLineFit1009->GetXaxis()->SetTitleFont(42);
   quadLineFit1009->GetYaxis()->SetLabelFont(42);
   quadLineFit1009->GetYaxis()->SetTitleFont(42);
   quadLineFit1009->SetParameter(0,5.093804);
   quadLineFit1009->SetParError(0,0.1871291);
   quadLineFit1009->SetParLimits(0,0,0);
   quadLineFit1009->SetParameter(1,-0.141188);
   quadLineFit1009->SetParError(1,0.01033248);
   quadLineFit1009->SetParLimits(1,0,0);
   quadLineFit1009->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
