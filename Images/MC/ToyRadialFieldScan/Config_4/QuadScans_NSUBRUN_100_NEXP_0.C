void QuadScans_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1043[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1043[2] = {
   -3.170458,
   -2.531801};
   Double_t -50.000000 ppm_fex1043[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1043[2] = {
   0.01477369,
   0.01477369};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1043,-50.000000 ppm_fy1043,-50.000000 ppm_fex1043,-50.000000 ppm_fey1043);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1043 = new TH1F("Graph_mI50dO000000sPppm1043","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1043->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1043->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1043->SetDirectory(0);
   Graph_mI50dO000000sPppm1043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1043->SetLineColor(ci);
   Graph_mI50dO000000sPppm1043->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1043->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1043->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1043->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1043->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1043->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1043->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1043->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1043->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1043->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1043->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1043->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1043->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1043->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1043->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1043);
   
   
   TF1 *quadLineFit1044 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1044->SetFillColor(19);
   quadLineFit1044->SetFillStyle(0);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(2.473402e-18);
   quadLineFit1044->SetNDF(0);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,-5.725088);
   quadLineFit1044->SetParError(0,0.09459776);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,0.1596643);
   quadLineFit1044->SetParError(1,0.005223287);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("ap");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(2.473402e-18);
   quadLineFit1045->SetNDF(0);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,-5.725088);
   quadLineFit1045->SetParError(0,0.09459776);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,0.1596643);
   quadLineFit1045->SetParError(1,0.005223287);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
   Double_t -25.000000 ppm_fx1045[2] = {
   16,
   20};
   Double_t -25.000000 ppm_fy1045[2] = {
   -1.279267,
   -1.024247};
   Double_t -25.000000 ppm_fex1045[2] = {
   0,
   0};
   Double_t -25.000000 ppm_fey1045[2] = {
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(2,-25.000000 ppm_fx1045,-25.000000 ppm_fy1045,-25.000000 ppm_fex1045,-25.000000 ppm_fey1045);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1045 = new TH1F("Graph_mI25dO000000sPppm1045","Graph",100,15.6,20.4);
   Graph_mI25dO000000sPppm1045->SetMinimum(-1.322498);
   Graph_mI25dO000000sPppm1045->SetMaximum(-0.9810162);
   Graph_mI25dO000000sPppm1045->SetDirectory(0);
   Graph_mI25dO000000sPppm1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1045->SetLineColor(ci);
   Graph_mI25dO000000sPppm1045->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1045->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1045->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1045->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1045->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1045->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1045->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1045);
   
   
   TF1 *quadLineFit1046 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1046->SetFillColor(19);
   quadLineFit1046->SetFillStyle(0);
   quadLineFit1046->SetLineColor(2);
   quadLineFit1046->SetLineWidth(2);
   quadLineFit1046->SetChisquare(1.021907e-18);
   quadLineFit1046->SetNDF(0);
   quadLineFit1046->GetXaxis()->SetLabelFont(42);
   quadLineFit1046->GetXaxis()->SetTitleOffset(1);
   quadLineFit1046->GetXaxis()->SetTitleFont(42);
   quadLineFit1046->GetYaxis()->SetLabelFont(42);
   quadLineFit1046->GetYaxis()->SetTitleFont(42);
   quadLineFit1046->SetParameter(0,-2.299349);
   quadLineFit1046->SetParError(0,0.09459776);
   quadLineFit1046->SetParLimits(0,0,0);
   quadLineFit1046->SetParameter(1,0.06375513);
   quadLineFit1046->SetParError(1,0.005223287);
   quadLineFit1046->SetParLimits(1,0,0);
   quadLineFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1046);
   gre->Draw("p ");
   
   TF1 *quadLineFit1047 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1047->SetFillColor(19);
   quadLineFit1047->SetFillStyle(0);
   quadLineFit1047->SetLineColor(2);
   quadLineFit1047->SetLineWidth(2);
   quadLineFit1047->SetChisquare(1.021907e-18);
   quadLineFit1047->SetNDF(0);
   quadLineFit1047->GetXaxis()->SetLabelFont(42);
   quadLineFit1047->GetXaxis()->SetTitleOffset(1);
   quadLineFit1047->GetXaxis()->SetTitleFont(42);
   quadLineFit1047->GetYaxis()->SetLabelFont(42);
   quadLineFit1047->GetYaxis()->SetTitleFont(42);
   quadLineFit1047->SetParameter(0,-2.299349);
   quadLineFit1047->SetParError(0,0.09459776);
   quadLineFit1047->SetParLimits(0,0,0);
   quadLineFit1047->SetParameter(1,0.06375513);
   quadLineFit1047->SetParError(1,0.005223287);
   quadLineFit1047->SetParLimits(1,0,0);
   quadLineFit1047->Draw("same");
   
   Double_t 0.000000 ppm_fx1047[2] = {
   16,
   20};
   Double_t 0.000000 ppm_fy1047[2] = {
   0.6199615,
   0.4877447};
   Double_t 0.000000 ppm_fex1047[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1047[2] = {
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(2,0.000000 ppm_fx1047,0.000000 ppm_fy1047,0.000000 ppm_fex1047,0.000000 ppm_fey1047);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1047 = new TH1F("Graph_0dO000000sPppm1047","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1047->SetMinimum(0.4567946);
   Graph_0dO000000sPppm1047->SetMaximum(0.6509116);
   Graph_0dO000000sPppm1047->SetDirectory(0);
   Graph_0dO000000sPppm1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1047->SetLineColor(ci);
   Graph_0dO000000sPppm1047->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1047->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1047->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1047->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1047->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1047->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1047->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1047);
   
   
   TF1 *quadLineFit1048 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1048->SetFillColor(19);
   quadLineFit1048->SetFillStyle(0);
   quadLineFit1048->SetLineColor(3);
   quadLineFit1048->SetLineWidth(2);
   quadLineFit1048->SetChisquare(2.826686e-19);
   quadLineFit1048->SetNDF(0);
   quadLineFit1048->GetXaxis()->SetLabelFont(42);
   quadLineFit1048->GetXaxis()->SetTitleOffset(1);
   quadLineFit1048->GetXaxis()->SetTitleFont(42);
   quadLineFit1048->GetYaxis()->SetLabelFont(42);
   quadLineFit1048->GetYaxis()->SetTitleFont(42);
   quadLineFit1048->SetParameter(0,1.148829);
   quadLineFit1048->SetParError(0,0.09459776);
   quadLineFit1048->SetParLimits(0,0,0);
   quadLineFit1048->SetParameter(1,-0.0330542);
   quadLineFit1048->SetParError(1,0.005223287);
   quadLineFit1048->SetParLimits(1,0,0);
   quadLineFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1048);
   gre->Draw("p ");
   
   TF1 *quadLineFit1049 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1049->SetFillColor(19);
   quadLineFit1049->SetFillStyle(0);
   quadLineFit1049->SetLineColor(3);
   quadLineFit1049->SetLineWidth(2);
   quadLineFit1049->SetChisquare(2.826686e-19);
   quadLineFit1049->SetNDF(0);
   quadLineFit1049->GetXaxis()->SetLabelFont(42);
   quadLineFit1049->GetXaxis()->SetTitleOffset(1);
   quadLineFit1049->GetXaxis()->SetTitleFont(42);
   quadLineFit1049->GetYaxis()->SetLabelFont(42);
   quadLineFit1049->GetYaxis()->SetTitleFont(42);
   quadLineFit1049->SetParameter(0,1.148829);
   quadLineFit1049->SetParError(0,0.09459776);
   quadLineFit1049->SetParLimits(0,0,0);
   quadLineFit1049->SetParameter(1,-0.0330542);
   quadLineFit1049->SetParError(1,0.005223287);
   quadLineFit1049->SetParLimits(1,0,0);
   quadLineFit1049->Draw("same");
   
   Double_t 25.000000 ppm_fx1049[2] = {
   16,
   20};
   Double_t 25.000000 ppm_fy1049[2] = {
   2.486117,
   1.990632};
   Double_t 25.000000 ppm_fex1049[2] = {
   0,
   0};
   Double_t 25.000000 ppm_fey1049[2] = {
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(2,25.000000 ppm_fx1049,25.000000 ppm_fy1049,25.000000 ppm_fex1049,25.000000 ppm_fey1049);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1049 = new TH1F("Graph_25dO000000sPppm1049","Graph",100,15.6,20.4);
   Graph_25dO000000sPppm1049->SetMinimum(1.923355);
   Graph_25dO000000sPppm1049->SetMaximum(2.553394);
   Graph_25dO000000sPppm1049->SetDirectory(0);
   Graph_25dO000000sPppm1049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1049->SetLineColor(ci);
   Graph_25dO000000sPppm1049->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1049->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1049->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1049->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1049->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1049->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1049->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1049);
   
   
   TF1 *quadLineFit1050 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1050->SetFillColor(19);
   quadLineFit1050->SetFillStyle(0);
   quadLineFit1050->SetLineColor(4);
   quadLineFit1050->SetLineWidth(2);
   quadLineFit1050->SetChisquare(2.224169e-18);
   quadLineFit1050->SetNDF(0);
   quadLineFit1050->GetXaxis()->SetLabelFont(42);
   quadLineFit1050->GetXaxis()->SetTitleOffset(1);
   quadLineFit1050->GetXaxis()->SetTitleFont(42);
   quadLineFit1050->GetYaxis()->SetLabelFont(42);
   quadLineFit1050->GetYaxis()->SetTitleFont(42);
   quadLineFit1050->SetParameter(0,4.468057);
   quadLineFit1050->SetParError(0,0.09459776);
   quadLineFit1050->SetParLimits(0,0,0);
   quadLineFit1050->SetParameter(1,-0.1238713);
   quadLineFit1050->SetParError(1,0.005223287);
   quadLineFit1050->SetParLimits(1,0,0);
   quadLineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1050);
   gre->Draw("p ");
   
   TF1 *quadLineFit1051 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1051->SetFillColor(19);
   quadLineFit1051->SetFillStyle(0);
   quadLineFit1051->SetLineColor(4);
   quadLineFit1051->SetLineWidth(2);
   quadLineFit1051->SetChisquare(2.224169e-18);
   quadLineFit1051->SetNDF(0);
   quadLineFit1051->GetXaxis()->SetLabelFont(42);
   quadLineFit1051->GetXaxis()->SetTitleOffset(1);
   quadLineFit1051->GetXaxis()->SetTitleFont(42);
   quadLineFit1051->GetYaxis()->SetLabelFont(42);
   quadLineFit1051->GetYaxis()->SetTitleFont(42);
   quadLineFit1051->SetParameter(0,4.468057);
   quadLineFit1051->SetParError(0,0.09459776);
   quadLineFit1051->SetParLimits(0,0,0);
   quadLineFit1051->SetParameter(1,-0.1238713);
   quadLineFit1051->SetParError(1,0.005223287);
   quadLineFit1051->SetParLimits(1,0,0);
   quadLineFit1051->Draw("same");
   
   Double_t 50.000000 ppm_fx1051[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1051[2] = {
   4.370431,
   3.503828};
   Double_t 50.000000 ppm_fex1051[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1051[2] = {
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(2,50.000000 ppm_fx1051,50.000000 ppm_fy1051,50.000000 ppm_fex1051,50.000000 ppm_fey1051);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1051 = new TH1F("Graph_50dO000000sPppm1051","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1051->SetMinimum(3.399439);
   Graph_50dO000000sPppm1051->SetMaximum(4.47482);
   Graph_50dO000000sPppm1051->SetDirectory(0);
   Graph_50dO000000sPppm1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1051->SetLineColor(ci);
   Graph_50dO000000sPppm1051->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1051->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1051->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1051->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1051->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1051->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1051->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1051);
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineColor(5);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(3.886263e-19);
   quadLineFit1052->SetNDF(0);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,7.836846);
   quadLineFit1052->SetParError(0,0.09459776);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,-0.2166509);
   quadLineFit1052->SetParError(1,0.005223287);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("p ");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineColor(5);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(3.886263e-19);
   quadLineFit1053->SetNDF(0);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,7.836846);
   quadLineFit1053->SetParError(0,0.09459776);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,-0.2166509);
   quadLineFit1053->SetParError(1,0.005223287);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
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
