void QuadScans_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1099[2] = {
   16,
   18.3};
   Double_t -50.000000 ppm_fy1099[2] = {
   -3.177402,
   -2.769179};
   Double_t -50.000000 ppm_fex1099[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1099[2] = {
   0.01042751,
   0.01042751};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1099,-50.000000 ppm_fy1099,-50.000000 ppm_fex1099,-50.000000 ppm_fey1099);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1099 = new TH1F("Graph_mI50dO000000sPppm1099","",100,15.77,18.53);
   Graph_mI50dO000000sPppm1099->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1099->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1099->SetDirectory(0);
   Graph_mI50dO000000sPppm1099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1099->SetLineColor(ci);
   Graph_mI50dO000000sPppm1099->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1099->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1099->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1099->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1099->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1099->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1099->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1099->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1099->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1099->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1099->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1099->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1099->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1099->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1099->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1099);
   
   
   TF1 *quadLineFit1100 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1100->SetFillColor(19);
   quadLineFit1100->SetFillStyle(0);
   quadLineFit1100->SetLineWidth(2);
   quadLineFit1100->SetChisquare(1.291603e-18);
   quadLineFit1100->SetNDF(0);
   quadLineFit1100->GetXaxis()->SetLabelFont(42);
   quadLineFit1100->GetXaxis()->SetTitleOffset(1);
   quadLineFit1100->GetXaxis()->SetTitleFont(42);
   quadLineFit1100->GetYaxis()->SetLabelFont(42);
   quadLineFit1100->GetYaxis()->SetTitleFont(42);
   quadLineFit1100->SetParameter(0,-6.01722);
   quadLineFit1100->SetParError(0,0.1102063);
   quadLineFit1100->SetParLimits(0,0,0);
   quadLineFit1100->SetParameter(1,0.1774886);
   quadLineFit1100->SetParError(1,0.006411622);
   quadLineFit1100->SetParLimits(1,0,0);
   quadLineFit1100->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1100);
   gre->Draw("ap");
   
   TF1 *quadLineFit1101 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1101->SetFillColor(19);
   quadLineFit1101->SetFillStyle(0);
   quadLineFit1101->SetLineWidth(2);
   quadLineFit1101->SetChisquare(1.291603e-18);
   quadLineFit1101->SetNDF(0);
   quadLineFit1101->GetXaxis()->SetLabelFont(42);
   quadLineFit1101->GetXaxis()->SetTitleOffset(1);
   quadLineFit1101->GetXaxis()->SetTitleFont(42);
   quadLineFit1101->GetYaxis()->SetLabelFont(42);
   quadLineFit1101->GetYaxis()->SetTitleFont(42);
   quadLineFit1101->SetParameter(0,-6.01722);
   quadLineFit1101->SetParError(0,0.1102063);
   quadLineFit1101->SetParLimits(0,0,0);
   quadLineFit1101->SetParameter(1,0.1774886);
   quadLineFit1101->SetParError(1,0.006411622);
   quadLineFit1101->SetParLimits(1,0,0);
   quadLineFit1101->Draw("same");
   
   Double_t -25.000000 ppm_fx1101[2] = {
   16,
   18.3};
   Double_t -25.000000 ppm_fy1101[2] = {
   -1.281799,
   -1.113571};
   Double_t -25.000000 ppm_fex1101[2] = {
   0,
   0};
   Double_t -25.000000 ppm_fey1101[2] = {
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(2,-25.000000 ppm_fx1101,-25.000000 ppm_fy1101,-25.000000 ppm_fex1101,-25.000000 ppm_fey1101);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1101 = new TH1F("Graph_mI25dO000000sPppm1101","Graph",100,15.77,18.53);
   Graph_mI25dO000000sPppm1101->SetMinimum(-1.311135);
   Graph_mI25dO000000sPppm1101->SetMaximum(-1.084235);
   Graph_mI25dO000000sPppm1101->SetDirectory(0);
   Graph_mI25dO000000sPppm1101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1101->SetLineColor(ci);
   Graph_mI25dO000000sPppm1101->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1101->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1101->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1101->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1101->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1101->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1101->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1101);
   
   
   TF1 *quadLineFit1102 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1102->SetFillColor(19);
   quadLineFit1102->SetFillStyle(0);
   quadLineFit1102->SetLineColor(2);
   quadLineFit1102->SetLineWidth(2);
   quadLineFit1102->SetChisquare(2.007616e-17);
   quadLineFit1102->SetNDF(0);
   quadLineFit1102->GetXaxis()->SetLabelFont(42);
   quadLineFit1102->GetXaxis()->SetTitleOffset(1);
   quadLineFit1102->GetXaxis()->SetTitleFont(42);
   quadLineFit1102->GetYaxis()->SetLabelFont(42);
   quadLineFit1102->GetYaxis()->SetTitleFont(42);
   quadLineFit1102->SetParameter(0,-2.452081);
   quadLineFit1102->SetParError(0,0.1102063);
   quadLineFit1102->SetParLimits(0,0,0);
   quadLineFit1102->SetParameter(1,0.0731426);
   quadLineFit1102->SetParError(1,0.006411622);
   quadLineFit1102->SetParLimits(1,0,0);
   quadLineFit1102->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1102);
   gre->Draw("p ");
   
   TF1 *quadLineFit1103 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1103->SetFillColor(19);
   quadLineFit1103->SetFillStyle(0);
   quadLineFit1103->SetLineColor(2);
   quadLineFit1103->SetLineWidth(2);
   quadLineFit1103->SetChisquare(2.007616e-17);
   quadLineFit1103->SetNDF(0);
   quadLineFit1103->GetXaxis()->SetLabelFont(42);
   quadLineFit1103->GetXaxis()->SetTitleOffset(1);
   quadLineFit1103->GetXaxis()->SetTitleFont(42);
   quadLineFit1103->GetYaxis()->SetLabelFont(42);
   quadLineFit1103->GetYaxis()->SetTitleFont(42);
   quadLineFit1103->SetParameter(0,-2.452081);
   quadLineFit1103->SetParError(0,0.1102063);
   quadLineFit1103->SetParLimits(0,0,0);
   quadLineFit1103->SetParameter(1,0.0731426);
   quadLineFit1103->SetParError(1,0.006411622);
   quadLineFit1103->SetParLimits(1,0,0);
   quadLineFit1103->Draw("same");
   
   Double_t 0.000000 ppm_fx1103[2] = {
   16,
   18.3};
   Double_t 0.000000 ppm_fy1103[2] = {
   0.6052865,
   0.5128337};
   Double_t 0.000000 ppm_fex1103[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1103[2] = {
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(2,0.000000 ppm_fx1103,0.000000 ppm_fy1103,0.000000 ppm_fex1103,0.000000 ppm_fey1103);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1103 = new TH1F("Graph_0dO000000sPppm1103","Graph",100,15.77,18.53);
   Graph_0dO000000sPppm1103->SetMinimum(0.4910754);
   Graph_0dO000000sPppm1103->SetMaximum(0.6270448);
   Graph_0dO000000sPppm1103->SetDirectory(0);
   Graph_0dO000000sPppm1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1103->SetLineColor(ci);
   Graph_0dO000000sPppm1103->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1103->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1103->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1103->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1103->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1103->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1103->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1103);
   
   
   TF1 *quadLineFit1104 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1104->SetFillColor(19);
   quadLineFit1104->SetFillStyle(0);
   quadLineFit1104->SetLineColor(3);
   quadLineFit1104->SetLineWidth(2);
   quadLineFit1104->SetChisquare(2.846011e-24);
   quadLineFit1104->SetNDF(0);
   quadLineFit1104->GetXaxis()->SetLabelFont(42);
   quadLineFit1104->GetXaxis()->SetTitleOffset(1);
   quadLineFit1104->GetXaxis()->SetTitleFont(42);
   quadLineFit1104->GetYaxis()->SetLabelFont(42);
   quadLineFit1104->GetYaxis()->SetTitleFont(42);
   quadLineFit1104->SetParameter(0,1.248437);
   quadLineFit1104->SetParError(0,0.1102062);
   quadLineFit1104->SetParLimits(0,0,0);
   quadLineFit1104->SetParameter(1,-0.04019687);
   quadLineFit1104->SetParError(1,0.006411622);
   quadLineFit1104->SetParLimits(1,0,0);
   quadLineFit1104->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1104);
   gre->Draw("p ");
   
   TF1 *quadLineFit1105 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1105->SetFillColor(19);
   quadLineFit1105->SetFillStyle(0);
   quadLineFit1105->SetLineColor(3);
   quadLineFit1105->SetLineWidth(2);
   quadLineFit1105->SetChisquare(2.846011e-24);
   quadLineFit1105->SetNDF(0);
   quadLineFit1105->GetXaxis()->SetLabelFont(42);
   quadLineFit1105->GetXaxis()->SetTitleOffset(1);
   quadLineFit1105->GetXaxis()->SetTitleFont(42);
   quadLineFit1105->GetYaxis()->SetLabelFont(42);
   quadLineFit1105->GetYaxis()->SetTitleFont(42);
   quadLineFit1105->SetParameter(0,1.248437);
   quadLineFit1105->SetParError(0,0.1102062);
   quadLineFit1105->SetParLimits(0,0,0);
   quadLineFit1105->SetParameter(1,-0.04019687);
   quadLineFit1105->SetParError(1,0.006411622);
   quadLineFit1105->SetParLimits(1,0,0);
   quadLineFit1105->Draw("same");
   
   Double_t 25.000000 ppm_fx1105[2] = {
   16,
   18.3};
   Double_t 25.000000 ppm_fy1105[2] = {
   2.489892,
   2.173119};
   Double_t 25.000000 ppm_fex1105[2] = {
   0,
   0};
   Double_t 25.000000 ppm_fey1105[2] = {
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(2,25.000000 ppm_fx1105,25.000000 ppm_fy1105,25.000000 ppm_fex1105,25.000000 ppm_fey1105);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1105 = new TH1F("Graph_25dO000000sPppm1105","Graph",100,15.77,18.53);
   Graph_25dO000000sPppm1105->SetMinimum(2.128929);
   Graph_25dO000000sPppm1105->SetMaximum(2.534082);
   Graph_25dO000000sPppm1105->SetDirectory(0);
   Graph_25dO000000sPppm1105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1105->SetLineColor(ci);
   Graph_25dO000000sPppm1105->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1105->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1105->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1105->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1105->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1105->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1105->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1105);
   
   
   TF1 *quadLineFit1106 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1106->SetFillColor(19);
   quadLineFit1106->SetFillStyle(0);
   quadLineFit1106->SetLineColor(4);
   quadLineFit1106->SetLineWidth(2);
   quadLineFit1106->SetChisquare(7.304725e-17);
   quadLineFit1106->SetNDF(0);
   quadLineFit1106->GetXaxis()->SetLabelFont(42);
   quadLineFit1106->GetXaxis()->SetTitleOffset(1);
   quadLineFit1106->GetXaxis()->SetTitleFont(42);
   quadLineFit1106->GetYaxis()->SetLabelFont(42);
   quadLineFit1106->GetYaxis()->SetTitleFont(42);
   quadLineFit1106->SetParameter(0,4.693529);
   quadLineFit1106->SetParError(0,0.1102062);
   quadLineFit1106->SetParLimits(0,0,0);
   quadLineFit1106->SetParameter(1,-0.1377273);
   quadLineFit1106->SetParError(1,0.006411622);
   quadLineFit1106->SetParLimits(1,0,0);
   quadLineFit1106->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1106);
   gre->Draw("p ");
   
   TF1 *quadLineFit1107 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1107->SetFillColor(19);
   quadLineFit1107->SetFillStyle(0);
   quadLineFit1107->SetLineColor(4);
   quadLineFit1107->SetLineWidth(2);
   quadLineFit1107->SetChisquare(7.304725e-17);
   quadLineFit1107->SetNDF(0);
   quadLineFit1107->GetXaxis()->SetLabelFont(42);
   quadLineFit1107->GetXaxis()->SetTitleOffset(1);
   quadLineFit1107->GetXaxis()->SetTitleFont(42);
   quadLineFit1107->GetYaxis()->SetLabelFont(42);
   quadLineFit1107->GetYaxis()->SetTitleFont(42);
   quadLineFit1107->SetParameter(0,4.693529);
   quadLineFit1107->SetParError(0,0.1102062);
   quadLineFit1107->SetParLimits(0,0,0);
   quadLineFit1107->SetParameter(1,-0.1377273);
   quadLineFit1107->SetParError(1,0.006411622);
   quadLineFit1107->SetParLimits(1,0,0);
   quadLineFit1107->Draw("same");
   
   Double_t 50.000000 ppm_fx1107[2] = {
   16,
   18.3};
   Double_t 50.000000 ppm_fy1107[2] = {
   4.379066,
   3.808869};
   Double_t 50.000000 ppm_fex1107[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1107[2] = {
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(2,50.000000 ppm_fx1107,50.000000 ppm_fy1107,50.000000 ppm_fex1107,50.000000 ppm_fey1107);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1107 = new TH1F("Graph_50dO000000sPppm1107","Graph",100,15.77,18.53);
   Graph_50dO000000sPppm1107->SetMinimum(3.739337);
   Graph_50dO000000sPppm1107->SetMaximum(4.448599);
   Graph_50dO000000sPppm1107->SetDirectory(0);
   Graph_50dO000000sPppm1107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1107->SetLineColor(ci);
   Graph_50dO000000sPppm1107->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1107->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1107->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1107->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1107->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1107->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1107->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1107);
   
   
   TF1 *quadLineFit1108 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1108->SetFillColor(19);
   quadLineFit1108->SetFillStyle(0);
   quadLineFit1108->SetLineColor(5);
   quadLineFit1108->SetLineWidth(2);
   quadLineFit1108->SetChisquare(2.399006e-20);
   quadLineFit1108->SetNDF(0);
   quadLineFit1108->GetXaxis()->SetLabelFont(42);
   quadLineFit1108->GetXaxis()->SetTitleOffset(1);
   quadLineFit1108->GetXaxis()->SetTitleFont(42);
   quadLineFit1108->GetYaxis()->SetLabelFont(42);
   quadLineFit1108->GetYaxis()->SetTitleFont(42);
   quadLineFit1108->SetParameter(0,8.345653);
   quadLineFit1108->SetParError(0,0.1102062);
   quadLineFit1108->SetParLimits(0,0,0);
   quadLineFit1108->SetParameter(1,-0.2479117);
   quadLineFit1108->SetParError(1,0.006411622);
   quadLineFit1108->SetParLimits(1,0,0);
   quadLineFit1108->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1108);
   gre->Draw("p ");
   
   TF1 *quadLineFit1109 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1109->SetFillColor(19);
   quadLineFit1109->SetFillStyle(0);
   quadLineFit1109->SetLineColor(5);
   quadLineFit1109->SetLineWidth(2);
   quadLineFit1109->SetChisquare(2.399006e-20);
   quadLineFit1109->SetNDF(0);
   quadLineFit1109->GetXaxis()->SetLabelFont(42);
   quadLineFit1109->GetXaxis()->SetTitleOffset(1);
   quadLineFit1109->GetXaxis()->SetTitleFont(42);
   quadLineFit1109->GetYaxis()->SetLabelFont(42);
   quadLineFit1109->GetYaxis()->SetTitleFont(42);
   quadLineFit1109->SetParameter(0,8.345653);
   quadLineFit1109->SetParError(0,0.1102062);
   quadLineFit1109->SetParLimits(0,0,0);
   quadLineFit1109->SetParameter(1,-0.2479117);
   quadLineFit1109->SetParError(1,0.006411622);
   quadLineFit1109->SetParLimits(1,0,0);
   quadLineFit1109->Draw("same");
   
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
