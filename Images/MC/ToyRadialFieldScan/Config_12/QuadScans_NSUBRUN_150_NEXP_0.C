void QuadScans_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:15 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1071[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1071[3] = {
   -3.141847,
   -2.828151,
   -2.516784};
   Double_t -50.000000 ppm_fex1071[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1071[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1071,-50.000000 ppm_fy1071,-50.000000 ppm_fex1071,-50.000000 ppm_fey1071);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1071 = new TH1F("Graph_mI50dO000000sPppm1071","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1071->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1071->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1071->SetDirectory(0);
   Graph_mI50dO000000sPppm1071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1071->SetLineColor(ci);
   Graph_mI50dO000000sPppm1071->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1071->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1071->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1071->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1071->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1071->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1071->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1071->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1071->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1071->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1071->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1071->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1071->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1071->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1071->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1071);
   
   
   TF1 *quadLineFit1072 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1072->SetFillColor(19);
   quadLineFit1072->SetFillStyle(0);
   quadLineFit1072->SetLineWidth(2);
   quadLineFit1072->SetChisquare(0.006231298);
   quadLineFit1072->SetNDF(1);
   quadLineFit1072->GetXaxis()->SetLabelFont(42);
   quadLineFit1072->GetXaxis()->SetTitleOffset(1);
   quadLineFit1072->GetXaxis()->SetTitleFont(42);
   quadLineFit1072->GetYaxis()->SetLabelFont(42);
   quadLineFit1072->GetYaxis()->SetTitleFont(42);
   quadLineFit1072->SetParameter(0,-5.641712);
   quadLineFit1072->SetParError(0,0.07698652);
   quadLineFit1072->SetParLimits(0,0,0);
   quadLineFit1072->SetParameter(1,0.1562658);
   quadLineFit1072->SetParError(1,0.004259536);
   quadLineFit1072->SetParLimits(1,0,0);
   quadLineFit1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1072);
   gre->Draw("ap");
   
   TF1 *quadLineFit1073 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1073->SetFillColor(19);
   quadLineFit1073->SetFillStyle(0);
   quadLineFit1073->SetLineWidth(2);
   quadLineFit1073->SetChisquare(0.006231298);
   quadLineFit1073->SetNDF(1);
   quadLineFit1073->GetXaxis()->SetLabelFont(42);
   quadLineFit1073->GetXaxis()->SetTitleOffset(1);
   quadLineFit1073->GetXaxis()->SetTitleFont(42);
   quadLineFit1073->GetYaxis()->SetLabelFont(42);
   quadLineFit1073->GetYaxis()->SetTitleFont(42);
   quadLineFit1073->SetParameter(0,-5.641712);
   quadLineFit1073->SetParError(0,0.07698652);
   quadLineFit1073->SetParLimits(0,0,0);
   quadLineFit1073->SetParameter(1,0.1562658);
   quadLineFit1073->SetParError(1,0.004259536);
   quadLineFit1073->SetParLimits(1,0,0);
   quadLineFit1073->Draw("same");
   
   Double_t -25.000000 ppm_fx1073[3] = {
   16,
   18,
   20};
   Double_t -25.000000 ppm_fy1073[3] = {
   -1.287723,
   -1.135411,
   -1.027619};
   Double_t -25.000000 ppm_fex1073[3] = {
   0,
   0,
   0};
   Double_t -25.000000 ppm_fey1073[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,-25.000000 ppm_fx1073,-25.000000 ppm_fy1073,-25.000000 ppm_fex1073,-25.000000 ppm_fey1073);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1073 = new TH1F("Graph_mI25dO000000sPppm1073","Graph",100,15.6,20.4);
   Graph_mI25dO000000sPppm1073->SetMinimum(-1.328191);
   Graph_mI25dO000000sPppm1073->SetMaximum(-0.9871509);
   Graph_mI25dO000000sPppm1073->SetDirectory(0);
   Graph_mI25dO000000sPppm1073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1073->SetLineColor(ci);
   Graph_mI25dO000000sPppm1073->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1073->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1073->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1073->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1073->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1073->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1073->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1073);
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);
   quadLineFit1074->SetLineColor(2);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(2.275865);
   quadLineFit1074->SetNDF(1);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,-2.320721);
   quadLineFit1074->SetParError(0,0.07698661);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,0.06502613);
   quadLineFit1074->SetParError(1,0.004259541);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("p ");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);
   quadLineFit1075->SetLineColor(2);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(2.275865);
   quadLineFit1075->SetNDF(1);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,-2.320721);
   quadLineFit1075->SetParError(0,0.07698661);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,0.06502613);
   quadLineFit1075->SetParError(1,0.004259541);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
   Double_t 0.000000 ppm_fx1075[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1075[3] = {
   0.6048845,
   0.5413915,
   0.4768799};
   Double_t 0.000000 ppm_fex1075[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1075[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,0.000000 ppm_fx1075,0.000000 ppm_fy1075,0.000000 ppm_fex1075,0.000000 ppm_fey1075);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1075 = new TH1F("Graph_0dO000000sPppm1075","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1075->SetMinimum(0.449622);
   Graph_0dO000000sPppm1075->SetMaximum(0.6321423);
   Graph_0dO000000sPppm1075->SetDirectory(0);
   Graph_0dO000000sPppm1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1075->SetLineColor(ci);
   Graph_0dO000000sPppm1075->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1075->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1075->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1075->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1075->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1075->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1075->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1075);
   
   
   TF1 *quadLineFit1076 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1076->SetFillColor(19);
   quadLineFit1076->SetFillStyle(0);
   quadLineFit1076->SetLineColor(3);
   quadLineFit1076->SetLineWidth(2);
   quadLineFit1076->SetChisquare(0.001191282);
   quadLineFit1076->SetNDF(1);
   quadLineFit1076->GetXaxis()->SetLabelFont(42);
   quadLineFit1076->GetXaxis()->SetTitleOffset(1);
   quadLineFit1076->GetXaxis()->SetTitleFont(42);
   quadLineFit1076->GetYaxis()->SetLabelFont(42);
   quadLineFit1076->GetYaxis()->SetTitleFont(42);
   quadLineFit1076->SetParameter(0,1.117073);
   quadLineFit1076->SetParError(0,0.07698671);
   quadLineFit1076->SetParLimits(0,0,0);
   quadLineFit1076->SetParameter(1,-0.03200117);
   quadLineFit1076->SetParError(1,0.004259546);
   quadLineFit1076->SetParLimits(1,0,0);
   quadLineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1076);
   gre->Draw("p ");
   
   TF1 *quadLineFit1077 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1077->SetFillColor(19);
   quadLineFit1077->SetFillStyle(0);
   quadLineFit1077->SetLineColor(3);
   quadLineFit1077->SetLineWidth(2);
   quadLineFit1077->SetChisquare(0.001191282);
   quadLineFit1077->SetNDF(1);
   quadLineFit1077->GetXaxis()->SetLabelFont(42);
   quadLineFit1077->GetXaxis()->SetTitleOffset(1);
   quadLineFit1077->GetXaxis()->SetTitleFont(42);
   quadLineFit1077->GetYaxis()->SetLabelFont(42);
   quadLineFit1077->GetYaxis()->SetTitleFont(42);
   quadLineFit1077->SetParameter(0,1.117073);
   quadLineFit1077->SetParError(0,0.07698671);
   quadLineFit1077->SetParLimits(0,0,0);
   quadLineFit1077->SetParameter(1,-0.03200117);
   quadLineFit1077->SetParError(1,0.004259546);
   quadLineFit1077->SetParLimits(1,0,0);
   quadLineFit1077->Draw("same");
   
   Double_t 25.000000 ppm_fx1077[3] = {
   16,
   18,
   20};
   Double_t 25.000000 ppm_fy1077[3] = {
   2.483719,
   2.206694,
   1.986366};
   Double_t 25.000000 ppm_fex1077[3] = {
   0,
   0,
   0};
   Double_t 25.000000 ppm_fey1077[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,25.000000 ppm_fx1077,25.000000 ppm_fy1077,25.000000 ppm_fex1077,25.000000 ppm_fey1077);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1077 = new TH1F("Graph_25dO000000sPppm1077","Graph",100,15.6,20.4);
   Graph_25dO000000sPppm1077->SetMinimum(1.922173);
   Graph_25dO000000sPppm1077->SetMaximum(2.547912);
   Graph_25dO000000sPppm1077->SetDirectory(0);
   Graph_25dO000000sPppm1077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1077->SetLineColor(ci);
   Graph_25dO000000sPppm1077->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1077->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1077->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1077->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1077->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1077->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1077->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1077);
   
   
   TF1 *quadLineFit1078 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1078->SetFillColor(19);
   quadLineFit1078->SetFillStyle(0);
   quadLineFit1078->SetLineColor(4);
   quadLineFit1078->SetLineWidth(2);
   quadLineFit1078->SetChisquare(3.691199);
   quadLineFit1078->SetNDF(1);
   quadLineFit1078->GetXaxis()->SetLabelFont(42);
   quadLineFit1078->GetXaxis()->SetTitleOffset(1);
   quadLineFit1078->GetXaxis()->SetTitleFont(42);
   quadLineFit1078->GetYaxis()->SetLabelFont(42);
   quadLineFit1078->GetYaxis()->SetTitleFont(42);
   quadLineFit1078->SetParameter(0,4.463683);
   quadLineFit1078->SetParError(0,0.07698904);
   quadLineFit1078->SetParLimits(0,0,0);
   quadLineFit1078->SetParameter(1,-0.1243384);
   quadLineFit1078->SetParError(1,0.004259676);
   quadLineFit1078->SetParLimits(1,0,0);
   quadLineFit1078->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1078);
   gre->Draw("p ");
   
   TF1 *quadLineFit1079 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1079->SetFillColor(19);
   quadLineFit1079->SetFillStyle(0);
   quadLineFit1079->SetLineColor(4);
   quadLineFit1079->SetLineWidth(2);
   quadLineFit1079->SetChisquare(3.691199);
   quadLineFit1079->SetNDF(1);
   quadLineFit1079->GetXaxis()->SetLabelFont(42);
   quadLineFit1079->GetXaxis()->SetTitleOffset(1);
   quadLineFit1079->GetXaxis()->SetTitleFont(42);
   quadLineFit1079->GetYaxis()->SetLabelFont(42);
   quadLineFit1079->GetYaxis()->SetTitleFont(42);
   quadLineFit1079->SetParameter(0,4.463683);
   quadLineFit1079->SetParError(0,0.07698904);
   quadLineFit1079->SetParLimits(0,0,0);
   quadLineFit1079->SetParameter(1,-0.1243384);
   quadLineFit1079->SetParError(1,0.004259676);
   quadLineFit1079->SetParLimits(1,0,0);
   quadLineFit1079->Draw("same");
   
   Double_t 50.000000 ppm_fx1079[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1079[3] = {
   4.388726,
   3.865822,
   3.501562};
   Double_t 50.000000 ppm_fex1079[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1079[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,50.000000 ppm_fx1079,50.000000 ppm_fy1079,50.000000 ppm_fex1079,50.000000 ppm_fey1079);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1079 = new TH1F("Graph_50dO000000sPppm1079","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1079->SetMinimum(3.398389);
   Graph_50dO000000sPppm1079->SetMaximum(4.491899);
   Graph_50dO000000sPppm1079->SetDirectory(0);
   Graph_50dO000000sPppm1079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1079->SetLineColor(ci);
   Graph_50dO000000sPppm1079->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1079->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1079->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1079->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1079->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1079->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1079->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1079);
   
   
   TF1 *quadLineFit1080 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1080->SetFillColor(19);
   quadLineFit1080->SetFillStyle(0);
   quadLineFit1080->SetLineColor(5);
   quadLineFit1080->SetLineWidth(2);
   quadLineFit1080->SetChisquare(28.89895);
   quadLineFit1080->SetNDF(1);
   quadLineFit1080->GetXaxis()->SetLabelFont(42);
   quadLineFit1080->GetXaxis()->SetTitleOffset(1);
   quadLineFit1080->GetXaxis()->SetTitleFont(42);
   quadLineFit1080->GetYaxis()->SetLabelFont(42);
   quadLineFit1080->GetYaxis()->SetTitleFont(42);
   quadLineFit1080->SetParameter(0,7.910938);
   quadLineFit1080->SetParError(0,0.07698654);
   quadLineFit1080->SetParLimits(0,0,0);
   quadLineFit1080->SetParameter(1,-0.2217908);
   quadLineFit1080->SetParError(1,0.004259537);
   quadLineFit1080->SetParLimits(1,0,0);
   quadLineFit1080->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1080);
   gre->Draw("p ");
   
   TF1 *quadLineFit1081 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1081->SetFillColor(19);
   quadLineFit1081->SetFillStyle(0);
   quadLineFit1081->SetLineColor(5);
   quadLineFit1081->SetLineWidth(2);
   quadLineFit1081->SetChisquare(28.89895);
   quadLineFit1081->SetNDF(1);
   quadLineFit1081->GetXaxis()->SetLabelFont(42);
   quadLineFit1081->GetXaxis()->SetTitleOffset(1);
   quadLineFit1081->GetXaxis()->SetTitleFont(42);
   quadLineFit1081->GetYaxis()->SetLabelFont(42);
   quadLineFit1081->GetYaxis()->SetTitleFont(42);
   quadLineFit1081->SetParameter(0,7.910938);
   quadLineFit1081->SetParError(0,0.07698654);
   quadLineFit1081->SetParLimits(0,0,0);
   quadLineFit1081->SetParameter(1,-0.2217908);
   quadLineFit1081->SetParError(1,0.004259537);
   quadLineFit1081->SetParLimits(1,0,0);
   quadLineFit1081->Draw("same");
   
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
