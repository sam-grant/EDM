void QuadScans_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:21:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.37143,-3.25,22.65714,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1113[4] = {
   14,
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1113[4] = {
   -3.624573,
   -3.158912,
   -2.825452,
   -2.547135};
   Double_t -50.000000 ppm_fex1113[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1113[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1113,-50.000000 ppm_fy1113,-50.000000 ppm_fex1113,-50.000000 ppm_fey1113);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1113 = new TH1F("Graph_mI50dO000000sPppm1113","",100,13.4,20.6);
   Graph_mI50dO000000sPppm1113->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1113->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1113->SetDirectory(0);
   Graph_mI50dO000000sPppm1113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1113->SetLineColor(ci);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1113->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1113->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1113->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1113->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1113);
   
   
   TF1 *quadLineFit1114 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1114->SetFillColor(19);
   quadLineFit1114->SetFillStyle(0);
   quadLineFit1114->SetLineWidth(2);
   quadLineFit1114->SetChisquare(83.42775);
   quadLineFit1114->SetNDF(2);
   quadLineFit1114->GetXaxis()->SetLabelFont(42);
   quadLineFit1114->GetXaxis()->SetTitleOffset(1);
   quadLineFit1114->GetXaxis()->SetTitleFont(42);
   quadLineFit1114->GetYaxis()->SetLabelFont(42);
   quadLineFit1114->GetYaxis()->SetTitleFont(42);
   quadLineFit1114->SetParameter(0,-6.069926);
   quadLineFit1114->SetParError(0,0.03997962);
   quadLineFit1114->SetParLimits(0,0,0);
   quadLineFit1114->SetParameter(1,0.1782887);
   quadLineFit1114->SetParError(1,0.002331659);
   quadLineFit1114->SetParLimits(1,0,0);
   quadLineFit1114->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1114);
   gre->Draw("ap");
   
   TF1 *quadLineFit1115 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1115->SetFillColor(19);
   quadLineFit1115->SetFillStyle(0);
   quadLineFit1115->SetLineWidth(2);
   quadLineFit1115->SetChisquare(83.42775);
   quadLineFit1115->SetNDF(2);
   quadLineFit1115->GetXaxis()->SetLabelFont(42);
   quadLineFit1115->GetXaxis()->SetTitleOffset(1);
   quadLineFit1115->GetXaxis()->SetTitleFont(42);
   quadLineFit1115->GetYaxis()->SetLabelFont(42);
   quadLineFit1115->GetYaxis()->SetTitleFont(42);
   quadLineFit1115->SetParameter(0,-6.069926);
   quadLineFit1115->SetParError(0,0.03997962);
   quadLineFit1115->SetParLimits(0,0,0);
   quadLineFit1115->SetParameter(1,0.1782887);
   quadLineFit1115->SetParError(1,0.002331659);
   quadLineFit1115->SetParLimits(1,0,0);
   quadLineFit1115->Draw("same");
   
   Double_t -30.000000 ppm_fx1115[4] = {
   14,
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1115[4] = {
   -1.891955,
   -1.655902,
   -1.458938,
   -1.329913};
   Double_t -30.000000 ppm_fex1115[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1115[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1115,-30.000000 ppm_fy1115,-30.000000 ppm_fex1115,-30.000000 ppm_fey1115);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1115 = new TH1F("Graph_mI30dO000000sPppm1115","Graph",100,13.4,20.6);
   Graph_mI30dO000000sPppm1115->SetMinimum(-1.960673);
   Graph_mI30dO000000sPppm1115->SetMaximum(-1.261196);
   Graph_mI30dO000000sPppm1115->SetDirectory(0);
   Graph_mI30dO000000sPppm1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1115->SetLineColor(ci);
   Graph_mI30dO000000sPppm1115->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1115->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1115->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1115->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1115->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1115->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1115->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1115);
   
   
   TF1 *quadLineFit1116 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1116->SetFillColor(19);
   quadLineFit1116->SetFillStyle(0);
   quadLineFit1116->SetLineColor(2);
   quadLineFit1116->SetLineWidth(2);
   quadLineFit1116->SetChisquare(26.72011);
   quadLineFit1116->SetNDF(2);
   quadLineFit1116->GetXaxis()->SetLabelFont(42);
   quadLineFit1116->GetXaxis()->SetTitleOffset(1);
   quadLineFit1116->GetXaxis()->SetTitleFont(42);
   quadLineFit1116->GetYaxis()->SetLabelFont(42);
   quadLineFit1116->GetYaxis()->SetTitleFont(42);
   quadLineFit1116->SetParameter(0,-3.184804);
   quadLineFit1116->SetParError(0,0.0399799);
   quadLineFit1116->SetParLimits(0,0,0);
   quadLineFit1116->SetParameter(1,0.09415454);
   quadLineFit1116->SetParError(1,0.002331675);
   quadLineFit1116->SetParLimits(1,0,0);
   quadLineFit1116->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1116);
   gre->Draw("p ");
   
   TF1 *quadLineFit1117 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1117->SetFillColor(19);
   quadLineFit1117->SetFillStyle(0);
   quadLineFit1117->SetLineColor(2);
   quadLineFit1117->SetLineWidth(2);
   quadLineFit1117->SetChisquare(26.72011);
   quadLineFit1117->SetNDF(2);
   quadLineFit1117->GetXaxis()->SetLabelFont(42);
   quadLineFit1117->GetXaxis()->SetTitleOffset(1);
   quadLineFit1117->GetXaxis()->SetTitleFont(42);
   quadLineFit1117->GetYaxis()->SetLabelFont(42);
   quadLineFit1117->GetYaxis()->SetTitleFont(42);
   quadLineFit1117->SetParameter(0,-3.184804);
   quadLineFit1117->SetParError(0,0.0399799);
   quadLineFit1117->SetParLimits(0,0,0);
   quadLineFit1117->SetParameter(1,0.09415454);
   quadLineFit1117->SetParError(1,0.002331675);
   quadLineFit1117->SetParLimits(1,0,0);
   quadLineFit1117->Draw("same");
   
   Double_t -10.000000 ppm_fx1117[4] = {
   14,
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1117[4] = {
   -0.1784217,
   -0.1563662,
   -0.1353469,
   -0.1391035};
   Double_t -10.000000 ppm_fex1117[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1117[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1117,-10.000000 ppm_fy1117,-10.000000 ppm_fex1117,-10.000000 ppm_fey1117);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1117 = new TH1F("Graph_mI10dO000000sPppm1117","Graph",100,13.4,20.6);
   Graph_mI10dO000000sPppm1117->SetMinimum(-0.1952421);
   Graph_mI10dO000000sPppm1117->SetMaximum(-0.1185264);
   Graph_mI10dO000000sPppm1117->SetDirectory(0);
   Graph_mI10dO000000sPppm1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1117->SetLineColor(ci);
   Graph_mI10dO000000sPppm1117->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1117->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1117->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1117->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1117->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1117->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1117->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1117);
   
   
   TF1 *quadLineFit1118 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1118->SetFillColor(19);
   quadLineFit1118->SetFillStyle(0);
   quadLineFit1118->SetLineColor(3);
   quadLineFit1118->SetLineWidth(2);
   quadLineFit1118->SetChisquare(1.791026);
   quadLineFit1118->SetNDF(2);
   quadLineFit1118->GetXaxis()->SetLabelFont(42);
   quadLineFit1118->GetXaxis()->SetTitleOffset(1);
   quadLineFit1118->GetXaxis()->SetTitleFont(42);
   quadLineFit1118->GetYaxis()->SetLabelFont(42);
   quadLineFit1118->GetYaxis()->SetTitleFont(42);
   quadLineFit1118->SetParameter(0,-0.2704373);
   quadLineFit1118->SetParError(0,0.03997945);
   quadLineFit1118->SetParLimits(0,0,0);
   quadLineFit1118->SetParameter(1,0.006948692);
   quadLineFit1118->SetParError(1,0.002331649);
   quadLineFit1118->SetParLimits(1,0,0);
   quadLineFit1118->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1118);
   gre->Draw("p ");
   
   TF1 *quadLineFit1119 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1119->SetFillColor(19);
   quadLineFit1119->SetFillStyle(0);
   quadLineFit1119->SetLineColor(3);
   quadLineFit1119->SetLineWidth(2);
   quadLineFit1119->SetChisquare(1.791026);
   quadLineFit1119->SetNDF(2);
   quadLineFit1119->GetXaxis()->SetLabelFont(42);
   quadLineFit1119->GetXaxis()->SetTitleOffset(1);
   quadLineFit1119->GetXaxis()->SetTitleFont(42);
   quadLineFit1119->GetYaxis()->SetLabelFont(42);
   quadLineFit1119->GetYaxis()->SetTitleFont(42);
   quadLineFit1119->SetParameter(0,-0.2704373);
   quadLineFit1119->SetParError(0,0.03997945);
   quadLineFit1119->SetParLimits(0,0,0);
   quadLineFit1119->SetParameter(1,0.006948692);
   quadLineFit1119->SetParError(1,0.002331649);
   quadLineFit1119->SetParLimits(1,0,0);
   quadLineFit1119->Draw("same");
   
   Double_t 10.000000 ppm_fx1119[4] = {
   14,
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1119[4] = {
   1.549123,
   1.34044,
   1.206087,
   1.071168};
   Double_t 10.000000 ppm_fex1119[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1119[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(4,10.000000 ppm_fx1119,10.000000 ppm_fy1119,10.000000 ppm_fex1119,10.000000 ppm_fey1119);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1119 = new TH1F("Graph_10dO000000sPppm1119","Graph",100,13.4,20.6);
   Graph_10dO000000sPppm1119->SetMinimum(1.01086);
   Graph_10dO000000sPppm1119->SetMaximum(1.609432);
   Graph_10dO000000sPppm1119->SetDirectory(0);
   Graph_10dO000000sPppm1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1119->SetLineColor(ci);
   Graph_10dO000000sPppm1119->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1119->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1119->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1119->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1119->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1119->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1119->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1119);
   
   
   TF1 *quadLineFit1120 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1120->SetFillColor(19);
   quadLineFit1120->SetFillStyle(0);
   quadLineFit1120->SetLineColor(4);
   quadLineFit1120->SetLineWidth(2);
   quadLineFit1120->SetChisquare(15.08982);
   quadLineFit1120->SetNDF(2);
   quadLineFit1120->GetXaxis()->SetLabelFont(42);
   quadLineFit1120->GetXaxis()->SetTitleOffset(1);
   quadLineFit1120->GetXaxis()->SetTitleFont(42);
   quadLineFit1120->GetYaxis()->SetLabelFont(42);
   quadLineFit1120->GetYaxis()->SetTitleFont(42);
   quadLineFit1120->SetParameter(0,2.624691);
   quadLineFit1120->SetParError(0,0.03997945);
   quadLineFit1120->SetParLimits(0,0,0);
   quadLineFit1120->SetParameter(1,-0.07841094);
   quadLineFit1120->SetParError(1,0.002331649);
   quadLineFit1120->SetParLimits(1,0,0);
   quadLineFit1120->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1120);
   gre->Draw("p ");
   
   TF1 *quadLineFit1121 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1121->SetFillColor(19);
   quadLineFit1121->SetFillStyle(0);
   quadLineFit1121->SetLineColor(4);
   quadLineFit1121->SetLineWidth(2);
   quadLineFit1121->SetChisquare(15.08982);
   quadLineFit1121->SetNDF(2);
   quadLineFit1121->GetXaxis()->SetLabelFont(42);
   quadLineFit1121->GetXaxis()->SetTitleOffset(1);
   quadLineFit1121->GetXaxis()->SetTitleFont(42);
   quadLineFit1121->GetYaxis()->SetLabelFont(42);
   quadLineFit1121->GetYaxis()->SetTitleFont(42);
   quadLineFit1121->SetParameter(0,2.624691);
   quadLineFit1121->SetParError(0,0.03997945);
   quadLineFit1121->SetParLimits(0,0,0);
   quadLineFit1121->SetParameter(1,-0.07841094);
   quadLineFit1121->SetParError(1,0.002331649);
   quadLineFit1121->SetParLimits(1,0,0);
   quadLineFit1121->Draw("same");
   
   Double_t 30.000000 ppm_fx1121[4] = {
   14,
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1121[4] = {
   3.272156,
   2.861551,
   2.551892,
   2.280218};
   Double_t 30.000000 ppm_fex1121[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1121[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(4,30.000000 ppm_fx1121,30.000000 ppm_fy1121,30.000000 ppm_fex1121,30.000000 ppm_fey1121);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1121 = new TH1F("Graph_30dO000000sPppm1121","Graph",100,13.4,20.6);
   Graph_30dO000000sPppm1121->SetMinimum(2.168511);
   Graph_30dO000000sPppm1121->SetMaximum(3.383863);
   Graph_30dO000000sPppm1121->SetDirectory(0);
   Graph_30dO000000sPppm1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1121->SetLineColor(ci);
   Graph_30dO000000sPppm1121->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1121->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1121->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1121->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1121->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1121->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1121->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1121);
   
   
   TF1 *quadLineFit1122 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1122->SetFillColor(19);
   quadLineFit1122->SetFillStyle(0);
   quadLineFit1122->SetLineColor(5);
   quadLineFit1122->SetLineWidth(2);
   quadLineFit1122->SetChisquare(46.20205);
   quadLineFit1122->SetNDF(2);
   quadLineFit1122->GetXaxis()->SetLabelFont(42);
   quadLineFit1122->GetXaxis()->SetTitleOffset(1);
   quadLineFit1122->GetXaxis()->SetTitleFont(42);
   quadLineFit1122->GetYaxis()->SetLabelFont(42);
   quadLineFit1122->GetYaxis()->SetTitleFont(42);
   quadLineFit1122->SetParameter(0,5.534108);
   quadLineFit1122->SetParError(0,0.03998033);
   quadLineFit1122->SetParLimits(0,0,0);
   quadLineFit1122->SetParameter(1,-0.1642737);
   quadLineFit1122->SetParError(1,0.002331701);
   quadLineFit1122->SetParLimits(1,0,0);
   quadLineFit1122->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1122);
   gre->Draw("p ");
   
   TF1 *quadLineFit1123 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1123->SetFillColor(19);
   quadLineFit1123->SetFillStyle(0);
   quadLineFit1123->SetLineColor(5);
   quadLineFit1123->SetLineWidth(2);
   quadLineFit1123->SetChisquare(46.20205);
   quadLineFit1123->SetNDF(2);
   quadLineFit1123->GetXaxis()->SetLabelFont(42);
   quadLineFit1123->GetXaxis()->SetTitleOffset(1);
   quadLineFit1123->GetXaxis()->SetTitleFont(42);
   quadLineFit1123->GetYaxis()->SetLabelFont(42);
   quadLineFit1123->GetYaxis()->SetTitleFont(42);
   quadLineFit1123->SetParameter(0,5.534108);
   quadLineFit1123->SetParError(0,0.03998033);
   quadLineFit1123->SetParLimits(0,0,0);
   quadLineFit1123->SetParameter(1,-0.1642737);
   quadLineFit1123->SetParError(1,0.002331701);
   quadLineFit1123->SetParLimits(1,0,0);
   quadLineFit1123->Draw("same");
   
   Double_t 50.000000 ppm_fx1123[4] = {
   14,
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1123[4] = {
   4.990443,
   4.380576,
   3.868997,
   3.490302};
   Double_t 50.000000 ppm_fex1123[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1123[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(4,50.000000 ppm_fx1123,50.000000 ppm_fy1123,50.000000 ppm_fex1123,50.000000 ppm_fey1123);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1123 = new TH1F("Graph_50dO000000sPppm1123","Graph",100,13.4,20.6);
   Graph_50dO000000sPppm1123->SetMinimum(3.327775);
   Graph_50dO000000sPppm1123->SetMaximum(5.15297);
   Graph_50dO000000sPppm1123->SetDirectory(0);
   Graph_50dO000000sPppm1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1123->SetLineColor(ci);
   Graph_50dO000000sPppm1123->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1123->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1123->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1123->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1123->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1123->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1123->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1123);
   
   
   TF1 *quadLineFit1124 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1124->SetFillColor(19);
   quadLineFit1124->SetFillStyle(0);
   quadLineFit1124->SetLineColor(6);
   quadLineFit1124->SetLineWidth(2);
   quadLineFit1124->SetChisquare(123.4213);
   quadLineFit1124->SetNDF(2);
   quadLineFit1124->GetXaxis()->SetLabelFont(42);
   quadLineFit1124->GetXaxis()->SetTitleOffset(1);
   quadLineFit1124->GetXaxis()->SetTitleFont(42);
   quadLineFit1124->GetYaxis()->SetLabelFont(42);
   quadLineFit1124->GetYaxis()->SetTitleFont(42);
   quadLineFit1124->SetParameter(0,8.442781);
   quadLineFit1124->SetParError(0,0.03997924);
   quadLineFit1124->SetParLimits(0,0,0);
   quadLineFit1124->SetParameter(1,-0.2506001);
   quadLineFit1124->SetParError(1,0.002331636);
   quadLineFit1124->SetParLimits(1,0,0);
   quadLineFit1124->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1124);
   gre->Draw("p ");
   
   TF1 *quadLineFit1125 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1125->SetFillColor(19);
   quadLineFit1125->SetFillStyle(0);
   quadLineFit1125->SetLineColor(6);
   quadLineFit1125->SetLineWidth(2);
   quadLineFit1125->SetChisquare(123.4213);
   quadLineFit1125->SetNDF(2);
   quadLineFit1125->GetXaxis()->SetLabelFont(42);
   quadLineFit1125->GetXaxis()->SetTitleOffset(1);
   quadLineFit1125->GetXaxis()->SetTitleFont(42);
   quadLineFit1125->GetYaxis()->SetLabelFont(42);
   quadLineFit1125->GetYaxis()->SetTitleFont(42);
   quadLineFit1125->SetParameter(0,8.442781);
   quadLineFit1125->SetParError(0,0.03997924);
   quadLineFit1125->SetParLimits(0,0,0);
   quadLineFit1125->SetParameter(1,-0.2506001);
   quadLineFit1125->SetParError(1,0.002331636);
   quadLineFit1125->SetParLimits(1,0,0);
   quadLineFit1125->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
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
