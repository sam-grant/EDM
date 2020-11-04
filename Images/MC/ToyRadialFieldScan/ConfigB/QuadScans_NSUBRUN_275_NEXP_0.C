void QuadScans_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.91429,-3.25,19.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1161[3] = {
   14,
   16,
   18};
   Double_t -50.000000 ppm_fy1161[3] = {
   -3.618924,
   -3.147589,
   -2.808493};
   Double_t -50.000000 ppm_fex1161[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1161[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1161,-50.000000 ppm_fy1161,-50.000000 ppm_fex1161,-50.000000 ppm_fey1161);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1161 = new TH1F("Graph_mI50dO000000sPppm1161","",100,13.6,18.4);
   Graph_mI50dO000000sPppm1161->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1161->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1161->SetDirectory(0);
   Graph_mI50dO000000sPppm1161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1161->SetLineColor(ci);
   Graph_mI50dO000000sPppm1161->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1161->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1161->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1161->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1161->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1161->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1161->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1161->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1161->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1161->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1161->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1161->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1161->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1161->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1161->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1161);
   
   
   TF1 *quadLineFit1162 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1162->SetFillColor(19);
   quadLineFit1162->SetFillStyle(0);
   quadLineFit1162->SetLineWidth(2);
   quadLineFit1162->SetChisquare(36.89246);
   quadLineFit1162->SetNDF(1);
   quadLineFit1162->GetXaxis()->SetLabelFont(42);
   quadLineFit1162->GetXaxis()->SetTitleOffset(1);
   quadLineFit1162->GetXaxis()->SetTitleFont(42);
   quadLineFit1162->GetYaxis()->SetLabelFont(42);
   quadLineFit1162->GetYaxis()->SetTitleFont(42);
   quadLineFit1162->SetParameter(0,-6.433394);
   quadLineFit1162->SetParError(0,0.05054018);
   quadLineFit1162->SetParLimits(0,0,0);
   quadLineFit1162->SetParameter(1,0.2026078);
   quadLineFit1162->SetParError(1,0.003142437);
   quadLineFit1162->SetParLimits(1,0,0);
   quadLineFit1162->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1162);
   gre->Draw("ap");
   
   TF1 *quadLineFit1163 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1163->SetFillColor(19);
   quadLineFit1163->SetFillStyle(0);
   quadLineFit1163->SetLineWidth(2);
   quadLineFit1163->SetChisquare(36.89246);
   quadLineFit1163->SetNDF(1);
   quadLineFit1163->GetXaxis()->SetLabelFont(42);
   quadLineFit1163->GetXaxis()->SetTitleOffset(1);
   quadLineFit1163->GetXaxis()->SetTitleFont(42);
   quadLineFit1163->GetYaxis()->SetLabelFont(42);
   quadLineFit1163->GetYaxis()->SetTitleFont(42);
   quadLineFit1163->SetParameter(0,-6.433394);
   quadLineFit1163->SetParError(0,0.05054018);
   quadLineFit1163->SetParLimits(0,0,0);
   quadLineFit1163->SetParameter(1,0.2026078);
   quadLineFit1163->SetParError(1,0.003142437);
   quadLineFit1163->SetParLimits(1,0,0);
   quadLineFit1163->Draw("same");
   
   Double_t -30.000000 ppm_fx1163[3] = {
   14,
   16,
   18};
   Double_t -30.000000 ppm_fy1163[3] = {
   -1.90173,
   -1.657172,
   -1.476525};
   Double_t -30.000000 ppm_fex1163[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1163[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1163,-30.000000 ppm_fy1163,-30.000000 ppm_fex1163,-30.000000 ppm_fey1163);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1163 = new TH1F("Graph_mI30dO000000sPppm1163","Graph",100,13.6,18.4);
   Graph_mI30dO000000sPppm1163->SetMinimum(-1.954917);
   Graph_mI30dO000000sPppm1163->SetMaximum(-1.423338);
   Graph_mI30dO000000sPppm1163->SetDirectory(0);
   Graph_mI30dO000000sPppm1163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1163->SetLineColor(ci);
   Graph_mI30dO000000sPppm1163->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1163->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1163->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1163->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1163->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1163->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1163->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1163);
   
   
   TF1 *quadLineFit1164 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1164->SetFillColor(19);
   quadLineFit1164->SetFillStyle(0);
   quadLineFit1164->SetLineColor(2);
   quadLineFit1164->SetLineWidth(2);
   quadLineFit1164->SetChisquare(8.617418);
   quadLineFit1164->SetNDF(1);
   quadLineFit1164->GetXaxis()->SetLabelFont(42);
   quadLineFit1164->GetXaxis()->SetTitleOffset(1);
   quadLineFit1164->GetXaxis()->SetTitleFont(42);
   quadLineFit1164->GetYaxis()->SetLabelFont(42);
   quadLineFit1164->GetYaxis()->SetTitleFont(42);
   quadLineFit1164->SetParameter(0,-3.379298);
   quadLineFit1164->SetParError(0,0.05054011);
   quadLineFit1164->SetParLimits(0,0,0);
   quadLineFit1164->SetParameter(1,0.1063014);
   quadLineFit1164->SetParError(1,0.003142433);
   quadLineFit1164->SetParLimits(1,0,0);
   quadLineFit1164->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1164);
   gre->Draw("p ");
   
   TF1 *quadLineFit1165 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1165->SetFillColor(19);
   quadLineFit1165->SetFillStyle(0);
   quadLineFit1165->SetLineColor(2);
   quadLineFit1165->SetLineWidth(2);
   quadLineFit1165->SetChisquare(8.617418);
   quadLineFit1165->SetNDF(1);
   quadLineFit1165->GetXaxis()->SetLabelFont(42);
   quadLineFit1165->GetXaxis()->SetTitleOffset(1);
   quadLineFit1165->GetXaxis()->SetTitleFont(42);
   quadLineFit1165->GetYaxis()->SetLabelFont(42);
   quadLineFit1165->GetYaxis()->SetTitleFont(42);
   quadLineFit1165->SetParameter(0,-3.379298);
   quadLineFit1165->SetParError(0,0.05054011);
   quadLineFit1165->SetParLimits(0,0,0);
   quadLineFit1165->SetParameter(1,0.1063014);
   quadLineFit1165->SetParError(1,0.003142433);
   quadLineFit1165->SetParLimits(1,0,0);
   quadLineFit1165->Draw("same");
   
   Double_t -10.000000 ppm_fx1165[3] = {
   14,
   16,
   18};
   Double_t -10.000000 ppm_fy1165[3] = {
   -0.176584,
   -0.1423615,
   -0.1354032};
   Double_t -10.000000 ppm_fex1165[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1165[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1165,-10.000000 ppm_fy1165,-10.000000 ppm_fex1165,-10.000000 ppm_fey1165);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1165 = new TH1F("Graph_mI10dO000000sPppm1165","Graph",100,13.6,18.4);
   Graph_mI10dO000000sPppm1165->SetMinimum(-0.1913678);
   Graph_mI10dO000000sPppm1165->SetMaximum(-0.1206193);
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
   
   
   TF1 *quadLineFit1166 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1166->SetFillColor(19);
   quadLineFit1166->SetFillStyle(0);
   quadLineFit1166->SetLineColor(3);
   quadLineFit1166->SetLineWidth(2);
   quadLineFit1166->SetChisquare(1.568224);
   quadLineFit1166->SetNDF(1);
   quadLineFit1166->GetXaxis()->SetLabelFont(42);
   quadLineFit1166->GetXaxis()->SetTitleOffset(1);
   quadLineFit1166->GetXaxis()->SetTitleFont(42);
   quadLineFit1166->GetYaxis()->SetLabelFont(42);
   quadLineFit1166->GetYaxis()->SetTitleFont(42);
   quadLineFit1166->SetParameter(0,-0.3161726);
   quadLineFit1166->SetParError(0,0.05054025);
   quadLineFit1166->SetParLimits(0,0,0);
   quadLineFit1166->SetParameter(1,0.01029519);
   quadLineFit1166->SetParError(1,0.003142441);
   quadLineFit1166->SetParLimits(1,0,0);
   quadLineFit1166->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1166);
   gre->Draw("p ");
   
   TF1 *quadLineFit1167 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1167->SetFillColor(19);
   quadLineFit1167->SetFillStyle(0);
   quadLineFit1167->SetLineColor(3);
   quadLineFit1167->SetLineWidth(2);
   quadLineFit1167->SetChisquare(1.568224);
   quadLineFit1167->SetNDF(1);
   quadLineFit1167->GetXaxis()->SetLabelFont(42);
   quadLineFit1167->GetXaxis()->SetTitleOffset(1);
   quadLineFit1167->GetXaxis()->SetTitleFont(42);
   quadLineFit1167->GetYaxis()->SetLabelFont(42);
   quadLineFit1167->GetYaxis()->SetTitleFont(42);
   quadLineFit1167->SetParameter(0,-0.3161726);
   quadLineFit1167->SetParError(0,0.05054025);
   quadLineFit1167->SetParLimits(0,0,0);
   quadLineFit1167->SetParameter(1,0.01029519);
   quadLineFit1167->SetParError(1,0.003142441);
   quadLineFit1167->SetParLimits(1,0,0);
   quadLineFit1167->Draw("same");
   
   Double_t 10.000000 ppm_fx1167[3] = {
   14,
   16,
   18};
   Double_t 10.000000 ppm_fy1167[3] = {
   1.542301,
   1.360481,
   1.203168};
   Double_t 10.000000 ppm_fex1167[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1167[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,10.000000 ppm_fx1167,10.000000 ppm_fy1167,10.000000 ppm_fex1167,10.000000 ppm_fey1167);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1167 = new TH1F("Graph_10dO000000sPppm1167","Graph",100,13.6,18.4);
   Graph_10dO000000sPppm1167->SetMinimum(1.158589);
   Graph_10dO000000sPppm1167->SetMaximum(1.586881);
   Graph_10dO000000sPppm1167->SetDirectory(0);
   Graph_10dO000000sPppm1167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1167->SetLineColor(ci);
   Graph_10dO000000sPppm1167->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1167->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1167->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1167->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1167->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1167->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1167->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1167);
   
   
   TF1 *quadLineFit1168 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1168->SetFillColor(19);
   quadLineFit1168->SetFillStyle(0);
   quadLineFit1168->SetLineColor(4);
   quadLineFit1168->SetLineWidth(2);
   quadLineFit1168->SetChisquare(1.26724);
   quadLineFit1168->SetNDF(1);
   quadLineFit1168->GetXaxis()->SetLabelFont(42);
   quadLineFit1168->GetXaxis()->SetTitleOffset(1);
   quadLineFit1168->GetXaxis()->SetTitleFont(42);
   quadLineFit1168->GetYaxis()->SetLabelFont(42);
   quadLineFit1168->GetYaxis()->SetTitleFont(42);
   quadLineFit1168->SetParameter(0,2.725183);
   quadLineFit1168->SetParError(0,0.05054018);
   quadLineFit1168->SetParLimits(0,0,0);
   quadLineFit1168->SetParameter(1,-0.08478333);
   quadLineFit1168->SetParError(1,0.003142437);
   quadLineFit1168->SetParLimits(1,0,0);
   quadLineFit1168->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1168);
   gre->Draw("p ");
   
   TF1 *quadLineFit1169 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1169->SetFillColor(19);
   quadLineFit1169->SetFillStyle(0);
   quadLineFit1169->SetLineColor(4);
   quadLineFit1169->SetLineWidth(2);
   quadLineFit1169->SetChisquare(1.26724);
   quadLineFit1169->SetNDF(1);
   quadLineFit1169->GetXaxis()->SetLabelFont(42);
   quadLineFit1169->GetXaxis()->SetTitleOffset(1);
   quadLineFit1169->GetXaxis()->SetTitleFont(42);
   quadLineFit1169->GetYaxis()->SetLabelFont(42);
   quadLineFit1169->GetYaxis()->SetTitleFont(42);
   quadLineFit1169->SetParameter(0,2.725183);
   quadLineFit1169->SetParError(0,0.05054018);
   quadLineFit1169->SetParLimits(0,0,0);
   quadLineFit1169->SetParameter(1,-0.08478333);
   quadLineFit1169->SetParError(1,0.003142437);
   quadLineFit1169->SetParLimits(1,0,0);
   quadLineFit1169->Draw("same");
   
   Double_t 30.000000 ppm_fx1169[3] = {
   14,
   16,
   18};
   Double_t 30.000000 ppm_fy1169[3] = {
   3.248283,
   2.853877,
   2.542339};
   Double_t 30.000000 ppm_fex1169[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1169[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,30.000000 ppm_fx1169,30.000000 ppm_fy1169,30.000000 ppm_fex1169,30.000000 ppm_fey1169);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1169 = new TH1F("Graph_30dO000000sPppm1169","Graph",100,13.6,18.4);
   Graph_30dO000000sPppm1169->SetMinimum(2.461079);
   Graph_30dO000000sPppm1169->SetMaximum(3.329543);
   Graph_30dO000000sPppm1169->SetDirectory(0);
   Graph_30dO000000sPppm1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1169->SetLineColor(ci);
   Graph_30dO000000sPppm1169->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1169->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1169->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1169->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1169->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1169->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1169->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1169);
   
   
   TF1 *quadLineFit1170 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1170->SetFillColor(19);
   quadLineFit1170->SetFillStyle(0);
   quadLineFit1170->SetLineColor(5);
   quadLineFit1170->SetLineWidth(2);
   quadLineFit1170->SetChisquare(14.48746);
   quadLineFit1170->SetNDF(1);
   quadLineFit1170->GetXaxis()->SetLabelFont(42);
   quadLineFit1170->GetXaxis()->SetTitleOffset(1);
   quadLineFit1170->GetXaxis()->SetTitleFont(42);
   quadLineFit1170->GetYaxis()->SetLabelFont(42);
   quadLineFit1170->GetYaxis()->SetTitleFont(42);
   quadLineFit1170->SetParameter(0,5.705274);
   quadLineFit1170->SetParError(0,0.05054016);
   quadLineFit1170->SetParLimits(0,0,0);
   quadLineFit1170->SetParameter(1,-0.1764859);
   quadLineFit1170->SetParError(1,0.003142435);
   quadLineFit1170->SetParLimits(1,0,0);
   quadLineFit1170->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1170);
   gre->Draw("p ");
   
   TF1 *quadLineFit1171 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1171->SetFillColor(19);
   quadLineFit1171->SetFillStyle(0);
   quadLineFit1171->SetLineColor(5);
   quadLineFit1171->SetLineWidth(2);
   quadLineFit1171->SetChisquare(14.48746);
   quadLineFit1171->SetNDF(1);
   quadLineFit1171->GetXaxis()->SetLabelFont(42);
   quadLineFit1171->GetXaxis()->SetTitleOffset(1);
   quadLineFit1171->GetXaxis()->SetTitleFont(42);
   quadLineFit1171->GetYaxis()->SetLabelFont(42);
   quadLineFit1171->GetYaxis()->SetTitleFont(42);
   quadLineFit1171->SetParameter(0,5.705274);
   quadLineFit1171->SetParError(0,0.05054016);
   quadLineFit1171->SetParLimits(0,0,0);
   quadLineFit1171->SetParameter(1,-0.1764859);
   quadLineFit1171->SetParError(1,0.003142435);
   quadLineFit1171->SetParLimits(1,0,0);
   quadLineFit1171->Draw("same");
   
   Double_t 50.000000 ppm_fx1171[3] = {
   14,
   16,
   18};
   Double_t 50.000000 ppm_fy1171[3] = {
   4.995904,
   4.362121,
   3.893819};
   Double_t 50.000000 ppm_fex1171[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1171[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,50.000000 ppm_fx1171,50.000000 ppm_fy1171,50.000000 ppm_fex1171,50.000000 ppm_fey1171);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1171 = new TH1F("Graph_50dO000000sPppm1171","Graph",100,13.6,18.4);
   Graph_50dO000000sPppm1171->SetMinimum(3.772945);
   Graph_50dO000000sPppm1171->SetMaximum(5.116778);
   Graph_50dO000000sPppm1171->SetDirectory(0);
   Graph_50dO000000sPppm1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1171->SetLineColor(ci);
   Graph_50dO000000sPppm1171->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1171->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1171->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1171->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1171->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1171->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1171->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1171);
   
   
   TF1 *quadLineFit1172 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1172->SetFillColor(19);
   quadLineFit1172->SetFillStyle(0);
   quadLineFit1172->SetLineColor(6);
   quadLineFit1172->SetLineWidth(2);
   quadLineFit1172->SetChisquare(57.7731);
   quadLineFit1172->SetNDF(1);
   quadLineFit1172->GetXaxis()->SetLabelFont(42);
   quadLineFit1172->GetXaxis()->SetTitleOffset(1);
   quadLineFit1172->GetXaxis()->SetTitleFont(42);
   quadLineFit1172->GetYaxis()->SetLabelFont(42);
   quadLineFit1172->GetYaxis()->SetTitleFont(42);
   quadLineFit1172->SetParameter(0,8.82562);
   quadLineFit1172->SetParError(0,0.05054027);
   quadLineFit1172->SetParLimits(0,0,0);
   quadLineFit1172->SetParameter(1,-0.2755212);
   quadLineFit1172->SetParError(1,0.003142442);
   quadLineFit1172->SetParLimits(1,0,0);
   quadLineFit1172->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1172);
   gre->Draw("p ");
   
   TF1 *quadLineFit1173 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1173->SetFillColor(19);
   quadLineFit1173->SetFillStyle(0);
   quadLineFit1173->SetLineColor(6);
   quadLineFit1173->SetLineWidth(2);
   quadLineFit1173->SetChisquare(57.7731);
   quadLineFit1173->SetNDF(1);
   quadLineFit1173->GetXaxis()->SetLabelFont(42);
   quadLineFit1173->GetXaxis()->SetTitleOffset(1);
   quadLineFit1173->GetXaxis()->SetTitleFont(42);
   quadLineFit1173->GetYaxis()->SetLabelFont(42);
   quadLineFit1173->GetYaxis()->SetTitleFont(42);
   quadLineFit1173->SetParameter(0,8.82562);
   quadLineFit1173->SetParError(0,0.05054027);
   quadLineFit1173->SetParLimits(0,0,0);
   quadLineFit1173->SetParameter(1,-0.2755212);
   quadLineFit1173->SetParError(1,0.003142442);
   quadLineFit1173->SetParLimits(1,0,0);
   quadLineFit1173->Draw("same");
   
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
