void QuadScans_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:31 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1079[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1079[3] = {
   -3.155641,
   -2.828894,
   -2.547016};
   Double_t -50.000000 ppm_fex1079[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1079[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1079,-50.000000 ppm_fy1079,-50.000000 ppm_fex1079,-50.000000 ppm_fey1079);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1079 = new TH1F("Graph_mI50dO000000sPppm1079","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1079->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1079->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1079->SetDirectory(0);
   Graph_mI50dO000000sPppm1079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1079->SetLineColor(ci);
   Graph_mI50dO000000sPppm1079->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1079->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1079->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1079->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1079->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1079->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1079->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1079->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1079->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1079->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1079->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1079->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1079->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1079->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1079->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1079);
   
   
   TF1 *quadLineFit1080 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1080->SetFillColor(19);
   quadLineFit1080->SetFillStyle(0);
   quadLineFit1080->SetLineWidth(2);
   quadLineFit1080->SetChisquare(1.537364);
   quadLineFit1080->SetNDF(1);
   quadLineFit1080->GetXaxis()->SetLabelFont(42);
   quadLineFit1080->GetXaxis()->SetTitleOffset(1);
   quadLineFit1080->GetXaxis()->SetTitleFont(42);
   quadLineFit1080->GetYaxis()->SetLabelFont(42);
   quadLineFit1080->GetYaxis()->SetTitleFont(42);
   quadLineFit1080->SetParameter(0,-5.582659);
   quadLineFit1080->SetParError(0,0.09440511);
   quadLineFit1080->SetParLimits(0,0,0);
   quadLineFit1080->SetParameter(1,0.1521561);
   quadLineFit1080->SetParError(1,0.005223278);
   quadLineFit1080->SetParLimits(1,0,0);
   quadLineFit1080->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1080);
   gre->Draw("ap");
   
   TF1 *quadLineFit1081 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1081->SetFillColor(19);
   quadLineFit1081->SetFillStyle(0);
   quadLineFit1081->SetLineWidth(2);
   quadLineFit1081->SetChisquare(1.537364);
   quadLineFit1081->SetNDF(1);
   quadLineFit1081->GetXaxis()->SetLabelFont(42);
   quadLineFit1081->GetXaxis()->SetTitleOffset(1);
   quadLineFit1081->GetXaxis()->SetTitleFont(42);
   quadLineFit1081->GetYaxis()->SetLabelFont(42);
   quadLineFit1081->GetYaxis()->SetTitleFont(42);
   quadLineFit1081->SetParameter(0,-5.582659);
   quadLineFit1081->SetParError(0,0.09440511);
   quadLineFit1081->SetParLimits(0,0,0);
   quadLineFit1081->SetParameter(1,0.1521561);
   quadLineFit1081->SetParError(1,0.005223278);
   quadLineFit1081->SetParLimits(1,0,0);
   quadLineFit1081->Draw("same");
   
   Double_t -40.000000 ppm_fx1081[3] = {
   16,
   18,
   20};
   Double_t -40.000000 ppm_fy1081[3] = {
   -2.410741,
   -2.152517,
   -1.895377};
   Double_t -40.000000 ppm_fex1081[3] = {
   0,
   0,
   0};
   Double_t -40.000000 ppm_fey1081[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,-40.000000 ppm_fx1081,-40.000000 ppm_fy1081,-40.000000 ppm_fex1081,-40.000000 ppm_fey1081);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1081 = new TH1F("Graph_mI40dO000000sPppm1081","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1081->SetMinimum(-2.480006);
   Graph_mI40dO000000sPppm1081->SetMaximum(-1.826113);
   Graph_mI40dO000000sPppm1081->SetDirectory(0);
   Graph_mI40dO000000sPppm1081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1081->SetLineColor(ci);
   Graph_mI40dO000000sPppm1081->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1081->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1081->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1081->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1081->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1081->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1081->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1081);
   
   
   TF1 *quadLineFit1082 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1082->SetFillColor(19);
   quadLineFit1082->SetFillStyle(0);
   quadLineFit1082->SetLineColor(2);
   quadLineFit1082->SetLineWidth(2);
   quadLineFit1082->SetChisquare(0.0008982365);
   quadLineFit1082->SetNDF(1);
   quadLineFit1082->GetXaxis()->SetLabelFont(42);
   quadLineFit1082->GetXaxis()->SetTitleOffset(1);
   quadLineFit1082->GetXaxis()->SetTitleFont(42);
   quadLineFit1082->GetYaxis()->SetLabelFont(42);
   quadLineFit1082->GetYaxis()->SetTitleFont(42);
   quadLineFit1082->SetParameter(0,-4.472014);
   quadLineFit1082->SetParError(0,0.09440537);
   quadLineFit1082->SetParLimits(0,0,0);
   quadLineFit1082->SetParameter(1,0.1288409);
   quadLineFit1082->SetParError(1,0.005223292);
   quadLineFit1082->SetParLimits(1,0,0);
   quadLineFit1082->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1082);
   gre->Draw("p ");
   
   TF1 *quadLineFit1083 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1083->SetFillColor(19);
   quadLineFit1083->SetFillStyle(0);
   quadLineFit1083->SetLineColor(2);
   quadLineFit1083->SetLineWidth(2);
   quadLineFit1083->SetChisquare(0.0008982365);
   quadLineFit1083->SetNDF(1);
   quadLineFit1083->GetXaxis()->SetLabelFont(42);
   quadLineFit1083->GetXaxis()->SetTitleOffset(1);
   quadLineFit1083->GetXaxis()->SetTitleFont(42);
   quadLineFit1083->GetYaxis()->SetLabelFont(42);
   quadLineFit1083->GetYaxis()->SetTitleFont(42);
   quadLineFit1083->SetParameter(0,-4.472014);
   quadLineFit1083->SetParError(0,0.09440537);
   quadLineFit1083->SetParLimits(0,0,0);
   quadLineFit1083->SetParameter(1,0.1288409);
   quadLineFit1083->SetParError(1,0.005223292);
   quadLineFit1083->SetParLimits(1,0,0);
   quadLineFit1083->Draw("same");
   
   Double_t -30.000000 ppm_fx1083[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1083[3] = {
   -1.626542,
   -1.485218,
   -1.357699};
   Double_t -30.000000 ppm_fex1083[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1083[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1083,-30.000000 ppm_fy1083,-30.000000 ppm_fex1083,-30.000000 ppm_fey1083);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1083 = new TH1F("Graph_mI30dO000000sPppm1083","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1083->SetMinimum(-1.671155);
   Graph_mI30dO000000sPppm1083->SetMaximum(-1.313087);
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
   quadLineFit1084->SetLineColor(3);
   quadLineFit1084->SetLineWidth(2);
   quadLineFit1084->SetChisquare(0.1455439);
   quadLineFit1084->SetNDF(1);
   quadLineFit1084->GetXaxis()->SetLabelFont(42);
   quadLineFit1084->GetXaxis()->SetTitleOffset(1);
   quadLineFit1084->GetXaxis()->SetTitleFont(42);
   quadLineFit1084->GetYaxis()->SetLabelFont(42);
   quadLineFit1084->GetYaxis()->SetTitleFont(42);
   quadLineFit1084->SetParameter(0,-2.699612);
   quadLineFit1084->SetParError(0,0.09440415);
   quadLineFit1084->SetParLimits(0,0,0);
   quadLineFit1084->SetParameter(1,0.0672107);
   quadLineFit1084->SetParError(1,0.005223224);
   quadLineFit1084->SetParLimits(1,0,0);
   quadLineFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1084);
   gre->Draw("p ");
   
   TF1 *quadLineFit1085 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1085->SetFillColor(19);
   quadLineFit1085->SetFillStyle(0);
   quadLineFit1085->SetLineColor(3);
   quadLineFit1085->SetLineWidth(2);
   quadLineFit1085->SetChisquare(0.1455439);
   quadLineFit1085->SetNDF(1);
   quadLineFit1085->GetXaxis()->SetLabelFont(42);
   quadLineFit1085->GetXaxis()->SetTitleOffset(1);
   quadLineFit1085->GetXaxis()->SetTitleFont(42);
   quadLineFit1085->GetYaxis()->SetLabelFont(42);
   quadLineFit1085->GetYaxis()->SetTitleFont(42);
   quadLineFit1085->SetParameter(0,-2.699612);
   quadLineFit1085->SetParError(0,0.09440415);
   quadLineFit1085->SetParLimits(0,0,0);
   quadLineFit1085->SetParameter(1,0.0672107);
   quadLineFit1085->SetParError(1,0.005223224);
   quadLineFit1085->SetParLimits(1,0,0);
   quadLineFit1085->Draw("same");
   
   Double_t -20.000000 ppm_fx1085[3] = {
   16,
   18,
   20};
   Double_t -20.000000 ppm_fy1085[3] = {
   -0.8989083,
   -0.7896078,
   -0.6944319};
   Double_t -20.000000 ppm_fex1085[3] = {
   0,
   0,
   0};
   Double_t -20.000000 ppm_fey1085[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,-20.000000 ppm_fx1085,-20.000000 ppm_fy1085,-20.000000 ppm_fex1085,-20.000000 ppm_fey1085);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1085 = new TH1F("Graph_mI20dO000000sPppm1085","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1085->SetMinimum(-0.9370844);
   Graph_mI20dO000000sPppm1085->SetMaximum(-0.6562559);
   Graph_mI20dO000000sPppm1085->SetDirectory(0);
   Graph_mI20dO000000sPppm1085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1085->SetLineColor(ci);
   Graph_mI20dO000000sPppm1085->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1085->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1085->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1085->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1085->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1085->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1085->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1085);
   
   
   TF1 *quadLineFit1086 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1086->SetFillColor(19);
   quadLineFit1086->SetFillStyle(0);
   quadLineFit1086->SetLineColor(4);
   quadLineFit1086->SetLineWidth(2);
   quadLineFit1086->SetChisquare(0.1523447);
   quadLineFit1086->SetNDF(1);
   quadLineFit1086->GetXaxis()->SetLabelFont(42);
   quadLineFit1086->GetXaxis()->SetTitleOffset(1);
   quadLineFit1086->GetXaxis()->SetTitleFont(42);
   quadLineFit1086->GetYaxis()->SetLabelFont(42);
   quadLineFit1086->GetYaxis()->SetTitleFont(42);
   quadLineFit1086->SetParameter(0,-1.71446);
   quadLineFit1086->SetParError(0,0.09440523);
   quadLineFit1086->SetParLimits(0,0,0);
   quadLineFit1086->SetParameter(1,0.0511191);
   quadLineFit1086->SetParError(1,0.005223284);
   quadLineFit1086->SetParLimits(1,0,0);
   quadLineFit1086->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1086);
   gre->Draw("p ");
   
   TF1 *quadLineFit1087 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1087->SetFillColor(19);
   quadLineFit1087->SetFillStyle(0);
   quadLineFit1087->SetLineColor(4);
   quadLineFit1087->SetLineWidth(2);
   quadLineFit1087->SetChisquare(0.1523447);
   quadLineFit1087->SetNDF(1);
   quadLineFit1087->GetXaxis()->SetLabelFont(42);
   quadLineFit1087->GetXaxis()->SetTitleOffset(1);
   quadLineFit1087->GetXaxis()->SetTitleFont(42);
   quadLineFit1087->GetYaxis()->SetLabelFont(42);
   quadLineFit1087->GetYaxis()->SetTitleFont(42);
   quadLineFit1087->SetParameter(0,-1.71446);
   quadLineFit1087->SetParError(0,0.09440523);
   quadLineFit1087->SetParLimits(0,0,0);
   quadLineFit1087->SetParameter(1,0.0511191);
   quadLineFit1087->SetParError(1,0.005223284);
   quadLineFit1087->SetParLimits(1,0,0);
   quadLineFit1087->Draw("same");
   
   Double_t -10.000000 ppm_fx1087[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1087[3] = {
   -0.1824979,
   -0.1473324,
   -0.1057499};
   Double_t -10.000000 ppm_fex1087[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1087[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1087,-10.000000 ppm_fy1087,-10.000000 ppm_fex1087,-10.000000 ppm_fey1087);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1087 = new TH1F("Graph_mI10dO000000sPppm1087","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1087->SetMinimum(-0.2079011);
   Graph_mI10dO000000sPppm1087->SetMaximum(-0.08034664);
   Graph_mI10dO000000sPppm1087->SetDirectory(0);
   Graph_mI10dO000000sPppm1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1087->SetLineColor(ci);
   Graph_mI10dO000000sPppm1087->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1087->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1087->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1087->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1087->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1087->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1087->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1087);
   
   
   TF1 *quadLineFit1088 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1088->SetFillColor(19);
   quadLineFit1088->SetFillStyle(0);
   quadLineFit1088->SetLineColor(5);
   quadLineFit1088->SetLineWidth(2);
   quadLineFit1088->SetChisquare(0.03144407);
   quadLineFit1088->SetNDF(1);
   quadLineFit1088->GetXaxis()->SetLabelFont(42);
   quadLineFit1088->GetXaxis()->SetTitleOffset(1);
   quadLineFit1088->GetXaxis()->SetTitleFont(42);
   quadLineFit1088->GetYaxis()->SetLabelFont(42);
   quadLineFit1088->GetYaxis()->SetTitleFont(42);
   quadLineFit1088->SetParameter(0,-0.4905593);
   quadLineFit1088->SetParError(0,0.09440518);
   quadLineFit1088->SetParLimits(0,0,0);
   quadLineFit1088->SetParameter(1,0.019187);
   quadLineFit1088->SetParError(1,0.005223281);
   quadLineFit1088->SetParLimits(1,0,0);
   quadLineFit1088->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1088);
   gre->Draw("p ");
   
   TF1 *quadLineFit1089 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1089->SetFillColor(19);
   quadLineFit1089->SetFillStyle(0);
   quadLineFit1089->SetLineColor(5);
   quadLineFit1089->SetLineWidth(2);
   quadLineFit1089->SetChisquare(0.03144407);
   quadLineFit1089->SetNDF(1);
   quadLineFit1089->GetXaxis()->SetLabelFont(42);
   quadLineFit1089->GetXaxis()->SetTitleOffset(1);
   quadLineFit1089->GetXaxis()->SetTitleFont(42);
   quadLineFit1089->GetYaxis()->SetLabelFont(42);
   quadLineFit1089->GetYaxis()->SetTitleFont(42);
   quadLineFit1089->SetParameter(0,-0.4905593);
   quadLineFit1089->SetParError(0,0.09440518);
   quadLineFit1089->SetParLimits(0,0,0);
   quadLineFit1089->SetParameter(1,0.019187);
   quadLineFit1089->SetParError(1,0.005223281);
   quadLineFit1089->SetParLimits(1,0,0);
   quadLineFit1089->Draw("same");
   
   Double_t 0.000000 ppm_fx1089[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1089[3] = {
   0.5818482,
   0.537571,
   0.4757886};
   Double_t 0.000000 ppm_fex1089[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1089[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,0.000000 ppm_fx1089,0.000000 ppm_fy1089,0.000000 ppm_fex1089,0.000000 ppm_fey1089);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1089 = new TH1F("Graph_0dO000000sPppm1089","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1089->SetMinimum(0.4474542);
   Graph_0dO000000sPppm1089->SetMaximum(0.6101826);
   Graph_0dO000000sPppm1089->SetDirectory(0);
   Graph_0dO000000sPppm1089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1089->SetLineColor(ci);
   Graph_0dO000000sPppm1089->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1089->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1089->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1089->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1089->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1089->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1089->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1089);
   
   
   TF1 *quadLineFit1090 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1090->SetFillColor(19);
   quadLineFit1090->SetFillStyle(0);
   quadLineFit1090->SetLineColor(6);
   quadLineFit1090->SetLineWidth(2);
   quadLineFit1090->SetChisquare(0.2339923);
   quadLineFit1090->SetNDF(1);
   quadLineFit1090->GetXaxis()->SetLabelFont(42);
   quadLineFit1090->GetXaxis()->SetTitleOffset(1);
   quadLineFit1090->GetXaxis()->SetTitleFont(42);
   quadLineFit1090->GetYaxis()->SetLabelFont(42);
   quadLineFit1090->GetYaxis()->SetTitleFont(42);
   quadLineFit1090->SetParameter(0,1.009004);
   quadLineFit1090->SetParError(0,0.09440462);
   quadLineFit1090->SetParLimits(0,0,0);
   quadLineFit1090->SetParameter(1,-0.0265149);
   quadLineFit1090->SetParError(1,0.00522325);
   quadLineFit1090->SetParLimits(1,0,0);
   quadLineFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1090);
   gre->Draw("p ");
   
   TF1 *quadLineFit1091 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1091->SetFillColor(19);
   quadLineFit1091->SetFillStyle(0);
   quadLineFit1091->SetLineColor(6);
   quadLineFit1091->SetLineWidth(2);
   quadLineFit1091->SetChisquare(0.2339923);
   quadLineFit1091->SetNDF(1);
   quadLineFit1091->GetXaxis()->SetLabelFont(42);
   quadLineFit1091->GetXaxis()->SetTitleOffset(1);
   quadLineFit1091->GetXaxis()->SetTitleFont(42);
   quadLineFit1091->GetYaxis()->SetLabelFont(42);
   quadLineFit1091->GetYaxis()->SetTitleFont(42);
   quadLineFit1091->SetParameter(0,1.009004);
   quadLineFit1091->SetParError(0,0.09440462);
   quadLineFit1091->SetParLimits(0,0,0);
   quadLineFit1091->SetParameter(1,-0.0265149);
   quadLineFit1091->SetParError(1,0.00522325);
   quadLineFit1091->SetParLimits(1,0,0);
   quadLineFit1091->Draw("same");
   
   Double_t 10.000000 ppm_fx1091[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1091[3] = {
   1.358493,
   1.206283,
   1.096897};
   Double_t 10.000000 ppm_fex1091[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1091[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,10.000000 ppm_fx1091,10.000000 ppm_fy1091,10.000000 ppm_fex1091,10.000000 ppm_fey1091);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1091 = new TH1F("Graph_10dO000000sPppm1091","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1091->SetMinimum(1.053008);
   Graph_10dO000000sPppm1091->SetMaximum(1.402381);
   Graph_10dO000000sPppm1091->SetDirectory(0);
   Graph_10dO000000sPppm1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1091->SetLineColor(ci);
   Graph_10dO000000sPppm1091->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1091->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1091->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1091->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1091->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1091->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1091->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1091);
   
   
   TF1 *quadLineFit1092 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1092->SetFillColor(19);
   quadLineFit1092->SetFillStyle(0);
   quadLineFit1092->SetLineColor(7);
   quadLineFit1092->SetLineWidth(2);
   quadLineFit1092->SetChisquare(1.400291);
   quadLineFit1092->SetNDF(1);
   quadLineFit1092->GetXaxis()->SetLabelFont(42);
   quadLineFit1092->GetXaxis()->SetTitleOffset(1);
   quadLineFit1092->GetXaxis()->SetTitleFont(42);
   quadLineFit1092->GetYaxis()->SetLabelFont(42);
   quadLineFit1092->GetYaxis()->SetTitleFont(42);
   quadLineFit1092->SetParameter(0,2.39774);
   quadLineFit1092->SetParError(0,0.09440447);
   quadLineFit1092->SetParLimits(0,0,0);
   quadLineFit1092->SetParameter(1,-0.06539904);
   quadLineFit1092->SetParError(1,0.005223242);
   quadLineFit1092->SetParLimits(1,0,0);
   quadLineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1092);
   gre->Draw("p ");
   
   TF1 *quadLineFit1093 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1093->SetFillColor(19);
   quadLineFit1093->SetFillStyle(0);
   quadLineFit1093->SetLineColor(7);
   quadLineFit1093->SetLineWidth(2);
   quadLineFit1093->SetChisquare(1.400291);
   quadLineFit1093->SetNDF(1);
   quadLineFit1093->GetXaxis()->SetLabelFont(42);
   quadLineFit1093->GetXaxis()->SetTitleOffset(1);
   quadLineFit1093->GetXaxis()->SetTitleFont(42);
   quadLineFit1093->GetYaxis()->SetLabelFont(42);
   quadLineFit1093->GetYaxis()->SetTitleFont(42);
   quadLineFit1093->SetParameter(0,2.39774);
   quadLineFit1093->SetParError(0,0.09440447);
   quadLineFit1093->SetParLimits(0,0,0);
   quadLineFit1093->SetParameter(1,-0.06539904);
   quadLineFit1093->SetParError(1,0.005223242);
   quadLineFit1093->SetParLimits(1,0,0);
   quadLineFit1093->Draw("same");
   
   Double_t 20.000000 ppm_fx1093[3] = {
   16,
   18,
   20};
   Double_t 20.000000 ppm_fy1093[3] = {
   2.111561,
   1.867685,
   1.689714};
   Double_t 20.000000 ppm_fex1093[3] = {
   0,
   0,
   0};
   Double_t 20.000000 ppm_fey1093[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,20.000000 ppm_fx1093,20.000000 ppm_fy1093,20.000000 ppm_fex1093,20.000000 ppm_fey1093);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1093 = new TH1F("Graph_20dO000000sPppm1093","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1093->SetMinimum(1.629801);
   Graph_20dO000000sPppm1093->SetMaximum(2.171474);
   Graph_20dO000000sPppm1093->SetDirectory(0);
   Graph_20dO000000sPppm1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1093->SetLineColor(ci);
   Graph_20dO000000sPppm1093->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1093->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1093->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1093->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1093->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1093->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1093->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1093);
   
   
   TF1 *quadLineFit1094 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1094->SetFillColor(19);
   quadLineFit1094->SetFillStyle(0);
   quadLineFit1094->SetLineColor(8);
   quadLineFit1094->SetLineWidth(2);
   quadLineFit1094->SetChisquare(3.316678);
   quadLineFit1094->SetNDF(1);
   quadLineFit1094->GetXaxis()->SetLabelFont(42);
   quadLineFit1094->GetXaxis()->SetTitleOffset(1);
   quadLineFit1094->GetXaxis()->SetTitleFont(42);
   quadLineFit1094->GetYaxis()->SetLabelFont(42);
   quadLineFit1094->GetYaxis()->SetTitleFont(42);
   quadLineFit1094->SetParameter(0,3.787965);
   quadLineFit1094->SetParError(0,0.09441175);
   quadLineFit1094->SetParLimits(0,0,0);
   quadLineFit1094->SetParameter(1,-0.1054618);
   quadLineFit1094->SetParError(1,0.005223645);
   quadLineFit1094->SetParLimits(1,0,0);
   quadLineFit1094->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1094);
   gre->Draw("p ");
   
   TF1 *quadLineFit1095 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1095->SetFillColor(19);
   quadLineFit1095->SetFillStyle(0);
   quadLineFit1095->SetLineColor(8);
   quadLineFit1095->SetLineWidth(2);
   quadLineFit1095->SetChisquare(3.316678);
   quadLineFit1095->SetNDF(1);
   quadLineFit1095->GetXaxis()->SetLabelFont(42);
   quadLineFit1095->GetXaxis()->SetTitleOffset(1);
   quadLineFit1095->GetXaxis()->SetTitleFont(42);
   quadLineFit1095->GetYaxis()->SetLabelFont(42);
   quadLineFit1095->GetYaxis()->SetTitleFont(42);
   quadLineFit1095->SetParameter(0,3.787965);
   quadLineFit1095->SetParError(0,0.09441175);
   quadLineFit1095->SetParLimits(0,0,0);
   quadLineFit1095->SetParameter(1,-0.1054618);
   quadLineFit1095->SetParError(1,0.005223645);
   quadLineFit1095->SetParLimits(1,0,0);
   quadLineFit1095->Draw("same");
   
   Double_t 30.000000 ppm_fx1095[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1095[3] = {
   2.842176,
   2.543043,
   2.303244};
   Double_t 30.000000 ppm_fex1095[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1095[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,30.000000 ppm_fx1095,30.000000 ppm_fy1095,30.000000 ppm_fex1095,30.000000 ppm_fey1095);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1095 = new TH1F("Graph_30dO000000sPppm1095","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1095->SetMinimum(2.231623);
   Graph_30dO000000sPppm1095->SetMaximum(2.913798);
   Graph_30dO000000sPppm1095->SetDirectory(0);
   Graph_30dO000000sPppm1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1095->SetLineColor(ci);
   Graph_30dO000000sPppm1095->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1095->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1095->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1095->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1095->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1095->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1095->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1095);
   
   
   TF1 *quadLineFit1096 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1096->SetFillColor(19);
   quadLineFit1096->SetFillStyle(0);
   quadLineFit1096->SetLineColor(9);
   quadLineFit1096->SetLineWidth(2);
   quadLineFit1096->SetChisquare(2.688403);
   quadLineFit1096->SetNDF(1);
   quadLineFit1096->GetXaxis()->SetLabelFont(42);
   quadLineFit1096->GetXaxis()->SetTitleOffset(1);
   quadLineFit1096->GetXaxis()->SetTitleFont(42);
   quadLineFit1096->GetYaxis()->SetLabelFont(42);
   quadLineFit1096->GetYaxis()->SetTitleFont(42);
   quadLineFit1096->SetParameter(0,4.988013);
   quadLineFit1096->SetParError(0,0.094412);
   quadLineFit1096->SetParLimits(0,0,0);
   quadLineFit1096->SetParameter(1,-0.1347329);
   quadLineFit1096->SetParError(1,0.005223662);
   quadLineFit1096->SetParLimits(1,0,0);
   quadLineFit1096->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1096);
   gre->Draw("p ");
   
   TF1 *quadLineFit1097 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1097->SetFillColor(19);
   quadLineFit1097->SetFillStyle(0);
   quadLineFit1097->SetLineColor(9);
   quadLineFit1097->SetLineWidth(2);
   quadLineFit1097->SetChisquare(2.688403);
   quadLineFit1097->SetNDF(1);
   quadLineFit1097->GetXaxis()->SetLabelFont(42);
   quadLineFit1097->GetXaxis()->SetTitleOffset(1);
   quadLineFit1097->GetXaxis()->SetTitleFont(42);
   quadLineFit1097->GetYaxis()->SetLabelFont(42);
   quadLineFit1097->GetYaxis()->SetTitleFont(42);
   quadLineFit1097->SetParameter(0,4.988013);
   quadLineFit1097->SetParError(0,0.094412);
   quadLineFit1097->SetParLimits(0,0,0);
   quadLineFit1097->SetParameter(1,-0.1347329);
   quadLineFit1097->SetParError(1,0.005223662);
   quadLineFit1097->SetParLimits(1,0,0);
   quadLineFit1097->Draw("same");
   
   Double_t 40.000000 ppm_fx1097[3] = {
   16,
   18,
   20};
   Double_t 40.000000 ppm_fy1097[3] = {
   3.595794,
   3.228488,
   2.887915};
   Double_t 40.000000 ppm_fex1097[3] = {
   0,
   0,
   0};
   Double_t 40.000000 ppm_fey1097[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,40.000000 ppm_fx1097,40.000000 ppm_fy1097,40.000000 ppm_fex1097,40.000000 ppm_fey1097);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1097 = new TH1F("Graph_40dO000000sPppm1097","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1097->SetMinimum(2.799399);
   Graph_40dO000000sPppm1097->SetMaximum(3.684311);
   Graph_40dO000000sPppm1097->SetDirectory(0);
   Graph_40dO000000sPppm1097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1097->SetLineColor(ci);
   Graph_40dO000000sPppm1097->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1097->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1097->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1097->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1097->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1097->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1097->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1097);
   
   
   TF1 *quadLineFit1098 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1098->SetFillColor(19);
   quadLineFit1098->SetFillStyle(0);
   quadLineFit1098->SetLineColor(10);
   quadLineFit1098->SetLineWidth(2);
   quadLineFit1098->SetChisquare(0.5457733);
   quadLineFit1098->SetNDF(1);
   quadLineFit1098->GetXaxis()->SetLabelFont(42);
   quadLineFit1098->GetXaxis()->SetTitleOffset(1);
   quadLineFit1098->GetXaxis()->SetTitleFont(42);
   quadLineFit1098->GetYaxis()->SetLabelFont(42);
   quadLineFit1098->GetYaxis()->SetTitleFont(42);
   quadLineFit1098->SetParameter(0,6.422856);
   quadLineFit1098->SetParError(0,0.09440436);
   quadLineFit1098->SetParLimits(0,0,0);
   quadLineFit1098->SetParameter(1,-0.1769699);
   quadLineFit1098->SetParError(1,0.005223235);
   quadLineFit1098->SetParLimits(1,0,0);
   quadLineFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1098);
   gre->Draw("p ");
   
   TF1 *quadLineFit1099 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1099->SetFillColor(19);
   quadLineFit1099->SetFillStyle(0);
   quadLineFit1099->SetLineColor(10);
   quadLineFit1099->SetLineWidth(2);
   quadLineFit1099->SetChisquare(0.5457733);
   quadLineFit1099->SetNDF(1);
   quadLineFit1099->GetXaxis()->SetLabelFont(42);
   quadLineFit1099->GetXaxis()->SetTitleOffset(1);
   quadLineFit1099->GetXaxis()->SetTitleFont(42);
   quadLineFit1099->GetYaxis()->SetLabelFont(42);
   quadLineFit1099->GetYaxis()->SetTitleFont(42);
   quadLineFit1099->SetParameter(0,6.422856);
   quadLineFit1099->SetParError(0,0.09440436);
   quadLineFit1099->SetParLimits(0,0,0);
   quadLineFit1099->SetParameter(1,-0.1769699);
   quadLineFit1099->SetParError(1,0.005223235);
   quadLineFit1099->SetParLimits(1,0,0);
   quadLineFit1099->Draw("same");
   
   Double_t 50.000000 ppm_fx1099[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1099[3] = {
   4.364851,
   3.886671,
   3.489412};
   Double_t 50.000000 ppm_fex1099[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1099[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,50.000000 ppm_fx1099,50.000000 ppm_fy1099,50.000000 ppm_fex1099,50.000000 ppm_fey1099);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1099 = new TH1F("Graph_50dO000000sPppm1099","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1099->SetMinimum(3.38414);
   Graph_50dO000000sPppm1099->SetMaximum(4.470123);
   Graph_50dO000000sPppm1099->SetDirectory(0);
   Graph_50dO000000sPppm1099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1099->SetLineColor(ci);
   Graph_50dO000000sPppm1099->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1099->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1099->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1099->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1099->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1099->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1099->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1099);
   
   
   TF1 *quadLineFit1100 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1100->SetFillColor(19);
   quadLineFit1100->SetFillStyle(0);
   quadLineFit1100->SetLineColor(11);
   quadLineFit1100->SetLineWidth(2);
   quadLineFit1100->SetChisquare(5.000227);
   quadLineFit1100->SetNDF(1);
   quadLineFit1100->GetXaxis()->SetLabelFont(42);
   quadLineFit1100->GetXaxis()->SetTitleOffset(1);
   quadLineFit1100->GetXaxis()->SetTitleFont(42);
   quadLineFit1100->GetYaxis()->SetLabelFont(42);
   quadLineFit1100->GetYaxis()->SetTitleFont(42);
   quadLineFit1100->SetParameter(0,7.853116);
   quadLineFit1100->SetParError(0,0.09439418);
   quadLineFit1100->SetParLimits(0,0,0);
   quadLineFit1100->SetParameter(1,-0.2188595);
   quadLineFit1100->SetParError(1,0.005222678);
   quadLineFit1100->SetParLimits(1,0,0);
   quadLineFit1100->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1100);
   gre->Draw("p ");
   
   TF1 *quadLineFit1101 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1101->SetFillColor(19);
   quadLineFit1101->SetFillStyle(0);
   quadLineFit1101->SetLineColor(11);
   quadLineFit1101->SetLineWidth(2);
   quadLineFit1101->SetChisquare(5.000227);
   quadLineFit1101->SetNDF(1);
   quadLineFit1101->GetXaxis()->SetLabelFont(42);
   quadLineFit1101->GetXaxis()->SetTitleOffset(1);
   quadLineFit1101->GetXaxis()->SetTitleFont(42);
   quadLineFit1101->GetYaxis()->SetLabelFont(42);
   quadLineFit1101->GetYaxis()->SetTitleFont(42);
   quadLineFit1101->SetParameter(0,7.853116);
   quadLineFit1101->SetParError(0,0.09439418);
   quadLineFit1101->SetParLimits(0,0,0);
   quadLineFit1101->SetParameter(1,-0.2188595);
   quadLineFit1101->SetParError(1,0.005222678);
   quadLineFit1101->SetParLimits(1,0,0);
   quadLineFit1101->Draw("same");
   
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
