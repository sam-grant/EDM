void QuadScans_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1001[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1001[3] = {
   -3.142634,
   -2.795916,
   -2.567551};
   Double_t -50.000000 ppm_fex1001[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1001[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1001,-50.000000 ppm_fy1001,-50.000000 ppm_fex1001,-50.000000 ppm_fey1001);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1001 = new TH1F("Graph_mI50dO000000sPppm1001","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1001->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1001->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1001->SetDirectory(0);
   Graph_mI50dO000000sPppm1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1001->SetLineColor(ci);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1001->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1001->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1001->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1001->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1001->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1001);
   
   
   TF1 *quadLineFit1002 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1002->SetFillColor(19);
   quadLineFit1002->SetFillStyle(0);
   quadLineFit1002->SetLineWidth(2);
   quadLineFit1002->SetChisquare(2.733433);
   quadLineFit1002->SetNDF(1);
   quadLineFit1002->GetXaxis()->SetLabelFont(42);
   quadLineFit1002->GetXaxis()->SetTitleOffset(1);
   quadLineFit1002->GetXaxis()->SetTitleFont(42);
   quadLineFit1002->GetYaxis()->SetLabelFont(42);
   quadLineFit1002->GetYaxis()->SetTitleFont(42);
   quadLineFit1002->SetParameter(0,-5.423243);
   quadLineFit1002->SetParError(0,0.1867546);
   quadLineFit1002->SetParLimits(0,0,0);
   quadLineFit1002->SetParameter(1,0.1437708);
   quadLineFit1002->SetParError(1,0.01033282);
   quadLineFit1002->SetParLimits(1,0,0);
   quadLineFit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1002);
   gre->Draw("ap");
   
   TF1 *quadLineFit1003 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1003->SetFillColor(19);
   quadLineFit1003->SetFillStyle(0);
   quadLineFit1003->SetLineWidth(2);
   quadLineFit1003->SetChisquare(2.733433);
   quadLineFit1003->SetNDF(1);
   quadLineFit1003->GetXaxis()->SetLabelFont(42);
   quadLineFit1003->GetXaxis()->SetTitleOffset(1);
   quadLineFit1003->GetXaxis()->SetTitleFont(42);
   quadLineFit1003->GetYaxis()->SetLabelFont(42);
   quadLineFit1003->GetYaxis()->SetTitleFont(42);
   quadLineFit1003->SetParameter(0,-5.423243);
   quadLineFit1003->SetParError(0,0.1867546);
   quadLineFit1003->SetParLimits(0,0,0);
   quadLineFit1003->SetParameter(1,0.1437708);
   quadLineFit1003->SetParError(1,0.01033282);
   quadLineFit1003->SetParLimits(1,0,0);
   quadLineFit1003->Draw("same");
   
   Double_t -40.000000 ppm_fx1003[3] = {
   16,
   18,
   20};
   Double_t -40.000000 ppm_fy1003[3] = {
   -2.441726,
   -2.1233,
   -1.951127};
   Double_t -40.000000 ppm_fex1003[3] = {
   0,
   0,
   0};
   Double_t -40.000000 ppm_fey1003[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,-40.000000 ppm_fx1003,-40.000000 ppm_fy1003,-40.000000 ppm_fex1003,-40.000000 ppm_fey1003);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1003 = new TH1F("Graph_mI40dO000000sPppm1003","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1003->SetMinimum(-2.525856);
   Graph_mI40dO000000sPppm1003->SetMaximum(-1.866997);
   Graph_mI40dO000000sPppm1003->SetDirectory(0);
   Graph_mI40dO000000sPppm1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1003->SetLineColor(ci);
   Graph_mI40dO000000sPppm1003->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1003->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1003->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1003->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1003->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1003->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1003->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1003);
   
   
   TF1 *quadLineFit1004 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1004->SetFillColor(19);
   quadLineFit1004->SetFillStyle(0);
   quadLineFit1004->SetLineColor(2);
   quadLineFit1004->SetLineWidth(2);
   quadLineFit1004->SetChisquare(4.174039);
   quadLineFit1004->SetNDF(1);
   quadLineFit1004->GetXaxis()->SetLabelFont(42);
   quadLineFit1004->GetXaxis()->SetTitleOffset(1);
   quadLineFit1004->GetXaxis()->SetTitleFont(42);
   quadLineFit1004->GetYaxis()->SetLabelFont(42);
   quadLineFit1004->GetYaxis()->SetTitleFont(42);
   quadLineFit1004->SetParameter(0,-4.379749);
   quadLineFit1004->SetParError(0,0.1867526);
   quadLineFit1004->SetParLimits(0,0,0);
   quadLineFit1004->SetParameter(1,0.1226499);
   quadLineFit1004->SetParError(1,0.01033271);
   quadLineFit1004->SetParLimits(1,0,0);
   quadLineFit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1004);
   gre->Draw("p ");
   
   TF1 *quadLineFit1005 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1005->SetFillColor(19);
   quadLineFit1005->SetFillStyle(0);
   quadLineFit1005->SetLineColor(2);
   quadLineFit1005->SetLineWidth(2);
   quadLineFit1005->SetChisquare(4.174039);
   quadLineFit1005->SetNDF(1);
   quadLineFit1005->GetXaxis()->SetLabelFont(42);
   quadLineFit1005->GetXaxis()->SetTitleOffset(1);
   quadLineFit1005->GetXaxis()->SetTitleFont(42);
   quadLineFit1005->GetYaxis()->SetLabelFont(42);
   quadLineFit1005->GetYaxis()->SetTitleFont(42);
   quadLineFit1005->SetParameter(0,-4.379749);
   quadLineFit1005->SetParError(0,0.1867526);
   quadLineFit1005->SetParLimits(0,0,0);
   quadLineFit1005->SetParameter(1,0.1226499);
   quadLineFit1005->SetParError(1,0.01033271);
   quadLineFit1005->SetParLimits(1,0,0);
   quadLineFit1005->Draw("same");
   
   Double_t -30.000000 ppm_fx1005[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1005[3] = {
   -1.684287,
   -1.492511,
   -1.30165};
   Double_t -30.000000 ppm_fex1005[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1005[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1005,-30.000000 ppm_fy1005,-30.000000 ppm_fex1005,-30.000000 ppm_fey1005);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1005 = new TH1F("Graph_mI30dO000000sPppm1005","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1005->SetMinimum(-1.75762);
   Graph_mI30dO000000sPppm1005->SetMaximum(-1.228317);
   Graph_mI30dO000000sPppm1005->SetDirectory(0);
   Graph_mI30dO000000sPppm1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1005->SetLineColor(ci);
   Graph_mI30dO000000sPppm1005->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1005->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1005->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1005->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1005->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1005->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1005->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1005);
   
   
   TF1 *quadLineFit1006 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1006->SetFillColor(19);
   quadLineFit1006->SetFillStyle(0);
   quadLineFit1006->SetLineColor(3);
   quadLineFit1006->SetLineWidth(2);
   quadLineFit1006->SetChisquare(0.0001634279);
   quadLineFit1006->SetNDF(1);
   quadLineFit1006->GetXaxis()->SetLabelFont(42);
   quadLineFit1006->GetXaxis()->SetTitleOffset(1);
   quadLineFit1006->GetXaxis()->SetTitleFont(42);
   quadLineFit1006->GetYaxis()->SetLabelFont(42);
   quadLineFit1006->GetYaxis()->SetTitleFont(42);
   quadLineFit1006->SetParameter(0,-3.214683);
   quadLineFit1006->SetParError(0,0.1867484);
   quadLineFit1006->SetParLimits(0,0,0);
   quadLineFit1006->SetParameter(1,0.0956593);
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
   quadLineFit1007->SetChisquare(0.0001634279);
   quadLineFit1007->SetNDF(1);
   quadLineFit1007->GetXaxis()->SetLabelFont(42);
   quadLineFit1007->GetXaxis()->SetTitleOffset(1);
   quadLineFit1007->GetXaxis()->SetTitleFont(42);
   quadLineFit1007->GetYaxis()->SetLabelFont(42);
   quadLineFit1007->GetYaxis()->SetTitleFont(42);
   quadLineFit1007->SetParameter(0,-3.214683);
   quadLineFit1007->SetParError(0,0.1867484);
   quadLineFit1007->SetParLimits(0,0,0);
   quadLineFit1007->SetParameter(1,0.0956593);
   quadLineFit1007->SetParError(1,0.01033248);
   quadLineFit1007->SetParLimits(1,0,0);
   quadLineFit1007->Draw("same");
   
   Double_t -20.000000 ppm_fx1007[3] = {
   16,
   18,
   20};
   Double_t -20.000000 ppm_fy1007[3] = {
   -0.8788779,
   -0.7538964,
   -0.7030394};
   Double_t -20.000000 ppm_fex1007[3] = {
   0,
   0,
   0};
   Double_t -20.000000 ppm_fey1007[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,-20.000000 ppm_fx1007,-20.000000 ppm_fy1007,-20.000000 ppm_fex1007,-20.000000 ppm_fey1007);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1007 = new TH1F("Graph_mI20dO000000sPppm1007","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1007->SetMinimum(-0.9315313);
   Graph_mI20dO000000sPppm1007->SetMaximum(-0.650386);
   Graph_mI20dO000000sPppm1007->SetDirectory(0);
   Graph_mI20dO000000sPppm1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1007->SetLineColor(ci);
   Graph_mI20dO000000sPppm1007->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1007->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1007->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1007->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1007->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1007->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1007->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1007);
   
   
   TF1 *quadLineFit1008 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1008->SetFillColor(19);
   quadLineFit1008->SetFillStyle(0);
   quadLineFit1008->SetLineColor(4);
   quadLineFit1008->SetLineWidth(2);
   quadLineFit1008->SetChisquare(1.072195);
   quadLineFit1008->SetNDF(1);
   quadLineFit1008->GetXaxis()->SetLabelFont(42);
   quadLineFit1008->GetXaxis()->SetTitleOffset(1);
   quadLineFit1008->GetXaxis()->SetTitleFont(42);
   quadLineFit1008->GetYaxis()->SetLabelFont(42);
   quadLineFit1008->GetYaxis()->SetTitleFont(42);
   quadLineFit1008->SetParameter(0,-1.569878);
   quadLineFit1008->SetParError(0,0.1867494);
   quadLineFit1008->SetParLimits(0,0,0);
   quadLineFit1008->SetParameter(1,0.04395961);
   quadLineFit1008->SetParError(1,0.01033254);
   quadLineFit1008->SetParLimits(1,0,0);
   quadLineFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1008);
   gre->Draw("p ");
   
   TF1 *quadLineFit1009 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1009->SetFillColor(19);
   quadLineFit1009->SetFillStyle(0);
   quadLineFit1009->SetLineColor(4);
   quadLineFit1009->SetLineWidth(2);
   quadLineFit1009->SetChisquare(1.072195);
   quadLineFit1009->SetNDF(1);
   quadLineFit1009->GetXaxis()->SetLabelFont(42);
   quadLineFit1009->GetXaxis()->SetTitleOffset(1);
   quadLineFit1009->GetXaxis()->SetTitleFont(42);
   quadLineFit1009->GetYaxis()->SetLabelFont(42);
   quadLineFit1009->GetYaxis()->SetTitleFont(42);
   quadLineFit1009->SetParameter(0,-1.569878);
   quadLineFit1009->SetParError(0,0.1867494);
   quadLineFit1009->SetParLimits(0,0,0);
   quadLineFit1009->SetParameter(1,0.04395961);
   quadLineFit1009->SetParError(1,0.01033254);
   quadLineFit1009->SetParLimits(1,0,0);
   quadLineFit1009->Draw("same");
   
   Double_t -10.000000 ppm_fx1009[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1009[3] = {
   -0.1517379,
   -0.1249227,
   -0.1060301};
   Double_t -10.000000 ppm_fex1009[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1009[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1009,-10.000000 ppm_fy1009,-10.000000 ppm_fex1009,-10.000000 ppm_fey1009);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1009 = new TH1F("Graph_mI10dO000000sPppm1009","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1009->SetMinimum(-0.1913783);
   Graph_mI10dO000000sPppm1009->SetMaximum(-0.06638975);
   Graph_mI10dO000000sPppm1009->SetDirectory(0);
   Graph_mI10dO000000sPppm1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1009->SetLineColor(ci);
   Graph_mI10dO000000sPppm1009->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1009->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1009->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1009->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1009->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1009->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1009->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1009);
   
   
   TF1 *quadLineFit1010 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1010->SetFillColor(19);
   quadLineFit1010->SetFillStyle(0);
   quadLineFit1010->SetLineColor(5);
   quadLineFit1010->SetLineWidth(2);
   quadLineFit1010->SetChisquare(0.01224865);
   quadLineFit1010->SetNDF(1);
   quadLineFit1010->GetXaxis()->SetLabelFont(42);
   quadLineFit1010->GetXaxis()->SetTitleOffset(1);
   quadLineFit1010->GetXaxis()->SetTitleFont(42);
   quadLineFit1010->GetYaxis()->SetLabelFont(42);
   quadLineFit1010->GetYaxis()->SetTitleFont(42);
   quadLineFit1010->SetParameter(0,-0.3332487);
   quadLineFit1010->SetParError(0,0.1867485);
   quadLineFit1010->SetParLimits(0,0,0);
   quadLineFit1010->SetParameter(1,0.01142695);
   quadLineFit1010->SetParError(1,0.01033248);
   quadLineFit1010->SetParLimits(1,0,0);
   quadLineFit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1010);
   gre->Draw("p ");
   
   TF1 *quadLineFit1011 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1011->SetFillColor(19);
   quadLineFit1011->SetFillStyle(0);
   quadLineFit1011->SetLineColor(5);
   quadLineFit1011->SetLineWidth(2);
   quadLineFit1011->SetChisquare(0.01224865);
   quadLineFit1011->SetNDF(1);
   quadLineFit1011->GetXaxis()->SetLabelFont(42);
   quadLineFit1011->GetXaxis()->SetTitleOffset(1);
   quadLineFit1011->GetXaxis()->SetTitleFont(42);
   quadLineFit1011->GetYaxis()->SetLabelFont(42);
   quadLineFit1011->GetYaxis()->SetTitleFont(42);
   quadLineFit1011->SetParameter(0,-0.3332487);
   quadLineFit1011->SetParError(0,0.1867485);
   quadLineFit1011->SetParLimits(0,0,0);
   quadLineFit1011->SetParameter(1,0.01142695);
   quadLineFit1011->SetParError(1,0.01033248);
   quadLineFit1011->SetParLimits(1,0,0);
   quadLineFit1011->Draw("same");
   
   Double_t 0.000000 ppm_fx1011[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1011[3] = {
   0.6187666,
   0.5601464,
   0.4380872};
   Double_t 0.000000 ppm_fex1011[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1011[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,0.000000 ppm_fx1011,0.000000 ppm_fy1011,0.000000 ppm_fex1011,0.000000 ppm_fey1011);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1011 = new TH1F("Graph_0dO000000sPppm1011","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1011->SetMinimum(0.3849497);
   Graph_0dO000000sPppm1011->SetMaximum(0.6719042);
   Graph_0dO000000sPppm1011->SetDirectory(0);
   Graph_0dO000000sPppm1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1011->SetLineColor(ci);
   Graph_0dO000000sPppm1011->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1011->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1011->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1011->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1011->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1011->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1011->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1011);
   
   
   TF1 *quadLineFit1012 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1012->SetFillColor(19);
   quadLineFit1012->SetFillStyle(0);
   quadLineFit1012->SetLineColor(6);
   quadLineFit1012->SetLineWidth(2);
   quadLineFit1012->SetChisquare(0.78535);
   quadLineFit1012->SetNDF(1);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,1.352058);
   quadLineFit1012->SetParError(0,0.1867473);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,-0.04516986);
   quadLineFit1012->SetParError(1,0.01033242);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("p ");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineColor(6);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->SetChisquare(0.78535);
   quadLineFit1013->SetNDF(1);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,1.352058);
   quadLineFit1013->SetParError(0,0.1867473);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,-0.04516986);
   quadLineFit1013->SetParError(1,0.01033242);
   quadLineFit1013->SetParLimits(1,0,0);
   quadLineFit1013->Draw("same");
   
   Double_t 10.000000 ppm_fx1013[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1013[3] = {
   1.301816,
   1.169643,
   1.037896};
   Double_t 10.000000 ppm_fex1013[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1013[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,10.000000 ppm_fx1013,10.000000 ppm_fy1013,10.000000 ppm_fex1013,10.000000 ppm_fey1013);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1013 = new TH1F("Graph_10dO000000sPppm1013","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1013->SetMinimum(0.9764347);
   Graph_10dO000000sPppm1013->SetMaximum(1.363278);
   Graph_10dO000000sPppm1013->SetDirectory(0);
   Graph_10dO000000sPppm1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1013->SetLineColor(ci);
   Graph_10dO000000sPppm1013->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1013->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1013->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1013->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1013->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1013->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1013->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1013);
   
   
   TF1 *quadLineFit1014 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1014->SetFillColor(19);
   quadLineFit1014->SetFillStyle(0);
   quadLineFit1014->SetLineColor(7);
   quadLineFit1014->SetLineWidth(2);
   quadLineFit1014->SetChisquare(3.561675e-05);
   quadLineFit1014->SetNDF(1);
   quadLineFit1014->GetXaxis()->SetLabelFont(42);
   quadLineFit1014->GetXaxis()->SetTitleOffset(1);
   quadLineFit1014->GetXaxis()->SetTitleFont(42);
   quadLineFit1014->GetYaxis()->SetLabelFont(42);
   quadLineFit1014->GetYaxis()->SetTitleFont(42);
   quadLineFit1014->SetParameter(0,2.357424);
   quadLineFit1014->SetParError(0,0.1867484);
   quadLineFit1014->SetParLimits(0,0,0);
   quadLineFit1014->SetParameter(1,-0.06597996);
   quadLineFit1014->SetParError(1,0.01033248);
   quadLineFit1014->SetParLimits(1,0,0);
   quadLineFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1014);
   gre->Draw("p ");
   
   TF1 *quadLineFit1015 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1015->SetFillColor(19);
   quadLineFit1015->SetFillStyle(0);
   quadLineFit1015->SetLineColor(7);
   quadLineFit1015->SetLineWidth(2);
   quadLineFit1015->SetChisquare(3.561675e-05);
   quadLineFit1015->SetNDF(1);
   quadLineFit1015->GetXaxis()->SetLabelFont(42);
   quadLineFit1015->GetXaxis()->SetTitleOffset(1);
   quadLineFit1015->GetXaxis()->SetTitleFont(42);
   quadLineFit1015->GetYaxis()->SetLabelFont(42);
   quadLineFit1015->GetYaxis()->SetTitleFont(42);
   quadLineFit1015->SetParameter(0,2.357424);
   quadLineFit1015->SetParError(0,0.1867484);
   quadLineFit1015->SetParLimits(0,0,0);
   quadLineFit1015->SetParameter(1,-0.06597996);
   quadLineFit1015->SetParError(1,0.01033248);
   quadLineFit1015->SetParLimits(1,0,0);
   quadLineFit1015->Draw("same");
   
   Double_t 20.000000 ppm_fx1015[3] = {
   16,
   18,
   20};
   Double_t 20.000000 ppm_fy1015[3] = {
   2.114855,
   1.86231,
   1.67131};
   Double_t 20.000000 ppm_fex1015[3] = {
   0,
   0,
   0};
   Double_t 20.000000 ppm_fey1015[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,20.000000 ppm_fx1015,20.000000 ppm_fy1015,20.000000 ppm_fex1015,20.000000 ppm_fey1015);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1015 = new TH1F("Graph_20dO000000sPppm1015","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1015->SetMinimum(1.591886);
   Graph_20dO000000sPppm1015->SetMaximum(2.194279);
   Graph_20dO000000sPppm1015->SetDirectory(0);
   Graph_20dO000000sPppm1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1015->SetLineColor(ci);
   Graph_20dO000000sPppm1015->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1015->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1015->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1015->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1015->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1015->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1015->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1015);
   
   
   TF1 *quadLineFit1016 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1016->SetFillColor(19);
   quadLineFit1016->SetFillStyle(0);
   quadLineFit1016->SetLineColor(8);
   quadLineFit1016->SetLineWidth(2);
   quadLineFit1016->SetChisquare(0.7391879);
   quadLineFit1016->SetNDF(1);
   quadLineFit1016->GetXaxis()->SetLabelFont(42);
   quadLineFit1016->GetXaxis()->SetTitleOffset(1);
   quadLineFit1016->GetXaxis()->SetTitleFont(42);
   quadLineFit1016->GetYaxis()->SetLabelFont(42);
   quadLineFit1016->GetYaxis()->SetTitleFont(42);
   quadLineFit1016->SetParameter(0,3.878776);
   quadLineFit1016->SetParError(0,0.1867486);
   quadLineFit1016->SetParLimits(0,0,0);
   quadLineFit1016->SetParameter(1,-0.1108861);
   quadLineFit1016->SetParError(1,0.01033249);
   quadLineFit1016->SetParLimits(1,0,0);
   quadLineFit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1016);
   gre->Draw("p ");
   
   TF1 *quadLineFit1017 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1017->SetFillColor(19);
   quadLineFit1017->SetFillStyle(0);
   quadLineFit1017->SetLineColor(8);
   quadLineFit1017->SetLineWidth(2);
   quadLineFit1017->SetChisquare(0.7391879);
   quadLineFit1017->SetNDF(1);
   quadLineFit1017->GetXaxis()->SetLabelFont(42);
   quadLineFit1017->GetXaxis()->SetTitleOffset(1);
   quadLineFit1017->GetXaxis()->SetTitleFont(42);
   quadLineFit1017->GetYaxis()->SetLabelFont(42);
   quadLineFit1017->GetYaxis()->SetTitleFont(42);
   quadLineFit1017->SetParameter(0,3.878776);
   quadLineFit1017->SetParError(0,0.1867486);
   quadLineFit1017->SetParLimits(0,0,0);
   quadLineFit1017->SetParameter(1,-0.1108861);
   quadLineFit1017->SetParError(1,0.01033249);
   quadLineFit1017->SetParLimits(1,0,0);
   quadLineFit1017->Draw("same");
   
   Double_t 30.000000 ppm_fx1017[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1017[3] = {
   2.86834,
   2.562181,
   2.303455};
   Double_t 30.000000 ppm_fex1017[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1017[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,30.000000 ppm_fx1017,30.000000 ppm_fy1017,30.000000 ppm_fex1017,30.000000 ppm_fey1017);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1017 = new TH1F("Graph_30dO000000sPppm1017","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1017->SetMinimum(2.211897);
   Graph_30dO000000sPppm1017->SetMaximum(2.959898);
   Graph_30dO000000sPppm1017->SetDirectory(0);
   Graph_30dO000000sPppm1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1017->SetLineColor(ci);
   Graph_30dO000000sPppm1017->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1017->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1017->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1017->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1017->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1017->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1017->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1017);
   
   
   TF1 *quadLineFit1018 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1018->SetFillColor(19);
   quadLineFit1018->SetFillStyle(0);
   quadLineFit1018->SetLineColor(9);
   quadLineFit1018->SetLineWidth(2);
   quadLineFit1018->SetChisquare(0.4390739);
   quadLineFit1018->SetNDF(1);
   quadLineFit1018->GetXaxis()->SetLabelFont(42);
   quadLineFit1018->GetXaxis()->SetTitleOffset(1);
   quadLineFit1018->GetXaxis()->SetTitleFont(42);
   quadLineFit1018->GetYaxis()->SetLabelFont(42);
   quadLineFit1018->GetYaxis()->SetTitleFont(42);
   quadLineFit1018->SetParameter(0,5.119975);
   quadLineFit1018->SetParError(0,0.1867453);
   quadLineFit1018->SetParLimits(0,0,0);
   quadLineFit1018->SetParameter(1,-0.1412213);
   quadLineFit1018->SetParError(1,0.0103323);
   quadLineFit1018->SetParLimits(1,0,0);
   quadLineFit1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1018);
   gre->Draw("p ");
   
   TF1 *quadLineFit1019 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1019->SetFillColor(19);
   quadLineFit1019->SetFillStyle(0);
   quadLineFit1019->SetLineColor(9);
   quadLineFit1019->SetLineWidth(2);
   quadLineFit1019->SetChisquare(0.4390739);
   quadLineFit1019->SetNDF(1);
   quadLineFit1019->GetXaxis()->SetLabelFont(42);
   quadLineFit1019->GetXaxis()->SetTitleOffset(1);
   quadLineFit1019->GetXaxis()->SetTitleFont(42);
   quadLineFit1019->GetYaxis()->SetLabelFont(42);
   quadLineFit1019->GetYaxis()->SetTitleFont(42);
   quadLineFit1019->SetParameter(0,5.119975);
   quadLineFit1019->SetParError(0,0.1867453);
   quadLineFit1019->SetParLimits(0,0,0);
   quadLineFit1019->SetParameter(1,-0.1412213);
   quadLineFit1019->SetParError(1,0.0103323);
   quadLineFit1019->SetParLimits(1,0,0);
   quadLineFit1019->Draw("same");
   
   Double_t 40.000000 ppm_fx1019[3] = {
   16,
   18,
   20};
   Double_t 40.000000 ppm_fy1019[3] = {
   3.590914,
   3.238525,
   2.902104};
   Double_t 40.000000 ppm_fex1019[3] = {
   0,
   0,
   0};
   Double_t 40.000000 ppm_fey1019[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,40.000000 ppm_fx1019,40.000000 ppm_fy1019,40.000000 ppm_fex1019,40.000000 ppm_fey1019);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1019 = new TH1F("Graph_40dO000000sPppm1019","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1019->SetMinimum(2.798153);
   Graph_40dO000000sPppm1019->SetMaximum(3.694865);
   Graph_40dO000000sPppm1019->SetDirectory(0);
   Graph_40dO000000sPppm1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1019->SetLineColor(ci);
   Graph_40dO000000sPppm1019->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1019->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1019->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1019->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1019->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1019->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1019->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1019);
   
   
   TF1 *quadLineFit1020 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1020->SetFillColor(19);
   quadLineFit1020->SetFillStyle(0);
   quadLineFit1020->SetLineColor(10);
   quadLineFit1020->SetLineWidth(2);
   quadLineFit1020->SetChisquare(0.0497525);
   quadLineFit1020->SetNDF(1);
   quadLineFit1020->GetXaxis()->SetLabelFont(42);
   quadLineFit1020->GetXaxis()->SetTitleOffset(1);
   quadLineFit1020->GetXaxis()->SetTitleFont(42);
   quadLineFit1020->GetYaxis()->SetLabelFont(42);
   quadLineFit1020->GetYaxis()->SetTitleFont(42);
   quadLineFit1020->SetParameter(0,6.343494);
   quadLineFit1020->SetParError(0,0.1867484);
   quadLineFit1020->SetParLimits(0,0,0);
   quadLineFit1020->SetParameter(1,-0.1722026);
   quadLineFit1020->SetParError(1,0.01033248);
   quadLineFit1020->SetParLimits(1,0,0);
   quadLineFit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1020);
   gre->Draw("p ");
   
   TF1 *quadLineFit1021 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1021->SetFillColor(19);
   quadLineFit1021->SetFillStyle(0);
   quadLineFit1021->SetLineColor(10);
   quadLineFit1021->SetLineWidth(2);
   quadLineFit1021->SetChisquare(0.0497525);
   quadLineFit1021->SetNDF(1);
   quadLineFit1021->GetXaxis()->SetLabelFont(42);
   quadLineFit1021->GetXaxis()->SetTitleOffset(1);
   quadLineFit1021->GetXaxis()->SetTitleFont(42);
   quadLineFit1021->GetYaxis()->SetLabelFont(42);
   quadLineFit1021->GetYaxis()->SetTitleFont(42);
   quadLineFit1021->SetParameter(0,6.343494);
   quadLineFit1021->SetParError(0,0.1867484);
   quadLineFit1021->SetParLimits(0,0,0);
   quadLineFit1021->SetParameter(1,-0.1722026);
   quadLineFit1021->SetParError(1,0.01033248);
   quadLineFit1021->SetParLimits(1,0,0);
   quadLineFit1021->Draw("same");
   
   Double_t 50.000000 ppm_fx1021[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1021[3] = {
   4.364299,
   3.851943,
   3.480801};
   Double_t 50.000000 ppm_fex1021[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1021[3] = {
   0.02922466,
   0.02922466,
   0.02922466};
   gre = new TGraphErrors(3,50.000000 ppm_fx1021,50.000000 ppm_fy1021,50.000000 ppm_fex1021,50.000000 ppm_fey1021);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1021 = new TH1F("Graph_50dO000000sPppm1021","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1021->SetMinimum(3.357382);
   Graph_50dO000000sPppm1021->SetMaximum(4.487719);
   Graph_50dO000000sPppm1021->SetDirectory(0);
   Graph_50dO000000sPppm1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1021->SetLineColor(ci);
   Graph_50dO000000sPppm1021->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1021->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1021->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1021->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1021->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1021->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1021->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1021);
   
   
   TF1 *quadLineFit1022 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1022->SetFillColor(19);
   quadLineFit1022->SetFillStyle(0);
   quadLineFit1022->SetLineColor(11);
   quadLineFit1022->SetLineWidth(2);
   quadLineFit1022->SetChisquare(3.891388);
   quadLineFit1022->SetNDF(1);
   quadLineFit1022->GetXaxis()->SetLabelFont(42);
   quadLineFit1022->GetXaxis()->SetTitleOffset(1);
   quadLineFit1022->GetXaxis()->SetTitleFont(42);
   quadLineFit1022->GetYaxis()->SetLabelFont(42);
   quadLineFit1022->GetYaxis()->SetTitleFont(42);
   quadLineFit1022->SetParameter(0,7.874755);
   quadLineFit1022->SetParError(0,0.1867482);
   quadLineFit1022->SetParLimits(0,0,0);
   quadLineFit1022->SetParameter(1,-0.2208745);
   quadLineFit1022->SetParError(1,0.01033247);
   quadLineFit1022->SetParLimits(1,0,0);
   quadLineFit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1022);
   gre->Draw("p ");
   
   TF1 *quadLineFit1023 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1023->SetFillColor(19);
   quadLineFit1023->SetFillStyle(0);
   quadLineFit1023->SetLineColor(11);
   quadLineFit1023->SetLineWidth(2);
   quadLineFit1023->SetChisquare(3.891388);
   quadLineFit1023->SetNDF(1);
   quadLineFit1023->GetXaxis()->SetLabelFont(42);
   quadLineFit1023->GetXaxis()->SetTitleOffset(1);
   quadLineFit1023->GetXaxis()->SetTitleFont(42);
   quadLineFit1023->GetYaxis()->SetLabelFont(42);
   quadLineFit1023->GetYaxis()->SetTitleFont(42);
   quadLineFit1023->SetParameter(0,7.874755);
   quadLineFit1023->SetParError(0,0.1867482);
   quadLineFit1023->SetParLimits(0,0,0);
   quadLineFit1023->SetParameter(1,-0.2208745);
   quadLineFit1023->SetParError(1,0.01033247);
   quadLineFit1023->SetParLimits(1,0,0);
   quadLineFit1023->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(11);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(11);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("40.000000 ppm","   40 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(10);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(10);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(9);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("20.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-20.000000 ppm","  #minus20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-40.000000 ppm","  #minus40 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50 ppm","lpf");
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
