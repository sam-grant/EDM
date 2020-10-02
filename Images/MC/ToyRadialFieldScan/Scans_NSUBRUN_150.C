void Scans_NSUBRUN_150()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  2 13:49:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.625,21.77143,2.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1131[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1131[2] = {
   -2.375,
   -1.9};
   Double_t -30.000000 ppm_fex1131[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1131[2] = {
   0.04177491,
   0.04177491};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1131,-30.000000 ppm_fy1131,-30.000000 ppm_fex1131,-30.000000 ppm_fey1131);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131","",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->SetMinimum(-3);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->SetMaximum(2);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetXaxis()->SetTitle("QHV [kV]");
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm100110111029105510891131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_-30.000000 ppm100110111029105510891131);
   
   
   TF1 *lineFit1132 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1132->SetFillColor(19);
   lineFit1132->SetFillStyle(0);
   lineFit1132->SetLineWidth(2);
   lineFit1132->SetChisquare(5.175768e-26);
   lineFit1132->SetNDF(0);
   lineFit1132->GetXaxis()->SetLabelFont(42);
   lineFit1132->GetXaxis()->SetTitleOffset(1);
   lineFit1132->GetXaxis()->SetTitleFont(42);
   lineFit1132->GetYaxis()->SetLabelFont(42);
   lineFit1132->GetYaxis()->SetTitleFont(42);
   lineFit1132->SetParameter(0,-4.275);
   lineFit1132->SetParError(0,0.26749);
   lineFit1132->SetParLimits(0,0,0);
   lineFit1132->SetParameter(1,0.11875);
   lineFit1132->SetParError(1,0.01476966);
   lineFit1132->SetParLimits(1,0,0);
   lineFit1132->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1132);
   gre->Draw("ap");
   
   TF1 *lineFit1133 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1133->SetFillColor(19);
   lineFit1133->SetFillStyle(0);
   lineFit1133->SetLineWidth(2);
   lineFit1133->SetChisquare(5.175768e-26);
   lineFit1133->SetNDF(0);
   lineFit1133->GetXaxis()->SetLabelFont(42);
   lineFit1133->GetXaxis()->SetTitleOffset(1);
   lineFit1133->GetXaxis()->SetTitleFont(42);
   lineFit1133->GetYaxis()->SetLabelFont(42);
   lineFit1133->GetYaxis()->SetTitleFont(42);
   lineFit1133->SetParameter(0,-4.275);
   lineFit1133->SetParError(0,0.26749);
   lineFit1133->SetParLimits(0,0,0);
   lineFit1133->SetParameter(1,0.11875);
   lineFit1133->SetParError(1,0.01476966);
   lineFit1133->SetParLimits(1,0,0);
   lineFit1133->Draw("same");
   
   Double_t -10.000000 ppm_fx1133[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1133[2] = {
   -1.125,
   -0.9};
   Double_t -10.000000 ppm_fex1133[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1133[2] = {
   0.04177491,
   0.04177491};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1133,-10.000000 ppm_fy1133,-10.000000 ppm_fex1133,-10.000000 ppm_fey1133);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->SetMinimum(-1.19763);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->SetMaximum(-0.8273701);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm100310131031105710911133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_-10.000000 ppm100310131031105710911133);
   
   
   TF1 *lineFit1134 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1134->SetFillColor(19);
   lineFit1134->SetFillStyle(0);
   lineFit1134->SetLineColor(2);
   lineFit1134->SetLineWidth(2);
   lineFit1134->SetChisquare(5.155992e-28);
   lineFit1134->SetNDF(0);
   lineFit1134->GetXaxis()->SetLabelFont(42);
   lineFit1134->GetXaxis()->SetTitleOffset(1);
   lineFit1134->GetXaxis()->SetTitleFont(42);
   lineFit1134->GetYaxis()->SetLabelFont(42);
   lineFit1134->GetYaxis()->SetTitleFont(42);
   lineFit1134->SetParameter(0,-2.025);
   lineFit1134->SetParError(0,0.26749);
   lineFit1134->SetParLimits(0,0,0);
   lineFit1134->SetParameter(1,0.05625);
   lineFit1134->SetParError(1,0.01476966);
   lineFit1134->SetParLimits(1,0,0);
   lineFit1134->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1134);
   gre->Draw("p ");
   
   TF1 *lineFit1135 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1135->SetFillColor(19);
   lineFit1135->SetFillStyle(0);
   lineFit1135->SetLineColor(2);
   lineFit1135->SetLineWidth(2);
   lineFit1135->SetChisquare(5.155992e-28);
   lineFit1135->SetNDF(0);
   lineFit1135->GetXaxis()->SetLabelFont(42);
   lineFit1135->GetXaxis()->SetTitleOffset(1);
   lineFit1135->GetXaxis()->SetTitleFont(42);
   lineFit1135->GetYaxis()->SetLabelFont(42);
   lineFit1135->GetYaxis()->SetTitleFont(42);
   lineFit1135->SetParameter(0,-2.025);
   lineFit1135->SetParError(0,0.26749);
   lineFit1135->SetParLimits(0,0,0);
   lineFit1135->SetParameter(1,0.05625);
   lineFit1135->SetParError(1,0.01476966);
   lineFit1135->SetParLimits(1,0,0);
   lineFit1135->Draw("same");
   
   Double_t 10.000000 ppm_fx1135[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1135[2] = {
   0.125,
   0.1};
   Double_t 10.000000 ppm_fex1135[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1135[2] = {
   0.04177491,
   0.04177491};
   gre = new TGraphErrors(2,10.000000 ppm_fx1135,10.000000 ppm_fy1135,10.000000 ppm_fex1135,10.000000 ppm_fey1135);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->SetMinimum(0.0473701);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->SetMaximum(0.1776299);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm100510151033105910931135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_10.000000 ppm100510151033105910931135);
   
   
   TF1 *lineFit1136 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1136->SetFillColor(19);
   lineFit1136->SetFillStyle(0);
   lineFit1136->SetLineColor(3);
   lineFit1136->SetLineWidth(2);
   lineFit1136->SetChisquare(6.731924e-30);
   lineFit1136->SetNDF(0);
   lineFit1136->GetXaxis()->SetLabelFont(42);
   lineFit1136->GetXaxis()->SetTitleOffset(1);
   lineFit1136->GetXaxis()->SetTitleFont(42);
   lineFit1136->GetYaxis()->SetLabelFont(42);
   lineFit1136->GetYaxis()->SetTitleFont(42);
   lineFit1136->SetParameter(0,0.225);
   lineFit1136->SetParError(0,0.26749);
   lineFit1136->SetParLimits(0,0,0);
   lineFit1136->SetParameter(1,-0.00625);
   lineFit1136->SetParError(1,0.01476966);
   lineFit1136->SetParLimits(1,0,0);
   lineFit1136->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1136);
   gre->Draw("p ");
   
   TF1 *lineFit1137 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1137->SetFillColor(19);
   lineFit1137->SetFillStyle(0);
   lineFit1137->SetLineColor(3);
   lineFit1137->SetLineWidth(2);
   lineFit1137->SetChisquare(6.731924e-30);
   lineFit1137->SetNDF(0);
   lineFit1137->GetXaxis()->SetLabelFont(42);
   lineFit1137->GetXaxis()->SetTitleOffset(1);
   lineFit1137->GetXaxis()->SetTitleFont(42);
   lineFit1137->GetYaxis()->SetLabelFont(42);
   lineFit1137->GetYaxis()->SetTitleFont(42);
   lineFit1137->SetParameter(0,0.225);
   lineFit1137->SetParError(0,0.26749);
   lineFit1137->SetParLimits(0,0,0);
   lineFit1137->SetParameter(1,-0.00625);
   lineFit1137->SetParError(1,0.01476966);
   lineFit1137->SetParLimits(1,0,0);
   lineFit1137->Draw("same");
   
   Double_t 30.000000 ppm_fx1137[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1137[2] = {
   1.375,
   1.1};
   Double_t 30.000000 ppm_fex1137[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1137[2] = {
   0.04177491,
   0.04177491};
   gre = new TGraphErrors(2,30.000000 ppm_fx1137,30.000000 ppm_fy1137,30.000000 ppm_fex1137,30.000000 ppm_fey1137);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->SetMinimum(1.02237);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->SetMaximum(1.45263);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm100710171035106110951137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_30.000000 ppm100710171035106110951137);
   
   
   TF1 *lineFit1138 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1138->SetFillColor(19);
   lineFit1138->SetFillStyle(0);
   lineFit1138->SetLineColor(4);
   lineFit1138->SetLineWidth(2);
   lineFit1138->SetChisquare(1.358922e-26);
   lineFit1138->SetNDF(0);
   lineFit1138->GetXaxis()->SetLabelFont(42);
   lineFit1138->GetXaxis()->SetTitleOffset(1);
   lineFit1138->GetXaxis()->SetTitleFont(42);
   lineFit1138->GetYaxis()->SetLabelFont(42);
   lineFit1138->GetYaxis()->SetTitleFont(42);
   lineFit1138->SetParameter(0,2.475);
   lineFit1138->SetParError(0,0.26749);
   lineFit1138->SetParLimits(0,0,0);
   lineFit1138->SetParameter(1,-0.06875);
   lineFit1138->SetParError(1,0.01476966);
   lineFit1138->SetParLimits(1,0,0);
   lineFit1138->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1138);
   gre->Draw("p ");
   
   TF1 *lineFit1139 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1139->SetFillColor(19);
   lineFit1139->SetFillStyle(0);
   lineFit1139->SetLineColor(4);
   lineFit1139->SetLineWidth(2);
   lineFit1139->SetChisquare(1.358922e-26);
   lineFit1139->SetNDF(0);
   lineFit1139->GetXaxis()->SetLabelFont(42);
   lineFit1139->GetXaxis()->SetTitleOffset(1);
   lineFit1139->GetXaxis()->SetTitleFont(42);
   lineFit1139->GetYaxis()->SetLabelFont(42);
   lineFit1139->GetYaxis()->SetTitleFont(42);
   lineFit1139->SetParameter(0,2.475);
   lineFit1139->SetParError(0,0.26749);
   lineFit1139->SetParLimits(0,0,0);
   lineFit1139->SetParameter(1,-0.06875);
   lineFit1139->SetParError(1,0.01476966);
   lineFit1139->SetParLimits(1,0,0);
   lineFit1139->Draw("same");
   
   Double_t -30.000000 ppm_fx1139[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1139[2] = {
   -2.375,
   -1.9};
   Double_t -30.000000 ppm_fex1139[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1139[2] = {
   0.02474879,
   0.02474879};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1139,-30.000000 ppm_fy1139,-30.000000 ppm_fex1139,-30.000000 ppm_fey1139);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139 = new TH1F("Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->SetMinimum(-2.452199);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->SetMaximum(-1.822801);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10191037106310971139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_-30.000000 ppm10191037106310971139);
   
   
   TF1 *lineFit1140 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1140->SetFillColor(19);
   lineFit1140->SetFillStyle(0);
   lineFit1140->SetLineColor(5);
   lineFit1140->SetLineWidth(2);
   lineFit1140->SetChisquare(1.355547e-25);
   lineFit1140->SetNDF(0);
   lineFit1140->GetXaxis()->SetLabelFont(42);
   lineFit1140->GetXaxis()->SetTitleOffset(1);
   lineFit1140->GetXaxis()->SetTitleFont(42);
   lineFit1140->GetYaxis()->SetLabelFont(42);
   lineFit1140->GetYaxis()->SetTitleFont(42);
   lineFit1140->SetParameter(0,-4.275);
   lineFit1140->SetParError(0,0.1584696);
   lineFit1140->SetParLimits(0,0,0);
   lineFit1140->SetParameter(1,0.11875);
   lineFit1140->SetParError(1,0.008750018);
   lineFit1140->SetParLimits(1,0,0);
   lineFit1140->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1140);
   gre->Draw("p ");
   
   TF1 *lineFit1141 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1141->SetFillColor(19);
   lineFit1141->SetFillStyle(0);
   lineFit1141->SetLineColor(5);
   lineFit1141->SetLineWidth(2);
   lineFit1141->SetChisquare(1.355547e-25);
   lineFit1141->SetNDF(0);
   lineFit1141->GetXaxis()->SetLabelFont(42);
   lineFit1141->GetXaxis()->SetTitleOffset(1);
   lineFit1141->GetXaxis()->SetTitleFont(42);
   lineFit1141->GetYaxis()->SetLabelFont(42);
   lineFit1141->GetYaxis()->SetTitleFont(42);
   lineFit1141->SetParameter(0,-4.275);
   lineFit1141->SetParError(0,0.1584696);
   lineFit1141->SetParLimits(0,0,0);
   lineFit1141->SetParameter(1,0.11875);
   lineFit1141->SetParError(1,0.008750018);
   lineFit1141->SetParLimits(1,0,0);
   lineFit1141->Draw("same");
   
   Double_t -10.000000 ppm_fx1141[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1141[2] = {
   -1.125,
   -0.9};
   Double_t -10.000000 ppm_fex1141[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1141[2] = {
   0.02474879,
   0.02474879};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1141,-10.000000 ppm_fy1141,-10.000000 ppm_fex1141,-10.000000 ppm_fey1141);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141 = new TH1F("Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->SetMinimum(-1.177199);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->SetMaximum(-0.8478015);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10211039106510991141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_-10.000000 ppm10211039106510991141);
   
   
   TF1 *lineFit1142 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1142->SetFillColor(19);
   lineFit1142->SetFillStyle(0);
   lineFit1142->SetLineColor(6);
   lineFit1142->SetLineWidth(2);
   lineFit1142->SetChisquare(1.791029e-27);
   lineFit1142->SetNDF(0);
   lineFit1142->GetXaxis()->SetLabelFont(42);
   lineFit1142->GetXaxis()->SetTitleOffset(1);
   lineFit1142->GetXaxis()->SetTitleFont(42);
   lineFit1142->GetYaxis()->SetLabelFont(42);
   lineFit1142->GetYaxis()->SetTitleFont(42);
   lineFit1142->SetParameter(0,-2.025);
   lineFit1142->SetParError(0,0.1584696);
   lineFit1142->SetParLimits(0,0,0);
   lineFit1142->SetParameter(1,0.05625);
   lineFit1142->SetParError(1,0.008750018);
   lineFit1142->SetParLimits(1,0,0);
   lineFit1142->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1142);
   gre->Draw("p ");
   
   TF1 *lineFit1143 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1143->SetFillColor(19);
   lineFit1143->SetFillStyle(0);
   lineFit1143->SetLineColor(6);
   lineFit1143->SetLineWidth(2);
   lineFit1143->SetChisquare(1.791029e-27);
   lineFit1143->SetNDF(0);
   lineFit1143->GetXaxis()->SetLabelFont(42);
   lineFit1143->GetXaxis()->SetTitleOffset(1);
   lineFit1143->GetXaxis()->SetTitleFont(42);
   lineFit1143->GetYaxis()->SetLabelFont(42);
   lineFit1143->GetYaxis()->SetTitleFont(42);
   lineFit1143->SetParameter(0,-2.025);
   lineFit1143->SetParError(0,0.1584696);
   lineFit1143->SetParLimits(0,0,0);
   lineFit1143->SetParameter(1,0.05625);
   lineFit1143->SetParError(1,0.008750018);
   lineFit1143->SetParLimits(1,0,0);
   lineFit1143->Draw("same");
   
   Double_t 10.000000 ppm_fx1143[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1143[2] = {
   0.125,
   0.1};
   Double_t 10.000000 ppm_fex1143[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1143[2] = {
   0.02474879,
   0.02474879};
   gre = new TGraphErrors(2,10.000000 ppm_fx1143,10.000000 ppm_fy1143,10.000000 ppm_fex1143,10.000000 ppm_fey1143);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143 = new TH1F("Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->SetMinimum(0.06780145);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->SetMaximum(0.1571985);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10231041106711011143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_10.000000 ppm10231041106711011143);
   
   
   TF1 *lineFit1144 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1144->SetFillColor(19);
   lineFit1144->SetFillStyle(0);
   lineFit1144->SetLineColor(7);
   lineFit1144->SetLineWidth(2);
   lineFit1144->SetChisquare(1.336354e-27);
   lineFit1144->SetNDF(0);
   lineFit1144->GetXaxis()->SetLabelFont(42);
   lineFit1144->GetXaxis()->SetTitleOffset(1);
   lineFit1144->GetXaxis()->SetTitleFont(42);
   lineFit1144->GetYaxis()->SetLabelFont(42);
   lineFit1144->GetYaxis()->SetTitleFont(42);
   lineFit1144->SetParameter(0,0.225);
   lineFit1144->SetParError(0,0.1584696);
   lineFit1144->SetParLimits(0,0,0);
   lineFit1144->SetParameter(1,-0.00625);
   lineFit1144->SetParError(1,0.008750018);
   lineFit1144->SetParLimits(1,0,0);
   lineFit1144->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1144);
   gre->Draw("p ");
   
   TF1 *lineFit1145 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1145->SetFillColor(19);
   lineFit1145->SetFillStyle(0);
   lineFit1145->SetLineColor(7);
   lineFit1145->SetLineWidth(2);
   lineFit1145->SetChisquare(1.336354e-27);
   lineFit1145->SetNDF(0);
   lineFit1145->GetXaxis()->SetLabelFont(42);
   lineFit1145->GetXaxis()->SetTitleOffset(1);
   lineFit1145->GetXaxis()->SetTitleFont(42);
   lineFit1145->GetYaxis()->SetLabelFont(42);
   lineFit1145->GetYaxis()->SetTitleFont(42);
   lineFit1145->SetParameter(0,0.225);
   lineFit1145->SetParError(0,0.1584696);
   lineFit1145->SetParLimits(0,0,0);
   lineFit1145->SetParameter(1,-0.00625);
   lineFit1145->SetParError(1,0.008750018);
   lineFit1145->SetParLimits(1,0,0);
   lineFit1145->Draw("same");
   
   Double_t 30.000000 ppm_fx1145[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1145[2] = {
   1.375,
   1.1};
   Double_t 30.000000 ppm_fex1145[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1145[2] = {
   0.02474879,
   0.02474879};
   gre = new TGraphErrors(2,30.000000 ppm_fx1145,30.000000 ppm_fy1145,30.000000 ppm_fex1145,30.000000 ppm_fey1145);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145 = new TH1F("Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->SetMinimum(1.042801);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->SetMaximum(1.432199);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10251043106911031145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_30.000000 ppm10251043106911031145);
   
   
   TF1 *lineFit1146 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1146->SetFillColor(19);
   lineFit1146->SetFillStyle(0);
   lineFit1146->SetLineColor(8);
   lineFit1146->SetLineWidth(2);
   lineFit1146->SetChisquare(6.439654e-27);
   lineFit1146->SetNDF(0);
   lineFit1146->GetXaxis()->SetLabelFont(42);
   lineFit1146->GetXaxis()->SetTitleOffset(1);
   lineFit1146->GetXaxis()->SetTitleFont(42);
   lineFit1146->GetYaxis()->SetLabelFont(42);
   lineFit1146->GetYaxis()->SetTitleFont(42);
   lineFit1146->SetParameter(0,2.475);
   lineFit1146->SetParError(0,0.1584696);
   lineFit1146->SetParLimits(0,0,0);
   lineFit1146->SetParameter(1,-0.06875);
   lineFit1146->SetParError(1,0.008750018);
   lineFit1146->SetParLimits(1,0,0);
   lineFit1146->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1146);
   gre->Draw("p ");
   
   TF1 *lineFit1147 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1147->SetFillColor(19);
   lineFit1147->SetFillStyle(0);
   lineFit1147->SetLineColor(8);
   lineFit1147->SetLineWidth(2);
   lineFit1147->SetChisquare(6.439654e-27);
   lineFit1147->SetNDF(0);
   lineFit1147->GetXaxis()->SetLabelFont(42);
   lineFit1147->GetXaxis()->SetTitleOffset(1);
   lineFit1147->GetXaxis()->SetTitleFont(42);
   lineFit1147->GetYaxis()->SetLabelFont(42);
   lineFit1147->GetYaxis()->SetTitleFont(42);
   lineFit1147->SetParameter(0,2.475);
   lineFit1147->SetParError(0,0.1584696);
   lineFit1147->SetParLimits(0,0,0);
   lineFit1147->SetParameter(1,-0.06875);
   lineFit1147->SetParError(1,0.008750018);
   lineFit1147->SetParLimits(1,0,0);
   lineFit1147->Draw("same");
   
   Double_t -30.000000 ppm_fx1147[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1147[2] = {
   -2.375,
   -1.9};
   Double_t -30.000000 ppm_fex1147[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1147[2] = {
   0.01896163,
   0.01896163};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1147,-30.000000 ppm_fy1147,-30.000000 ppm_fex1147,-30.000000 ppm_fey1147);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147 = new TH1F("Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->SetMinimum(-2.445254);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->SetMaximum(-1.829746);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1045107111051147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-30.000000 ppm1045107111051147);
   
   
   TF1 *lineFit1148 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1148->SetFillColor(19);
   lineFit1148->SetFillStyle(0);
   lineFit1148->SetLineColor(9);
   lineFit1148->SetLineWidth(2);
   lineFit1148->SetChisquare(2.819372e-25);
   lineFit1148->SetNDF(0);
   lineFit1148->GetXaxis()->SetLabelFont(42);
   lineFit1148->GetXaxis()->SetTitleOffset(1);
   lineFit1148->GetXaxis()->SetTitleFont(42);
   lineFit1148->GetYaxis()->SetLabelFont(42);
   lineFit1148->GetYaxis()->SetTitleFont(42);
   lineFit1148->SetParameter(0,-4.275);
   lineFit1148->SetParError(0,0.1214136);
   lineFit1148->SetParLimits(0,0,0);
   lineFit1148->SetParameter(1,0.11875);
   lineFit1148->SetParError(1,0.006703947);
   lineFit1148->SetParLimits(1,0,0);
   lineFit1148->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1148);
   gre->Draw("p ");
   
   TF1 *lineFit1149 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1149->SetFillColor(19);
   lineFit1149->SetFillStyle(0);
   lineFit1149->SetLineColor(9);
   lineFit1149->SetLineWidth(2);
   lineFit1149->SetChisquare(2.819372e-25);
   lineFit1149->SetNDF(0);
   lineFit1149->GetXaxis()->SetLabelFont(42);
   lineFit1149->GetXaxis()->SetTitleOffset(1);
   lineFit1149->GetXaxis()->SetTitleFont(42);
   lineFit1149->GetYaxis()->SetLabelFont(42);
   lineFit1149->GetYaxis()->SetTitleFont(42);
   lineFit1149->SetParameter(0,-4.275);
   lineFit1149->SetParError(0,0.1214136);
   lineFit1149->SetParLimits(0,0,0);
   lineFit1149->SetParameter(1,0.11875);
   lineFit1149->SetParError(1,0.006703947);
   lineFit1149->SetParLimits(1,0,0);
   lineFit1149->Draw("same");
   
   Double_t -10.000000 ppm_fx1149[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1149[2] = {
   -1.125,
   -0.9};
   Double_t -10.000000 ppm_fex1149[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1149[2] = {
   0.01896163,
   0.01896163};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1149,-10.000000 ppm_fy1149,-10.000000 ppm_fex1149,-10.000000 ppm_fey1149);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149 = new TH1F("Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->SetMinimum(-1.170254);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->SetMaximum(-0.854746);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1047107311071149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-10.000000 ppm1047107311071149);
   
   
   TF1 *lineFit1150 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1150->SetFillColor(19);
   lineFit1150->SetFillStyle(0);
   lineFit1150->SetLineColor(10);
   lineFit1150->SetLineWidth(2);
   lineFit1150->SetChisquare(1.265015e-26);
   lineFit1150->SetNDF(0);
   lineFit1150->GetXaxis()->SetLabelFont(42);
   lineFit1150->GetXaxis()->SetTitleOffset(1);
   lineFit1150->GetXaxis()->SetTitleFont(42);
   lineFit1150->GetYaxis()->SetLabelFont(42);
   lineFit1150->GetYaxis()->SetTitleFont(42);
   lineFit1150->SetParameter(0,-2.025);
   lineFit1150->SetParError(0,0.1214136);
   lineFit1150->SetParLimits(0,0,0);
   lineFit1150->SetParameter(1,0.05625);
   lineFit1150->SetParError(1,0.006703947);
   lineFit1150->SetParLimits(1,0,0);
   lineFit1150->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1150);
   gre->Draw("p ");
   
   TF1 *lineFit1151 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1151->SetFillColor(19);
   lineFit1151->SetFillStyle(0);
   lineFit1151->SetLineColor(10);
   lineFit1151->SetLineWidth(2);
   lineFit1151->SetChisquare(1.265015e-26);
   lineFit1151->SetNDF(0);
   lineFit1151->GetXaxis()->SetLabelFont(42);
   lineFit1151->GetXaxis()->SetTitleOffset(1);
   lineFit1151->GetXaxis()->SetTitleFont(42);
   lineFit1151->GetYaxis()->SetLabelFont(42);
   lineFit1151->GetYaxis()->SetTitleFont(42);
   lineFit1151->SetParameter(0,-2.025);
   lineFit1151->SetParError(0,0.1214136);
   lineFit1151->SetParLimits(0,0,0);
   lineFit1151->SetParameter(1,0.05625);
   lineFit1151->SetParError(1,0.006703947);
   lineFit1151->SetParLimits(1,0,0);
   lineFit1151->Draw("same");
   
   Double_t 10.000000 ppm_fx1151[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1151[2] = {
   0.125,
   0.1};
   Double_t 10.000000 ppm_fex1151[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1151[2] = {
   0.01896163,
   0.01896163};
   gre = new TGraphErrors(2,10.000000 ppm_fx1151,10.000000 ppm_fy1151,10.000000 ppm_fex1151,10.000000 ppm_fey1151);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151 = new TH1F("Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->SetMinimum(0.07474605);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->SetMaximum(0.150254);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->SetDirectory(0);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->SetLineColor(ci);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1049107511091151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_10.000000 ppm1049107511091151);
   
   
   TF1 *lineFit1152 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1152->SetFillColor(19);
   lineFit1152->SetFillStyle(0);
   lineFit1152->SetLineColor(11);
   lineFit1152->SetLineWidth(2);
   lineFit1152->SetChisquare(4.724522e-28);
   lineFit1152->SetNDF(0);
   lineFit1152->GetXaxis()->SetLabelFont(42);
   lineFit1152->GetXaxis()->SetTitleOffset(1);
   lineFit1152->GetXaxis()->SetTitleFont(42);
   lineFit1152->GetYaxis()->SetLabelFont(42);
   lineFit1152->GetYaxis()->SetTitleFont(42);
   lineFit1152->SetParameter(0,0.225);
   lineFit1152->SetParError(0,0.1214136);
   lineFit1152->SetParLimits(0,0,0);
   lineFit1152->SetParameter(1,-0.00625);
   lineFit1152->SetParError(1,0.006703947);
   lineFit1152->SetParLimits(1,0,0);
   lineFit1152->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1152);
   gre->Draw("p ");
   
   TF1 *lineFit1153 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1153->SetFillColor(19);
   lineFit1153->SetFillStyle(0);
   lineFit1153->SetLineColor(11);
   lineFit1153->SetLineWidth(2);
   lineFit1153->SetChisquare(4.724522e-28);
   lineFit1153->SetNDF(0);
   lineFit1153->GetXaxis()->SetLabelFont(42);
   lineFit1153->GetXaxis()->SetTitleOffset(1);
   lineFit1153->GetXaxis()->SetTitleFont(42);
   lineFit1153->GetYaxis()->SetLabelFont(42);
   lineFit1153->GetYaxis()->SetTitleFont(42);
   lineFit1153->SetParameter(0,0.225);
   lineFit1153->SetParError(0,0.1214136);
   lineFit1153->SetParLimits(0,0,0);
   lineFit1153->SetParameter(1,-0.00625);
   lineFit1153->SetParError(1,0.006703947);
   lineFit1153->SetParLimits(1,0,0);
   lineFit1153->Draw("same");
   
   Double_t 30.000000 ppm_fx1153[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1153[2] = {
   1.375,
   1.1};
   Double_t 30.000000 ppm_fex1153[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1153[2] = {
   0.01896163,
   0.01896163};
   gre = new TGraphErrors(2,30.000000 ppm_fx1153,30.000000 ppm_fy1153,30.000000 ppm_fex1153,30.000000 ppm_fey1153);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(12);
   gre->SetMarkerColor(12);
   
   TH1F *Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153 = new TH1F("Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->SetMinimum(1.049746);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->SetMaximum(1.425254);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->SetDirectory(0);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->SetLineColor(ci);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1051107711111153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_30.000000 ppm1051107711111153);
   
   
   TF1 *lineFit1154 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1154->SetFillColor(19);
   lineFit1154->SetFillStyle(0);
   lineFit1154->SetLineColor(12);
   lineFit1154->SetLineWidth(2);
   lineFit1154->SetChisquare(1.220448e-25);
   lineFit1154->SetNDF(0);
   lineFit1154->GetXaxis()->SetLabelFont(42);
   lineFit1154->GetXaxis()->SetTitleOffset(1);
   lineFit1154->GetXaxis()->SetTitleFont(42);
   lineFit1154->GetYaxis()->SetLabelFont(42);
   lineFit1154->GetYaxis()->SetTitleFont(42);
   lineFit1154->SetParameter(0,2.475);
   lineFit1154->SetParError(0,0.1214136);
   lineFit1154->SetParLimits(0,0,0);
   lineFit1154->SetParameter(1,-0.06875);
   lineFit1154->SetParError(1,0.006703947);
   lineFit1154->SetParLimits(1,0,0);
   lineFit1154->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1154);
   gre->Draw("p ");
   
   TF1 *lineFit1155 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1155->SetFillColor(19);
   lineFit1155->SetFillStyle(0);
   lineFit1155->SetLineColor(12);
   lineFit1155->SetLineWidth(2);
   lineFit1155->SetChisquare(1.220448e-25);
   lineFit1155->SetNDF(0);
   lineFit1155->GetXaxis()->SetLabelFont(42);
   lineFit1155->GetXaxis()->SetTitleOffset(1);
   lineFit1155->GetXaxis()->SetTitleFont(42);
   lineFit1155->GetYaxis()->SetLabelFont(42);
   lineFit1155->GetYaxis()->SetTitleFont(42);
   lineFit1155->SetParameter(0,2.475);
   lineFit1155->SetParError(0,0.1214136);
   lineFit1155->SetParLimits(0,0,0);
   lineFit1155->SetParameter(1,-0.06875);
   lineFit1155->SetParError(1,0.006703947);
   lineFit1155->SetParLimits(1,0,0);
   lineFit1155->Draw("same");
   
   Double_t -30.000000 ppm_fx1155[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1155[2] = {
   -2.375,
   -1.9};
   Double_t -30.000000 ppm_fex1155[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1155[2] = {
   0.01593624,
   0.01593624};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1155,-30.000000 ppm_fy1155,-30.000000 ppm_fex1155,-30.000000 ppm_fey1155);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(13);
   gre->SetMarkerColor(13);
   
   TH1F *Graph_Graph_Graph_mI30dO000000sPppm107911131155 = new TH1F("Graph_Graph_Graph_mI30dO000000sPppm107911131155","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->SetMinimum(-2.441623);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->SetMaximum(-1.833377);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->SetDirectory(0);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->SetLineColor(ci);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm107911131155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-30.000000 ppm107911131155);
   
   
   TF1 *lineFit1156 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1156->SetFillColor(19);
   lineFit1156->SetFillStyle(0);
   lineFit1156->SetLineColor(13);
   lineFit1156->SetLineWidth(2);
   lineFit1156->SetChisquare(5.094161e-25);
   lineFit1156->SetNDF(0);
   lineFit1156->GetXaxis()->SetLabelFont(42);
   lineFit1156->GetXaxis()->SetTitleOffset(1);
   lineFit1156->GetXaxis()->SetTitleFont(42);
   lineFit1156->GetYaxis()->SetLabelFont(42);
   lineFit1156->GetYaxis()->SetTitleFont(42);
   lineFit1156->SetParameter(0,-4.275);
   lineFit1156->SetParError(0,0.1020417);
   lineFit1156->SetParLimits(0,0,0);
   lineFit1156->SetParameter(1,0.11875);
   lineFit1156->SetParError(1,0.005634311);
   lineFit1156->SetParLimits(1,0,0);
   lineFit1156->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1156);
   gre->Draw("p ");
   
   TF1 *lineFit1157 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1157->SetFillColor(19);
   lineFit1157->SetFillStyle(0);
   lineFit1157->SetLineColor(13);
   lineFit1157->SetLineWidth(2);
   lineFit1157->SetChisquare(5.094161e-25);
   lineFit1157->SetNDF(0);
   lineFit1157->GetXaxis()->SetLabelFont(42);
   lineFit1157->GetXaxis()->SetTitleOffset(1);
   lineFit1157->GetXaxis()->SetTitleFont(42);
   lineFit1157->GetYaxis()->SetLabelFont(42);
   lineFit1157->GetYaxis()->SetTitleFont(42);
   lineFit1157->SetParameter(0,-4.275);
   lineFit1157->SetParError(0,0.1020417);
   lineFit1157->SetParLimits(0,0,0);
   lineFit1157->SetParameter(1,0.11875);
   lineFit1157->SetParError(1,0.005634311);
   lineFit1157->SetParLimits(1,0,0);
   lineFit1157->Draw("same");
   
   Double_t -10.000000 ppm_fx1157[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1157[2] = {
   -1.125,
   -0.9};
   Double_t -10.000000 ppm_fex1157[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1157[2] = {
   0.01593624,
   0.01593624};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1157,-10.000000 ppm_fy1157,-10.000000 ppm_fex1157,-10.000000 ppm_fey1157);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(14);
   gre->SetMarkerColor(14);
   
   TH1F *Graph_Graph_Graph_mI10dO000000sPppm108111151157 = new TH1F("Graph_Graph_Graph_mI10dO000000sPppm108111151157","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->SetMinimum(-1.166623);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->SetMaximum(-0.8583765);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->SetDirectory(0);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->SetLineColor(ci);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm108111151157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-10.000000 ppm108111151157);
   
   
   TF1 *lineFit1158 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1158->SetFillColor(19);
   lineFit1158->SetFillStyle(0);
   lineFit1158->SetLineColor(14);
   lineFit1158->SetLineWidth(2);
   lineFit1158->SetChisquare(1.934092e-25);
   lineFit1158->SetNDF(0);
   lineFit1158->GetXaxis()->SetLabelFont(42);
   lineFit1158->GetXaxis()->SetTitleOffset(1);
   lineFit1158->GetXaxis()->SetTitleFont(42);
   lineFit1158->GetYaxis()->SetLabelFont(42);
   lineFit1158->GetYaxis()->SetTitleFont(42);
   lineFit1158->SetParameter(0,-2.025);
   lineFit1158->SetParError(0,0.1020417);
   lineFit1158->SetParLimits(0,0,0);
   lineFit1158->SetParameter(1,0.05625);
   lineFit1158->SetParError(1,0.005634311);
   lineFit1158->SetParLimits(1,0,0);
   lineFit1158->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1158);
   gre->Draw("p ");
   
   TF1 *lineFit1159 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1159->SetFillColor(19);
   lineFit1159->SetFillStyle(0);
   lineFit1159->SetLineColor(14);
   lineFit1159->SetLineWidth(2);
   lineFit1159->SetChisquare(1.934092e-25);
   lineFit1159->SetNDF(0);
   lineFit1159->GetXaxis()->SetLabelFont(42);
   lineFit1159->GetXaxis()->SetTitleOffset(1);
   lineFit1159->GetXaxis()->SetTitleFont(42);
   lineFit1159->GetYaxis()->SetLabelFont(42);
   lineFit1159->GetYaxis()->SetTitleFont(42);
   lineFit1159->SetParameter(0,-2.025);
   lineFit1159->SetParError(0,0.1020417);
   lineFit1159->SetParLimits(0,0,0);
   lineFit1159->SetParameter(1,0.05625);
   lineFit1159->SetParError(1,0.005634311);
   lineFit1159->SetParLimits(1,0,0);
   lineFit1159->Draw("same");
   
   Double_t 10.000000 ppm_fx1159[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1159[2] = {
   0.125,
   0.1};
   Double_t 10.000000 ppm_fex1159[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1159[2] = {
   0.01593624,
   0.01593624};
   gre = new TGraphErrors(2,10.000000 ppm_fx1159,10.000000 ppm_fy1159,10.000000 ppm_fex1159,10.000000 ppm_fey1159);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(15);
   gre->SetMarkerColor(15);
   
   TH1F *Graph_Graph_Graph_10dO000000sPppm108311171159 = new TH1F("Graph_Graph_Graph_10dO000000sPppm108311171159","Graph",100,15.6,20.4);
   Graph_Graph_Graph_10dO000000sPppm108311171159->SetMinimum(0.07837651);
   Graph_Graph_Graph_10dO000000sPppm108311171159->SetMaximum(0.1466235);
   Graph_Graph_Graph_10dO000000sPppm108311171159->SetDirectory(0);
   Graph_Graph_Graph_10dO000000sPppm108311171159->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_10dO000000sPppm108311171159->SetLineColor(ci);
   Graph_Graph_Graph_10dO000000sPppm108311171159->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm108311171159->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm108311171159->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm108311171159->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm108311171159->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm108311171159->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm108311171159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm108311171159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_10.000000 ppm108311171159);
   
   
   TF1 *lineFit1160 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1160->SetFillColor(19);
   lineFit1160->SetFillStyle(0);
   lineFit1160->SetLineColor(15);
   lineFit1160->SetLineWidth(2);
   lineFit1160->SetChisquare(4.914099e-28);
   lineFit1160->SetNDF(0);
   lineFit1160->GetXaxis()->SetLabelFont(42);
   lineFit1160->GetXaxis()->SetTitleOffset(1);
   lineFit1160->GetXaxis()->SetTitleFont(42);
   lineFit1160->GetYaxis()->SetLabelFont(42);
   lineFit1160->GetYaxis()->SetTitleFont(42);
   lineFit1160->SetParameter(0,0.225);
   lineFit1160->SetParError(0,0.1020417);
   lineFit1160->SetParLimits(0,0,0);
   lineFit1160->SetParameter(1,-0.00625);
   lineFit1160->SetParError(1,0.005634311);
   lineFit1160->SetParLimits(1,0,0);
   lineFit1160->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1160);
   gre->Draw("p ");
   
   TF1 *lineFit1161 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1161->SetFillColor(19);
   lineFit1161->SetFillStyle(0);
   lineFit1161->SetLineColor(15);
   lineFit1161->SetLineWidth(2);
   lineFit1161->SetChisquare(4.914099e-28);
   lineFit1161->SetNDF(0);
   lineFit1161->GetXaxis()->SetLabelFont(42);
   lineFit1161->GetXaxis()->SetTitleOffset(1);
   lineFit1161->GetXaxis()->SetTitleFont(42);
   lineFit1161->GetYaxis()->SetLabelFont(42);
   lineFit1161->GetYaxis()->SetTitleFont(42);
   lineFit1161->SetParameter(0,0.225);
   lineFit1161->SetParError(0,0.1020417);
   lineFit1161->SetParLimits(0,0,0);
   lineFit1161->SetParameter(1,-0.00625);
   lineFit1161->SetParError(1,0.005634311);
   lineFit1161->SetParLimits(1,0,0);
   lineFit1161->Draw("same");
   
   Double_t 30.000000 ppm_fx1161[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1161[2] = {
   1.375,
   1.1};
   Double_t 30.000000 ppm_fex1161[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1161[2] = {
   0.01593624,
   0.01593624};
   gre = new TGraphErrors(2,30.000000 ppm_fx1161,30.000000 ppm_fy1161,30.000000 ppm_fex1161,30.000000 ppm_fey1161);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(16);
   gre->SetMarkerColor(16);
   
   TH1F *Graph_Graph_Graph_30dO000000sPppm108511191161 = new TH1F("Graph_Graph_Graph_30dO000000sPppm108511191161","Graph",100,15.6,20.4);
   Graph_Graph_Graph_30dO000000sPppm108511191161->SetMinimum(1.053377);
   Graph_Graph_Graph_30dO000000sPppm108511191161->SetMaximum(1.421623);
   Graph_Graph_Graph_30dO000000sPppm108511191161->SetDirectory(0);
   Graph_Graph_Graph_30dO000000sPppm108511191161->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_30dO000000sPppm108511191161->SetLineColor(ci);
   Graph_Graph_Graph_30dO000000sPppm108511191161->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm108511191161->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm108511191161->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm108511191161->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm108511191161->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm108511191161->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm108511191161->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm108511191161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_30.000000 ppm108511191161);
   
   
   TF1 *lineFit1162 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1162->SetFillColor(19);
   lineFit1162->SetFillStyle(0);
   lineFit1162->SetLineColor(16);
   lineFit1162->SetLineWidth(2);
   lineFit1162->SetChisquare(4.24384e-25);
   lineFit1162->SetNDF(0);
   lineFit1162->GetXaxis()->SetLabelFont(42);
   lineFit1162->GetXaxis()->SetTitleOffset(1);
   lineFit1162->GetXaxis()->SetTitleFont(42);
   lineFit1162->GetYaxis()->SetLabelFont(42);
   lineFit1162->GetYaxis()->SetTitleFont(42);
   lineFit1162->SetParameter(0,2.475);
   lineFit1162->SetParError(0,0.1020417);
   lineFit1162->SetParLimits(0,0,0);
   lineFit1162->SetParameter(1,-0.06875);
   lineFit1162->SetParError(1,0.005634311);
   lineFit1162->SetParLimits(1,0,0);
   lineFit1162->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1162);
   gre->Draw("p ");
   
   TF1 *lineFit1163 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1163->SetFillColor(19);
   lineFit1163->SetFillStyle(0);
   lineFit1163->SetLineColor(16);
   lineFit1163->SetLineWidth(2);
   lineFit1163->SetChisquare(4.24384e-25);
   lineFit1163->SetNDF(0);
   lineFit1163->GetXaxis()->SetLabelFont(42);
   lineFit1163->GetXaxis()->SetTitleOffset(1);
   lineFit1163->GetXaxis()->SetTitleFont(42);
   lineFit1163->GetYaxis()->SetLabelFont(42);
   lineFit1163->GetYaxis()->SetTitleFont(42);
   lineFit1163->SetParameter(0,2.475);
   lineFit1163->SetParError(0,0.1020417);
   lineFit1163->SetParLimits(0,0,0);
   lineFit1163->SetParameter(1,-0.06875);
   lineFit1163->SetParError(1,0.005634311);
   lineFit1163->SetParLimits(1,0,0);
   lineFit1163->Draw("same");
   
   Double_t -30.000000 ppm_fx1163[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1163[2] = {
   -2.375,
   -1.9};
   Double_t -30.000000 ppm_fex1163[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1163[2] = {
   0.01485547,
   0.01485547};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1163,-30.000000 ppm_fy1163,-30.000000 ppm_fex1163,-30.000000 ppm_fey1163);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(17);
   gre->SetMarkerColor(17);
   
   TH1F *Graph_Graph_mI30dO000000sPppm11211163 = new TH1F("Graph_Graph_mI30dO000000sPppm11211163","Graph",100,15.6,20.4);
   Graph_Graph_mI30dO000000sPppm11211163->SetMinimum(-2.440327);
   Graph_Graph_mI30dO000000sPppm11211163->SetMaximum(-1.834673);
   Graph_Graph_mI30dO000000sPppm11211163->SetDirectory(0);
   Graph_Graph_mI30dO000000sPppm11211163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI30dO000000sPppm11211163->SetLineColor(ci);
   Graph_Graph_mI30dO000000sPppm11211163->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm11211163->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm11211163->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm11211163->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm11211163->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm11211163->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm11211163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm11211163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-30.000000 ppm11211163);
   
   
   TF1 *lineFit1164 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1164->SetFillColor(19);
   lineFit1164->SetFillStyle(0);
   lineFit1164->SetLineColor(17);
   lineFit1164->SetLineWidth(2);
   lineFit1164->SetChisquare(4.021425e-26);
   lineFit1164->SetNDF(0);
   lineFit1164->GetXaxis()->SetLabelFont(42);
   lineFit1164->GetXaxis()->SetTitleOffset(1);
   lineFit1164->GetXaxis()->SetTitleFont(42);
   lineFit1164->GetYaxis()->SetLabelFont(42);
   lineFit1164->GetYaxis()->SetTitleFont(42);
   lineFit1164->SetParameter(0,-4.275);
   lineFit1164->SetParError(0,0.09512144);
   lineFit1164->SetParLimits(0,0,0);
   lineFit1164->SetParameter(1,0.11875);
   lineFit1164->SetParError(1,0.005252203);
   lineFit1164->SetParLimits(1,0,0);
   lineFit1164->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1164);
   gre->Draw("p ");
   
   TF1 *lineFit1165 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1165->SetFillColor(19);
   lineFit1165->SetFillStyle(0);
   lineFit1165->SetLineColor(17);
   lineFit1165->SetLineWidth(2);
   lineFit1165->SetChisquare(4.021425e-26);
   lineFit1165->SetNDF(0);
   lineFit1165->GetXaxis()->SetLabelFont(42);
   lineFit1165->GetXaxis()->SetTitleOffset(1);
   lineFit1165->GetXaxis()->SetTitleFont(42);
   lineFit1165->GetYaxis()->SetLabelFont(42);
   lineFit1165->GetYaxis()->SetTitleFont(42);
   lineFit1165->SetParameter(0,-4.275);
   lineFit1165->SetParError(0,0.09512144);
   lineFit1165->SetParLimits(0,0,0);
   lineFit1165->SetParameter(1,0.11875);
   lineFit1165->SetParError(1,0.005252203);
   lineFit1165->SetParLimits(1,0,0);
   lineFit1165->Draw("same");
   
   Double_t -10.000000 ppm_fx1165[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1165[2] = {
   -1.125,
   -0.9};
   Double_t -10.000000 ppm_fex1165[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1165[2] = {
   0.01485547,
   0.01485547};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1165,-10.000000 ppm_fy1165,-10.000000 ppm_fex1165,-10.000000 ppm_fey1165);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(18);
   gre->SetMarkerColor(18);
   
   TH1F *Graph_Graph_mI10dO000000sPppm11231165 = new TH1F("Graph_Graph_mI10dO000000sPppm11231165","Graph",100,15.6,20.4);
   Graph_Graph_mI10dO000000sPppm11231165->SetMinimum(-1.165327);
   Graph_Graph_mI10dO000000sPppm11231165->SetMaximum(-0.8596734);
   Graph_Graph_mI10dO000000sPppm11231165->SetDirectory(0);
   Graph_Graph_mI10dO000000sPppm11231165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI10dO000000sPppm11231165->SetLineColor(ci);
   Graph_Graph_mI10dO000000sPppm11231165->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm11231165->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm11231165->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm11231165->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm11231165->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm11231165->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm11231165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm11231165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-10.000000 ppm11231165);
   
   
   TF1 *lineFit1166 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1166->SetFillColor(19);
   lineFit1166->SetFillStyle(0);
   lineFit1166->SetLineColor(18);
   lineFit1166->SetLineWidth(2);
   lineFit1166->SetChisquare(3.043437e-25);
   lineFit1166->SetNDF(0);
   lineFit1166->GetXaxis()->SetLabelFont(42);
   lineFit1166->GetXaxis()->SetTitleOffset(1);
   lineFit1166->GetXaxis()->SetTitleFont(42);
   lineFit1166->GetYaxis()->SetLabelFont(42);
   lineFit1166->GetYaxis()->SetTitleFont(42);
   lineFit1166->SetParameter(0,-2.025);
   lineFit1166->SetParError(0,0.09512144);
   lineFit1166->SetParLimits(0,0,0);
   lineFit1166->SetParameter(1,0.05625);
   lineFit1166->SetParError(1,0.005252203);
   lineFit1166->SetParLimits(1,0,0);
   lineFit1166->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1166);
   gre->Draw("p ");
   
   TF1 *lineFit1167 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1167->SetFillColor(19);
   lineFit1167->SetFillStyle(0);
   lineFit1167->SetLineColor(18);
   lineFit1167->SetLineWidth(2);
   lineFit1167->SetChisquare(3.043437e-25);
   lineFit1167->SetNDF(0);
   lineFit1167->GetXaxis()->SetLabelFont(42);
   lineFit1167->GetXaxis()->SetTitleOffset(1);
   lineFit1167->GetXaxis()->SetTitleFont(42);
   lineFit1167->GetYaxis()->SetLabelFont(42);
   lineFit1167->GetYaxis()->SetTitleFont(42);
   lineFit1167->SetParameter(0,-2.025);
   lineFit1167->SetParError(0,0.09512144);
   lineFit1167->SetParLimits(0,0,0);
   lineFit1167->SetParameter(1,0.05625);
   lineFit1167->SetParError(1,0.005252203);
   lineFit1167->SetParLimits(1,0,0);
   lineFit1167->Draw("same");
   
   Double_t 10.000000 ppm_fx1167[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1167[2] = {
   0.125,
   0.1};
   Double_t 10.000000 ppm_fex1167[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1167[2] = {
   0.01485547,
   0.01485547};
   gre = new TGraphErrors(2,10.000000 ppm_fx1167,10.000000 ppm_fy1167,10.000000 ppm_fex1167,10.000000 ppm_fey1167);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(19);
   gre->SetMarkerColor(19);
   
   TH1F *Graph_Graph_10dO000000sPppm11251167 = new TH1F("Graph_Graph_10dO000000sPppm11251167","Graph",100,15.6,20.4);
   Graph_Graph_10dO000000sPppm11251167->SetMinimum(0.07967343);
   Graph_Graph_10dO000000sPppm11251167->SetMaximum(0.1453266);
   Graph_Graph_10dO000000sPppm11251167->SetDirectory(0);
   Graph_Graph_10dO000000sPppm11251167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_10dO000000sPppm11251167->SetLineColor(ci);
   Graph_Graph_10dO000000sPppm11251167->GetXaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm11251167->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm11251167->GetXaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm11251167->GetYaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm11251167->GetYaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm11251167->GetZaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm11251167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm11251167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_10.000000 ppm11251167);
   
   
   TF1 *lineFit1168 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1168->SetFillColor(19);
   lineFit1168->SetFillStyle(0);
   lineFit1168->SetLineColor(19);
   lineFit1168->SetLineWidth(2);
   lineFit1168->SetChisquare(7.138727e-28);
   lineFit1168->SetNDF(0);
   lineFit1168->GetXaxis()->SetLabelFont(42);
   lineFit1168->GetXaxis()->SetTitleOffset(1);
   lineFit1168->GetXaxis()->SetTitleFont(42);
   lineFit1168->GetYaxis()->SetLabelFont(42);
   lineFit1168->GetYaxis()->SetTitleFont(42);
   lineFit1168->SetParameter(0,0.225);
   lineFit1168->SetParError(0,0.09512144);
   lineFit1168->SetParLimits(0,0,0);
   lineFit1168->SetParameter(1,-0.00625);
   lineFit1168->SetParError(1,0.005252203);
   lineFit1168->SetParLimits(1,0,0);
   lineFit1168->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1168);
   gre->Draw("p ");
   
   TF1 *lineFit1169 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1169->SetFillColor(19);
   lineFit1169->SetFillStyle(0);
   lineFit1169->SetLineColor(19);
   lineFit1169->SetLineWidth(2);
   lineFit1169->SetChisquare(7.138727e-28);
   lineFit1169->SetNDF(0);
   lineFit1169->GetXaxis()->SetLabelFont(42);
   lineFit1169->GetXaxis()->SetTitleOffset(1);
   lineFit1169->GetXaxis()->SetTitleFont(42);
   lineFit1169->GetYaxis()->SetLabelFont(42);
   lineFit1169->GetYaxis()->SetTitleFont(42);
   lineFit1169->SetParameter(0,0.225);
   lineFit1169->SetParError(0,0.09512144);
   lineFit1169->SetParLimits(0,0,0);
   lineFit1169->SetParameter(1,-0.00625);
   lineFit1169->SetParError(1,0.005252203);
   lineFit1169->SetParLimits(1,0,0);
   lineFit1169->Draw("same");
   
   Double_t 30.000000 ppm_fx1169[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1169[2] = {
   1.375,
   1.1};
   Double_t 30.000000 ppm_fex1169[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1169[2] = {
   0.01485547,
   0.01485547};
   gre = new TGraphErrors(2,30.000000 ppm_fx1169,30.000000 ppm_fy1169,30.000000 ppm_fex1169,30.000000 ppm_fey1169);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(20);
   gre->SetMarkerColor(20);
   
   TH1F *Graph_Graph_30dO000000sPppm11271169 = new TH1F("Graph_Graph_30dO000000sPppm11271169","Graph",100,15.6,20.4);
   Graph_Graph_30dO000000sPppm11271169->SetMinimum(1.054673);
   Graph_Graph_30dO000000sPppm11271169->SetMaximum(1.420327);
   Graph_Graph_30dO000000sPppm11271169->SetDirectory(0);
   Graph_Graph_30dO000000sPppm11271169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_30dO000000sPppm11271169->SetLineColor(ci);
   Graph_Graph_30dO000000sPppm11271169->GetXaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm11271169->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm11271169->GetXaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm11271169->GetYaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm11271169->GetYaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm11271169->GetZaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm11271169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm11271169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_30.000000 ppm11271169);
   
   
   TF1 *lineFit1170 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1170->SetFillColor(19);
   lineFit1170->SetFillStyle(0);
   lineFit1170->SetLineColor(20);
   lineFit1170->SetLineWidth(2);
   lineFit1170->SetChisquare(1.878899e-25);
   lineFit1170->SetNDF(0);
   lineFit1170->GetXaxis()->SetLabelFont(42);
   lineFit1170->GetXaxis()->SetTitleOffset(1);
   lineFit1170->GetXaxis()->SetTitleFont(42);
   lineFit1170->GetYaxis()->SetLabelFont(42);
   lineFit1170->GetYaxis()->SetTitleFont(42);
   lineFit1170->SetParameter(0,2.475);
   lineFit1170->SetParError(0,0.09512144);
   lineFit1170->SetParLimits(0,0,0);
   lineFit1170->SetParameter(1,-0.06875);
   lineFit1170->SetParError(1,0.005252203);
   lineFit1170->SetParLimits(1,0,0);
   lineFit1170->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1170);
   gre->Draw("p ");
   
   TF1 *lineFit1171 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1171->SetFillColor(19);
   lineFit1171->SetFillStyle(0);
   lineFit1171->SetLineColor(20);
   lineFit1171->SetLineWidth(2);
   lineFit1171->SetChisquare(1.878899e-25);
   lineFit1171->SetNDF(0);
   lineFit1171->GetXaxis()->SetLabelFont(42);
   lineFit1171->GetXaxis()->SetTitleOffset(1);
   lineFit1171->GetXaxis()->SetTitleFont(42);
   lineFit1171->GetYaxis()->SetLabelFont(42);
   lineFit1171->GetYaxis()->SetTitleFont(42);
   lineFit1171->SetParameter(0,2.475);
   lineFit1171->SetParError(0,0.09512144);
   lineFit1171->SetParLimits(0,0,0);
   lineFit1171->SetParameter(1,-0.06875);
   lineFit1171->SetParError(1,0.005252203);
   lineFit1171->SetParLimits(1,0,0);
   lineFit1171->Draw("same");
   
   Double_t -30.000000 ppm_fx1171[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1171[2] = {
   -2.375,
   -1.9};
   Double_t -30.000000 ppm_fex1171[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1171[2] = {
   0.01326341,
   0.01326341};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1171,-30.000000 ppm_fy1171,-30.000000 ppm_fex1171,-30.000000 ppm_fey1171);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(21);
   gre->SetMarkerColor(21);
   
   TH1F *Graph_mI30dO000000sPppm1171 = new TH1F("Graph_mI30dO000000sPppm1171","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1171->SetMinimum(-2.438416);
   Graph_mI30dO000000sPppm1171->SetMaximum(-1.836584);
   Graph_mI30dO000000sPppm1171->SetDirectory(0);
   Graph_mI30dO000000sPppm1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1171->SetLineColor(ci);
   Graph_mI30dO000000sPppm1171->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1171->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1171->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1171->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1171->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1171->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1171->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1171);
   
   
   TF1 *lineFit1172 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1172->SetFillColor(19);
   lineFit1172->SetFillStyle(0);
   lineFit1172->SetLineColor(21);
   lineFit1172->SetLineWidth(2);
   lineFit1172->SetChisquare(2.522391e-25);
   lineFit1172->SetNDF(0);
   lineFit1172->GetXaxis()->SetLabelFont(42);
   lineFit1172->GetXaxis()->SetTitleOffset(1);
   lineFit1172->GetXaxis()->SetTitleFont(42);
   lineFit1172->GetYaxis()->SetLabelFont(42);
   lineFit1172->GetYaxis()->SetTitleFont(42);
   lineFit1172->SetParameter(0,-4.275);
   lineFit1172->SetParError(0,0.08492728);
   lineFit1172->SetParLimits(0,0,0);
   lineFit1172->SetParameter(1,0.11875);
   lineFit1172->SetParError(1,0.004689325);
   lineFit1172->SetParLimits(1,0,0);
   lineFit1172->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1172);
   gre->Draw("p ");
   
   TF1 *lineFit1173 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1173->SetFillColor(19);
   lineFit1173->SetFillStyle(0);
   lineFit1173->SetLineColor(21);
   lineFit1173->SetLineWidth(2);
   lineFit1173->SetChisquare(2.522391e-25);
   lineFit1173->SetNDF(0);
   lineFit1173->GetXaxis()->SetLabelFont(42);
   lineFit1173->GetXaxis()->SetTitleOffset(1);
   lineFit1173->GetXaxis()->SetTitleFont(42);
   lineFit1173->GetYaxis()->SetLabelFont(42);
   lineFit1173->GetYaxis()->SetTitleFont(42);
   lineFit1173->SetParameter(0,-4.275);
   lineFit1173->SetParError(0,0.08492728);
   lineFit1173->SetParLimits(0,0,0);
   lineFit1173->SetParameter(1,0.11875);
   lineFit1173->SetParError(1,0.004689325);
   lineFit1173->SetParLimits(1,0,0);
   lineFit1173->Draw("same");
   
   Double_t -10.000000 ppm_fx1173[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1173[2] = {
   -1.125,
   -0.9};
   Double_t -10.000000 ppm_fex1173[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1173[2] = {
   0.01326341,
   0.01326341};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1173,-10.000000 ppm_fy1173,-10.000000 ppm_fex1173,-10.000000 ppm_fey1173);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(22);
   gre->SetMarkerColor(22);
   
   TH1F *Graph_mI10dO000000sPppm1173 = new TH1F("Graph_mI10dO000000sPppm1173","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1173->SetMinimum(-1.163416);
   Graph_mI10dO000000sPppm1173->SetMaximum(-0.8615839);
   Graph_mI10dO000000sPppm1173->SetDirectory(0);
   Graph_mI10dO000000sPppm1173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1173->SetLineColor(ci);
   Graph_mI10dO000000sPppm1173->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1173->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1173->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1173->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1173->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1173->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1173->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1173);
   
   
   TF1 *lineFit1174 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1174->SetFillColor(19);
   lineFit1174->SetFillStyle(0);
   lineFit1174->SetLineColor(22);
   lineFit1174->SetLineWidth(2);
   lineFit1174->SetChisquare(1.306739e-25);
   lineFit1174->SetNDF(0);
   lineFit1174->GetXaxis()->SetLabelFont(42);
   lineFit1174->GetXaxis()->SetTitleOffset(1);
   lineFit1174->GetXaxis()->SetTitleFont(42);
   lineFit1174->GetYaxis()->SetLabelFont(42);
   lineFit1174->GetYaxis()->SetTitleFont(42);
   lineFit1174->SetParameter(0,-2.025);
   lineFit1174->SetParError(0,0.08492728);
   lineFit1174->SetParLimits(0,0,0);
   lineFit1174->SetParameter(1,0.05625);
   lineFit1174->SetParError(1,0.004689325);
   lineFit1174->SetParLimits(1,0,0);
   lineFit1174->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1174);
   gre->Draw("p ");
   
   TF1 *lineFit1175 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1175->SetFillColor(19);
   lineFit1175->SetFillStyle(0);
   lineFit1175->SetLineColor(22);
   lineFit1175->SetLineWidth(2);
   lineFit1175->SetChisquare(1.306739e-25);
   lineFit1175->SetNDF(0);
   lineFit1175->GetXaxis()->SetLabelFont(42);
   lineFit1175->GetXaxis()->SetTitleOffset(1);
   lineFit1175->GetXaxis()->SetTitleFont(42);
   lineFit1175->GetYaxis()->SetLabelFont(42);
   lineFit1175->GetYaxis()->SetTitleFont(42);
   lineFit1175->SetParameter(0,-2.025);
   lineFit1175->SetParError(0,0.08492728);
   lineFit1175->SetParLimits(0,0,0);
   lineFit1175->SetParameter(1,0.05625);
   lineFit1175->SetParError(1,0.004689325);
   lineFit1175->SetParLimits(1,0,0);
   lineFit1175->Draw("same");
   
   Double_t 10.000000 ppm_fx1175[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1175[2] = {
   0.125,
   0.1};
   Double_t 10.000000 ppm_fex1175[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1175[2] = {
   0.01326341,
   0.01326341};
   gre = new TGraphErrors(2,10.000000 ppm_fx1175,10.000000 ppm_fy1175,10.000000 ppm_fex1175,10.000000 ppm_fey1175);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(23);
   gre->SetMarkerColor(23);
   
   TH1F *Graph_10dO000000sPppm1175 = new TH1F("Graph_10dO000000sPppm1175","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1175->SetMinimum(0.0815839);
   Graph_10dO000000sPppm1175->SetMaximum(0.1434161);
   Graph_10dO000000sPppm1175->SetDirectory(0);
   Graph_10dO000000sPppm1175->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1175->SetLineColor(ci);
   Graph_10dO000000sPppm1175->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1175->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1175->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1175->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1175->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1175->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1175->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1175);
   
   
   TF1 *lineFit1176 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1176->SetFillColor(19);
   lineFit1176->SetFillStyle(0);
   lineFit1176->SetLineColor(23);
   lineFit1176->SetLineWidth(2);
   lineFit1176->SetChisquare(1.795452e-28);
   lineFit1176->SetNDF(0);
   lineFit1176->GetXaxis()->SetLabelFont(42);
   lineFit1176->GetXaxis()->SetTitleOffset(1);
   lineFit1176->GetXaxis()->SetTitleFont(42);
   lineFit1176->GetYaxis()->SetLabelFont(42);
   lineFit1176->GetYaxis()->SetTitleFont(42);
   lineFit1176->SetParameter(0,0.225);
   lineFit1176->SetParError(0,0.08492728);
   lineFit1176->SetParLimits(0,0,0);
   lineFit1176->SetParameter(1,-0.00625);
   lineFit1176->SetParError(1,0.004689325);
   lineFit1176->SetParLimits(1,0,0);
   lineFit1176->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1176);
   gre->Draw("p ");
   
   TF1 *lineFit1177 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1177->SetFillColor(19);
   lineFit1177->SetFillStyle(0);
   lineFit1177->SetLineColor(23);
   lineFit1177->SetLineWidth(2);
   lineFit1177->SetChisquare(1.795452e-28);
   lineFit1177->SetNDF(0);
   lineFit1177->GetXaxis()->SetLabelFont(42);
   lineFit1177->GetXaxis()->SetTitleOffset(1);
   lineFit1177->GetXaxis()->SetTitleFont(42);
   lineFit1177->GetYaxis()->SetLabelFont(42);
   lineFit1177->GetYaxis()->SetTitleFont(42);
   lineFit1177->SetParameter(0,0.225);
   lineFit1177->SetParError(0,0.08492728);
   lineFit1177->SetParLimits(0,0,0);
   lineFit1177->SetParameter(1,-0.00625);
   lineFit1177->SetParError(1,0.004689325);
   lineFit1177->SetParLimits(1,0,0);
   lineFit1177->Draw("same");
   
   Double_t 30.000000 ppm_fx1177[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1177[2] = {
   1.375,
   1.1};
   Double_t 30.000000 ppm_fex1177[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1177[2] = {
   0.01326341,
   0.01326341};
   gre = new TGraphErrors(2,30.000000 ppm_fx1177,30.000000 ppm_fy1177,30.000000 ppm_fex1177,30.000000 ppm_fey1177);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(24);
   gre->SetMarkerColor(24);
   
   TH1F *Graph_30dO000000sPppm1177 = new TH1F("Graph_30dO000000sPppm1177","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1177->SetMinimum(1.056584);
   Graph_30dO000000sPppm1177->SetMaximum(1.418416);
   Graph_30dO000000sPppm1177->SetDirectory(0);
   Graph_30dO000000sPppm1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1177->SetLineColor(ci);
   Graph_30dO000000sPppm1177->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1177->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1177->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1177->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1177->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1177->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1177->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1177);
   
   
   TF1 *lineFit1178 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1178->SetFillColor(19);
   lineFit1178->SetFillStyle(0);
   lineFit1178->SetLineColor(24);
   lineFit1178->SetLineWidth(2);
   lineFit1178->SetChisquare(1.953452e-25);
   lineFit1178->SetNDF(0);
   lineFit1178->GetXaxis()->SetLabelFont(42);
   lineFit1178->GetXaxis()->SetTitleOffset(1);
   lineFit1178->GetXaxis()->SetTitleFont(42);
   lineFit1178->GetYaxis()->SetLabelFont(42);
   lineFit1178->GetYaxis()->SetTitleFont(42);
   lineFit1178->SetParameter(0,2.475);
   lineFit1178->SetParError(0,0.08492728);
   lineFit1178->SetParLimits(0,0,0);
   lineFit1178->SetParameter(1,-0.06875);
   lineFit1178->SetParError(1,0.004689325);
   lineFit1178->SetParLimits(1,0,0);
   lineFit1178->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1178);
   gre->Draw("p ");
   
   TF1 *lineFit1179 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1179->SetFillColor(19);
   lineFit1179->SetFillStyle(0);
   lineFit1179->SetLineColor(24);
   lineFit1179->SetLineWidth(2);
   lineFit1179->SetChisquare(1.953452e-25);
   lineFit1179->SetNDF(0);
   lineFit1179->GetXaxis()->SetLabelFont(42);
   lineFit1179->GetXaxis()->SetTitleOffset(1);
   lineFit1179->GetXaxis()->SetTitleFont(42);
   lineFit1179->GetYaxis()->SetLabelFont(42);
   lineFit1179->GetYaxis()->SetTitleFont(42);
   lineFit1179->SetParameter(0,2.475);
   lineFit1179->SetParError(0,0.08492728);
   lineFit1179->SetParLimits(0,0,0);
   lineFit1179->SetParameter(1,-0.06875);
   lineFit1179->SetParError(1,0.004689325);
   lineFit1179->SetParLimits(1,0,0);
   lineFit1179->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","1.14e-286 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(24);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(24);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","2.23e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(23);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(23);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","6.71e-315 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(22);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(22);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.7e-300 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(21);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(21);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","8.85e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(20);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(20);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","#minus2.55e+198 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(19);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(19);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","#minus3.11e+231 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(18);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(18);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","4.45e-307 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(17);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(17);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","1.47e-285 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(16);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(16);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","6.36e-272 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(15);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(15);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","1.94e-77 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(14);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(14);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.89e-307 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(13);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(13);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","2.06e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(12);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","1.78e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(11);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(11);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","#minus4.52e#minus87 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(10);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(10);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","2.21e-236 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(9);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","2.46e-299 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","3.04e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","   16 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
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
