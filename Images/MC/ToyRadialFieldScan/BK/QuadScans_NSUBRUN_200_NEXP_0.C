void QuadScans_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  7 18:21:01 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.625,21.77143,2.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1071[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1071[2] = {
   -2.367975,
   -1.922307};
   Double_t -30.000000 ppm_fex1071[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1071[2] = {
   0.0104537,
   0.0104537};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1071,-30.000000 ppm_fy1071,-30.000000 ppm_fex1071,-30.000000 ppm_fey1071);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1071 = new TH1F("Graph_mI30dO000000sPppm1071","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1071->SetMinimum(-3);
   Graph_mI30dO000000sPppm1071->SetMaximum(2);
   Graph_mI30dO000000sPppm1071->SetDirectory(0);
   Graph_mI30dO000000sPppm1071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1071->SetLineColor(ci);
   Graph_mI30dO000000sPppm1071->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1071->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1071->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1071->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1071->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1071->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1071->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1071->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1071->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1071->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1071->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1071->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1071->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1071->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1071->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1071);
   
   
   TF1 *quadLineFit1072 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1072->SetFillColor(19);
   quadLineFit1072->SetFillStyle(0);
   quadLineFit1072->SetLineWidth(2);
   quadLineFit1072->SetChisquare(7.671285e-19);
   quadLineFit1072->SetNDF(0);
   quadLineFit1072->GetXaxis()->SetLabelFont(42);
   quadLineFit1072->GetXaxis()->SetTitleOffset(1);
   quadLineFit1072->GetXaxis()->SetTitleFont(42);
   quadLineFit1072->GetYaxis()->SetLabelFont(42);
   quadLineFit1072->GetYaxis()->SetTitleFont(42);
   quadLineFit1072->SetParameter(0,-4.150649);
   quadLineFit1072->SetParError(0,0.06693634);
   quadLineFit1072->SetParLimits(0,0,0);
   quadLineFit1072->SetParameter(1,0.1114171);
   quadLineFit1072->SetParError(1,0.003695941);
   quadLineFit1072->SetParLimits(1,0,0);
   quadLineFit1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1072);
   gre->Draw("ap");
   
   TF1 *quadLineFit1073 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1073->SetFillColor(19);
   quadLineFit1073->SetFillStyle(0);
   quadLineFit1073->SetLineWidth(2);
   quadLineFit1073->SetChisquare(7.671285e-19);
   quadLineFit1073->SetNDF(0);
   quadLineFit1073->GetXaxis()->SetLabelFont(42);
   quadLineFit1073->GetXaxis()->SetTitleOffset(1);
   quadLineFit1073->GetXaxis()->SetTitleFont(42);
   quadLineFit1073->GetYaxis()->SetLabelFont(42);
   quadLineFit1073->GetYaxis()->SetTitleFont(42);
   quadLineFit1073->SetParameter(0,-4.150649);
   quadLineFit1073->SetParError(0,0.06693634);
   quadLineFit1073->SetParLimits(0,0,0);
   quadLineFit1073->SetParameter(1,0.1114171);
   quadLineFit1073->SetParError(1,0.003695941);
   quadLineFit1073->SetParLimits(1,0,0);
   quadLineFit1073->Draw("same");
   
   Double_t -10.000000 ppm_fx1073[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1073[2] = {
   -1.117869,
   -0.9111111};
   Double_t -10.000000 ppm_fex1073[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1073[2] = {
   0.0104537,
   0.0104537};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1073,-10.000000 ppm_fy1073,-10.000000 ppm_fex1073,-10.000000 ppm_fey1073);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1073 = new TH1F("Graph_mI10dO000000sPppm1073","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1073->SetMinimum(-1.151089);
   Graph_mI10dO000000sPppm1073->SetMaximum(-0.8778908);
   Graph_mI10dO000000sPppm1073->SetDirectory(0);
   Graph_mI10dO000000sPppm1073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1073->SetLineColor(ci);
   Graph_mI10dO000000sPppm1073->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1073->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1073->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1073->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1073->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1073->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1073->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1073);
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);
   quadLineFit1074->SetLineColor(2);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(4.657406e-20);
   quadLineFit1074->SetNDF(0);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,-1.9449);
   quadLineFit1074->SetParError(0,0.06693634);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,0.05168944);
   quadLineFit1074->SetParError(1,0.003695941);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("p ");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);
   quadLineFit1075->SetLineColor(2);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(4.657406e-20);
   quadLineFit1075->SetNDF(0);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,-1.9449);
   quadLineFit1075->SetParError(0,0.06693634);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,0.05168944);
   quadLineFit1075->SetParError(1,0.003695941);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
   Double_t 10.000000 ppm_fx1075[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1075[2] = {
   0.1292094,
   0.1066569};
   Double_t 10.000000 ppm_fex1075[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1075[2] = {
   0.0104537,
   0.0104537};
   gre = new TGraphErrors(2,10.000000 ppm_fx1075,10.000000 ppm_fy1075,10.000000 ppm_fex1075,10.000000 ppm_fey1075);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1075 = new TH1F("Graph_10dO000000sPppm1075","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1075->SetMinimum(0.09185726);
   Graph_10dO000000sPppm1075->SetMaximum(0.1440091);
   Graph_10dO000000sPppm1075->SetDirectory(0);
   Graph_10dO000000sPppm1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1075->SetLineColor(ci);
   Graph_10dO000000sPppm1075->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1075->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1075->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1075->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1075->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1075->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1075->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1075);
   
   
   TF1 *quadLineFit1076 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1076->SetFillColor(19);
   quadLineFit1076->SetFillStyle(0);
   quadLineFit1076->SetLineColor(3);
   quadLineFit1076->SetLineWidth(2);
   quadLineFit1076->SetChisquare(1.097173e-21);
   quadLineFit1076->SetNDF(0);
   quadLineFit1076->GetXaxis()->SetLabelFont(42);
   quadLineFit1076->GetXaxis()->SetTitleOffset(1);
   quadLineFit1076->GetXaxis()->SetTitleFont(42);
   quadLineFit1076->GetYaxis()->SetLabelFont(42);
   quadLineFit1076->GetYaxis()->SetTitleFont(42);
   quadLineFit1076->SetParameter(0,0.2194194);
   quadLineFit1076->SetParError(0,0.06693634);
   quadLineFit1076->SetParLimits(0,0,0);
   quadLineFit1076->SetParameter(1,-0.005638123);
   quadLineFit1076->SetParError(1,0.003695941);
   quadLineFit1076->SetParLimits(1,0,0);
   quadLineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1076);
   gre->Draw("p ");
   
   TF1 *quadLineFit1077 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1077->SetFillColor(19);
   quadLineFit1077->SetFillStyle(0);
   quadLineFit1077->SetLineColor(3);
   quadLineFit1077->SetLineWidth(2);
   quadLineFit1077->SetChisquare(1.097173e-21);
   quadLineFit1077->SetNDF(0);
   quadLineFit1077->GetXaxis()->SetLabelFont(42);
   quadLineFit1077->GetXaxis()->SetTitleOffset(1);
   quadLineFit1077->GetXaxis()->SetTitleFont(42);
   quadLineFit1077->GetYaxis()->SetLabelFont(42);
   quadLineFit1077->GetYaxis()->SetTitleFont(42);
   quadLineFit1077->SetParameter(0,0.2194194);
   quadLineFit1077->SetParError(0,0.06693634);
   quadLineFit1077->SetParLimits(0,0,0);
   quadLineFit1077->SetParameter(1,-0.005638123);
   quadLineFit1077->SetParError(1,0.003695941);
   quadLineFit1077->SetParLimits(1,0,0);
   quadLineFit1077->Draw("same");
   
   Double_t 30.000000 ppm_fx1077[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1077[2] = {
   1.370815,
   1.106871};
   Double_t 30.000000 ppm_fex1077[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1077[2] = {
   0.0104537,
   0.0104537};
   gre = new TGraphErrors(2,30.000000 ppm_fx1077,30.000000 ppm_fy1077,30.000000 ppm_fex1077,30.000000 ppm_fey1077);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1077 = new TH1F("Graph_30dO000000sPppm1077","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1077->SetMinimum(1.067933);
   Graph_30dO000000sPppm1077->SetMaximum(1.409754);
   Graph_30dO000000sPppm1077->SetDirectory(0);
   Graph_30dO000000sPppm1077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1077->SetLineColor(ci);
   Graph_30dO000000sPppm1077->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1077->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1077->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1077->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1077->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1077->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1077->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1077);
   
   
   TF1 *quadLineFit1078 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1078->SetFillColor(19);
   quadLineFit1078->SetFillStyle(0);
   quadLineFit1078->SetLineColor(4);
   quadLineFit1078->SetLineWidth(2);
   quadLineFit1078->SetChisquare(1.653315e-21);
   quadLineFit1078->SetNDF(0);
   quadLineFit1078->GetXaxis()->SetLabelFont(42);
   quadLineFit1078->GetXaxis()->SetTitleOffset(1);
   quadLineFit1078->GetXaxis()->SetTitleFont(42);
   quadLineFit1078->GetYaxis()->SetLabelFont(42);
   quadLineFit1078->GetYaxis()->SetTitleFont(42);
   quadLineFit1078->SetParameter(0,2.42659);
   quadLineFit1078->SetParError(0,0.06693634);
   quadLineFit1078->SetParLimits(0,0,0);
   quadLineFit1078->SetParameter(1,-0.06598593);
   quadLineFit1078->SetParError(1,0.003695941);
   quadLineFit1078->SetParLimits(1,0,0);
   quadLineFit1078->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1078);
   gre->Draw("p ");
   
   TF1 *quadLineFit1079 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1079->SetFillColor(19);
   quadLineFit1079->SetFillStyle(0);
   quadLineFit1079->SetLineColor(4);
   quadLineFit1079->SetLineWidth(2);
   quadLineFit1079->SetChisquare(1.653315e-21);
   quadLineFit1079->SetNDF(0);
   quadLineFit1079->GetXaxis()->SetLabelFont(42);
   quadLineFit1079->GetXaxis()->SetTitleOffset(1);
   quadLineFit1079->GetXaxis()->SetTitleFont(42);
   quadLineFit1079->GetYaxis()->SetLabelFont(42);
   quadLineFit1079->GetYaxis()->SetTitleFont(42);
   quadLineFit1079->SetParameter(0,2.42659);
   quadLineFit1079->SetParError(0,0.06693634);
   quadLineFit1079->SetParLimits(0,0,0);
   quadLineFit1079->SetParameter(1,-0.06598593);
   quadLineFit1079->SetParError(1,0.003695941);
   quadLineFit1079->SetParLimits(1,0,0);
   quadLineFit1079->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
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
