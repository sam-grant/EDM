void QuadScans_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:39:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1157[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1157[2] = {
   -3.168323,
   -2.528514};
   Double_t -50.000000 ppm_fex1157[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1157[2] = {
   0.01115179,
   0.01115179};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1157,-50.000000 ppm_fy1157,-50.000000 ppm_fex1157,-50.000000 ppm_fey1157);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1157 = new TH1F("Graph_mI50dO000000sPppm1157","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1157->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1157->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1157->SetDirectory(0);
   Graph_mI50dO000000sPppm1157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1157->SetLineColor(ci);
   Graph_mI50dO000000sPppm1157->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1157->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1157->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1157->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1157->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1157->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1157->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1157->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1157->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1157->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1157->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1157->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1157->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1157->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1157->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1157);
   
   
   TF1 *quadLineFit1158 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1158->SetFillColor(19);
   quadLineFit1158->SetFillStyle(0);
   quadLineFit1158->SetLineWidth(2);
   quadLineFit1158->SetChisquare(2.796681e-18);
   quadLineFit1158->SetNDF(0);
   quadLineFit1158->GetXaxis()->SetLabelFont(42);
   quadLineFit1158->GetXaxis()->SetTitleOffset(1);
   quadLineFit1158->GetXaxis()->SetTitleFont(42);
   quadLineFit1158->GetYaxis()->SetLabelFont(42);
   quadLineFit1158->GetYaxis()->SetTitleFont(42);
   quadLineFit1158->SetParameter(0,-5.727558);
   quadLineFit1158->SetParError(0,0.07140628);
   quadLineFit1158->SetParLimits(0,0,0);
   quadLineFit1158->SetParameter(1,0.1599522);
   quadLineFit1158->SetParError(1,0.003942752);
   quadLineFit1158->SetParLimits(1,0,0);
   quadLineFit1158->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1158);
   gre->Draw("ap");
   
   TF1 *quadLineFit1159 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1159->SetFillColor(19);
   quadLineFit1159->SetFillStyle(0);
   quadLineFit1159->SetLineWidth(2);
   quadLineFit1159->SetChisquare(2.796681e-18);
   quadLineFit1159->SetNDF(0);
   quadLineFit1159->GetXaxis()->SetLabelFont(42);
   quadLineFit1159->GetXaxis()->SetTitleOffset(1);
   quadLineFit1159->GetXaxis()->SetTitleFont(42);
   quadLineFit1159->GetYaxis()->SetLabelFont(42);
   quadLineFit1159->GetYaxis()->SetTitleFont(42);
   quadLineFit1159->SetParameter(0,-5.727558);
   quadLineFit1159->SetParError(0,0.07140628);
   quadLineFit1159->SetParLimits(0,0,0);
   quadLineFit1159->SetParameter(1,0.1599522);
   quadLineFit1159->SetParError(1,0.003942752);
   quadLineFit1159->SetParLimits(1,0,0);
   quadLineFit1159->Draw("same");
   
   Double_t -40.000000 ppm_fx1159[2] = {
   16,
   20};
   Double_t -40.000000 ppm_fy1159[2] = {
   -2.38618,
   -1.944022};
   Double_t -40.000000 ppm_fex1159[2] = {
   0,
   0};
   Double_t -40.000000 ppm_fey1159[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,-40.000000 ppm_fx1159,-40.000000 ppm_fy1159,-40.000000 ppm_fex1159,-40.000000 ppm_fey1159);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1159 = new TH1F("Graph_mI40dO000000sPppm1159","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1159->SetMinimum(-2.443777);
   Graph_mI40dO000000sPppm1159->SetMaximum(-1.886424);
   Graph_mI40dO000000sPppm1159->SetDirectory(0);
   Graph_mI40dO000000sPppm1159->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1159->SetLineColor(ci);
   Graph_mI40dO000000sPppm1159->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1159->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1159->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1159->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1159->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1159->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1159->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1159);
   
   
   TF1 *quadLineFit1160 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1160->SetFillColor(19);
   quadLineFit1160->SetFillStyle(0);
   quadLineFit1160->SetLineColor(2);
   quadLineFit1160->SetLineWidth(2);
   quadLineFit1160->SetChisquare(3.5317e-22);
   quadLineFit1160->SetNDF(0);
   quadLineFit1160->GetXaxis()->SetLabelFont(42);
   quadLineFit1160->GetXaxis()->SetTitleOffset(1);
   quadLineFit1160->GetXaxis()->SetTitleFont(42);
   quadLineFit1160->GetYaxis()->SetLabelFont(42);
   quadLineFit1160->GetYaxis()->SetTitleFont(42);
   quadLineFit1160->SetParameter(0,-4.15481);
   quadLineFit1160->SetParError(0,0.07140628);
   quadLineFit1160->SetParLimits(0,0,0);
   quadLineFit1160->SetParameter(1,0.1105394);
   quadLineFit1160->SetParError(1,0.003942752);
   quadLineFit1160->SetParLimits(1,0,0);
   quadLineFit1160->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1160);
   gre->Draw("p ");
   
   TF1 *quadLineFit1161 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1161->SetFillColor(19);
   quadLineFit1161->SetFillStyle(0);
   quadLineFit1161->SetLineColor(2);
   quadLineFit1161->SetLineWidth(2);
   quadLineFit1161->SetChisquare(3.5317e-22);
   quadLineFit1161->SetNDF(0);
   quadLineFit1161->GetXaxis()->SetLabelFont(42);
   quadLineFit1161->GetXaxis()->SetTitleOffset(1);
   quadLineFit1161->GetXaxis()->SetTitleFont(42);
   quadLineFit1161->GetYaxis()->SetLabelFont(42);
   quadLineFit1161->GetYaxis()->SetTitleFont(42);
   quadLineFit1161->SetParameter(0,-4.15481);
   quadLineFit1161->SetParError(0,0.07140628);
   quadLineFit1161->SetParLimits(0,0,0);
   quadLineFit1161->SetParameter(1,0.1105394);
   quadLineFit1161->SetParError(1,0.003942752);
   quadLineFit1161->SetParLimits(1,0,0);
   quadLineFit1161->Draw("same");
   
   Double_t -30.000000 ppm_fx1161[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1161[2] = {
   -1.642656,
   -1.348884};
   Double_t -30.000000 ppm_fex1161[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1161[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1161,-30.000000 ppm_fy1161,-30.000000 ppm_fex1161,-30.000000 ppm_fey1161);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1161 = new TH1F("Graph_mI30dO000000sPppm1161","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1161->SetMinimum(-1.685415);
   Graph_mI30dO000000sPppm1161->SetMaximum(-1.306125);
   Graph_mI30dO000000sPppm1161->SetDirectory(0);
   Graph_mI30dO000000sPppm1161->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1161->SetLineColor(ci);
   Graph_mI30dO000000sPppm1161->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1161->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1161->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1161->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1161->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1161->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1161->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1161);
   
   
   TF1 *quadLineFit1162 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1162->SetFillColor(19);
   quadLineFit1162->SetFillStyle(0);
   quadLineFit1162->SetLineColor(3);
   quadLineFit1162->SetLineWidth(2);
   quadLineFit1162->SetChisquare(5.551403e-20);
   quadLineFit1162->SetNDF(0);
   quadLineFit1162->GetXaxis()->SetLabelFont(42);
   quadLineFit1162->GetXaxis()->SetTitleOffset(1);
   quadLineFit1162->GetXaxis()->SetTitleFont(42);
   quadLineFit1162->GetYaxis()->SetLabelFont(42);
   quadLineFit1162->GetYaxis()->SetTitleFont(42);
   quadLineFit1162->SetParameter(0,-2.817744);
   quadLineFit1162->SetParError(0,0.07140628);
   quadLineFit1162->SetParLimits(0,0,0);
   quadLineFit1162->SetParameter(1,0.07344298);
   quadLineFit1162->SetParError(1,0.003942752);
   quadLineFit1162->SetParLimits(1,0,0);
   quadLineFit1162->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1162);
   gre->Draw("p ");
   
   TF1 *quadLineFit1163 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1163->SetFillColor(19);
   quadLineFit1163->SetFillStyle(0);
   quadLineFit1163->SetLineColor(3);
   quadLineFit1163->SetLineWidth(2);
   quadLineFit1163->SetChisquare(5.551403e-20);
   quadLineFit1163->SetNDF(0);
   quadLineFit1163->GetXaxis()->SetLabelFont(42);
   quadLineFit1163->GetXaxis()->SetTitleOffset(1);
   quadLineFit1163->GetXaxis()->SetTitleFont(42);
   quadLineFit1163->GetYaxis()->SetLabelFont(42);
   quadLineFit1163->GetYaxis()->SetTitleFont(42);
   quadLineFit1163->SetParameter(0,-2.817744);
   quadLineFit1163->SetParError(0,0.07140628);
   quadLineFit1163->SetParLimits(0,0,0);
   quadLineFit1163->SetParameter(1,0.07344298);
   quadLineFit1163->SetParError(1,0.003942752);
   quadLineFit1163->SetParLimits(1,0,0);
   quadLineFit1163->Draw("same");
   
   Double_t -20.000000 ppm_fx1163[2] = {
   16,
   20};
   Double_t -20.000000 ppm_fy1163[2] = {
   -0.891684,
   -0.7430736};
   Double_t -20.000000 ppm_fex1163[2] = {
   0,
   0};
   Double_t -20.000000 ppm_fey1163[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,-20.000000 ppm_fx1163,-20.000000 ppm_fy1163,-20.000000 ppm_fex1163,-20.000000 ppm_fey1163);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1163 = new TH1F("Graph_mI20dO000000sPppm1163","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1163->SetMinimum(-0.9199272);
   Graph_mI20dO000000sPppm1163->SetMaximum(-0.7148304);
   Graph_mI20dO000000sPppm1163->SetDirectory(0);
   Graph_mI20dO000000sPppm1163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1163->SetLineColor(ci);
   Graph_mI20dO000000sPppm1163->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1163->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1163->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1163->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1163->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1163->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1163->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1163);
   
   
   TF1 *quadLineFit1164 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1164->SetFillColor(19);
   quadLineFit1164->SetFillStyle(0);
   quadLineFit1164->SetLineColor(4);
   quadLineFit1164->SetLineWidth(2);
   quadLineFit1164->SetChisquare(1.554786e-20);
   quadLineFit1164->SetNDF(0);
   quadLineFit1164->GetXaxis()->SetLabelFont(42);
   quadLineFit1164->GetXaxis()->SetTitleOffset(1);
   quadLineFit1164->GetXaxis()->SetTitleFont(42);
   quadLineFit1164->GetYaxis()->SetLabelFont(42);
   quadLineFit1164->GetYaxis()->SetTitleFont(42);
   quadLineFit1164->SetParameter(0,-1.486126);
   quadLineFit1164->SetParError(0,0.07140628);
   quadLineFit1164->SetParLimits(0,0,0);
   quadLineFit1164->SetParameter(1,0.03715261);
   quadLineFit1164->SetParError(1,0.003942752);
   quadLineFit1164->SetParLimits(1,0,0);
   quadLineFit1164->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1164);
   gre->Draw("p ");
   
   TF1 *quadLineFit1165 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1165->SetFillColor(19);
   quadLineFit1165->SetFillStyle(0);
   quadLineFit1165->SetLineColor(4);
   quadLineFit1165->SetLineWidth(2);
   quadLineFit1165->SetChisquare(1.554786e-20);
   quadLineFit1165->SetNDF(0);
   quadLineFit1165->GetXaxis()->SetLabelFont(42);
   quadLineFit1165->GetXaxis()->SetTitleOffset(1);
   quadLineFit1165->GetXaxis()->SetTitleFont(42);
   quadLineFit1165->GetYaxis()->SetLabelFont(42);
   quadLineFit1165->GetYaxis()->SetTitleFont(42);
   quadLineFit1165->SetParameter(0,-1.486126);
   quadLineFit1165->SetParError(0,0.07140628);
   quadLineFit1165->SetParLimits(0,0,0);
   quadLineFit1165->SetParameter(1,0.03715261);
   quadLineFit1165->SetParError(1,0.003942752);
   quadLineFit1165->SetParLimits(1,0,0);
   quadLineFit1165->Draw("same");
   
   Double_t -10.000000 ppm_fx1165[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1165[2] = {
   -0.1604295,
   -0.1107042};
   Double_t -10.000000 ppm_fex1165[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1165[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1165,-10.000000 ppm_fy1165,-10.000000 ppm_fex1165,-10.000000 ppm_fey1165);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1165 = new TH1F("Graph_mI10dO000000sPppm1165","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1165->SetMinimum(-0.1787842);
   Graph_mI10dO000000sPppm1165->SetMaximum(-0.09234952);
   Graph_mI10dO000000sPppm1165->SetDirectory(0);
   Graph_mI10dO000000sPppm1165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1165->SetLineColor(ci);
   Graph_mI10dO000000sPppm1165->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1165->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1165->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1165->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1165->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1165->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1165->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1165);
   
   
   TF1 *quadLineFit1166 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1166->SetFillColor(19);
   quadLineFit1166->SetFillStyle(0);
   quadLineFit1166->SetLineColor(5);
   quadLineFit1166->SetLineWidth(2);
   quadLineFit1166->SetChisquare(6.49532e-22);
   quadLineFit1166->SetNDF(0);
   quadLineFit1166->GetXaxis()->SetLabelFont(42);
   quadLineFit1166->GetXaxis()->SetTitleOffset(1);
   quadLineFit1166->GetXaxis()->SetTitleFont(42);
   quadLineFit1166->GetYaxis()->SetLabelFont(42);
   quadLineFit1166->GetYaxis()->SetTitleFont(42);
   quadLineFit1166->SetParameter(0,-0.3593309);
   quadLineFit1166->SetParError(0,0.07140628);
   quadLineFit1166->SetParLimits(0,0,0);
   quadLineFit1166->SetParameter(1,0.01243134);
   quadLineFit1166->SetParError(1,0.003942752);
   quadLineFit1166->SetParLimits(1,0,0);
   quadLineFit1166->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1166);
   gre->Draw("p ");
   
   TF1 *quadLineFit1167 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1167->SetFillColor(19);
   quadLineFit1167->SetFillStyle(0);
   quadLineFit1167->SetLineColor(5);
   quadLineFit1167->SetLineWidth(2);
   quadLineFit1167->SetChisquare(6.49532e-22);
   quadLineFit1167->SetNDF(0);
   quadLineFit1167->GetXaxis()->SetLabelFont(42);
   quadLineFit1167->GetXaxis()->SetTitleOffset(1);
   quadLineFit1167->GetXaxis()->SetTitleFont(42);
   quadLineFit1167->GetYaxis()->SetLabelFont(42);
   quadLineFit1167->GetYaxis()->SetTitleFont(42);
   quadLineFit1167->SetParameter(0,-0.3593309);
   quadLineFit1167->SetParError(0,0.07140628);
   quadLineFit1167->SetParLimits(0,0,0);
   quadLineFit1167->SetParameter(1,0.01243134);
   quadLineFit1167->SetParError(1,0.003942752);
   quadLineFit1167->SetParLimits(1,0,0);
   quadLineFit1167->Draw("same");
   
   Double_t 0.000000 ppm_fx1167[2] = {
   16,
   20};
   Double_t 0.000000 ppm_fy1167[2] = {
   0.6033897,
   0.474149};
   Double_t 0.000000 ppm_fex1167[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1167[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,0.000000 ppm_fx1167,0.000000 ppm_fy1167,0.000000 ppm_fex1167,0.000000 ppm_fey1167);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1167 = new TH1F("Graph_0dO000000sPppm1167","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1167->SetMinimum(0.4478428);
   Graph_0dO000000sPppm1167->SetMaximum(0.6296959);
   Graph_0dO000000sPppm1167->SetDirectory(0);
   Graph_0dO000000sPppm1167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1167->SetLineColor(ci);
   Graph_0dO000000sPppm1167->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1167->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1167->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1167->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1167->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1167->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1167->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1167);
   
   
   TF1 *quadLineFit1168 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1168->SetFillColor(19);
   quadLineFit1168->SetFillStyle(0);
   quadLineFit1168->SetLineColor(6);
   quadLineFit1168->SetLineWidth(2);
   quadLineFit1168->SetChisquare(1.337157e-18);
   quadLineFit1168->SetNDF(0);
   quadLineFit1168->GetXaxis()->SetLabelFont(42);
   quadLineFit1168->GetXaxis()->SetTitleOffset(1);
   quadLineFit1168->GetXaxis()->SetTitleFont(42);
   quadLineFit1168->GetYaxis()->SetLabelFont(42);
   quadLineFit1168->GetYaxis()->SetTitleFont(42);
   quadLineFit1168->SetParameter(0,1.120352);
   quadLineFit1168->SetParError(0,0.07140628);
   quadLineFit1168->SetParLimits(0,0,0);
   quadLineFit1168->SetParameter(1,-0.03231017);
   quadLineFit1168->SetParError(1,0.003942752);
   quadLineFit1168->SetParLimits(1,0,0);
   quadLineFit1168->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1168);
   gre->Draw("p ");
   
   TF1 *quadLineFit1169 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1169->SetFillColor(19);
   quadLineFit1169->SetFillStyle(0);
   quadLineFit1169->SetLineColor(6);
   quadLineFit1169->SetLineWidth(2);
   quadLineFit1169->SetChisquare(1.337157e-18);
   quadLineFit1169->SetNDF(0);
   quadLineFit1169->GetXaxis()->SetLabelFont(42);
   quadLineFit1169->GetXaxis()->SetTitleOffset(1);
   quadLineFit1169->GetXaxis()->SetTitleFont(42);
   quadLineFit1169->GetYaxis()->SetLabelFont(42);
   quadLineFit1169->GetYaxis()->SetTitleFont(42);
   quadLineFit1169->SetParameter(0,1.120352);
   quadLineFit1169->SetParError(0,0.07140628);
   quadLineFit1169->SetParLimits(0,0,0);
   quadLineFit1169->SetParameter(1,-0.03231017);
   quadLineFit1169->SetParError(1,0.003942752);
   quadLineFit1169->SetParLimits(1,0,0);
   quadLineFit1169->Draw("same");
   
   Double_t 10.000000 ppm_fx1169[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1169[2] = {
   1.362161,
   1.109926};
   Double_t 10.000000 ppm_fex1169[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1169[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,10.000000 ppm_fx1169,10.000000 ppm_fy1169,10.000000 ppm_fex1169,10.000000 ppm_fey1169);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1169 = new TH1F("Graph_10dO000000sPppm1169","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1169->SetMinimum(1.07132);
   Graph_10dO000000sPppm1169->SetMaximum(1.400767);
   Graph_10dO000000sPppm1169->SetDirectory(0);
   Graph_10dO000000sPppm1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1169->SetLineColor(ci);
   Graph_10dO000000sPppm1169->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1169->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1169->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1169->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1169->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1169->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1169->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1169);
   
   
   TF1 *quadLineFit1170 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1170->SetFillColor(19);
   quadLineFit1170->SetFillStyle(0);
   quadLineFit1170->SetLineColor(7);
   quadLineFit1170->SetLineWidth(2);
   quadLineFit1170->SetChisquare(1.252389e-19);
   quadLineFit1170->SetNDF(0);
   quadLineFit1170->GetXaxis()->SetLabelFont(42);
   quadLineFit1170->GetXaxis()->SetTitleOffset(1);
   quadLineFit1170->GetXaxis()->SetTitleFont(42);
   quadLineFit1170->GetYaxis()->SetLabelFont(42);
   quadLineFit1170->GetYaxis()->SetTitleFont(42);
   quadLineFit1170->SetParameter(0,2.371105);
   quadLineFit1170->SetParError(0,0.07140628);
   quadLineFit1170->SetParLimits(0,0,0);
   quadLineFit1170->SetParameter(1,-0.06305896);
   quadLineFit1170->SetParError(1,0.003942752);
   quadLineFit1170->SetParLimits(1,0,0);
   quadLineFit1170->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1170);
   gre->Draw("p ");
   
   TF1 *quadLineFit1171 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1171->SetFillColor(19);
   quadLineFit1171->SetFillStyle(0);
   quadLineFit1171->SetLineColor(7);
   quadLineFit1171->SetLineWidth(2);
   quadLineFit1171->SetChisquare(1.252389e-19);
   quadLineFit1171->SetNDF(0);
   quadLineFit1171->GetXaxis()->SetLabelFont(42);
   quadLineFit1171->GetXaxis()->SetTitleOffset(1);
   quadLineFit1171->GetXaxis()->SetTitleFont(42);
   quadLineFit1171->GetYaxis()->SetLabelFont(42);
   quadLineFit1171->GetYaxis()->SetTitleFont(42);
   quadLineFit1171->SetParameter(0,2.371105);
   quadLineFit1171->SetParError(0,0.07140628);
   quadLineFit1171->SetParLimits(0,0,0);
   quadLineFit1171->SetParameter(1,-0.06305896);
   quadLineFit1171->SetParError(1,0.003942752);
   quadLineFit1171->SetParLimits(1,0,0);
   quadLineFit1171->Draw("same");
   
   Double_t 20.000000 ppm_fx1171[2] = {
   16,
   20};
   Double_t 20.000000 ppm_fy1171[2] = {
   2.104015,
   1.667779};
   Double_t 20.000000 ppm_fex1171[2] = {
   0,
   0};
   Double_t 20.000000 ppm_fey1171[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,20.000000 ppm_fx1171,20.000000 ppm_fy1171,20.000000 ppm_fex1171,20.000000 ppm_fey1171);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1171 = new TH1F("Graph_20dO000000sPppm1171","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1171->SetMinimum(1.610773);
   Graph_20dO000000sPppm1171->SetMaximum(2.161021);
   Graph_20dO000000sPppm1171->SetDirectory(0);
   Graph_20dO000000sPppm1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1171->SetLineColor(ci);
   Graph_20dO000000sPppm1171->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1171->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1171->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1171->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1171->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1171->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1171->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1171);
   
   
   TF1 *quadLineFit1172 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1172->SetFillColor(19);
   quadLineFit1172->SetFillStyle(0);
   quadLineFit1172->SetLineColor(8);
   quadLineFit1172->SetLineWidth(2);
   quadLineFit1172->SetChisquare(3.167223e-21);
   quadLineFit1172->SetNDF(0);
   quadLineFit1172->GetXaxis()->SetLabelFont(42);
   quadLineFit1172->GetXaxis()->SetTitleOffset(1);
   quadLineFit1172->GetXaxis()->SetTitleFont(42);
   quadLineFit1172->GetYaxis()->SetLabelFont(42);
   quadLineFit1172->GetYaxis()->SetTitleFont(42);
   quadLineFit1172->SetParameter(0,3.848961);
   quadLineFit1172->SetParError(0,0.07140628);
   quadLineFit1172->SetParLimits(0,0,0);
   quadLineFit1172->SetParameter(1,-0.1090591);
   quadLineFit1172->SetParError(1,0.003942752);
   quadLineFit1172->SetParLimits(1,0,0);
   quadLineFit1172->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1172);
   gre->Draw("p ");
   
   TF1 *quadLineFit1173 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1173->SetFillColor(19);
   quadLineFit1173->SetFillStyle(0);
   quadLineFit1173->SetLineColor(8);
   quadLineFit1173->SetLineWidth(2);
   quadLineFit1173->SetChisquare(3.167223e-21);
   quadLineFit1173->SetNDF(0);
   quadLineFit1173->GetXaxis()->SetLabelFont(42);
   quadLineFit1173->GetXaxis()->SetTitleOffset(1);
   quadLineFit1173->GetXaxis()->SetTitleFont(42);
   quadLineFit1173->GetYaxis()->SetLabelFont(42);
   quadLineFit1173->GetYaxis()->SetTitleFont(42);
   quadLineFit1173->SetParameter(0,3.848961);
   quadLineFit1173->SetParError(0,0.07140628);
   quadLineFit1173->SetParLimits(0,0,0);
   quadLineFit1173->SetParameter(1,-0.1090591);
   quadLineFit1173->SetParError(1,0.003942752);
   quadLineFit1173->SetParLimits(1,0,0);
   quadLineFit1173->Draw("same");
   
   Double_t 30.000000 ppm_fx1173[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1173[2] = {
   2.847801,
   2.283468};
   Double_t 30.000000 ppm_fex1173[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1173[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,30.000000 ppm_fx1173,30.000000 ppm_fy1173,30.000000 ppm_fex1173,30.000000 ppm_fey1173);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1173 = new TH1F("Graph_30dO000000sPppm1173","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1173->SetMinimum(2.213653);
   Graph_30dO000000sPppm1173->SetMaximum(2.917616);
   Graph_30dO000000sPppm1173->SetDirectory(0);
   Graph_30dO000000sPppm1173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1173->SetLineColor(ci);
   Graph_30dO000000sPppm1173->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1173->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1173->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1173->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1173->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1173->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1173->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1173);
   
   
   TF1 *quadLineFit1174 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1174->SetFillColor(19);
   quadLineFit1174->SetFillStyle(0);
   quadLineFit1174->SetLineColor(9);
   quadLineFit1174->SetLineWidth(2);
   quadLineFit1174->SetChisquare(2.930203e-19);
   quadLineFit1174->SetNDF(0);
   quadLineFit1174->GetXaxis()->SetLabelFont(42);
   quadLineFit1174->GetXaxis()->SetTitleOffset(1);
   quadLineFit1174->GetXaxis()->SetTitleFont(42);
   quadLineFit1174->GetYaxis()->SetLabelFont(42);
   quadLineFit1174->GetYaxis()->SetTitleFont(42);
   quadLineFit1174->SetParameter(0,5.105129);
   quadLineFit1174->SetParError(0,0.07140628);
   quadLineFit1174->SetParLimits(0,0,0);
   quadLineFit1174->SetParameter(1,-0.141083);
   quadLineFit1174->SetParError(1,0.003942752);
   quadLineFit1174->SetParLimits(1,0,0);
   quadLineFit1174->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1174);
   gre->Draw("p ");
   
   TF1 *quadLineFit1175 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1175->SetFillColor(19);
   quadLineFit1175->SetFillStyle(0);
   quadLineFit1175->SetLineColor(9);
   quadLineFit1175->SetLineWidth(2);
   quadLineFit1175->SetChisquare(2.930203e-19);
   quadLineFit1175->SetNDF(0);
   quadLineFit1175->GetXaxis()->SetLabelFont(42);
   quadLineFit1175->GetXaxis()->SetTitleOffset(1);
   quadLineFit1175->GetXaxis()->SetTitleFont(42);
   quadLineFit1175->GetYaxis()->SetLabelFont(42);
   quadLineFit1175->GetYaxis()->SetTitleFont(42);
   quadLineFit1175->SetParameter(0,5.105129);
   quadLineFit1175->SetParError(0,0.07140628);
   quadLineFit1175->SetParLimits(0,0,0);
   quadLineFit1175->SetParameter(1,-0.141083);
   quadLineFit1175->SetParError(1,0.003942752);
   quadLineFit1175->SetParLimits(1,0,0);
   quadLineFit1175->Draw("same");
   
   Double_t 40.000000 ppm_fx1175[2] = {
   16,
   20};
   Double_t 40.000000 ppm_fy1175[2] = {
   3.605135,
   2.872765};
   Double_t 40.000000 ppm_fex1175[2] = {
   0,
   0};
   Double_t 40.000000 ppm_fey1175[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,40.000000 ppm_fx1175,40.000000 ppm_fy1175,40.000000 ppm_fex1175,40.000000 ppm_fey1175);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1175 = new TH1F("Graph_40dO000000sPppm1175","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1175->SetMinimum(2.786145);
   Graph_40dO000000sPppm1175->SetMaximum(3.691754);
   Graph_40dO000000sPppm1175->SetDirectory(0);
   Graph_40dO000000sPppm1175->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1175->SetLineColor(ci);
   Graph_40dO000000sPppm1175->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1175->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1175->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1175->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1175->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1175->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1175->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1175);
   
   
   TF1 *quadLineFit1176 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1176->SetFillColor(19);
   quadLineFit1176->SetFillStyle(0);
   quadLineFit1176->SetLineColor(10);
   quadLineFit1176->SetLineWidth(2);
   quadLineFit1176->SetChisquare(4.216402e-19);
   quadLineFit1176->SetNDF(0);
   quadLineFit1176->GetXaxis()->SetLabelFont(42);
   quadLineFit1176->GetXaxis()->SetTitleOffset(1);
   quadLineFit1176->GetXaxis()->SetTitleFont(42);
   quadLineFit1176->GetYaxis()->SetLabelFont(42);
   quadLineFit1176->GetYaxis()->SetTitleFont(42);
   quadLineFit1176->SetParameter(0,6.534617);
   quadLineFit1176->SetParError(0,0.07140628);
   quadLineFit1176->SetParLimits(0,0,0);
   quadLineFit1176->SetParameter(1,-0.1830926);
   quadLineFit1176->SetParError(1,0.003942752);
   quadLineFit1176->SetParLimits(1,0,0);
   quadLineFit1176->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1176);
   gre->Draw("p ");
   
   TF1 *quadLineFit1177 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1177->SetFillColor(19);
   quadLineFit1177->SetFillStyle(0);
   quadLineFit1177->SetLineColor(10);
   quadLineFit1177->SetLineWidth(2);
   quadLineFit1177->SetChisquare(4.216402e-19);
   quadLineFit1177->SetNDF(0);
   quadLineFit1177->GetXaxis()->SetLabelFont(42);
   quadLineFit1177->GetXaxis()->SetTitleOffset(1);
   quadLineFit1177->GetXaxis()->SetTitleFont(42);
   quadLineFit1177->GetYaxis()->SetLabelFont(42);
   quadLineFit1177->GetYaxis()->SetTitleFont(42);
   quadLineFit1177->SetParameter(0,6.534617);
   quadLineFit1177->SetParError(0,0.07140628);
   quadLineFit1177->SetParLimits(0,0,0);
   quadLineFit1177->SetParameter(1,-0.1830926);
   quadLineFit1177->SetParError(1,0.003942752);
   quadLineFit1177->SetParLimits(1,0,0);
   quadLineFit1177->Draw("same");
   
   Double_t 50.000000 ppm_fx1177[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1177[2] = {
   4.37392,
   3.48684};
   Double_t 50.000000 ppm_fex1177[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1177[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,50.000000 ppm_fx1177,50.000000 ppm_fy1177,50.000000 ppm_fex1177,50.000000 ppm_fey1177);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1177 = new TH1F("Graph_50dO000000sPppm1177","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1177->SetMinimum(3.38475);
   Graph_50dO000000sPppm1177->SetMaximum(4.47601);
   Graph_50dO000000sPppm1177->SetDirectory(0);
   Graph_50dO000000sPppm1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1177->SetLineColor(ci);
   Graph_50dO000000sPppm1177->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1177->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1177->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1177->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1177->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1177->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1177->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1177);
   
   
   TF1 *quadLineFit1178 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1178->SetFillColor(19);
   quadLineFit1178->SetFillStyle(0);
   quadLineFit1178->SetLineColor(11);
   quadLineFit1178->SetLineWidth(2);
   quadLineFit1178->SetChisquare(1.497206e-17);
   quadLineFit1178->SetNDF(0);
   quadLineFit1178->GetXaxis()->SetLabelFont(42);
   quadLineFit1178->GetXaxis()->SetTitleOffset(1);
   quadLineFit1178->GetXaxis()->SetTitleFont(42);
   quadLineFit1178->GetYaxis()->SetLabelFont(42);
   quadLineFit1178->GetYaxis()->SetTitleFont(42);
   quadLineFit1178->SetParameter(0,7.922241);
   quadLineFit1178->SetParError(0,0.07140628);
   quadLineFit1178->SetParLimits(0,0,0);
   quadLineFit1178->SetParameter(1,-0.22177);
   quadLineFit1178->SetParError(1,0.003942752);
   quadLineFit1178->SetParLimits(1,0,0);
   quadLineFit1178->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1178);
   gre->Draw("p ");
   
   TF1 *quadLineFit1179 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1179->SetFillColor(19);
   quadLineFit1179->SetFillStyle(0);
   quadLineFit1179->SetLineColor(11);
   quadLineFit1179->SetLineWidth(2);
   quadLineFit1179->SetChisquare(1.497206e-17);
   quadLineFit1179->SetNDF(0);
   quadLineFit1179->GetXaxis()->SetLabelFont(42);
   quadLineFit1179->GetXaxis()->SetTitleOffset(1);
   quadLineFit1179->GetXaxis()->SetTitleFont(42);
   quadLineFit1179->GetYaxis()->SetLabelFont(42);
   quadLineFit1179->GetYaxis()->SetTitleFont(42);
   quadLineFit1179->SetParameter(0,7.922241);
   quadLineFit1179->SetParError(0,0.07140628);
   quadLineFit1179->SetParLimits(0,0,0);
   quadLineFit1179->SetParameter(1,-0.22177);
   quadLineFit1179->SetParError(1,0.003942752);
   quadLineFit1179->SetParLimits(1,0,0);
   quadLineFit1179->Draw("same");
   
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
