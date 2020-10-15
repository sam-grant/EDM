void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1105[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1105[3] = {
   -3.169237,
   -2.809302,
   -2.502273};
   Double_t -50.000000 ppm_fex1105[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1105[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1105,-50.000000 ppm_fy1105,-50.000000 ppm_fex1105,-50.000000 ppm_fey1105);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1105 = new TH1F("Graph_mI50dO000000sPppm1105","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1105->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1105->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1105->SetDirectory(0);
   Graph_mI50dO000000sPppm1105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1105->SetLineColor(ci);
   Graph_mI50dO000000sPppm1105->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1105->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1105->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1105->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1105->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1105->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1105->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1105->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1105->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1105->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1105->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1105->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1105->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1105->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1105->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1105);
   
   
   TF1 *quadLineFit1106 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1106->SetFillColor(19);
   quadLineFit1106->SetFillStyle(0);
   quadLineFit1106->SetLineWidth(2);
   quadLineFit1106->SetChisquare(2.67591);
   quadLineFit1106->SetNDF(1);
   quadLineFit1106->GetXaxis()->SetLabelFont(42);
   quadLineFit1106->GetXaxis()->SetTitleOffset(1);
   quadLineFit1106->GetXaxis()->SetTitleFont(42);
   quadLineFit1106->GetYaxis()->SetLabelFont(42);
   quadLineFit1106->GetYaxis()->SetTitleFont(42);
   quadLineFit1106->SetParameter(0,-5.828272);
   quadLineFit1106->SetParError(0,0.08428648);
   quadLineFit1106->SetParLimits(0,0,0);
   quadLineFit1106->SetParameter(1,0.1667408);
   quadLineFit1106->SetParError(1,0.004663392);
   quadLineFit1106->SetParLimits(1,0,0);
   quadLineFit1106->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1106);
   gre->Draw("ap");
   
   TF1 *quadLineFit1107 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1107->SetFillColor(19);
   quadLineFit1107->SetFillStyle(0);
   quadLineFit1107->SetLineWidth(2);
   quadLineFit1107->SetChisquare(2.67591);
   quadLineFit1107->SetNDF(1);
   quadLineFit1107->GetXaxis()->SetLabelFont(42);
   quadLineFit1107->GetXaxis()->SetTitleOffset(1);
   quadLineFit1107->GetXaxis()->SetTitleFont(42);
   quadLineFit1107->GetYaxis()->SetLabelFont(42);
   quadLineFit1107->GetYaxis()->SetTitleFont(42);
   quadLineFit1107->SetParameter(0,-5.828272);
   quadLineFit1107->SetParError(0,0.08428648);
   quadLineFit1107->SetParLimits(0,0,0);
   quadLineFit1107->SetParameter(1,0.1667408);
   quadLineFit1107->SetParError(1,0.004663392);
   quadLineFit1107->SetParLimits(1,0,0);
   quadLineFit1107->Draw("same");
   
   Double_t -40.000000 ppm_fx1107[3] = {
   16,
   18,
   20};
   Double_t -40.000000 ppm_fy1107[3] = {
   -2.428979,
   -2.1254,
   -1.955713};
   Double_t -40.000000 ppm_fex1107[3] = {
   0,
   0,
   0};
   Double_t -40.000000 ppm_fey1107[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,-40.000000 ppm_fx1107,-40.000000 ppm_fy1107,-40.000000 ppm_fex1107,-40.000000 ppm_fey1107);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1107 = new TH1F("Graph_mI40dO000000sPppm1107","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1107->SetMinimum(-2.49215);
   Graph_mI40dO000000sPppm1107->SetMaximum(-1.892542);
   Graph_mI40dO000000sPppm1107->SetDirectory(0);
   Graph_mI40dO000000sPppm1107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1107->SetLineColor(ci);
   Graph_mI40dO000000sPppm1107->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1107->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1107->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1107->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1107->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1107->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1107->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1107);
   
   
   TF1 *quadLineFit1108 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1108->SetFillColor(19);
   quadLineFit1108->SetFillStyle(0);
   quadLineFit1108->SetLineColor(2);
   quadLineFit1108->SetLineWidth(2);
   quadLineFit1108->SetChisquare(17.13851);
   quadLineFit1108->SetNDF(1);
   quadLineFit1108->GetXaxis()->SetLabelFont(42);
   quadLineFit1108->GetXaxis()->SetTitleOffset(1);
   quadLineFit1108->GetXaxis()->SetTitleFont(42);
   quadLineFit1108->GetYaxis()->SetLabelFont(42);
   quadLineFit1108->GetYaxis()->SetTitleFont(42);
   quadLineFit1108->SetParameter(0,-4.299729);
   quadLineFit1108->SetParError(0,0.08436981);
   quadLineFit1108->SetParLimits(0,0,0);
   quadLineFit1108->SetParameter(1,0.1183166);
   quadLineFit1108->SetParError(1,0.00466804);
   quadLineFit1108->SetParLimits(1,0,0);
   quadLineFit1108->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1108);
   gre->Draw("p ");
   
   TF1 *quadLineFit1109 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1109->SetFillColor(19);
   quadLineFit1109->SetFillStyle(0);
   quadLineFit1109->SetLineColor(2);
   quadLineFit1109->SetLineWidth(2);
   quadLineFit1109->SetChisquare(17.13851);
   quadLineFit1109->SetNDF(1);
   quadLineFit1109->GetXaxis()->SetLabelFont(42);
   quadLineFit1109->GetXaxis()->SetTitleOffset(1);
   quadLineFit1109->GetXaxis()->SetTitleFont(42);
   quadLineFit1109->GetYaxis()->SetLabelFont(42);
   quadLineFit1109->GetYaxis()->SetTitleFont(42);
   quadLineFit1109->SetParameter(0,-4.299729);
   quadLineFit1109->SetParError(0,0.08436981);
   quadLineFit1109->SetParLimits(0,0,0);
   quadLineFit1109->SetParameter(1,0.1183166);
   quadLineFit1109->SetParError(1,0.00466804);
   quadLineFit1109->SetParLimits(1,0,0);
   quadLineFit1109->Draw("same");
   
   Double_t -30.000000 ppm_fx1109[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1109[3] = {
   -1.642632,
   -1.49659,
   -1.337193};
   Double_t -30.000000 ppm_fex1109[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1109[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1109,-30.000000 ppm_fy1109,-30.000000 ppm_fex1109,-30.000000 ppm_fey1109);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1109 = new TH1F("Graph_mI30dO000000sPppm1109","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1109->SetMinimum(-1.689021);
   Graph_mI30dO000000sPppm1109->SetMaximum(-1.290805);
   Graph_mI30dO000000sPppm1109->SetDirectory(0);
   Graph_mI30dO000000sPppm1109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1109->SetLineColor(ci);
   Graph_mI30dO000000sPppm1109->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1109->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1109->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1109->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1109->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1109->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1109->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1109);
   
   
   TF1 *quadLineFit1110 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1110->SetFillColor(19);
   quadLineFit1110->SetFillStyle(0);
   quadLineFit1110->SetLineColor(3);
   quadLineFit1110->SetLineWidth(2);
   quadLineFit1110->SetChisquare(0.1705021);
   quadLineFit1110->SetNDF(1);
   quadLineFit1110->GetXaxis()->SetLabelFont(42);
   quadLineFit1110->GetXaxis()->SetTitleOffset(1);
   quadLineFit1110->GetXaxis()->SetTitleFont(42);
   quadLineFit1110->GetYaxis()->SetLabelFont(42);
   quadLineFit1110->GetYaxis()->SetTitleFont(42);
   quadLineFit1110->SetParameter(0,-2.866616);
   quadLineFit1110->SetParError(0,0.08437075);
   quadLineFit1110->SetParLimits(0,0,0);
   quadLineFit1110->SetParameter(1,0.07635985);
   quadLineFit1110->SetParError(1,0.004668093);
   quadLineFit1110->SetParLimits(1,0,0);
   quadLineFit1110->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1110);
   gre->Draw("p ");
   
   TF1 *quadLineFit1111 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1111->SetFillColor(19);
   quadLineFit1111->SetFillStyle(0);
   quadLineFit1111->SetLineColor(3);
   quadLineFit1111->SetLineWidth(2);
   quadLineFit1111->SetChisquare(0.1705021);
   quadLineFit1111->SetNDF(1);
   quadLineFit1111->GetXaxis()->SetLabelFont(42);
   quadLineFit1111->GetXaxis()->SetTitleOffset(1);
   quadLineFit1111->GetXaxis()->SetTitleFont(42);
   quadLineFit1111->GetYaxis()->SetLabelFont(42);
   quadLineFit1111->GetYaxis()->SetTitleFont(42);
   quadLineFit1111->SetParameter(0,-2.866616);
   quadLineFit1111->SetParError(0,0.08437075);
   quadLineFit1111->SetParLimits(0,0,0);
   quadLineFit1111->SetParameter(1,0.07635985);
   quadLineFit1111->SetParError(1,0.004668093);
   quadLineFit1111->SetParLimits(1,0,0);
   quadLineFit1111->Draw("same");
   
   Double_t -20.000000 ppm_fx1111[3] = {
   16,
   18,
   20};
   Double_t -20.000000 ppm_fy1111[3] = {
   -0.8922081,
   -0.8023919,
   -0.7323909};
   Double_t -20.000000 ppm_fex1111[3] = {
   0,
   0,
   0};
   Double_t -20.000000 ppm_fey1111[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,-20.000000 ppm_fx1111,-20.000000 ppm_fy1111,-20.000000 ppm_fex1111,-20.000000 ppm_fey1111);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1111 = new TH1F("Graph_mI20dO000000sPppm1111","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1111->SetMinimum(-0.924034);
   Graph_mI20dO000000sPppm1111->SetMaximum(-0.7005649);
   Graph_mI20dO000000sPppm1111->SetDirectory(0);
   Graph_mI20dO000000sPppm1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1111->SetLineColor(ci);
   Graph_mI20dO000000sPppm1111->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1111->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1111->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1111->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1111->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1111->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1111->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1111);
   
   
   TF1 *quadLineFit1112 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1112->SetFillColor(19);
   quadLineFit1112->SetFillStyle(0);
   quadLineFit1112->SetLineColor(4);
   quadLineFit1112->SetLineWidth(2);
   quadLineFit1112->SetChisquare(0.3753797);
   quadLineFit1112->SetNDF(1);
   quadLineFit1112->GetXaxis()->SetLabelFont(42);
   quadLineFit1112->GetXaxis()->SetTitleOffset(1);
   quadLineFit1112->GetXaxis()->SetTitleFont(42);
   quadLineFit1112->GetYaxis()->SetLabelFont(42);
   quadLineFit1112->GetYaxis()->SetTitleFont(42);
   quadLineFit1112->SetParameter(0,-1.528175);
   quadLineFit1112->SetParError(0,0.08437325);
   quadLineFit1112->SetParLimits(0,0,0);
   quadLineFit1112->SetParameter(1,0.03995432);
   quadLineFit1112->SetParError(1,0.004668232);
   quadLineFit1112->SetParLimits(1,0,0);
   quadLineFit1112->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1112);
   gre->Draw("p ");
   
   TF1 *quadLineFit1113 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1113->SetFillColor(19);
   quadLineFit1113->SetFillStyle(0);
   quadLineFit1113->SetLineColor(4);
   quadLineFit1113->SetLineWidth(2);
   quadLineFit1113->SetChisquare(0.3753797);
   quadLineFit1113->SetNDF(1);
   quadLineFit1113->GetXaxis()->SetLabelFont(42);
   quadLineFit1113->GetXaxis()->SetTitleOffset(1);
   quadLineFit1113->GetXaxis()->SetTitleFont(42);
   quadLineFit1113->GetYaxis()->SetLabelFont(42);
   quadLineFit1113->GetYaxis()->SetTitleFont(42);
   quadLineFit1113->SetParameter(0,-1.528175);
   quadLineFit1113->SetParError(0,0.08437325);
   quadLineFit1113->SetParLimits(0,0,0);
   quadLineFit1113->SetParameter(1,0.03995432);
   quadLineFit1113->SetParError(1,0.004668232);
   quadLineFit1113->SetParLimits(1,0,0);
   quadLineFit1113->Draw("same");
   
   Double_t -10.000000 ppm_fx1113[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1113[3] = {
   -0.1430155,
   -0.1038901,
   -0.1262988};
   Double_t -10.000000 ppm_fex1113[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1113[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1113,-10.000000 ppm_fy1113,-10.000000 ppm_fex1113,-10.000000 ppm_fey1113);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1113 = new TH1F("Graph_mI10dO000000sPppm1113","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1113->SetMinimum(-0.1627722);
   Graph_mI10dO000000sPppm1113->SetMaximum(-0.0841334);
   Graph_mI10dO000000sPppm1113->SetDirectory(0);
   Graph_mI10dO000000sPppm1113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1113->SetLineColor(ci);
   Graph_mI10dO000000sPppm1113->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1113->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1113->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1113->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1113->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1113->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1113->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1113);
   
   
   TF1 *quadLineFit1114 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1114->SetFillColor(19);
   quadLineFit1114->SetFillStyle(0);
   quadLineFit1114->SetLineColor(5);
   quadLineFit1114->SetLineWidth(2);
   quadLineFit1114->SetChisquare(3.619949);
   quadLineFit1114->SetNDF(1);
   quadLineFit1114->GetXaxis()->SetLabelFont(42);
   quadLineFit1114->GetXaxis()->SetTitleOffset(1);
   quadLineFit1114->GetXaxis()->SetTitleFont(42);
   quadLineFit1114->GetYaxis()->SetLabelFont(42);
   quadLineFit1114->GetYaxis()->SetTitleFont(42);
   quadLineFit1114->SetParameter(0,-0.1996268);
   quadLineFit1114->SetParError(0,0.0843715);
   quadLineFit1114->SetParLimits(0,0,0);
   quadLineFit1114->SetParameter(1,0.004179186);
   quadLineFit1114->SetParError(1,0.004668134);
   quadLineFit1114->SetParLimits(1,0,0);
   quadLineFit1114->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1114);
   gre->Draw("p ");
   
   TF1 *quadLineFit1115 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1115->SetFillColor(19);
   quadLineFit1115->SetFillStyle(0);
   quadLineFit1115->SetLineColor(5);
   quadLineFit1115->SetLineWidth(2);
   quadLineFit1115->SetChisquare(3.619949);
   quadLineFit1115->SetNDF(1);
   quadLineFit1115->GetXaxis()->SetLabelFont(42);
   quadLineFit1115->GetXaxis()->SetTitleOffset(1);
   quadLineFit1115->GetXaxis()->SetTitleFont(42);
   quadLineFit1115->GetYaxis()->SetLabelFont(42);
   quadLineFit1115->GetYaxis()->SetTitleFont(42);
   quadLineFit1115->SetParameter(0,-0.1996268);
   quadLineFit1115->SetParError(0,0.0843715);
   quadLineFit1115->SetParLimits(0,0,0);
   quadLineFit1115->SetParameter(1,0.004179186);
   quadLineFit1115->SetParError(1,0.004668134);
   quadLineFit1115->SetParLimits(1,0,0);
   quadLineFit1115->Draw("same");
   
   Double_t 0.000000 ppm_fx1115[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1115[3] = {
   0.5796398,
   0.5186813,
   0.4746944};
   Double_t 0.000000 ppm_fex1115[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1115[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,0.000000 ppm_fx1115,0.000000 ppm_fy1115,0.000000 ppm_fex1115,0.000000 ppm_fey1115);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1115 = new TH1F("Graph_0dO000000sPppm1115","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1115->SetMinimum(0.4483557);
   Graph_0dO000000sPppm1115->SetMaximum(0.6059785);
   Graph_0dO000000sPppm1115->SetDirectory(0);
   Graph_0dO000000sPppm1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1115->SetLineColor(ci);
   Graph_0dO000000sPppm1115->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1115->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1115->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1115->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1115->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1115->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1115->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1115);
   
   
   TF1 *quadLineFit1116 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1116->SetFillColor(19);
   quadLineFit1116->SetFillStyle(0);
   quadLineFit1116->SetLineColor(6);
   quadLineFit1116->SetLineWidth(2);
   quadLineFit1116->SetChisquare(0.2753706);
   quadLineFit1116->SetNDF(1);
   quadLineFit1116->GetXaxis()->SetLabelFont(42);
   quadLineFit1116->GetXaxis()->SetTitleOffset(1);
   quadLineFit1116->GetXaxis()->SetTitleFont(42);
   quadLineFit1116->GetYaxis()->SetLabelFont(42);
   quadLineFit1116->GetYaxis()->SetTitleFont(42);
   quadLineFit1116->SetParameter(0,0.9965927);
   quadLineFit1116->SetParError(0,0.0843708);
   quadLineFit1116->SetParLimits(0,0,0);
   quadLineFit1116->SetParameter(1,-0.02623634);
   quadLineFit1116->SetParError(1,0.004668096);
   quadLineFit1116->SetParLimits(1,0,0);
   quadLineFit1116->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1116);
   gre->Draw("p ");
   
   TF1 *quadLineFit1117 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1117->SetFillColor(19);
   quadLineFit1117->SetFillStyle(0);
   quadLineFit1117->SetLineColor(6);
   quadLineFit1117->SetLineWidth(2);
   quadLineFit1117->SetChisquare(0.2753706);
   quadLineFit1117->SetNDF(1);
   quadLineFit1117->GetXaxis()->SetLabelFont(42);
   quadLineFit1117->GetXaxis()->SetTitleOffset(1);
   quadLineFit1117->GetXaxis()->SetTitleFont(42);
   quadLineFit1117->GetYaxis()->SetLabelFont(42);
   quadLineFit1117->GetYaxis()->SetTitleFont(42);
   quadLineFit1117->SetParameter(0,0.9965927);
   quadLineFit1117->SetParError(0,0.0843708);
   quadLineFit1117->SetParLimits(0,0,0);
   quadLineFit1117->SetParameter(1,-0.02623634);
   quadLineFit1117->SetParError(1,0.004668096);
   quadLineFit1117->SetParLimits(1,0,0);
   quadLineFit1117->Draw("same");
   
   Double_t 10.000000 ppm_fx1117[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1117[3] = {
   1.343729,
   1.182062,
   1.09106};
   Double_t 10.000000 ppm_fex1117[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1117[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,10.000000 ppm_fx1117,10.000000 ppm_fy1117,10.000000 ppm_fex1117,10.000000 ppm_fey1117);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1117 = new TH1F("Graph_10dO000000sPppm1117","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1117->SetMinimum(1.049949);
   Graph_10dO000000sPppm1117->SetMaximum(1.38484);
   Graph_10dO000000sPppm1117->SetDirectory(0);
   Graph_10dO000000sPppm1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1117->SetLineColor(ci);
   Graph_10dO000000sPppm1117->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1117->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1117->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1117->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1117->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1117->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1117->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1117);
   
   
   TF1 *quadLineFit1118 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1118->SetFillColor(19);
   quadLineFit1118->SetFillStyle(0);
   quadLineFit1118->SetLineColor(7);
   quadLineFit1118->SetLineWidth(2);
   quadLineFit1118->SetChisquare(4.774008);
   quadLineFit1118->SetNDF(1);
   quadLineFit1118->GetXaxis()->SetLabelFont(42);
   quadLineFit1118->GetXaxis()->SetTitleOffset(1);
   quadLineFit1118->GetXaxis()->SetTitleFont(42);
   quadLineFit1118->GetYaxis()->SetLabelFont(42);
   quadLineFit1118->GetYaxis()->SetTitleFont(42);
   quadLineFit1118->SetParameter(0,2.34263);
   quadLineFit1118->SetParError(0,0.08444082);
   quadLineFit1118->SetParLimits(0,0,0);
   quadLineFit1118->SetParameter(1,-0.06316736);
   quadLineFit1118->SetParError(1,0.004672001);
   quadLineFit1118->SetParLimits(1,0,0);
   quadLineFit1118->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1118);
   gre->Draw("p ");
   
   TF1 *quadLineFit1119 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1119->SetFillColor(19);
   quadLineFit1119->SetFillStyle(0);
   quadLineFit1119->SetLineColor(7);
   quadLineFit1119->SetLineWidth(2);
   quadLineFit1119->SetChisquare(4.774008);
   quadLineFit1119->SetNDF(1);
   quadLineFit1119->GetXaxis()->SetLabelFont(42);
   quadLineFit1119->GetXaxis()->SetTitleOffset(1);
   quadLineFit1119->GetXaxis()->SetTitleFont(42);
   quadLineFit1119->GetYaxis()->SetLabelFont(42);
   quadLineFit1119->GetYaxis()->SetTitleFont(42);
   quadLineFit1119->SetParameter(0,2.34263);
   quadLineFit1119->SetParError(0,0.08444082);
   quadLineFit1119->SetParLimits(0,0,0);
   quadLineFit1119->SetParameter(1,-0.06316736);
   quadLineFit1119->SetParError(1,0.004672001);
   quadLineFit1119->SetParLimits(1,0,0);
   quadLineFit1119->Draw("same");
   
   Double_t 20.000000 ppm_fx1119[3] = {
   16,
   18,
   20};
   Double_t 20.000000 ppm_fy1119[3] = {
   2.099531,
   1.894135,
   1.676991};
   Double_t 20.000000 ppm_fex1119[3] = {
   0,
   0,
   0};
   Double_t 20.000000 ppm_fey1119[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,20.000000 ppm_fx1119,20.000000 ppm_fy1119,20.000000 ppm_fex1119,20.000000 ppm_fey1119);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1119 = new TH1F("Graph_20dO000000sPppm1119","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1119->SetMinimum(1.618893);
   Graph_20dO000000sPppm1119->SetMaximum(2.157629);
   Graph_20dO000000sPppm1119->SetDirectory(0);
   Graph_20dO000000sPppm1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1119->SetLineColor(ci);
   Graph_20dO000000sPppm1119->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1119->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1119->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1119->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1119->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1119->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1119->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1119);
   
   
   TF1 *quadLineFit1120 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1120->SetFillColor(19);
   quadLineFit1120->SetFillStyle(0);
   quadLineFit1120->SetLineColor(8);
   quadLineFit1120->SetLineWidth(2);
   quadLineFit1120->SetChisquare(0.131941);
   quadLineFit1120->SetNDF(1);
   quadLineFit1120->GetXaxis()->SetLabelFont(42);
   quadLineFit1120->GetXaxis()->SetTitleOffset(1);
   quadLineFit1120->GetXaxis()->SetTitleFont(42);
   quadLineFit1120->GetYaxis()->SetLabelFont(42);
   quadLineFit1120->GetYaxis()->SetTitleFont(42);
   quadLineFit1120->SetParameter(0,3.791649);
   quadLineFit1120->SetParError(0,0.08437164);
   quadLineFit1120->SetParLimits(0,0,0);
   quadLineFit1120->SetParameter(1,-0.105635);
   quadLineFit1120->SetParError(1,0.004668142);
   quadLineFit1120->SetParLimits(1,0,0);
   quadLineFit1120->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1120);
   gre->Draw("p ");
   
   TF1 *quadLineFit1121 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1121->SetFillColor(19);
   quadLineFit1121->SetFillStyle(0);
   quadLineFit1121->SetLineColor(8);
   quadLineFit1121->SetLineWidth(2);
   quadLineFit1121->SetChisquare(0.131941);
   quadLineFit1121->SetNDF(1);
   quadLineFit1121->GetXaxis()->SetLabelFont(42);
   quadLineFit1121->GetXaxis()->SetTitleOffset(1);
   quadLineFit1121->GetXaxis()->SetTitleFont(42);
   quadLineFit1121->GetYaxis()->SetLabelFont(42);
   quadLineFit1121->GetYaxis()->SetTitleFont(42);
   quadLineFit1121->SetParameter(0,3.791649);
   quadLineFit1121->SetParError(0,0.08437164);
   quadLineFit1121->SetParLimits(0,0,0);
   quadLineFit1121->SetParameter(1,-0.105635);
   quadLineFit1121->SetParError(1,0.004668142);
   quadLineFit1121->SetParLimits(1,0,0);
   quadLineFit1121->Draw("same");
   
   Double_t 30.000000 ppm_fx1121[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1121[3] = {
   2.891931,
   2.571011,
   2.282619};
   Double_t 30.000000 ppm_fex1121[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1121[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,30.000000 ppm_fx1121,30.000000 ppm_fy1121,30.000000 ppm_fex1121,30.000000 ppm_fey1121);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1121 = new TH1F("Graph_30dO000000sPppm1121","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1121->SetMinimum(2.205844);
   Graph_30dO000000sPppm1121->SetMaximum(2.968707);
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
   
   
   TF1 *quadLineFit1122 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1122->SetFillColor(19);
   quadLineFit1122->SetFillStyle(0);
   quadLineFit1122->SetLineColor(9);
   quadLineFit1122->SetLineWidth(2);
   quadLineFit1122->SetChisquare(1.011552);
   quadLineFit1122->SetNDF(1);
   quadLineFit1122->GetXaxis()->SetLabelFont(42);
   quadLineFit1122->GetXaxis()->SetTitleOffset(1);
   quadLineFit1122->GetXaxis()->SetTitleFont(42);
   quadLineFit1122->GetYaxis()->SetLabelFont(42);
   quadLineFit1122->GetYaxis()->SetTitleFont(42);
   quadLineFit1122->SetParameter(0,5.323757);
   quadLineFit1122->SetParError(0,0.08436908);
   quadLineFit1122->SetParLimits(0,0,0);
   quadLineFit1122->SetParameter(1,-0.152328);
   quadLineFit1122->SetParError(1,0.004668);
   quadLineFit1122->SetParLimits(1,0,0);
   quadLineFit1122->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1122);
   gre->Draw("p ");
   
   TF1 *quadLineFit1123 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1123->SetFillColor(19);
   quadLineFit1123->SetFillStyle(0);
   quadLineFit1123->SetLineColor(9);
   quadLineFit1123->SetLineWidth(2);
   quadLineFit1123->SetChisquare(1.011552);
   quadLineFit1123->SetNDF(1);
   quadLineFit1123->GetXaxis()->SetLabelFont(42);
   quadLineFit1123->GetXaxis()->SetTitleOffset(1);
   quadLineFit1123->GetXaxis()->SetTitleFont(42);
   quadLineFit1123->GetYaxis()->SetLabelFont(42);
   quadLineFit1123->GetYaxis()->SetTitleFont(42);
   quadLineFit1123->SetParameter(0,5.323757);
   quadLineFit1123->SetParError(0,0.08436908);
   quadLineFit1123->SetParLimits(0,0,0);
   quadLineFit1123->SetParameter(1,-0.152328);
   quadLineFit1123->SetParError(1,0.004668);
   quadLineFit1123->SetParLimits(1,0,0);
   quadLineFit1123->Draw("same");
   
   Double_t 40.000000 ppm_fx1123[3] = {
   16,
   18,
   20};
   Double_t 40.000000 ppm_fy1123[3] = {
   3.604393,
   3.219909,
   2.879766};
   Double_t 40.000000 ppm_fex1123[3] = {
   0,
   0,
   0};
   Double_t 40.000000 ppm_fey1123[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,40.000000 ppm_fx1123,40.000000 ppm_fy1123,40.000000 ppm_fex1123,40.000000 ppm_fey1123);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1123 = new TH1F("Graph_40dO000000sPppm1123","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1123->SetMinimum(2.791459);
   Graph_40dO000000sPppm1123->SetMaximum(3.6927);
   Graph_40dO000000sPppm1123->SetDirectory(0);
   Graph_40dO000000sPppm1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1123->SetLineColor(ci);
   Graph_40dO000000sPppm1123->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1123->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1123->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1123->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1123->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1123->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1123->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1123);
   
   
   TF1 *quadLineFit1124 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1124->SetFillColor(19);
   quadLineFit1124->SetFillStyle(0);
   quadLineFit1124->SetLineColor(10);
   quadLineFit1124->SetLineWidth(2);
   quadLineFit1124->SetChisquare(1.879719);
   quadLineFit1124->SetNDF(1);
   quadLineFit1124->GetXaxis()->SetLabelFont(42);
   quadLineFit1124->GetXaxis()->SetTitleOffset(1);
   quadLineFit1124->GetXaxis()->SetTitleFont(42);
   quadLineFit1124->GetYaxis()->SetLabelFont(42);
   quadLineFit1124->GetYaxis()->SetTitleFont(42);
   quadLineFit1124->SetParameter(0,6.495514);
   quadLineFit1124->SetParError(0,0.0843738);
   quadLineFit1124->SetParLimits(0,0,0);
   quadLineFit1124->SetParameter(1,-0.1811569);
   quadLineFit1124->SetParError(1,0.004668262);
   quadLineFit1124->SetParLimits(1,0,0);
   quadLineFit1124->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1124);
   gre->Draw("p ");
   
   TF1 *quadLineFit1125 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1125->SetFillColor(19);
   quadLineFit1125->SetFillStyle(0);
   quadLineFit1125->SetLineColor(10);
   quadLineFit1125->SetLineWidth(2);
   quadLineFit1125->SetChisquare(1.879719);
   quadLineFit1125->SetNDF(1);
   quadLineFit1125->GetXaxis()->SetLabelFont(42);
   quadLineFit1125->GetXaxis()->SetTitleOffset(1);
   quadLineFit1125->GetXaxis()->SetTitleFont(42);
   quadLineFit1125->GetYaxis()->SetLabelFont(42);
   quadLineFit1125->GetYaxis()->SetTitleFont(42);
   quadLineFit1125->SetParameter(0,6.495514);
   quadLineFit1125->SetParError(0,0.0843738);
   quadLineFit1125->SetParLimits(0,0,0);
   quadLineFit1125->SetParameter(1,-0.1811569);
   quadLineFit1125->SetParError(1,0.004668262);
   quadLineFit1125->SetParLimits(1,0,0);
   quadLineFit1125->Draw("same");
   
   Double_t 50.000000 ppm_fx1125[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1125[3] = {
   4.355116,
   3.894189,
   3.494073};
   Double_t 50.000000 ppm_fex1125[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1125[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,50.000000 ppm_fx1125,50.000000 ppm_fy1125,50.000000 ppm_fex1125,50.000000 ppm_fey1125);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1125 = new TH1F("Graph_50dO000000sPppm1125","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1125->SetMinimum(3.392125);
   Graph_50dO000000sPppm1125->SetMaximum(4.457064);
   Graph_50dO000000sPppm1125->SetDirectory(0);
   Graph_50dO000000sPppm1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1125->SetLineColor(ci);
   Graph_50dO000000sPppm1125->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1125->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1125->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1125->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1125->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1125->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1125->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1125);
   
   
   TF1 *quadLineFit1126 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1126->SetFillColor(19);
   quadLineFit1126->SetFillStyle(0);
   quadLineFit1126->SetLineColor(11);
   quadLineFit1126->SetLineWidth(2);
   quadLineFit1126->SetChisquare(3.535326);
   quadLineFit1126->SetNDF(1);
   quadLineFit1126->GetXaxis()->SetLabelFont(42);
   quadLineFit1126->GetXaxis()->SetTitleOffset(1);
   quadLineFit1126->GetXaxis()->SetTitleFont(42);
   quadLineFit1126->GetYaxis()->SetLabelFont(42);
   quadLineFit1126->GetYaxis()->SetTitleFont(42);
   quadLineFit1126->SetParameter(0,7.789151);
   quadLineFit1126->SetParError(0,0.08436949);
   quadLineFit1126->SetParLimits(0,0,0);
   quadLineFit1126->SetParameter(1,-0.2152606);
   quadLineFit1126->SetParError(1,0.004668022);
   quadLineFit1126->SetParLimits(1,0,0);
   quadLineFit1126->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1126);
   gre->Draw("p ");
   
   TF1 *quadLineFit1127 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1127->SetFillColor(19);
   quadLineFit1127->SetFillStyle(0);
   quadLineFit1127->SetLineColor(11);
   quadLineFit1127->SetLineWidth(2);
   quadLineFit1127->SetChisquare(3.535326);
   quadLineFit1127->SetNDF(1);
   quadLineFit1127->GetXaxis()->SetLabelFont(42);
   quadLineFit1127->GetXaxis()->SetTitleOffset(1);
   quadLineFit1127->GetXaxis()->SetTitleFont(42);
   quadLineFit1127->GetYaxis()->SetLabelFont(42);
   quadLineFit1127->GetYaxis()->SetTitleFont(42);
   quadLineFit1127->SetParameter(0,7.789151);
   quadLineFit1127->SetParError(0,0.08436949);
   quadLineFit1127->SetParLimits(0,0,0);
   quadLineFit1127->SetParameter(1,-0.2152606);
   quadLineFit1127->SetParError(1,0.004668022);
   quadLineFit1127->SetParLimits(1,0,0);
   quadLineFit1127->Draw("same");
   
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
