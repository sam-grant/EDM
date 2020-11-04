void QuadScans_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1177[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1177[3] = {
   -3.159291,
   -2.813359,
   -2.530813};
   Double_t -50.000000 ppm_fex1177[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1177[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1177,-50.000000 ppm_fy1177,-50.000000 ppm_fex1177,-50.000000 ppm_fey1177);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1177 = new TH1F("Graph_mI50dO000000sPppm1177","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1177->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1177->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1177->SetDirectory(0);
   Graph_mI50dO000000sPppm1177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1177->SetLineColor(ci);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1177->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1177->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1177->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1177->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1177);
   
   
   TF1 *quadLineFit1178 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1178->SetFillColor(19);
   quadLineFit1178->SetFillStyle(0);
   quadLineFit1178->SetLineWidth(2);
   quadLineFit1178->SetChisquare(9.249232);
   quadLineFit1178->SetNDF(1);
   quadLineFit1178->GetXaxis()->SetLabelFont(42);
   quadLineFit1178->GetXaxis()->SetTitleOffset(1);
   quadLineFit1178->GetXaxis()->SetTitleFont(42);
   quadLineFit1178->GetYaxis()->SetLabelFont(42);
   quadLineFit1178->GetYaxis()->SetTitleFont(42);
   quadLineFit1178->SetParameter(0,-5.66264);
   quadLineFit1178->SetParError(0,0.05436997);
   quadLineFit1178->SetParLimits(0,0,0);
   quadLineFit1178->SetParameter(1,0.1571196);
   quadLineFit1178->SetParError(1,0.0030082);
   quadLineFit1178->SetParLimits(1,0,0);
   quadLineFit1178->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1178);
   gre->Draw("ap");
   
   TF1 *quadLineFit1179 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1179->SetFillColor(19);
   quadLineFit1179->SetFillStyle(0);
   quadLineFit1179->SetLineWidth(2);
   quadLineFit1179->SetChisquare(9.249232);
   quadLineFit1179->SetNDF(1);
   quadLineFit1179->GetXaxis()->SetLabelFont(42);
   quadLineFit1179->GetXaxis()->SetTitleOffset(1);
   quadLineFit1179->GetXaxis()->SetTitleFont(42);
   quadLineFit1179->GetYaxis()->SetLabelFont(42);
   quadLineFit1179->GetYaxis()->SetTitleFont(42);
   quadLineFit1179->SetParameter(0,-5.66264);
   quadLineFit1179->SetParError(0,0.05436997);
   quadLineFit1179->SetParLimits(0,0,0);
   quadLineFit1179->SetParameter(1,0.1571196);
   quadLineFit1179->SetParError(1,0.0030082);
   quadLineFit1179->SetParLimits(1,0,0);
   quadLineFit1179->Draw("same");
   
   Double_t -30.000000 ppm_fx1179[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1179[3] = {
   -1.657863,
   -1.470925,
   -1.322965};
   Double_t -30.000000 ppm_fex1179[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1179[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1179,-30.000000 ppm_fy1179,-30.000000 ppm_fex1179,-30.000000 ppm_fey1179);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1179 = new TH1F("Graph_mI30dO000000sPppm1179","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1179->SetMinimum(-1.701563);
   Graph_mI30dO000000sPppm1179->SetMaximum(-1.279265);
   Graph_mI30dO000000sPppm1179->SetDirectory(0);
   Graph_mI30dO000000sPppm1179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1179->SetLineColor(ci);
   Graph_mI30dO000000sPppm1179->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1179->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1179->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1179->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1179->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1179->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1179->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1179);
   
   
   TF1 *quadLineFit1180 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1180->SetFillColor(19);
   quadLineFit1180->SetFillStyle(0);
   quadLineFit1180->SetLineColor(2);
   quadLineFit1180->SetLineWidth(2);
   quadLineFit1180->SetChisquare(3.497635);
   quadLineFit1180->SetNDF(1);
   quadLineFit1180->GetXaxis()->SetLabelFont(42);
   quadLineFit1180->GetXaxis()->SetTitleOffset(1);
   quadLineFit1180->GetXaxis()->SetTitleFont(42);
   quadLineFit1180->GetYaxis()->SetLabelFont(42);
   quadLineFit1180->GetYaxis()->SetTitleFont(42);
   quadLineFit1180->SetParameter(0,-2.990956);
   quadLineFit1180->SetParError(0,0.05437117);
   quadLineFit1180->SetParLimits(0,0,0);
   quadLineFit1180->SetParameter(1,0.08372435);
   quadLineFit1180->SetParError(1,0.003008266);
   quadLineFit1180->SetParLimits(1,0,0);
   quadLineFit1180->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1180);
   gre->Draw("p ");
   
   TF1 *quadLineFit1181 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1181->SetFillColor(19);
   quadLineFit1181->SetFillStyle(0);
   quadLineFit1181->SetLineColor(2);
   quadLineFit1181->SetLineWidth(2);
   quadLineFit1181->SetChisquare(3.497635);
   quadLineFit1181->SetNDF(1);
   quadLineFit1181->GetXaxis()->SetLabelFont(42);
   quadLineFit1181->GetXaxis()->SetTitleOffset(1);
   quadLineFit1181->GetXaxis()->SetTitleFont(42);
   quadLineFit1181->GetYaxis()->SetLabelFont(42);
   quadLineFit1181->GetYaxis()->SetTitleFont(42);
   quadLineFit1181->SetParameter(0,-2.990956);
   quadLineFit1181->SetParError(0,0.05437117);
   quadLineFit1181->SetParLimits(0,0,0);
   quadLineFit1181->SetParameter(1,0.08372435);
   quadLineFit1181->SetParError(1,0.003008266);
   quadLineFit1181->SetParLimits(1,0,0);
   quadLineFit1181->Draw("same");
   
   Double_t -10.000000 ppm_fx1181[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1181[3] = {
   -0.1515774,
   -0.1289588,
   -0.1165613};
   Double_t -10.000000 ppm_fex1181[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1181[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1181,-10.000000 ppm_fy1181,-10.000000 ppm_fex1181,-10.000000 ppm_fey1181);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1181 = new TH1F("Graph_mI10dO000000sPppm1181","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1181->SetMinimum(-0.1652894);
   Graph_mI10dO000000sPppm1181->SetMaximum(-0.1028494);
   Graph_mI10dO000000sPppm1181->SetDirectory(0);
   Graph_mI10dO000000sPppm1181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1181->SetLineColor(ci);
   Graph_mI10dO000000sPppm1181->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1181->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1181->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1181->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1181->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1181->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1181->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1181);
   
   
   TF1 *quadLineFit1182 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1182->SetFillColor(19);
   quadLineFit1182->SetFillStyle(0);
   quadLineFit1182->SetLineColor(3);
   quadLineFit1182->SetLineWidth(2);
   quadLineFit1182->SetChisquare(0.2405032);
   quadLineFit1182->SetNDF(1);
   quadLineFit1182->GetXaxis()->SetLabelFont(42);
   quadLineFit1182->GetXaxis()->SetTitleOffset(1);
   quadLineFit1182->GetXaxis()->SetTitleFont(42);
   quadLineFit1182->GetYaxis()->SetLabelFont(42);
   quadLineFit1182->GetYaxis()->SetTitleFont(42);
   quadLineFit1182->SetParameter(0,-0.289938);
   quadLineFit1182->SetParError(0,0.0543711);
   quadLineFit1182->SetParLimits(0,0,0);
   quadLineFit1182->SetParameter(1,0.008754007);
   quadLineFit1182->SetParError(1,0.003008263);
   quadLineFit1182->SetParLimits(1,0,0);
   quadLineFit1182->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1182);
   gre->Draw("p ");
   
   TF1 *quadLineFit1183 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1183->SetFillColor(19);
   quadLineFit1183->SetFillStyle(0);
   quadLineFit1183->SetLineColor(3);
   quadLineFit1183->SetLineWidth(2);
   quadLineFit1183->SetChisquare(0.2405032);
   quadLineFit1183->SetNDF(1);
   quadLineFit1183->GetXaxis()->SetLabelFont(42);
   quadLineFit1183->GetXaxis()->SetTitleOffset(1);
   quadLineFit1183->GetXaxis()->SetTitleFont(42);
   quadLineFit1183->GetYaxis()->SetLabelFont(42);
   quadLineFit1183->GetYaxis()->SetTitleFont(42);
   quadLineFit1183->SetParameter(0,-0.289938);
   quadLineFit1183->SetParError(0,0.0543711);
   quadLineFit1183->SetParLimits(0,0,0);
   quadLineFit1183->SetParameter(1,0.008754007);
   quadLineFit1183->SetParError(1,0.003008263);
   quadLineFit1183->SetParLimits(1,0,0);
   quadLineFit1183->Draw("same");
   
   Double_t 10.000000 ppm_fx1183[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1183[3] = {
   1.34767,
   1.203233,
   1.09175};
   Double_t 10.000000 ppm_fex1183[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1183[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,10.000000 ppm_fx1183,10.000000 ppm_fy1183,10.000000 ppm_fex1183,10.000000 ppm_fey1183);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1183 = new TH1F("Graph_10dO000000sPppm1183","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1183->SetMinimum(1.055947);
   Graph_10dO000000sPppm1183->SetMaximum(1.383473);
   Graph_10dO000000sPppm1183->SetDirectory(0);
   Graph_10dO000000sPppm1183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1183->SetLineColor(ci);
   Graph_10dO000000sPppm1183->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1183->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1183->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1183->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1183->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1183->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1183->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1183);
   
   
   TF1 *quadLineFit1184 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1184->SetFillColor(19);
   quadLineFit1184->SetFillStyle(0);
   quadLineFit1184->SetLineColor(4);
   quadLineFit1184->SetLineWidth(2);
   quadLineFit1184->SetChisquare(2.500156);
   quadLineFit1184->SetNDF(1);
   quadLineFit1184->GetXaxis()->SetLabelFont(42);
   quadLineFit1184->GetXaxis()->SetTitleOffset(1);
   quadLineFit1184->GetXaxis()->SetTitleFont(42);
   quadLineFit1184->GetYaxis()->SetLabelFont(42);
   quadLineFit1184->GetYaxis()->SetTitleFont(42);
   quadLineFit1184->SetParameter(0,2.365859);
   quadLineFit1184->SetParError(0,0.05437125);
   quadLineFit1184->SetParLimits(0,0,0);
   quadLineFit1184->SetParameter(1,-0.06398007);
   quadLineFit1184->SetParError(1,0.003008271);
   quadLineFit1184->SetParLimits(1,0,0);
   quadLineFit1184->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1184);
   gre->Draw("p ");
   
   TF1 *quadLineFit1185 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1185->SetFillColor(19);
   quadLineFit1185->SetFillStyle(0);
   quadLineFit1185->SetLineColor(4);
   quadLineFit1185->SetLineWidth(2);
   quadLineFit1185->SetChisquare(2.500156);
   quadLineFit1185->SetNDF(1);
   quadLineFit1185->GetXaxis()->SetLabelFont(42);
   quadLineFit1185->GetXaxis()->SetTitleOffset(1);
   quadLineFit1185->GetXaxis()->SetTitleFont(42);
   quadLineFit1185->GetYaxis()->SetLabelFont(42);
   quadLineFit1185->GetYaxis()->SetTitleFont(42);
   quadLineFit1185->SetParameter(0,2.365859);
   quadLineFit1185->SetParError(0,0.05437125);
   quadLineFit1185->SetParLimits(0,0,0);
   quadLineFit1185->SetParameter(1,-0.06398007);
   quadLineFit1185->SetParError(1,0.003008271);
   quadLineFit1185->SetParLimits(1,0,0);
   quadLineFit1185->Draw("same");
   
   Double_t 30.000000 ppm_fx1185[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1185[3] = {
   2.856128,
   2.554747,
   2.292425};
   Double_t 30.000000 ppm_fex1185[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1185[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,30.000000 ppm_fx1185,30.000000 ppm_fy1185,30.000000 ppm_fex1185,30.000000 ppm_fey1185);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1185 = new TH1F("Graph_30dO000000sPppm1185","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1185->SetMinimum(2.225844);
   Graph_30dO000000sPppm1185->SetMaximum(2.922708);
   Graph_30dO000000sPppm1185->SetDirectory(0);
   Graph_30dO000000sPppm1185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1185->SetLineColor(ci);
   Graph_30dO000000sPppm1185->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1185->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1185->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1185->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1185->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1185->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1185->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1185);
   
   
   TF1 *quadLineFit1186 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1186->SetFillColor(19);
   quadLineFit1186->SetFillStyle(0);
   quadLineFit1186->SetLineColor(5);
   quadLineFit1186->SetLineWidth(2);
   quadLineFit1186->SetChisquare(3.512046);
   quadLineFit1186->SetNDF(1);
   quadLineFit1186->GetXaxis()->SetLabelFont(42);
   quadLineFit1186->GetXaxis()->SetTitleOffset(1);
   quadLineFit1186->GetXaxis()->SetTitleFont(42);
   quadLineFit1186->GetYaxis()->SetLabelFont(42);
   quadLineFit1186->GetYaxis()->SetTitleFont(42);
   quadLineFit1186->SetParameter(0,5.10443);
   quadLineFit1186->SetParError(0,0.05437112);
   quadLineFit1186->SetParLimits(0,0,0);
   quadLineFit1186->SetParameter(1,-0.1409257);
   quadLineFit1186->SetParError(1,0.003008264);
   quadLineFit1186->SetParLimits(1,0,0);
   quadLineFit1186->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1186);
   gre->Draw("p ");
   
   TF1 *quadLineFit1187 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1187->SetFillColor(19);
   quadLineFit1187->SetFillStyle(0);
   quadLineFit1187->SetLineColor(5);
   quadLineFit1187->SetLineWidth(2);
   quadLineFit1187->SetChisquare(3.512046);
   quadLineFit1187->SetNDF(1);
   quadLineFit1187->GetXaxis()->SetLabelFont(42);
   quadLineFit1187->GetXaxis()->SetTitleOffset(1);
   quadLineFit1187->GetXaxis()->SetTitleFont(42);
   quadLineFit1187->GetYaxis()->SetLabelFont(42);
   quadLineFit1187->GetYaxis()->SetTitleFont(42);
   quadLineFit1187->SetParameter(0,5.10443);
   quadLineFit1187->SetParError(0,0.05437112);
   quadLineFit1187->SetParLimits(0,0,0);
   quadLineFit1187->SetParameter(1,-0.1409257);
   quadLineFit1187->SetParError(1,0.003008264);
   quadLineFit1187->SetParLimits(1,0,0);
   quadLineFit1187->Draw("same");
   
   Double_t 50.000000 ppm_fx1187[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1187[3] = {
   4.361838,
   3.892728,
   3.500878};
   Double_t 50.000000 ppm_fex1187[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1187[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,50.000000 ppm_fx1187,50.000000 ppm_fy1187,50.000000 ppm_fex1187,50.000000 ppm_fey1187);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1187 = new TH1F("Graph_50dO000000sPppm1187","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1187->SetMinimum(3.404572);
   Graph_50dO000000sPppm1187->SetMaximum(4.458145);
   Graph_50dO000000sPppm1187->SetDirectory(0);
   Graph_50dO000000sPppm1187->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1187->SetLineColor(ci);
   Graph_50dO000000sPppm1187->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1187->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1187->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1187->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1187->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1187->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1187->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1187);
   
   
   TF1 *quadLineFit1188 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1188->SetFillColor(19);
   quadLineFit1188->SetFillStyle(0);
   quadLineFit1188->SetLineColor(6);
   quadLineFit1188->SetLineWidth(2);
   quadLineFit1188->SetChisquare(13.74209);
   quadLineFit1188->SetNDF(1);
   quadLineFit1188->GetXaxis()->SetLabelFont(42);
   quadLineFit1188->GetXaxis()->SetTitleOffset(1);
   quadLineFit1188->GetXaxis()->SetTitleFont(42);
   quadLineFit1188->GetYaxis()->SetLabelFont(42);
   quadLineFit1188->GetYaxis()->SetTitleFont(42);
   quadLineFit1188->SetParameter(0,7.792802);
   quadLineFit1188->SetParError(0,0.05437103);
   quadLineFit1188->SetParLimits(0,0,0);
   quadLineFit1188->SetParameter(1,-0.21524);
   quadLineFit1188->SetParError(1,0.003008258);
   quadLineFit1188->SetParLimits(1,0,0);
   quadLineFit1188->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1188);
   gre->Draw("p ");
   
   TF1 *quadLineFit1189 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1189->SetFillColor(19);
   quadLineFit1189->SetFillStyle(0);
   quadLineFit1189->SetLineColor(6);
   quadLineFit1189->SetLineWidth(2);
   quadLineFit1189->SetChisquare(13.74209);
   quadLineFit1189->SetNDF(1);
   quadLineFit1189->GetXaxis()->SetLabelFont(42);
   quadLineFit1189->GetXaxis()->SetTitleOffset(1);
   quadLineFit1189->GetXaxis()->SetTitleFont(42);
   quadLineFit1189->GetYaxis()->SetLabelFont(42);
   quadLineFit1189->GetYaxis()->SetTitleFont(42);
   quadLineFit1189->SetParameter(0,7.792802);
   quadLineFit1189->SetParError(0,0.05437103);
   quadLineFit1189->SetParLimits(0,0,0);
   quadLineFit1189->SetParameter(1,-0.21524);
   quadLineFit1189->SetParError(1,0.003008258);
   quadLineFit1189->SetParLimits(1,0,0);
   quadLineFit1189->Draw("same");
   
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
