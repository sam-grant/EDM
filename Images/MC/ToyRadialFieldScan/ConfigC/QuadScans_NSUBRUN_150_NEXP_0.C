void QuadScans_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:01 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1081[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1081[3] = {
   -3.174758,
   -2.797302,
   -2.508093};
   Double_t -50.000000 ppm_fex1081[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1081[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1081,-50.000000 ppm_fy1081,-50.000000 ppm_fex1081,-50.000000 ppm_fey1081);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1081 = new TH1F("Graph_mI50dO000000sPppm1081","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1081->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1081->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1081->SetDirectory(0);
   Graph_mI50dO000000sPppm1081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1081->SetLineColor(ci);
   Graph_mI50dO000000sPppm1081->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1081->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1081->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1081->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1081->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1081->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1081->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1081->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1081->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1081->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1081->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1081->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1081->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1081->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1081->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1081);
   
   
   TF1 *quadLineFit1082 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1082->SetFillColor(19);
   quadLineFit1082->SetFillStyle(0);
   quadLineFit1082->SetLineWidth(2);
   quadLineFit1082->SetChisquare(8.942085);
   quadLineFit1082->SetNDF(1);
   quadLineFit1082->GetXaxis()->SetLabelFont(42);
   quadLineFit1082->GetXaxis()->SetTitleOffset(1);
   quadLineFit1082->GetXaxis()->SetTitleFont(42);
   quadLineFit1082->GetYaxis()->SetLabelFont(42);
   quadLineFit1082->GetYaxis()->SetTitleFont(42);
   quadLineFit1082->SetParameter(0,-5.826709);
   quadLineFit1082->SetParError(0,0.07698423);
   quadLineFit1082->SetParLimits(0,0,0);
   quadLineFit1082->SetParameter(1,0.1666662);
   quadLineFit1082->SetParError(1,0.004259408);
   quadLineFit1082->SetParLimits(1,0,0);
   quadLineFit1082->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1082);
   gre->Draw("ap");
   
   TF1 *quadLineFit1083 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1083->SetFillColor(19);
   quadLineFit1083->SetFillStyle(0);
   quadLineFit1083->SetLineWidth(2);
   quadLineFit1083->SetChisquare(8.942085);
   quadLineFit1083->SetNDF(1);
   quadLineFit1083->GetXaxis()->SetLabelFont(42);
   quadLineFit1083->GetXaxis()->SetTitleOffset(1);
   quadLineFit1083->GetXaxis()->SetTitleFont(42);
   quadLineFit1083->GetYaxis()->SetLabelFont(42);
   quadLineFit1083->GetYaxis()->SetTitleFont(42);
   quadLineFit1083->SetParameter(0,-5.826709);
   quadLineFit1083->SetParError(0,0.07698423);
   quadLineFit1083->SetParLimits(0,0,0);
   quadLineFit1083->SetParameter(1,0.1666662);
   quadLineFit1083->SetParError(1,0.004259408);
   quadLineFit1083->SetParLimits(1,0,0);
   quadLineFit1083->Draw("same");
   
   Double_t -30.000000 ppm_fx1083[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1083[3] = {
   -1.644087,
   -1.453084,
   -1.343499};
   Double_t -30.000000 ppm_fex1083[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1083[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1083,-30.000000 ppm_fy1083,-30.000000 ppm_fex1083,-30.000000 ppm_fey1083);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1083 = new TH1F("Graph_mI30dO000000sPppm1083","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1083->SetMinimum(-1.688603);
   Graph_mI30dO000000sPppm1083->SetMaximum(-1.298983);
   Graph_mI30dO000000sPppm1083->SetDirectory(0);
   Graph_mI30dO000000sPppm1083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1083->SetLineColor(ci);
   Graph_mI30dO000000sPppm1083->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1083->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1083->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1083->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1083->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1083->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1083->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1083);
   
   
   TF1 *quadLineFit1084 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1084->SetFillColor(19);
   quadLineFit1084->SetFillStyle(0);
   quadLineFit1084->SetLineColor(2);
   quadLineFit1084->SetLineWidth(2);
   quadLineFit1084->SetChisquare(7.611606);
   quadLineFit1084->SetNDF(1);
   quadLineFit1084->GetXaxis()->SetLabelFont(42);
   quadLineFit1084->GetXaxis()->SetTitleOffset(1);
   quadLineFit1084->GetXaxis()->SetTitleFont(42);
   quadLineFit1084->GetYaxis()->SetLabelFont(42);
   quadLineFit1084->GetYaxis()->SetTitleFont(42);
   quadLineFit1084->SetParameter(0,-2.832867);
   quadLineFit1084->SetParError(0,0.07698651);
   quadLineFit1084->SetParLimits(0,0,0);
   quadLineFit1084->SetParameter(1,0.07514689);
   quadLineFit1084->SetParError(1,0.004259535);
   quadLineFit1084->SetParLimits(1,0,0);
   quadLineFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1084);
   gre->Draw("p ");
   
   TF1 *quadLineFit1085 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1085->SetFillColor(19);
   quadLineFit1085->SetFillStyle(0);
   quadLineFit1085->SetLineColor(2);
   quadLineFit1085->SetLineWidth(2);
   quadLineFit1085->SetChisquare(7.611606);
   quadLineFit1085->SetNDF(1);
   quadLineFit1085->GetXaxis()->SetLabelFont(42);
   quadLineFit1085->GetXaxis()->SetTitleOffset(1);
   quadLineFit1085->GetXaxis()->SetTitleFont(42);
   quadLineFit1085->GetYaxis()->SetLabelFont(42);
   quadLineFit1085->GetYaxis()->SetTitleFont(42);
   quadLineFit1085->SetParameter(0,-2.832867);
   quadLineFit1085->SetParError(0,0.07698651);
   quadLineFit1085->SetParLimits(0,0,0);
   quadLineFit1085->SetParameter(1,0.07514689);
   quadLineFit1085->SetParError(1,0.004259535);
   quadLineFit1085->SetParLimits(1,0,0);
   quadLineFit1085->Draw("same");
   
   Double_t -10.000000 ppm_fx1085[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1085[3] = {
   -0.1496705,
   -0.1298274,
   -0.1250449};
   Double_t -10.000000 ppm_fex1085[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1085[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1085,-10.000000 ppm_fy1085,-10.000000 ppm_fex1085,-10.000000 ppm_fey1085);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1085 = new TH1F("Graph_mI10dO000000sPppm1085","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1085->SetMinimum(-0.1665904);
   Graph_mI10dO000000sPppm1085->SetMaximum(-0.108125);
   Graph_mI10dO000000sPppm1085->SetDirectory(0);
   Graph_mI10dO000000sPppm1085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1085->SetLineColor(ci);
   Graph_mI10dO000000sPppm1085->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1085->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1085->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1085->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1085->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1085->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1085->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1085);
   
   
   TF1 *quadLineFit1086 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1086->SetFillColor(19);
   quadLineFit1086->SetFillStyle(0);
   quadLineFit1086->SetLineColor(3);
   quadLineFit1086->SetLineWidth(2);
   quadLineFit1086->SetChisquare(0.2604417);
   quadLineFit1086->SetNDF(1);
   quadLineFit1086->GetXaxis()->SetLabelFont(42);
   quadLineFit1086->GetXaxis()->SetTitleOffset(1);
   quadLineFit1086->GetXaxis()->SetTitleFont(42);
   quadLineFit1086->GetYaxis()->SetLabelFont(42);
   quadLineFit1086->GetYaxis()->SetTitleFont(42);
   quadLineFit1086->SetParameter(0,-0.2456629);
   quadLineFit1086->SetParError(0,0.07698675);
   quadLineFit1086->SetParLimits(0,0,0);
   quadLineFit1086->SetParameter(1,0.006156403);
   quadLineFit1086->SetParError(1,0.004259549);
   quadLineFit1086->SetParLimits(1,0,0);
   quadLineFit1086->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1086);
   gre->Draw("p ");
   
   TF1 *quadLineFit1087 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1087->SetFillColor(19);
   quadLineFit1087->SetFillStyle(0);
   quadLineFit1087->SetLineColor(3);
   quadLineFit1087->SetLineWidth(2);
   quadLineFit1087->SetChisquare(0.2604417);
   quadLineFit1087->SetNDF(1);
   quadLineFit1087->GetXaxis()->SetLabelFont(42);
   quadLineFit1087->GetXaxis()->SetTitleOffset(1);
   quadLineFit1087->GetXaxis()->SetTitleFont(42);
   quadLineFit1087->GetYaxis()->SetLabelFont(42);
   quadLineFit1087->GetYaxis()->SetTitleFont(42);
   quadLineFit1087->SetParameter(0,-0.2456629);
   quadLineFit1087->SetParError(0,0.07698675);
   quadLineFit1087->SetParLimits(0,0,0);
   quadLineFit1087->SetParameter(1,0.006156403);
   quadLineFit1087->SetParError(1,0.004259549);
   quadLineFit1087->SetParLimits(1,0,0);
   quadLineFit1087->Draw("same");
   
   Double_t 10.000000 ppm_fx1087[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1087[3] = {
   1.348422,
   1.200705,
   1.077416};
   Double_t 10.000000 ppm_fex1087[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1087[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,10.000000 ppm_fx1087,10.000000 ppm_fy1087,10.000000 ppm_fex1087,10.000000 ppm_fey1087);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1087 = new TH1F("Graph_10dO000000sPppm1087","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1087->SetMinimum(1.035858);
   Graph_10dO000000sPppm1087->SetMaximum(1.38998);
   Graph_10dO000000sPppm1087->SetDirectory(0);
   Graph_10dO000000sPppm1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1087->SetLineColor(ci);
   Graph_10dO000000sPppm1087->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1087->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1087->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1087->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1087->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1087->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1087->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1087);
   
   
   TF1 *quadLineFit1088 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1088->SetFillColor(19);
   quadLineFit1088->SetFillStyle(0);
   quadLineFit1088->SetLineColor(4);
   quadLineFit1088->SetLineWidth(2);
   quadLineFit1088->SetChisquare(0.6851474);
   quadLineFit1088->SetNDF(1);
   quadLineFit1088->GetXaxis()->SetLabelFont(42);
   quadLineFit1088->GetXaxis()->SetTitleOffset(1);
   quadLineFit1088->GetXaxis()->SetTitleFont(42);
   quadLineFit1088->GetYaxis()->SetLabelFont(42);
   quadLineFit1088->GetYaxis()->SetTitleFont(42);
   quadLineFit1088->SetParameter(0,2.428374);
   quadLineFit1088->SetParError(0,0.0769834);
   quadLineFit1088->SetParLimits(0,0,0);
   quadLineFit1088->SetParameter(1,-0.06775147);
   quadLineFit1088->SetParError(1,0.004259362);
   quadLineFit1088->SetParLimits(1,0,0);
   quadLineFit1088->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1088);
   gre->Draw("p ");
   
   TF1 *quadLineFit1089 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1089->SetFillColor(19);
   quadLineFit1089->SetFillStyle(0);
   quadLineFit1089->SetLineColor(4);
   quadLineFit1089->SetLineWidth(2);
   quadLineFit1089->SetChisquare(0.6851474);
   quadLineFit1089->SetNDF(1);
   quadLineFit1089->GetXaxis()->SetLabelFont(42);
   quadLineFit1089->GetXaxis()->SetTitleOffset(1);
   quadLineFit1089->GetXaxis()->SetTitleFont(42);
   quadLineFit1089->GetYaxis()->SetLabelFont(42);
   quadLineFit1089->GetYaxis()->SetTitleFont(42);
   quadLineFit1089->SetParameter(0,2.428374);
   quadLineFit1089->SetParError(0,0.0769834);
   quadLineFit1089->SetParLimits(0,0,0);
   quadLineFit1089->SetParameter(1,-0.06775147);
   quadLineFit1089->SetParError(1,0.004259362);
   quadLineFit1089->SetParLimits(1,0,0);
   quadLineFit1089->Draw("same");
   
   Double_t 30.000000 ppm_fx1089[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1089[3] = {
   2.875744,
   2.541118,
   2.305877};
   Double_t 30.000000 ppm_fex1089[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1089[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,30.000000 ppm_fx1089,30.000000 ppm_fy1089,30.000000 ppm_fex1089,30.000000 ppm_fey1089);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1089 = new TH1F("Graph_30dO000000sPppm1089","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1089->SetMinimum(2.234433);
   Graph_30dO000000sPppm1089->SetMaximum(2.947188);
   Graph_30dO000000sPppm1089->SetDirectory(0);
   Graph_30dO000000sPppm1089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1089->SetLineColor(ci);
   Graph_30dO000000sPppm1089->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1089->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1089->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1089->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1089->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1089->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1089->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1089);
   
   
   TF1 *quadLineFit1090 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1090->SetFillColor(19);
   quadLineFit1090->SetFillStyle(0);
   quadLineFit1090->SetLineColor(5);
   quadLineFit1090->SetLineWidth(2);
   quadLineFit1090->SetChisquare(11.34154);
   quadLineFit1090->SetNDF(1);
   quadLineFit1090->GetXaxis()->SetLabelFont(42);
   quadLineFit1090->GetXaxis()->SetTitleOffset(1);
   quadLineFit1090->GetXaxis()->SetTitleFont(42);
   quadLineFit1090->GetYaxis()->SetLabelFont(42);
   quadLineFit1090->GetYaxis()->SetTitleFont(42);
   quadLineFit1090->SetParameter(0,5.138648);
   quadLineFit1090->SetParError(0,0.0769887);
   quadLineFit1090->SetParLimits(0,0,0);
   quadLineFit1090->SetParameter(1,-0.1424668);
   quadLineFit1090->SetParError(1,0.004259658);
   quadLineFit1090->SetParLimits(1,0,0);
   quadLineFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1090);
   gre->Draw("p ");
   
   TF1 *quadLineFit1091 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1091->SetFillColor(19);
   quadLineFit1091->SetFillStyle(0);
   quadLineFit1091->SetLineColor(5);
   quadLineFit1091->SetLineWidth(2);
   quadLineFit1091->SetChisquare(11.34154);
   quadLineFit1091->SetNDF(1);
   quadLineFit1091->GetXaxis()->SetLabelFont(42);
   quadLineFit1091->GetXaxis()->SetTitleOffset(1);
   quadLineFit1091->GetXaxis()->SetTitleFont(42);
   quadLineFit1091->GetYaxis()->SetLabelFont(42);
   quadLineFit1091->GetYaxis()->SetTitleFont(42);
   quadLineFit1091->SetParameter(0,5.138648);
   quadLineFit1091->SetParError(0,0.0769887);
   quadLineFit1091->SetParLimits(0,0,0);
   quadLineFit1091->SetParameter(1,-0.1424668);
   quadLineFit1091->SetParError(1,0.004259658);
   quadLineFit1091->SetParLimits(1,0,0);
   quadLineFit1091->Draw("same");
   
   Double_t 50.000000 ppm_fx1091[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1091[3] = {
   4.370102,
   3.851306,
   3.497235};
   Double_t 50.000000 ppm_fex1091[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1091[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,50.000000 ppm_fx1091,50.000000 ppm_fy1091,50.000000 ppm_fex1091,50.000000 ppm_fey1091);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1091 = new TH1F("Graph_50dO000000sPppm1091","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1091->SetMinimum(3.395491);
   Graph_50dO000000sPppm1091->SetMaximum(4.471847);
   Graph_50dO000000sPppm1091->SetDirectory(0);
   Graph_50dO000000sPppm1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1091->SetLineColor(ci);
   Graph_50dO000000sPppm1091->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1091->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1091->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1091->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1091->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1091->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1091->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1091);
   
   
   TF1 *quadLineFit1092 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1092->SetFillColor(19);
   quadLineFit1092->SetFillStyle(0);
   quadLineFit1092->SetLineColor(6);
   quadLineFit1092->SetLineWidth(2);
   quadLineFit1092->SetChisquare(31.15709);
   quadLineFit1092->SetNDF(1);
   quadLineFit1092->GetXaxis()->SetLabelFont(42);
   quadLineFit1092->GetXaxis()->SetTitleOffset(1);
   quadLineFit1092->GetXaxis()->SetTitleFont(42);
   quadLineFit1092->GetYaxis()->SetLabelFont(42);
   quadLineFit1092->GetYaxis()->SetTitleFont(42);
   quadLineFit1092->SetParameter(0,7.834118);
   quadLineFit1092->SetParError(0,0.07698866);
   quadLineFit1092->SetParLimits(0,0,0);
   quadLineFit1092->SetParameter(1,-0.2182169);
   quadLineFit1092->SetParError(1,0.004259655);
   quadLineFit1092->SetParLimits(1,0,0);
   quadLineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1092);
   gre->Draw("p ");
   
   TF1 *quadLineFit1093 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1093->SetFillColor(19);
   quadLineFit1093->SetFillStyle(0);
   quadLineFit1093->SetLineColor(6);
   quadLineFit1093->SetLineWidth(2);
   quadLineFit1093->SetChisquare(31.15709);
   quadLineFit1093->SetNDF(1);
   quadLineFit1093->GetXaxis()->SetLabelFont(42);
   quadLineFit1093->GetXaxis()->SetTitleOffset(1);
   quadLineFit1093->GetXaxis()->SetTitleFont(42);
   quadLineFit1093->GetYaxis()->SetLabelFont(42);
   quadLineFit1093->GetYaxis()->SetTitleFont(42);
   quadLineFit1093->SetParameter(0,7.834118);
   quadLineFit1093->SetParError(0,0.07698866);
   quadLineFit1093->SetParLimits(0,0,0);
   quadLineFit1093->SetParameter(1,-0.2182169);
   quadLineFit1093->SetParError(1,0.004259655);
   quadLineFit1093->SetParLimits(1,0,0);
   quadLineFit1093->Draw("same");
   
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
