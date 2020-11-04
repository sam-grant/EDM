void QuadScans_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:22 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1155[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1155[3] = {
   -3.168321,
   -2.809265,
   -2.517401};
   Double_t -50.000000 ppm_fex1155[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1155[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1155,-50.000000 ppm_fy1155,-50.000000 ppm_fex1155,-50.000000 ppm_fey1155);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1155 = new TH1F("Graph_mI50dO000000sPppm1155","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1155->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1155->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1155->SetDirectory(0);
   Graph_mI50dO000000sPppm1155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1155->SetLineColor(ci);
   Graph_mI50dO000000sPppm1155->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1155->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1155->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1155->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1155->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1155->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1155->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1155->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1155->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1155->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1155->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1155->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1155->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1155->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1155->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1155);
   
   
   TF1 *quadLineFit1156 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1156->SetFillColor(19);
   quadLineFit1156->SetFillStyle(0);
   quadLineFit1156->SetLineWidth(2);
   quadLineFit1156->SetChisquare(10.39347);
   quadLineFit1156->SetNDF(1);
   quadLineFit1156->GetXaxis()->SetLabelFont(42);
   quadLineFit1156->GetXaxis()->SetTitleOffset(1);
   quadLineFit1156->GetXaxis()->SetTitleFont(42);
   quadLineFit1156->GetYaxis()->SetLabelFont(42);
   quadLineFit1156->GetYaxis()->SetTitleFont(42);
   quadLineFit1156->SetParameter(0,-5.760805);
   quadLineFit1156->SetParError(0,0.05436999);
   quadLineFit1156->SetParLimits(0,0,0);
   quadLineFit1156->SetParameter(1,0.1627301);
   quadLineFit1156->SetParError(1,0.0030082);
   quadLineFit1156->SetParLimits(1,0,0);
   quadLineFit1156->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1156);
   gre->Draw("ap");
   
   TF1 *quadLineFit1157 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1157->SetFillColor(19);
   quadLineFit1157->SetFillStyle(0);
   quadLineFit1157->SetLineWidth(2);
   quadLineFit1157->SetChisquare(10.39347);
   quadLineFit1157->SetNDF(1);
   quadLineFit1157->GetXaxis()->SetLabelFont(42);
   quadLineFit1157->GetXaxis()->SetTitleOffset(1);
   quadLineFit1157->GetXaxis()->SetTitleFont(42);
   quadLineFit1157->GetYaxis()->SetLabelFont(42);
   quadLineFit1157->GetYaxis()->SetTitleFont(42);
   quadLineFit1157->SetParameter(0,-5.760805);
   quadLineFit1157->SetParError(0,0.05436999);
   quadLineFit1157->SetParLimits(0,0,0);
   quadLineFit1157->SetParameter(1,0.1627301);
   quadLineFit1157->SetParError(1,0.0030082);
   quadLineFit1157->SetParLimits(1,0,0);
   quadLineFit1157->Draw("same");
   
   Double_t -25.000000 ppm_fx1157[3] = {
   16,
   18,
   20};
   Double_t -25.000000 ppm_fy1157[3] = {
   -1.287139,
   -1.133565,
   -1.002888};
   Double_t -25.000000 ppm_fex1157[3] = {
   0,
   0,
   0};
   Double_t -25.000000 ppm_fey1157[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,-25.000000 ppm_fx1157,-25.000000 ppm_fy1157,-25.000000 ppm_fex1157,-25.000000 ppm_fey1157);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1157 = new TH1F("Graph_mI25dO000000sPppm1157","Graph",100,15.6,20.4);
   Graph_mI25dO000000sPppm1157->SetMinimum(-1.325775);
   Graph_mI25dO000000sPppm1157->SetMaximum(-0.964253);
   Graph_mI25dO000000sPppm1157->SetDirectory(0);
   Graph_mI25dO000000sPppm1157->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1157->SetLineColor(ci);
   Graph_mI25dO000000sPppm1157->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1157->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1157->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1157->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1157->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1157->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1157->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1157);
   
   
   TF1 *quadLineFit1158 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1158->SetFillColor(19);
   quadLineFit1158->SetFillStyle(0);
   quadLineFit1158->SetLineColor(2);
   quadLineFit1158->SetLineWidth(2);
   quadLineFit1158->SetChisquare(1.207132);
   quadLineFit1158->SetNDF(1);
   quadLineFit1158->GetXaxis()->SetLabelFont(42);
   quadLineFit1158->GetXaxis()->SetTitleOffset(1);
   quadLineFit1158->GetXaxis()->SetTitleFont(42);
   quadLineFit1158->GetYaxis()->SetLabelFont(42);
   quadLineFit1158->GetYaxis()->SetTitleFont(42);
   quadLineFit1158->SetParameter(0,-2.420327);
   quadLineFit1158->SetParError(0,0.05437178);
   quadLineFit1158->SetParLimits(0,0,0);
   quadLineFit1158->SetParameter(1,0.07106276);
   quadLineFit1158->SetParError(1,0.0030083);
   quadLineFit1158->SetParLimits(1,0,0);
   quadLineFit1158->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1158);
   gre->Draw("p ");
   
   TF1 *quadLineFit1159 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1159->SetFillColor(19);
   quadLineFit1159->SetFillStyle(0);
   quadLineFit1159->SetLineColor(2);
   quadLineFit1159->SetLineWidth(2);
   quadLineFit1159->SetChisquare(1.207132);
   quadLineFit1159->SetNDF(1);
   quadLineFit1159->GetXaxis()->SetLabelFont(42);
   quadLineFit1159->GetXaxis()->SetTitleOffset(1);
   quadLineFit1159->GetXaxis()->SetTitleFont(42);
   quadLineFit1159->GetYaxis()->SetLabelFont(42);
   quadLineFit1159->GetYaxis()->SetTitleFont(42);
   quadLineFit1159->SetParameter(0,-2.420327);
   quadLineFit1159->SetParError(0,0.05437178);
   quadLineFit1159->SetParLimits(0,0,0);
   quadLineFit1159->SetParameter(1,0.07106276);
   quadLineFit1159->SetParError(1,0.0030083);
   quadLineFit1159->SetParLimits(1,0,0);
   quadLineFit1159->Draw("same");
   
   Double_t 0.000000 ppm_fx1159[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1159[3] = {
   0.6106194,
   0.5347918,
   0.4734507};
   Double_t 0.000000 ppm_fex1159[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1159[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,0.000000 ppm_fx1159,0.000000 ppm_fy1159,0.000000 ppm_fex1159,0.000000 ppm_fey1159);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1159 = new TH1F("Graph_0dO000000sPppm1159","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1159->SetMinimum(0.4495235);
   Graph_0dO000000sPppm1159->SetMaximum(0.6345467);
   Graph_0dO000000sPppm1159->SetDirectory(0);
   Graph_0dO000000sPppm1159->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1159->SetLineColor(ci);
   Graph_0dO000000sPppm1159->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1159->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1159->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1159->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1159->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1159->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1159->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1159);
   
   
   TF1 *quadLineFit1160 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1160->SetFillColor(19);
   quadLineFit1160->SetFillStyle(0);
   quadLineFit1160->SetLineColor(3);
   quadLineFit1160->SetLineWidth(2);
   quadLineFit1160->SetChisquare(0.4831183);
   quadLineFit1160->SetNDF(1);
   quadLineFit1160->GetXaxis()->SetLabelFont(42);
   quadLineFit1160->GetXaxis()->SetTitleOffset(1);
   quadLineFit1160->GetXaxis()->SetTitleFont(42);
   quadLineFit1160->GetYaxis()->SetLabelFont(42);
   quadLineFit1160->GetYaxis()->SetTitleFont(42);
   quadLineFit1160->SetParameter(0,1.15688);
   quadLineFit1160->SetParError(0,0.05437022);
   quadLineFit1160->SetParLimits(0,0,0);
   quadLineFit1160->SetParameter(1,-0.03429218);
   quadLineFit1160->SetParError(1,0.003008214);
   quadLineFit1160->SetParLimits(1,0,0);
   quadLineFit1160->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1160);
   gre->Draw("p ");
   
   TF1 *quadLineFit1161 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1161->SetFillColor(19);
   quadLineFit1161->SetFillStyle(0);
   quadLineFit1161->SetLineColor(3);
   quadLineFit1161->SetLineWidth(2);
   quadLineFit1161->SetChisquare(0.4831183);
   quadLineFit1161->SetNDF(1);
   quadLineFit1161->GetXaxis()->SetLabelFont(42);
   quadLineFit1161->GetXaxis()->SetTitleOffset(1);
   quadLineFit1161->GetXaxis()->SetTitleFont(42);
   quadLineFit1161->GetYaxis()->SetLabelFont(42);
   quadLineFit1161->GetYaxis()->SetTitleFont(42);
   quadLineFit1161->SetParameter(0,1.15688);
   quadLineFit1161->SetParError(0,0.05437022);
   quadLineFit1161->SetParLimits(0,0,0);
   quadLineFit1161->SetParameter(1,-0.03429218);
   quadLineFit1161->SetParError(1,0.003008214);
   quadLineFit1161->SetParLimits(1,0,0);
   quadLineFit1161->Draw("same");
   
   Double_t 25.000000 ppm_fx1161[3] = {
   16,
   18,
   20};
   Double_t 25.000000 ppm_fy1161[3] = {
   2.494173,
   2.210975,
   1.972513};
   Double_t 25.000000 ppm_fex1161[3] = {
   0,
   0,
   0};
   Double_t 25.000000 ppm_fey1161[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,25.000000 ppm_fx1161,25.000000 ppm_fy1161,25.000000 ppm_fex1161,25.000000 ppm_fey1161);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1161 = new TH1F("Graph_25dO000000sPppm1161","Graph",100,15.6,20.4);
   Graph_25dO000000sPppm1161->SetMinimum(1.910137);
   Graph_25dO000000sPppm1161->SetMaximum(2.556549);
   Graph_25dO000000sPppm1161->SetDirectory(0);
   Graph_25dO000000sPppm1161->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1161->SetLineColor(ci);
   Graph_25dO000000sPppm1161->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1161->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1161->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1161->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1161->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1161->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1161->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1161);
   
   
   TF1 *quadLineFit1162 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1162->SetFillColor(19);
   quadLineFit1162->SetFillStyle(0);
   quadLineFit1162->SetLineColor(4);
   quadLineFit1162->SetLineWidth(2);
   quadLineFit1162->SetChisquare(4.607143);
   quadLineFit1162->SetNDF(1);
   quadLineFit1162->GetXaxis()->SetLabelFont(42);
   quadLineFit1162->GetXaxis()->SetTitleOffset(1);
   quadLineFit1162->GetXaxis()->SetTitleFont(42);
   quadLineFit1162->GetYaxis()->SetLabelFont(42);
   quadLineFit1162->GetYaxis()->SetTitleFont(42);
   quadLineFit1162->SetParameter(0,4.573356);
   quadLineFit1162->SetParError(0,0.05437076);
   quadLineFit1162->SetParLimits(0,0,0);
   quadLineFit1162->SetParameter(1,-0.1304149);
   quadLineFit1162->SetParError(1,0.003008244);
   quadLineFit1162->SetParLimits(1,0,0);
   quadLineFit1162->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1162);
   gre->Draw("p ");
   
   TF1 *quadLineFit1163 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1163->SetFillColor(19);
   quadLineFit1163->SetFillStyle(0);
   quadLineFit1163->SetLineColor(4);
   quadLineFit1163->SetLineWidth(2);
   quadLineFit1163->SetChisquare(4.607143);
   quadLineFit1163->SetNDF(1);
   quadLineFit1163->GetXaxis()->SetLabelFont(42);
   quadLineFit1163->GetXaxis()->SetTitleOffset(1);
   quadLineFit1163->GetXaxis()->SetTitleFont(42);
   quadLineFit1163->GetYaxis()->SetLabelFont(42);
   quadLineFit1163->GetYaxis()->SetTitleFont(42);
   quadLineFit1163->SetParameter(0,4.573356);
   quadLineFit1163->SetParError(0,0.05437076);
   quadLineFit1163->SetParLimits(0,0,0);
   quadLineFit1163->SetParameter(1,-0.1304149);
   quadLineFit1163->SetParError(1,0.003008244);
   quadLineFit1163->SetParLimits(1,0,0);
   quadLineFit1163->Draw("same");
   
   Double_t 50.000000 ppm_fx1163[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1163[3] = {
   4.3656,
   3.890424,
   3.479488};
   Double_t 50.000000 ppm_fex1163[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1163[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,50.000000 ppm_fx1163,50.000000 ppm_fy1163,50.000000 ppm_fex1163,50.000000 ppm_fey1163);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1163 = new TH1F("Graph_50dO000000sPppm1163","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1163->SetMinimum(3.380666);
   Graph_50dO000000sPppm1163->SetMaximum(4.464422);
   Graph_50dO000000sPppm1163->SetDirectory(0);
   Graph_50dO000000sPppm1163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1163->SetLineColor(ci);
   Graph_50dO000000sPppm1163->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1163->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1163->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1163->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1163->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1163->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1163->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1163);
   
   
   TF1 *quadLineFit1164 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1164->SetFillColor(19);
   quadLineFit1164->SetFillStyle(0);
   quadLineFit1164->SetLineColor(5);
   quadLineFit1164->SetLineWidth(2);
   quadLineFit1164->SetChisquare(9.500446);
   quadLineFit1164->SetNDF(1);
   quadLineFit1164->GetXaxis()->SetLabelFont(42);
   quadLineFit1164->GetXaxis()->SetTitleOffset(1);
   quadLineFit1164->GetXaxis()->SetTitleFont(42);
   quadLineFit1164->GetYaxis()->SetLabelFont(42);
   quadLineFit1164->GetYaxis()->SetTitleFont(42);
   quadLineFit1164->SetParameter(0,7.899344);
   quadLineFit1164->SetParError(0,0.05437711);
   quadLineFit1164->SetParLimits(0,0,0);
   quadLineFit1164->SetParameter(1,-0.2215281);
   quadLineFit1164->SetParError(1,0.003008592);
   quadLineFit1164->SetParLimits(1,0,0);
   quadLineFit1164->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1164);
   gre->Draw("p ");
   
   TF1 *quadLineFit1165 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1165->SetFillColor(19);
   quadLineFit1165->SetFillStyle(0);
   quadLineFit1165->SetLineColor(5);
   quadLineFit1165->SetLineWidth(2);
   quadLineFit1165->SetChisquare(9.500446);
   quadLineFit1165->SetNDF(1);
   quadLineFit1165->GetXaxis()->SetLabelFont(42);
   quadLineFit1165->GetXaxis()->SetTitleOffset(1);
   quadLineFit1165->GetXaxis()->SetTitleFont(42);
   quadLineFit1165->GetYaxis()->SetLabelFont(42);
   quadLineFit1165->GetYaxis()->SetTitleFont(42);
   quadLineFit1165->SetParameter(0,7.899344);
   quadLineFit1165->SetParError(0,0.05437711);
   quadLineFit1165->SetParLimits(0,0,0);
   quadLineFit1165->SetParameter(1,-0.2215281);
   quadLineFit1165->SetParError(1,0.003008592);
   quadLineFit1165->SetParLimits(1,0,0);
   quadLineFit1165->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("25.000000 ppm","   25 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-25.000000 ppm","  #minus25 ppm","lpf");
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
