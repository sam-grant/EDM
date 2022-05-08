void QuadScans_NSUBRUN_150_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.234508,0.0663141,7.50232);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1081[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1081[3] = {
   -3.16866,
   -2.809016,
   -2.577775};
   Double_t -50.000000 ppm_fex1081[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1081[3] = {
   0.01208777,
   0.01208777,
   0.01208777};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1081,-50.000000 ppm_fy1081,-50.000000 ppm_fex1081,-50.000000 ppm_fey1081);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1081 = new TH1F("Graph_mI50dO000000sPppm1081","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1081->SetMinimum(-3.960826);
   Graph_mI50dO000000sPppm1081->SetMaximum(6.228637);
   Graph_mI50dO000000sPppm1081->SetDirectory(0);
   Graph_mI50dO000000sPppm1081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1081->SetLineColor(ci);
   Graph_mI50dO000000sPppm1081->GetXaxis()->SetTitle("1/V [kV^{-1}]");
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
   
   
   TF1 *quadLineFit1082 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1082->SetFillColor(19);
   quadLineFit1082->SetFillStyle(0);
   quadLineFit1082->SetLineWidth(2);
   quadLineFit1082->SetChisquare(0.168898);
   quadLineFit1082->SetNDF(1);
   quadLineFit1082->GetXaxis()->SetLabelFont(42);
   quadLineFit1082->GetXaxis()->SetTitleOffset(1);
   quadLineFit1082->GetXaxis()->SetTitleFont(42);
   quadLineFit1082->GetYaxis()->SetLabelFont(42);
   quadLineFit1082->GetYaxis()->SetTitleFont(42);
   quadLineFit1082->SetParameter(0,0.1165535);
   quadLineFit1082->SetParError(0,0.08549578);
   quadLineFit1082->SetParLimits(0,0,0);
   quadLineFit1082->SetParameter(1,-52.58792);
   quadLineFit1082->SetParError(1,1.509596);
   quadLineFit1082->SetParLimits(1,0,0);
   quadLineFit1082->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1082);
   gre->Draw("ap");
   
   TF1 *quadLineFit1083 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1083->SetFillColor(19);
   quadLineFit1083->SetFillStyle(0);
   quadLineFit1083->SetLineWidth(2);
   quadLineFit1083->SetChisquare(0.168898);
   quadLineFit1083->SetNDF(1);
   quadLineFit1083->GetXaxis()->SetLabelFont(42);
   quadLineFit1083->GetXaxis()->SetTitleOffset(1);
   quadLineFit1083->GetXaxis()->SetTitleFont(42);
   quadLineFit1083->GetYaxis()->SetLabelFont(42);
   quadLineFit1083->GetYaxis()->SetTitleFont(42);
   quadLineFit1083->SetParameter(0,0.1165535);
   quadLineFit1083->SetParError(0,0.08549578);
   quadLineFit1083->SetParLimits(0,0,0);
   quadLineFit1083->SetParameter(1,-52.58792);
   quadLineFit1083->SetParError(1,1.509596);
   quadLineFit1083->SetParLimits(1,0,0);
   quadLineFit1083->Draw("same");
   
   Double_t -30.000000 ppm_fx1083[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1083[4] = {
   -1.908969,
   -1.6325,
   -1.462036,
   -1.365219};
   Double_t -30.000000 ppm_fex1083[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1083[4] = {
   0.01208777,
   0.01208777,
   0.01208777,
   0.01208777};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1083,-30.000000 ppm_fy1083,-30.000000 ppm_fex1083,-30.000000 ppm_fey1083);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1083 = new TH1F("Graph_mI30dO000000sPppm1083","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1083->SetMinimum(-1.97785);
   Graph_mI30dO000000sPppm1083->SetMaximum(-1.296339);
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
   
   
   TF1 *quadLineFit1084 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1084->SetFillColor(19);
   quadLineFit1084->SetFillStyle(0);
   quadLineFit1084->SetLineColor(2);
   quadLineFit1084->SetLineWidth(2);
   quadLineFit1084->SetChisquare(5.976078);
   quadLineFit1084->SetNDF(2);
   quadLineFit1084->GetXaxis()->SetLabelFont(42);
   quadLineFit1084->GetXaxis()->SetTitleOffset(1);
   quadLineFit1084->GetXaxis()->SetTitleFont(42);
   quadLineFit1084->GetYaxis()->SetLabelFont(42);
   quadLineFit1084->GetYaxis()->SetTitleFont(42);
   quadLineFit1084->SetParameter(0,0.03339869);
   quadLineFit1084->SetParError(0,0.04810129);
   quadLineFit1084->SetParLimits(0,0,0);
   quadLineFit1084->SetParameter(1,-27.00678);
   quadLineFit1084->SetParError(1,0.7928036);
   quadLineFit1084->SetParLimits(1,0,0);
   quadLineFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1084);
   gre->Draw("p ");
   
   TF1 *quadLineFit1085 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1085->SetFillColor(19);
   quadLineFit1085->SetFillStyle(0);
   quadLineFit1085->SetLineColor(2);
   quadLineFit1085->SetLineWidth(2);
   quadLineFit1085->SetChisquare(5.976078);
   quadLineFit1085->SetNDF(2);
   quadLineFit1085->GetXaxis()->SetLabelFont(42);
   quadLineFit1085->GetXaxis()->SetTitleOffset(1);
   quadLineFit1085->GetXaxis()->SetTitleFont(42);
   quadLineFit1085->GetYaxis()->SetLabelFont(42);
   quadLineFit1085->GetYaxis()->SetTitleFont(42);
   quadLineFit1085->SetParameter(0,0.03339869);
   quadLineFit1085->SetParError(0,0.04810129);
   quadLineFit1085->SetParLimits(0,0,0);
   quadLineFit1085->SetParameter(1,-27.00678);
   quadLineFit1085->SetParError(1,0.7928036);
   quadLineFit1085->SetParLimits(1,0,0);
   quadLineFit1085->Draw("same");
   
   Double_t -10.000000 ppm_fx1085[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1085[4] = {
   -0.17426,
   -0.1512551,
   -0.1272804,
   -0.1385339};
   Double_t -10.000000 ppm_fex1085[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1085[4] = {
   0.01208777,
   0.01208777,
   0.01208777,
   0.01208777};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1085,-10.000000 ppm_fy1085,-10.000000 ppm_fex1085,-10.000000 ppm_fey1085);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1085 = new TH1F("Graph_mI10dO000000sPppm1085","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1085->SetMinimum(-0.1934633);
   Graph_mI10dO000000sPppm1085->SetMaximum(-0.1080771);
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
   
   
   TF1 *quadLineFit1086 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1086->SetFillColor(19);
   quadLineFit1086->SetFillStyle(0);
   quadLineFit1086->SetLineColor(3);
   quadLineFit1086->SetLineWidth(2);
   quadLineFit1086->SetChisquare(1.474822);
   quadLineFit1086->SetNDF(2);
   quadLineFit1086->GetXaxis()->SetLabelFont(42);
   quadLineFit1086->GetXaxis()->SetTitleOffset(1);
   quadLineFit1086->GetXaxis()->SetTitleFont(42);
   quadLineFit1086->GetYaxis()->SetLabelFont(42);
   quadLineFit1086->GetYaxis()->SetTitleFont(42);
   quadLineFit1086->SetParameter(0,-0.02277561);
   quadLineFit1086->SetParError(0,0.04810068);
   quadLineFit1086->SetParLimits(0,0,0);
   quadLineFit1086->SetParameter(1,-2.077646);
   quadLineFit1086->SetParError(1,0.7927934);
   quadLineFit1086->SetParLimits(1,0,0);
   quadLineFit1086->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1086);
   gre->Draw("p ");
   
   TF1 *quadLineFit1087 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1087->SetFillColor(19);
   quadLineFit1087->SetFillStyle(0);
   quadLineFit1087->SetLineColor(3);
   quadLineFit1087->SetLineWidth(2);
   quadLineFit1087->SetChisquare(1.474822);
   quadLineFit1087->SetNDF(2);
   quadLineFit1087->GetXaxis()->SetLabelFont(42);
   quadLineFit1087->GetXaxis()->SetTitleOffset(1);
   quadLineFit1087->GetXaxis()->SetTitleFont(42);
   quadLineFit1087->GetYaxis()->SetLabelFont(42);
   quadLineFit1087->GetYaxis()->SetTitleFont(42);
   quadLineFit1087->SetParameter(0,-0.02277561);
   quadLineFit1087->SetParError(0,0.04810068);
   quadLineFit1087->SetParLimits(0,0,0);
   quadLineFit1087->SetParameter(1,-2.077646);
   quadLineFit1087->SetParError(1,0.7927934);
   quadLineFit1087->SetParLimits(1,0,0);
   quadLineFit1087->Draw("same");
   
   Double_t 10.000000 ppm_fx1087[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1087[3] = {
   1.543338,
   1.386166,
   1.133613};
   Double_t 10.000000 ppm_fex1087[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1087[3] = {
   0.01208777,
   0.01208777,
   0.01208777};
   gre = new TGraphErrors(3,10.000000 ppm_fx1087,10.000000 ppm_fy1087,10.000000 ppm_fex1087,10.000000 ppm_fey1087);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1087 = new TH1F("Graph_10dO000000sPppm1087","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1087->SetMinimum(1.078135);
   Graph_10dO000000sPppm1087->SetMaximum(1.598816);
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
   
   
   TF1 *quadLineFit1088 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1088->SetFillColor(19);
   quadLineFit1088->SetFillStyle(0);
   quadLineFit1088->SetLineColor(4);
   quadLineFit1088->SetLineWidth(2);
   quadLineFit1088->SetChisquare(2.70709);
   quadLineFit1088->SetNDF(1);
   quadLineFit1088->GetXaxis()->SetLabelFont(42);
   quadLineFit1088->GetXaxis()->SetTitleOffset(1);
   quadLineFit1088->GetXaxis()->SetTitleFont(42);
   quadLineFit1088->GetYaxis()->SetLabelFont(42);
   quadLineFit1088->GetYaxis()->SetTitleFont(42);
   quadLineFit1088->SetParameter(0,0.09317096);
   quadLineFit1088->SetParError(0,0.05273676);
   quadLineFit1088->SetParLimits(0,0,0);
   quadLineFit1088->SetParameter(1,20.42865);
   quadLineFit1088->SetParError(1,0.8467054);
   quadLineFit1088->SetParLimits(1,0,0);
   quadLineFit1088->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1088);
   gre->Draw("p ");
   
   TF1 *quadLineFit1089 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1089->SetFillColor(19);
   quadLineFit1089->SetFillStyle(0);
   quadLineFit1089->SetLineColor(4);
   quadLineFit1089->SetLineWidth(2);
   quadLineFit1089->SetChisquare(2.70709);
   quadLineFit1089->SetNDF(1);
   quadLineFit1089->GetXaxis()->SetLabelFont(42);
   quadLineFit1089->GetXaxis()->SetTitleOffset(1);
   quadLineFit1089->GetXaxis()->SetTitleFont(42);
   quadLineFit1089->GetYaxis()->SetLabelFont(42);
   quadLineFit1089->GetYaxis()->SetTitleFont(42);
   quadLineFit1089->SetParameter(0,0.09317096);
   quadLineFit1089->SetParError(0,0.05273676);
   quadLineFit1089->SetParLimits(0,0,0);
   quadLineFit1089->SetParameter(1,20.42865);
   quadLineFit1089->SetParError(1,0.8467054);
   quadLineFit1089->SetParLimits(1,0,0);
   quadLineFit1089->Draw("same");
   
   Double_t 30.000000 ppm_fx1089[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1089[4] = {
   3.273645,
   2.852294,
   2.547812,
   2.362813};
   Double_t 30.000000 ppm_fex1089[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1089[4] = {
   0.01208777,
   0.01208777,
   0.01208777,
   0.01208777};
   gre = new TGraphErrors(4,30.000000 ppm_fx1089,30.000000 ppm_fy1089,30.000000 ppm_fex1089,30.000000 ppm_fey1089);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1089 = new TH1F("Graph_30dO000000sPppm1089","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1089->SetMinimum(2.257225);
   Graph_30dO000000sPppm1089->SetMaximum(3.379234);
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
   
   
   TF1 *quadLineFit1090 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1090->SetFillColor(19);
   quadLineFit1090->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1090->SetLineColor(ci);
   quadLineFit1090->SetLineWidth(2);
   quadLineFit1090->SetChisquare(1.454511);
   quadLineFit1090->SetNDF(2);
   quadLineFit1090->GetXaxis()->SetLabelFont(42);
   quadLineFit1090->GetXaxis()->SetTitleOffset(1);
   quadLineFit1090->GetXaxis()->SetTitleFont(42);
   quadLineFit1090->GetYaxis()->SetLabelFont(42);
   quadLineFit1090->GetYaxis()->SetTitleFont(42);
   quadLineFit1090->SetParameter(0,0.03857757);
   quadLineFit1090->SetParError(0,0.04810213);
   quadLineFit1090->SetParLimits(0,0,0);
   quadLineFit1090->SetParameter(1,45.19843);
   quadLineFit1090->SetParError(1,0.7928177);
   quadLineFit1090->SetParLimits(1,0,0);
   quadLineFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1090);
   gre->Draw("p ");
   
   TF1 *quadLineFit1091 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1091->SetFillColor(19);
   quadLineFit1091->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1091->SetLineColor(ci);
   quadLineFit1091->SetLineWidth(2);
   quadLineFit1091->SetChisquare(1.454511);
   quadLineFit1091->SetNDF(2);
   quadLineFit1091->GetXaxis()->SetLabelFont(42);
   quadLineFit1091->GetXaxis()->SetTitleOffset(1);
   quadLineFit1091->GetXaxis()->SetTitleFont(42);
   quadLineFit1091->GetYaxis()->SetLabelFont(42);
   quadLineFit1091->GetYaxis()->SetTitleFont(42);
   quadLineFit1091->SetParameter(0,0.03857757);
   quadLineFit1091->SetParError(0,0.04810213);
   quadLineFit1091->SetParLimits(0,0,0);
   quadLineFit1091->SetParameter(1,45.19843);
   quadLineFit1091->SetParError(1,0.7928177);
   quadLineFit1091->SetParLimits(1,0,0);
   quadLineFit1091->Draw("same");
   
   Double_t 50.000000 ppm_fx1091[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1091[4] = {
   4.982909,
   4.377742,
   3.873237,
   3.62005};
   Double_t 50.000000 ppm_fex1091[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1091[4] = {
   0.01208777,
   0.01208777,
   0.01208777,
   0.01208777};
   gre = new TGraphErrors(4,50.000000 ppm_fx1091,50.000000 ppm_fy1091,50.000000 ppm_fex1091,50.000000 ppm_fey1091);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1091 = new TH1F("Graph_50dO000000sPppm1091","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1091->SetMinimum(3.469258);
   Graph_50dO000000sPppm1091->SetMaximum(5.133701);
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
   
   
   TF1 *quadLineFit1092 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1092->SetFillColor(19);
   quadLineFit1092->SetFillStyle(0);
   quadLineFit1092->SetLineColor(6);
   quadLineFit1092->SetLineWidth(2);
   quadLineFit1092->SetChisquare(5.690554);
   quadLineFit1092->SetNDF(2);
   quadLineFit1092->GetXaxis()->SetLabelFont(42);
   quadLineFit1092->GetXaxis()->SetTitleOffset(1);
   quadLineFit1092->GetXaxis()->SetTitleFont(42);
   quadLineFit1092->GetYaxis()->SetLabelFont(42);
   quadLineFit1092->GetYaxis()->SetTitleFont(42);
   quadLineFit1092->SetParameter(0,0.09928611);
   quadLineFit1092->SetParError(0,0.04810256);
   quadLineFit1092->SetParLimits(0,0,0);
   quadLineFit1092->SetParameter(1,68.35177);
   quadLineFit1092->SetParError(1,0.7928248);
   quadLineFit1092->SetParLimits(1,0,0);
   quadLineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1092);
   gre->Draw("p ");
   
   TF1 *quadLineFit1093 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1093->SetFillColor(19);
   quadLineFit1093->SetFillStyle(0);
   quadLineFit1093->SetLineColor(6);
   quadLineFit1093->SetLineWidth(2);
   quadLineFit1093->SetChisquare(5.690554);
   quadLineFit1093->SetNDF(2);
   quadLineFit1093->GetXaxis()->SetLabelFont(42);
   quadLineFit1093->GetXaxis()->SetTitleOffset(1);
   quadLineFit1093->GetXaxis()->SetTitleFont(42);
   quadLineFit1093->GetYaxis()->SetLabelFont(42);
   quadLineFit1093->GetYaxis()->SetTitleFont(42);
   quadLineFit1093->SetParameter(0,0.09928611);
   quadLineFit1093->SetParError(0,0.04810256);
   quadLineFit1093->SetParLimits(0,0,0);
   quadLineFit1093->SetParameter(1,68.35177);
   quadLineFit1093->SetParError(1,0.7928248);
   quadLineFit1093->SetParLimits(1,0,0);
   quadLineFit1093->Draw("same");
   
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
