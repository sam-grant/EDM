void QuadScans_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 15:08:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.91429,-3.25,19.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1073[3] = {
   14,
   16,
   18};
   Double_t -30.000000 ppm_fy1073[3] = {
   -1.897039,
   -1.662515,
   -1.470206};
   Double_t -30.000000 ppm_fex1073[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1073[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1073,-30.000000 ppm_fy1073,-30.000000 ppm_fex1073,-30.000000 ppm_fey1073);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1073 = new TH1F("Graph_mI30dO000000sPppm1073","",100,13.6,18.4);
   Graph_mI30dO000000sPppm1073->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1073->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1073->SetDirectory(0);
   Graph_mI30dO000000sPppm1073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1073->SetLineColor(ci);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1073->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1073->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1073->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1073->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1073);
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(2.388351);
   quadLineFit1074->SetNDF(1);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,-3.38392);
   quadLineFit1074->SetParError(0,0.06341179);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,0.1067083);
   quadLineFit1074->SetParError(1,0.003942755);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("ap");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(2.388351);
   quadLineFit1075->SetNDF(1);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,-3.38392);
   quadLineFit1075->SetParError(0,0.06341179);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,0.1067083);
   quadLineFit1075->SetParError(1,0.003942755);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
   Double_t -10.000000 ppm_fx1075[3] = {
   14,
   16,
   18};
   Double_t -10.000000 ppm_fy1075[3] = {
   -0.1841909,
   -0.1372391,
   -0.1454873};
   Double_t -10.000000 ppm_fex1075[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1075[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1075,-10.000000 ppm_fy1075,-10.000000 ppm_fex1075,-10.000000 ppm_fey1075);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1075 = new TH1F("Graph_mI10dO000000sPppm1075","Graph",100,13.6,18.4);
   Graph_mI10dO000000sPppm1075->SetMinimum(-0.2022682);
   Graph_mI10dO000000sPppm1075->SetMaximum(-0.1191618);
   Graph_mI10dO000000sPppm1075->SetDirectory(0);
   Graph_mI10dO000000sPppm1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1075->SetLineColor(ci);
   Graph_mI10dO000000sPppm1075->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1075->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1075->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1075->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1075->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1075->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1075->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1075);
   
   
   TF1 *quadLineFit1076 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1076->SetFillColor(19);
   quadLineFit1076->SetFillStyle(0);
   quadLineFit1076->SetLineColor(2);
   quadLineFit1076->SetLineWidth(2);
   quadLineFit1076->SetChisquare(4.083545);
   quadLineFit1076->SetNDF(1);
   quadLineFit1076->GetXaxis()->SetLabelFont(42);
   quadLineFit1076->GetXaxis()->SetTitleOffset(1);
   quadLineFit1076->GetXaxis()->SetTitleFont(42);
   quadLineFit1076->GetYaxis()->SetLabelFont(42);
   quadLineFit1076->GetYaxis()->SetTitleFont(42);
   quadLineFit1076->SetParameter(0,-0.3104536);
   quadLineFit1076->SetParError(0,0.06341175);
   quadLineFit1076->SetParLimits(0,0,0);
   quadLineFit1076->SetParameter(1,0.009675906);
   quadLineFit1076->SetParError(1,0.003942753);
   quadLineFit1076->SetParLimits(1,0,0);
   quadLineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1076);
   gre->Draw("p ");
   
   TF1 *quadLineFit1077 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1077->SetFillColor(19);
   quadLineFit1077->SetFillStyle(0);
   quadLineFit1077->SetLineColor(2);
   quadLineFit1077->SetLineWidth(2);
   quadLineFit1077->SetChisquare(4.083545);
   quadLineFit1077->SetNDF(1);
   quadLineFit1077->GetXaxis()->SetLabelFont(42);
   quadLineFit1077->GetXaxis()->SetTitleOffset(1);
   quadLineFit1077->GetXaxis()->SetTitleFont(42);
   quadLineFit1077->GetYaxis()->SetLabelFont(42);
   quadLineFit1077->GetYaxis()->SetTitleFont(42);
   quadLineFit1077->SetParameter(0,-0.3104536);
   quadLineFit1077->SetParError(0,0.06341175);
   quadLineFit1077->SetParLimits(0,0,0);
   quadLineFit1077->SetParameter(1,0.009675906);
   quadLineFit1077->SetParError(1,0.003942753);
   quadLineFit1077->SetParLimits(1,0,0);
   quadLineFit1077->Draw("same");
   
   Double_t 10.000000 ppm_fx1077[3] = {
   14,
   16,
   18};
   Double_t 10.000000 ppm_fy1077[3] = {
   1.535768,
   1.36394,
   1.206804};
   Double_t 10.000000 ppm_fex1077[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1077[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,10.000000 ppm_fx1077,10.000000 ppm_fy1077,10.000000 ppm_fex1077,10.000000 ppm_fey1077);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1077 = new TH1F("Graph_10dO000000sPppm1077","Graph",100,13.6,18.4);
   Graph_10dO000000sPppm1077->SetMinimum(1.160526);
   Graph_10dO000000sPppm1077->SetMaximum(1.582046);
   Graph_10dO000000sPppm1077->SetDirectory(0);
   Graph_10dO000000sPppm1077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1077->SetLineColor(ci);
   Graph_10dO000000sPppm1077->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1077->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1077->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1077->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1077->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1077->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1077->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1077);
   
   
   TF1 *quadLineFit1078 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1078->SetFillColor(19);
   quadLineFit1078->SetFillStyle(0);
   quadLineFit1078->SetLineColor(3);
   quadLineFit1078->SetLineWidth(2);
   quadLineFit1078->SetChisquare(0.2892936);
   quadLineFit1078->SetNDF(1);
   quadLineFit1078->GetXaxis()->SetLabelFont(42);
   quadLineFit1078->GetXaxis()->SetTitleOffset(1);
   quadLineFit1078->GetXaxis()->SetTitleFont(42);
   quadLineFit1078->GetYaxis()->SetLabelFont(42);
   quadLineFit1078->GetYaxis()->SetTitleFont(42);
   quadLineFit1078->SetParameter(0,2.684692);
   quadLineFit1078->SetParError(0,0.06341175);
   quadLineFit1078->SetParLimits(0,0,0);
   quadLineFit1078->SetParameter(1,-0.08224088);
   quadLineFit1078->SetParError(1,0.003942752);
   quadLineFit1078->SetParLimits(1,0,0);
   quadLineFit1078->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1078);
   gre->Draw("p ");
   
   TF1 *quadLineFit1079 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1079->SetFillColor(19);
   quadLineFit1079->SetFillStyle(0);
   quadLineFit1079->SetLineColor(3);
   quadLineFit1079->SetLineWidth(2);
   quadLineFit1079->SetChisquare(0.2892936);
   quadLineFit1079->SetNDF(1);
   quadLineFit1079->GetXaxis()->SetLabelFont(42);
   quadLineFit1079->GetXaxis()->SetTitleOffset(1);
   quadLineFit1079->GetXaxis()->SetTitleFont(42);
   quadLineFit1079->GetYaxis()->SetLabelFont(42);
   quadLineFit1079->GetYaxis()->SetTitleFont(42);
   quadLineFit1079->SetParameter(0,2.684692);
   quadLineFit1079->SetParError(0,0.06341175);
   quadLineFit1079->SetParLimits(0,0,0);
   quadLineFit1079->SetParameter(1,-0.08224088);
   quadLineFit1079->SetParError(1,0.003942752);
   quadLineFit1079->SetParLimits(1,0,0);
   quadLineFit1079->Draw("same");
   
   Double_t 30.000000 ppm_fx1079[3] = {
   14,
   16,
   18};
   Double_t 30.000000 ppm_fy1079[3] = {
   3.271778,
   2.869502,
   2.547734};
   Double_t 30.000000 ppm_fex1079[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1079[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,30.000000 ppm_fx1079,30.000000 ppm_fy1079,30.000000 ppm_fex1079,30.000000 ppm_fey1079);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1079 = new TH1F("Graph_30dO000000sPppm1079","Graph",100,13.6,18.4);
   Graph_30dO000000sPppm1079->SetMinimum(2.461947);
   Graph_30dO000000sPppm1079->SetMaximum(3.357565);
   Graph_30dO000000sPppm1079->SetDirectory(0);
   Graph_30dO000000sPppm1079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1079->SetLineColor(ci);
   Graph_30dO000000sPppm1079->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1079->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1079->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1079->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1079->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1079->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1079->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1079);
   
   
   TF1 *quadLineFit1080 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1080->SetFillColor(19);
   quadLineFit1080->SetFillStyle(0);
   quadLineFit1080->SetLineColor(4);
   quadLineFit1080->SetLineWidth(2);
   quadLineFit1080->SetChisquare(8.6863);
   quadLineFit1080->SetNDF(1);
   quadLineFit1080->GetXaxis()->SetLabelFont(42);
   quadLineFit1080->GetXaxis()->SetTitleOffset(1);
   quadLineFit1080->GetXaxis()->SetTitleFont(42);
   quadLineFit1080->GetYaxis()->SetLabelFont(42);
   quadLineFit1080->GetYaxis()->SetTitleFont(42);
   quadLineFit1080->SetParameter(0,5.792515);
   quadLineFit1080->SetParError(0,0.0634115);
   quadLineFit1080->SetParLimits(0,0,0);
   quadLineFit1080->SetParameter(1,-0.1810111);
   quadLineFit1080->SetParError(1,0.003942737);
   quadLineFit1080->SetParLimits(1,0,0);
   quadLineFit1080->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1080);
   gre->Draw("p ");
   
   TF1 *quadLineFit1081 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1081->SetFillColor(19);
   quadLineFit1081->SetFillStyle(0);
   quadLineFit1081->SetLineColor(4);
   quadLineFit1081->SetLineWidth(2);
   quadLineFit1081->SetChisquare(8.6863);
   quadLineFit1081->SetNDF(1);
   quadLineFit1081->GetXaxis()->SetLabelFont(42);
   quadLineFit1081->GetXaxis()->SetTitleOffset(1);
   quadLineFit1081->GetXaxis()->SetTitleFont(42);
   quadLineFit1081->GetYaxis()->SetLabelFont(42);
   quadLineFit1081->GetYaxis()->SetTitleFont(42);
   quadLineFit1081->SetParameter(0,5.792515);
   quadLineFit1081->SetParError(0,0.0634115);
   quadLineFit1081->SetParLimits(0,0,0);
   quadLineFit1081->SetParameter(1,-0.1810111);
   quadLineFit1081->SetParError(1,0.003942737);
   quadLineFit1081->SetParLimits(1,0,0);
   quadLineFit1081->Draw("same");
   
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
