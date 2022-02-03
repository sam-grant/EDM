void QuadScans_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.190218,0.0663141,7.434329);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1001[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1001[3] = {
   -3.14221,
   -2.79559,
   -2.633195};
   Double_t -50.000000 ppm_fex1001[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1001[3] = {
   0.02982271,
   0.02982271,
   0.02982271};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1001,-50.000000 ppm_fy1001,-50.000000 ppm_fex1001,-50.000000 ppm_fey1001);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1001 = new TH1F("Graph_mI50dO000000sPppm1001","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1001->SetMinimum(-3.927763);
   Graph_mI50dO000000sPppm1001->SetMaximum(6.171874);
   Graph_mI50dO000000sPppm1001->SetDirectory(0);
   Graph_mI50dO000000sPppm1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1001->SetLineColor(ci);
   Graph_mI50dO000000sPppm1001->GetXaxis()->SetTitle("1/V [kV^{-1}]");
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
   
   
   TF1 *quadLineFit1002 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1002->SetFillColor(19);
   quadLineFit1002->SetFillStyle(0);
   quadLineFit1002->SetLineWidth(2);
   quadLineFit1002->SetChisquare(0.7307048);
   quadLineFit1002->SetNDF(1);
   quadLineFit1002->GetXaxis()->SetLabelFont(42);
   quadLineFit1002->GetXaxis()->SetTitleOffset(1);
   quadLineFit1002->GetXaxis()->SetTitleFont(42);
   quadLineFit1002->GetYaxis()->SetLabelFont(42);
   quadLineFit1002->GetYaxis()->SetTitleFont(42);
   quadLineFit1002->SetParameter(0,-0.2710569);
   quadLineFit1002->SetParError(0,0.2109439);
   quadLineFit1002->SetParLimits(0,0,0);
   quadLineFit1002->SetParameter(1,-45.81277);
   quadLineFit1002->SetParError(1,3.724631);
   quadLineFit1002->SetParLimits(1,0,0);
   quadLineFit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1002);
   gre->Draw("ap");
   
   TF1 *quadLineFit1003 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1003->SetFillColor(19);
   quadLineFit1003->SetFillStyle(0);
   quadLineFit1003->SetLineWidth(2);
   quadLineFit1003->SetChisquare(0.7307048);
   quadLineFit1003->SetNDF(1);
   quadLineFit1003->GetXaxis()->SetLabelFont(42);
   quadLineFit1003->GetXaxis()->SetTitleOffset(1);
   quadLineFit1003->GetXaxis()->SetTitleFont(42);
   quadLineFit1003->GetYaxis()->SetLabelFont(42);
   quadLineFit1003->GetYaxis()->SetTitleFont(42);
   quadLineFit1003->SetParameter(0,-0.2710569);
   quadLineFit1003->SetParError(0,0.2109439);
   quadLineFit1003->SetParLimits(0,0,0);
   quadLineFit1003->SetParameter(1,-45.81277);
   quadLineFit1003->SetParError(1,3.724631);
   quadLineFit1003->SetParLimits(1,0,0);
   quadLineFit1003->Draw("same");
   
   Double_t -30.000000 ppm_fx1003[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1003[4] = {
   -1.925905,
   -1.637527,
   -1.496341,
   -1.387436};
   Double_t -30.000000 ppm_fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1003[4] = {
   0.02982271,
   0.02982271,
   0.02982271,
   0.02982271};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1003,-30.000000 ppm_fy1003,-30.000000 ppm_fex1003,-30.000000 ppm_fey1003);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1003 = new TH1F("Graph_mI30dO000000sPppm1003","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1003->SetMinimum(-2.015539);
   Graph_mI30dO000000sPppm1003->SetMaximum(-1.297802);
   Graph_mI30dO000000sPppm1003->SetDirectory(0);
   Graph_mI30dO000000sPppm1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1003->SetLineColor(ci);
   Graph_mI30dO000000sPppm1003->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1003->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1003->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1003->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1003->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1003->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1003->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1003);
   
   
   TF1 *quadLineFit1004 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1004->SetFillColor(19);
   quadLineFit1004->SetFillStyle(0);
   quadLineFit1004->SetLineColor(2);
   quadLineFit1004->SetLineWidth(2);
   quadLineFit1004->SetChisquare(1.922058);
   quadLineFit1004->SetNDF(2);
   quadLineFit1004->GetXaxis()->SetLabelFont(42);
   quadLineFit1004->GetXaxis()->SetTitleOffset(1);
   quadLineFit1004->GetXaxis()->SetTitleFont(42);
   quadLineFit1004->GetYaxis()->SetLabelFont(42);
   quadLineFit1004->GetYaxis()->SetTitleFont(42);
   quadLineFit1004->SetParameter(0,-0.02637151);
   quadLineFit1004->SetParError(0,0.1186734);
   quadLineFit1004->SetParLimits(0,0,0);
   quadLineFit1004->SetParameter(1,-26.33976);
   quadLineFit1004->SetParError(1,1.95597);
   quadLineFit1004->SetParLimits(1,0,0);
   quadLineFit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1004);
   gre->Draw("p ");
   
   TF1 *quadLineFit1005 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1005->SetFillColor(19);
   quadLineFit1005->SetFillStyle(0);
   quadLineFit1005->SetLineColor(2);
   quadLineFit1005->SetLineWidth(2);
   quadLineFit1005->SetChisquare(1.922058);
   quadLineFit1005->SetNDF(2);
   quadLineFit1005->GetXaxis()->SetLabelFont(42);
   quadLineFit1005->GetXaxis()->SetTitleOffset(1);
   quadLineFit1005->GetXaxis()->SetTitleFont(42);
   quadLineFit1005->GetYaxis()->SetLabelFont(42);
   quadLineFit1005->GetYaxis()->SetTitleFont(42);
   quadLineFit1005->SetParameter(0,-0.02637151);
   quadLineFit1005->SetParError(0,0.1186734);
   quadLineFit1005->SetParLimits(0,0,0);
   quadLineFit1005->SetParameter(1,-26.33976);
   quadLineFit1005->SetParError(1,1.95597);
   quadLineFit1005->SetParLimits(1,0,0);
   quadLineFit1005->Draw("same");
   
   Double_t -10.000000 ppm_fx1005[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1005[4] = {
   -0.1921817,
   -0.1261982,
   -0.1084496,
   -0.07308976};
   Double_t -10.000000 ppm_fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1005[4] = {
   0.02982271,
   0.02982271,
   0.02982271,
   0.02982271};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1005,-10.000000 ppm_fy1005,-10.000000 ppm_fex1005,-10.000000 ppm_fey1005);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1005 = new TH1F("Graph_mI10dO000000sPppm1005","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1005->SetMinimum(-0.2398781);
   Graph_mI10dO000000sPppm1005->SetMaximum(-0.02539332);
   Graph_mI10dO000000sPppm1005->SetDirectory(0);
   Graph_mI10dO000000sPppm1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1005->SetLineColor(ci);
   Graph_mI10dO000000sPppm1005->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1005->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1005->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1005->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1005->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1005->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1005->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1005);
   
   
   TF1 *quadLineFit1006 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1006->SetFillColor(19);
   quadLineFit1006->SetFillStyle(0);
   quadLineFit1006->SetLineColor(3);
   quadLineFit1006->SetLineWidth(2);
   quadLineFit1006->SetChisquare(0.2790723);
   quadLineFit1006->SetNDF(2);
   quadLineFit1006->GetXaxis()->SetLabelFont(42);
   quadLineFit1006->GetXaxis()->SetTitleOffset(1);
   quadLineFit1006->GetXaxis()->SetTitleFont(42);
   quadLineFit1006->GetYaxis()->SetLabelFont(42);
   quadLineFit1006->GetYaxis()->SetTitleFont(42);
   quadLineFit1006->SetParameter(0,0.2108165);
   quadLineFit1006->SetParError(0,0.1186735);
   quadLineFit1006->SetParLimits(0,0,0);
   quadLineFit1006->SetParameter(1,-5.578795);
   quadLineFit1006->SetParError(1,1.955971);
   quadLineFit1006->SetParLimits(1,0,0);
   quadLineFit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1006);
   gre->Draw("p ");
   
   TF1 *quadLineFit1007 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1007->SetFillColor(19);
   quadLineFit1007->SetFillStyle(0);
   quadLineFit1007->SetLineColor(3);
   quadLineFit1007->SetLineWidth(2);
   quadLineFit1007->SetChisquare(0.2790723);
   quadLineFit1007->SetNDF(2);
   quadLineFit1007->GetXaxis()->SetLabelFont(42);
   quadLineFit1007->GetXaxis()->SetTitleOffset(1);
   quadLineFit1007->GetXaxis()->SetTitleFont(42);
   quadLineFit1007->GetYaxis()->SetLabelFont(42);
   quadLineFit1007->GetYaxis()->SetTitleFont(42);
   quadLineFit1007->SetParameter(0,0.2108165);
   quadLineFit1007->SetParError(0,0.1186735);
   quadLineFit1007->SetParLimits(0,0,0);
   quadLineFit1007->SetParameter(1,-5.578795);
   quadLineFit1007->SetParError(1,1.955971);
   quadLineFit1007->SetParLimits(1,0,0);
   quadLineFit1007->Draw("same");
   
   Double_t 10.000000 ppm_fx1007[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1007[3] = {
   1.569823,
   1.354601,
   1.121549};
   Double_t 10.000000 ppm_fex1007[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1007[3] = {
   0.02982271,
   0.02982271,
   0.02982271};
   gre = new TGraphErrors(3,10.000000 ppm_fx1007,10.000000 ppm_fy1007,10.000000 ppm_fex1007,10.000000 ppm_fey1007);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1007 = new TH1F("Graph_10dO000000sPppm1007","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1007->SetMinimum(1.040935);
   Graph_10dO000000sPppm1007->SetMaximum(1.650438);
   Graph_10dO000000sPppm1007->SetDirectory(0);
   Graph_10dO000000sPppm1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1007->SetLineColor(ci);
   Graph_10dO000000sPppm1007->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1007->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1007->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1007->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1007->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1007->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1007->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1007);
   
   
   TF1 *quadLineFit1008 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1008->SetFillColor(19);
   quadLineFit1008->SetFillStyle(0);
   quadLineFit1008->SetLineColor(4);
   quadLineFit1008->SetLineWidth(2);
   quadLineFit1008->SetChisquare(0.2045776);
   quadLineFit1008->SetNDF(1);
   quadLineFit1008->GetXaxis()->SetLabelFont(42);
   quadLineFit1008->GetXaxis()->SetTitleOffset(1);
   quadLineFit1008->GetXaxis()->SetTitleFont(42);
   quadLineFit1008->GetYaxis()->SetLabelFont(42);
   quadLineFit1008->GetYaxis()->SetTitleFont(42);
   quadLineFit1008->SetParameter(0,-0.02120328);
   quadLineFit1008->SetParError(0,0.1301096);
   quadLineFit1008->SetParLimits(0,0,0);
   quadLineFit1008->SetParameter(1,22.1887);
   quadLineFit1008->SetParError(1,2.08895);
   quadLineFit1008->SetParLimits(1,0,0);
   quadLineFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1008);
   gre->Draw("p ");
   
   TF1 *quadLineFit1009 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1009->SetFillColor(19);
   quadLineFit1009->SetFillStyle(0);
   quadLineFit1009->SetLineColor(4);
   quadLineFit1009->SetLineWidth(2);
   quadLineFit1009->SetChisquare(0.2045776);
   quadLineFit1009->SetNDF(1);
   quadLineFit1009->GetXaxis()->SetLabelFont(42);
   quadLineFit1009->GetXaxis()->SetTitleOffset(1);
   quadLineFit1009->GetXaxis()->SetTitleFont(42);
   quadLineFit1009->GetYaxis()->SetLabelFont(42);
   quadLineFit1009->GetYaxis()->SetTitleFont(42);
   quadLineFit1009->SetParameter(0,-0.02120328);
   quadLineFit1009->SetParError(0,0.1301096);
   quadLineFit1009->SetParLimits(0,0,0);
   quadLineFit1009->SetParameter(1,22.1887);
   quadLineFit1009->SetParError(1,2.08895);
   quadLineFit1009->SetParLimits(1,0,0);
   quadLineFit1009->Draw("same");
   
   Double_t 30.000000 ppm_fx1009[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1009[4] = {
   3.285731,
   2.87864,
   2.56913,
   2.303531};
   Double_t 30.000000 ppm_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1009[4] = {
   0.02982271,
   0.02982271,
   0.02982271,
   0.02982271};
   gre = new TGraphErrors(4,30.000000 ppm_fx1009,30.000000 ppm_fy1009,30.000000 ppm_fex1009,30.000000 ppm_fey1009);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1009 = new TH1F("Graph_30dO000000sPppm1009","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1009->SetMinimum(2.169523);
   Graph_30dO000000sPppm1009->SetMaximum(3.419738);
   Graph_30dO000000sPppm1009->SetDirectory(0);
   Graph_30dO000000sPppm1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1009->SetLineColor(ci);
   Graph_30dO000000sPppm1009->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1009->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1009->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1009->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1009->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1009->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1009->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1009);
   
   
   TF1 *quadLineFit1010 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1010->SetFillColor(19);
   quadLineFit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1010->SetLineColor(ci);
   quadLineFit1010->SetLineWidth(2);
   quadLineFit1010->SetChisquare(2.333158);
   quadLineFit1010->SetNDF(2);
   quadLineFit1010->GetXaxis()->SetLabelFont(42);
   quadLineFit1010->GetXaxis()->SetTitleOffset(1);
   quadLineFit1010->GetXaxis()->SetTitleFont(42);
   quadLineFit1010->GetYaxis()->SetLabelFont(42);
   quadLineFit1010->GetYaxis()->SetTitleFont(42);
   quadLineFit1010->SetParameter(0,-0.1233822);
   quadLineFit1010->SetParError(0,0.1186722);
   quadLineFit1010->SetParLimits(0,0,0);
   quadLineFit1010->SetParameter(1,47.89111);
   quadLineFit1010->SetParError(1,1.95595);
   quadLineFit1010->SetParLimits(1,0,0);
   quadLineFit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1010);
   gre->Draw("p ");
   
   TF1 *quadLineFit1011 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1011->SetFillColor(19);
   quadLineFit1011->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1011->SetLineColor(ci);
   quadLineFit1011->SetLineWidth(2);
   quadLineFit1011->SetChisquare(2.333158);
   quadLineFit1011->SetNDF(2);
   quadLineFit1011->GetXaxis()->SetLabelFont(42);
   quadLineFit1011->GetXaxis()->SetTitleOffset(1);
   quadLineFit1011->GetXaxis()->SetTitleFont(42);
   quadLineFit1011->GetYaxis()->SetLabelFont(42);
   quadLineFit1011->GetYaxis()->SetTitleFont(42);
   quadLineFit1011->SetParameter(0,-0.1233822);
   quadLineFit1011->SetParError(0,0.1186722);
   quadLineFit1011->SetParLimits(0,0,0);
   quadLineFit1011->SetParameter(1,47.89111);
   quadLineFit1011->SetParError(1,1.95595);
   quadLineFit1011->SetParLimits(1,0,0);
   quadLineFit1011->Draw("same");
   
   Double_t 50.000000 ppm_fx1011[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1011[4] = {
   4.937499,
   4.332276,
   3.835425,
   3.590438};
   Double_t 50.000000 ppm_fex1011[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1011[4] = {
   0.02982271,
   0.02982271,
   0.02982271,
   0.02982271};
   gre = new TGraphErrors(4,50.000000 ppm_fx1011,50.000000 ppm_fy1011,50.000000 ppm_fex1011,50.000000 ppm_fey1011);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1011 = new TH1F("Graph_50dO000000sPppm1011","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1011->SetMinimum(3.419945);
   Graph_50dO000000sPppm1011->SetMaximum(5.107992);
   Graph_50dO000000sPppm1011->SetDirectory(0);
   Graph_50dO000000sPppm1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1011->SetLineColor(ci);
   Graph_50dO000000sPppm1011->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1011->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1011->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1011->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1011->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1011->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1011->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1011);
   
   
   TF1 *quadLineFit1012 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1012->SetFillColor(19);
   quadLineFit1012->SetFillStyle(0);
   quadLineFit1012->SetLineColor(6);
   quadLineFit1012->SetLineWidth(2);
   quadLineFit1012->SetChisquare(1.129415);
   quadLineFit1012->SetNDF(2);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,0.1053111);
   quadLineFit1012->SetParError(0,0.1186717);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,67.59419);
   quadLineFit1012->SetParError(1,1.955942);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("p ");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineColor(6);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->SetChisquare(1.129415);
   quadLineFit1013->SetNDF(2);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,0.1053111);
   quadLineFit1013->SetParError(0,0.1186717);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,67.59419);
   quadLineFit1013->SetParError(1,1.955942);
   quadLineFit1013->SetParLimits(1,0,0);
   quadLineFit1013->Draw("same");
   
   TLegend *leg = new TLegend(0.87,0.4,0.99,0.6,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{a}#GT [ppm]","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
