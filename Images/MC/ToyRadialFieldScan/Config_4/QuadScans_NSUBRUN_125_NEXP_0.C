void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1057[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1057[2] = {
   -3.158243,
   -2.527247};
   Double_t -50.000000 ppm_fex1057[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1057[2] = {
   0.01320349,
   0.01320349};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1057,-50.000000 ppm_fy1057,-50.000000 ppm_fex1057,-50.000000 ppm_fey1057);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1057 = new TH1F("Graph_mI50dO000000sPppm1057","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1057->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1057->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1057->SetDirectory(0);
   Graph_mI50dO000000sPppm1057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1057->SetLineColor(ci);
   Graph_mI50dO000000sPppm1057->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1057->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1057->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1057->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1057->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1057->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1057->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1057->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1057->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1057->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1057->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1057->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1057->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1057->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1057->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1057);
   
   
   TF1 *quadLineFit1058 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1058->SetFillColor(19);
   quadLineFit1058->SetFillStyle(0);
   quadLineFit1058->SetLineWidth(2);
   quadLineFit1058->SetChisquare(4.720904e-19);
   quadLineFit1058->SetNDF(0);
   quadLineFit1058->GetXaxis()->SetLabelFont(42);
   quadLineFit1058->GetXaxis()->SetTitleOffset(1);
   quadLineFit1058->GetXaxis()->SetTitleFont(42);
   quadLineFit1058->GetYaxis()->SetLabelFont(42);
   quadLineFit1058->GetYaxis()->SetTitleFont(42);
   quadLineFit1058->SetParameter(0,-5.682227);
   quadLineFit1058->SetParError(0,0.08454357);
   quadLineFit1058->SetParLimits(0,0,0);
   quadLineFit1058->SetParameter(1,0.157749);
   quadLineFit1058->SetParError(1,0.004668138);
   quadLineFit1058->SetParLimits(1,0,0);
   quadLineFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1058);
   gre->Draw("ap");
   
   TF1 *quadLineFit1059 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1059->SetFillColor(19);
   quadLineFit1059->SetFillStyle(0);
   quadLineFit1059->SetLineWidth(2);
   quadLineFit1059->SetChisquare(4.720904e-19);
   quadLineFit1059->SetNDF(0);
   quadLineFit1059->GetXaxis()->SetLabelFont(42);
   quadLineFit1059->GetXaxis()->SetTitleOffset(1);
   quadLineFit1059->GetXaxis()->SetTitleFont(42);
   quadLineFit1059->GetYaxis()->SetLabelFont(42);
   quadLineFit1059->GetYaxis()->SetTitleFont(42);
   quadLineFit1059->SetParameter(0,-5.682227);
   quadLineFit1059->SetParError(0,0.08454357);
   quadLineFit1059->SetParLimits(0,0,0);
   quadLineFit1059->SetParameter(1,0.157749);
   quadLineFit1059->SetParError(1,0.004668138);
   quadLineFit1059->SetParLimits(1,0,0);
   quadLineFit1059->Draw("same");
   
   Double_t -25.000000 ppm_fx1059[2] = {
   16,
   20};
   Double_t -25.000000 ppm_fy1059[2] = {
   -1.273233,
   -1.036194};
   Double_t -25.000000 ppm_fex1059[2] = {
   0,
   0};
   Double_t -25.000000 ppm_fey1059[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,-25.000000 ppm_fx1059,-25.000000 ppm_fy1059,-25.000000 ppm_fex1059,-25.000000 ppm_fey1059);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1059 = new TH1F("Graph_mI25dO000000sPppm1059","Graph",100,15.6,20.4);
   Graph_mI25dO000000sPppm1059->SetMinimum(-1.312781);
   Graph_mI25dO000000sPppm1059->SetMaximum(-0.9966458);
   Graph_mI25dO000000sPppm1059->SetDirectory(0);
   Graph_mI25dO000000sPppm1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1059->SetLineColor(ci);
   Graph_mI25dO000000sPppm1059->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1059->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1059->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1059->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1059->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1059->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1059->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1059);
   
   
   TF1 *quadLineFit1060 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1060->SetFillColor(19);
   quadLineFit1060->SetFillStyle(0);
   quadLineFit1060->SetLineColor(2);
   quadLineFit1060->SetLineWidth(2);
   quadLineFit1060->SetChisquare(1.169915e-19);
   quadLineFit1060->SetNDF(0);
   quadLineFit1060->GetXaxis()->SetLabelFont(42);
   quadLineFit1060->GetXaxis()->SetTitleOffset(1);
   quadLineFit1060->GetXaxis()->SetTitleFont(42);
   quadLineFit1060->GetYaxis()->SetLabelFont(42);
   quadLineFit1060->GetYaxis()->SetTitleFont(42);
   quadLineFit1060->SetParameter(0,-2.22139);
   quadLineFit1060->SetParError(0,0.08454357);
   quadLineFit1060->SetParLimits(0,0,0);
   quadLineFit1060->SetParameter(1,0.05925981);
   quadLineFit1060->SetParError(1,0.004668138);
   quadLineFit1060->SetParLimits(1,0,0);
   quadLineFit1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1060);
   gre->Draw("p ");
   
   TF1 *quadLineFit1061 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1061->SetFillColor(19);
   quadLineFit1061->SetFillStyle(0);
   quadLineFit1061->SetLineColor(2);
   quadLineFit1061->SetLineWidth(2);
   quadLineFit1061->SetChisquare(1.169915e-19);
   quadLineFit1061->SetNDF(0);
   quadLineFit1061->GetXaxis()->SetLabelFont(42);
   quadLineFit1061->GetXaxis()->SetTitleOffset(1);
   quadLineFit1061->GetXaxis()->SetTitleFont(42);
   quadLineFit1061->GetYaxis()->SetLabelFont(42);
   quadLineFit1061->GetYaxis()->SetTitleFont(42);
   quadLineFit1061->SetParameter(0,-2.22139);
   quadLineFit1061->SetParError(0,0.08454357);
   quadLineFit1061->SetParLimits(0,0,0);
   quadLineFit1061->SetParameter(1,0.05925981);
   quadLineFit1061->SetParError(1,0.004668138);
   quadLineFit1061->SetParLimits(1,0,0);
   quadLineFit1061->Draw("same");
   
   Double_t 0.000000 ppm_fx1061[2] = {
   16,
   20};
   Double_t 0.000000 ppm_fy1061[2] = {
   0.6202651,
   0.4491182};
   Double_t 0.000000 ppm_fex1061[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1061[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,0.000000 ppm_fx1061,0.000000 ppm_fy1061,0.000000 ppm_fex1061,0.000000 ppm_fey1061);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1061 = new TH1F("Graph_0dO000000sPppm1061","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1061->SetMinimum(0.4161594);
   Graph_0dO000000sPppm1061->SetMaximum(0.6532239);
   Graph_0dO000000sPppm1061->SetDirectory(0);
   Graph_0dO000000sPppm1061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1061->SetLineColor(ci);
   Graph_0dO000000sPppm1061->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1061->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1061->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1061->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1061->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1061->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1061->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1061);
   
   
   TF1 *quadLineFit1062 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1062->SetFillColor(19);
   quadLineFit1062->SetFillStyle(0);
   quadLineFit1062->SetLineColor(3);
   quadLineFit1062->SetLineWidth(2);
   quadLineFit1062->SetChisquare(5.482734e-20);
   quadLineFit1062->SetNDF(0);
   quadLineFit1062->GetXaxis()->SetLabelFont(42);
   quadLineFit1062->GetXaxis()->SetTitleOffset(1);
   quadLineFit1062->GetXaxis()->SetTitleFont(42);
   quadLineFit1062->GetYaxis()->SetLabelFont(42);
   quadLineFit1062->GetYaxis()->SetTitleFont(42);
   quadLineFit1062->SetParameter(0,1.304852);
   quadLineFit1062->SetParError(0,0.08454357);
   quadLineFit1062->SetParLimits(0,0,0);
   quadLineFit1062->SetParameter(1,-0.04278671);
   quadLineFit1062->SetParError(1,0.004668138);
   quadLineFit1062->SetParLimits(1,0,0);
   quadLineFit1062->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1062);
   gre->Draw("p ");
   
   TF1 *quadLineFit1063 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1063->SetFillColor(19);
   quadLineFit1063->SetFillStyle(0);
   quadLineFit1063->SetLineColor(3);
   quadLineFit1063->SetLineWidth(2);
   quadLineFit1063->SetChisquare(5.482734e-20);
   quadLineFit1063->SetNDF(0);
   quadLineFit1063->GetXaxis()->SetLabelFont(42);
   quadLineFit1063->GetXaxis()->SetTitleOffset(1);
   quadLineFit1063->GetXaxis()->SetTitleFont(42);
   quadLineFit1063->GetYaxis()->SetLabelFont(42);
   quadLineFit1063->GetYaxis()->SetTitleFont(42);
   quadLineFit1063->SetParameter(0,1.304852);
   quadLineFit1063->SetParError(0,0.08454357);
   quadLineFit1063->SetParLimits(0,0,0);
   quadLineFit1063->SetParameter(1,-0.04278671);
   quadLineFit1063->SetParError(1,0.004668138);
   quadLineFit1063->SetParLimits(1,0,0);
   quadLineFit1063->Draw("same");
   
   Double_t 25.000000 ppm_fx1063[2] = {
   16,
   20};
   Double_t 25.000000 ppm_fy1063[2] = {
   2.479779,
   1.990576};
   Double_t 25.000000 ppm_fex1063[2] = {
   0,
   0};
   Double_t 25.000000 ppm_fey1063[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,25.000000 ppm_fx1063,25.000000 ppm_fy1063,25.000000 ppm_fex1063,25.000000 ppm_fey1063);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1063 = new TH1F("Graph_25dO000000sPppm1063","Graph",100,15.6,20.4);
   Graph_25dO000000sPppm1063->SetMinimum(1.925812);
   Graph_25dO000000sPppm1063->SetMaximum(2.544544);
   Graph_25dO000000sPppm1063->SetDirectory(0);
   Graph_25dO000000sPppm1063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1063->SetLineColor(ci);
   Graph_25dO000000sPppm1063->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1063->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1063->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1063->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1063->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1063->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1063->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1063);
   
   
   TF1 *quadLineFit1064 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1064->SetFillColor(19);
   quadLineFit1064->SetFillStyle(0);
   quadLineFit1064->SetLineColor(4);
   quadLineFit1064->SetLineWidth(2);
   quadLineFit1064->SetChisquare(5.530352e-20);
   quadLineFit1064->SetNDF(0);
   quadLineFit1064->GetXaxis()->SetLabelFont(42);
   quadLineFit1064->GetXaxis()->SetTitleOffset(1);
   quadLineFit1064->GetXaxis()->SetTitleFont(42);
   quadLineFit1064->GetYaxis()->SetLabelFont(42);
   quadLineFit1064->GetYaxis()->SetTitleFont(42);
   quadLineFit1064->SetParameter(0,4.436593);
   quadLineFit1064->SetParError(0,0.08454357);
   quadLineFit1064->SetParLimits(0,0,0);
   quadLineFit1064->SetParameter(1,-0.1223008);
   quadLineFit1064->SetParError(1,0.004668138);
   quadLineFit1064->SetParLimits(1,0,0);
   quadLineFit1064->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1064);
   gre->Draw("p ");
   
   TF1 *quadLineFit1065 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1065->SetFillColor(19);
   quadLineFit1065->SetFillStyle(0);
   quadLineFit1065->SetLineColor(4);
   quadLineFit1065->SetLineWidth(2);
   quadLineFit1065->SetChisquare(5.530352e-20);
   quadLineFit1065->SetNDF(0);
   quadLineFit1065->GetXaxis()->SetLabelFont(42);
   quadLineFit1065->GetXaxis()->SetTitleOffset(1);
   quadLineFit1065->GetXaxis()->SetTitleFont(42);
   quadLineFit1065->GetYaxis()->SetLabelFont(42);
   quadLineFit1065->GetYaxis()->SetTitleFont(42);
   quadLineFit1065->SetParameter(0,4.436593);
   quadLineFit1065->SetParError(0,0.08454357);
   quadLineFit1065->SetParLimits(0,0,0);
   quadLineFit1065->SetParameter(1,-0.1223008);
   quadLineFit1065->SetParError(1,0.004668138);
   quadLineFit1065->SetParLimits(1,0,0);
   quadLineFit1065->Draw("same");
   
   Double_t 50.000000 ppm_fx1065[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1065[2] = {
   4.347644,
   3.482698};
   Double_t 50.000000 ppm_fex1065[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1065[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,50.000000 ppm_fx1065,50.000000 ppm_fy1065,50.000000 ppm_fex1065,50.000000 ppm_fey1065);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1065 = new TH1F("Graph_50dO000000sPppm1065","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1065->SetMinimum(3.380359);
   Graph_50dO000000sPppm1065->SetMaximum(4.449983);
   Graph_50dO000000sPppm1065->SetDirectory(0);
   Graph_50dO000000sPppm1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1065->SetLineColor(ci);
   Graph_50dO000000sPppm1065->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1065->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1065->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1065->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1065->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1065->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1065->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1065);
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineColor(5);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(1.062285e-19);
   quadLineFit1066->SetNDF(0);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,7.807429);
   quadLineFit1066->SetParError(0,0.08454357);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,-0.2162366);
   quadLineFit1066->SetParError(1,0.004668138);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("p ");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineColor(5);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(1.062285e-19);
   quadLineFit1067->SetNDF(0);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,7.807429);
   quadLineFit1067->SetParError(0,0.08454357);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,-0.2162366);
   quadLineFit1067->SetParError(1,0.004668138);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
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
