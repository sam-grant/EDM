void Scans_NSUBRUN_75()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct  5 20:04:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.625,21.77143,2.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1029[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1029[2] = {
   -2.329389,
   -1.854389};
   Double_t -30.000000 ppm_fex1029[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1029[2] = {
   0.0456595,
   0.0456595};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1029,-30.000000 ppm_fy1029,-30.000000 ppm_fex1029,-30.000000 ppm_fey1029);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph_mI30dO000000sPppm100110111029 = new TH1F("Graph_Graph_Graph_mI30dO000000sPppm100110111029","",100,15.6,20.4);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->SetMinimum(-3);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->SetMaximum(2);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->SetDirectory(0);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->SetLineColor(ci);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetXaxis()->SetTitle("QHV [kV]");
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm100110111029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-30.000000 ppm100110111029);
   
   
   TF1 *lineFit1030 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1030->SetFillColor(19);
   lineFit1030->SetFillStyle(0);
   lineFit1030->SetLineWidth(2);
   lineFit1030->SetChisquare(2.84974e-26);
   lineFit1030->SetNDF(0);
   lineFit1030->GetXaxis()->SetLabelFont(42);
   lineFit1030->GetXaxis()->SetTitleOffset(1);
   lineFit1030->GetXaxis()->SetTitleFont(42);
   lineFit1030->GetYaxis()->SetLabelFont(42);
   lineFit1030->GetYaxis()->SetTitleFont(42);
   lineFit1030->SetParameter(0,-4.229389);
   lineFit1030->SetParError(0,0.2923635);
   lineFit1030->SetParLimits(0,0,0);
   lineFit1030->SetParameter(1,0.11875);
   lineFit1030->SetParError(1,0.01614307);
   lineFit1030->SetParLimits(1,0,0);
   lineFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1030);
   gre->Draw("ap");
   
   TF1 *lineFit1031 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1031->SetFillColor(19);
   lineFit1031->SetFillStyle(0);
   lineFit1031->SetLineWidth(2);
   lineFit1031->SetChisquare(2.84974e-26);
   lineFit1031->SetNDF(0);
   lineFit1031->GetXaxis()->SetLabelFont(42);
   lineFit1031->GetXaxis()->SetTitleOffset(1);
   lineFit1031->GetXaxis()->SetTitleFont(42);
   lineFit1031->GetYaxis()->SetLabelFont(42);
   lineFit1031->GetYaxis()->SetTitleFont(42);
   lineFit1031->SetParameter(0,-4.229389);
   lineFit1031->SetParError(0,0.2923635);
   lineFit1031->SetParLimits(0,0,0);
   lineFit1031->SetParameter(1,0.11875);
   lineFit1031->SetParError(1,0.01614307);
   lineFit1031->SetParLimits(1,0,0);
   lineFit1031->Draw("same");
   
   Double_t -10.000000 ppm_fx1031[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1031[2] = {
   -1.079389,
   -0.8543892};
   Double_t -10.000000 ppm_fex1031[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1031[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1031,-10.000000 ppm_fy1031,-10.000000 ppm_fex1031,-10.000000 ppm_fey1031);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph_Graph_mI10dO000000sPppm100310131031 = new TH1F("Graph_Graph_Graph_mI10dO000000sPppm100310131031","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->SetMinimum(-1.156681);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->SetMaximum(-0.7770978);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->SetDirectory(0);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->SetLineColor(ci);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm100310131031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-10.000000 ppm100310131031);
   
   
   TF1 *lineFit1032 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1032->SetFillColor(19);
   lineFit1032->SetFillStyle(0);
   lineFit1032->SetLineColor(2);
   lineFit1032->SetLineWidth(2);
   lineFit1032->SetChisquare(1.146991e-26);
   lineFit1032->SetNDF(0);
   lineFit1032->GetXaxis()->SetLabelFont(42);
   lineFit1032->GetXaxis()->SetTitleOffset(1);
   lineFit1032->GetXaxis()->SetTitleFont(42);
   lineFit1032->GetYaxis()->SetLabelFont(42);
   lineFit1032->GetYaxis()->SetTitleFont(42);
   lineFit1032->SetParameter(0,-1.979389);
   lineFit1032->SetParError(0,0.2923635);
   lineFit1032->SetParLimits(0,0,0);
   lineFit1032->SetParameter(1,0.05625);
   lineFit1032->SetParError(1,0.01614307);
   lineFit1032->SetParLimits(1,0,0);
   lineFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1032);
   gre->Draw("p ");
   
   TF1 *lineFit1033 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1033->SetFillColor(19);
   lineFit1033->SetFillStyle(0);
   lineFit1033->SetLineColor(2);
   lineFit1033->SetLineWidth(2);
   lineFit1033->SetChisquare(1.146991e-26);
   lineFit1033->SetNDF(0);
   lineFit1033->GetXaxis()->SetLabelFont(42);
   lineFit1033->GetXaxis()->SetTitleOffset(1);
   lineFit1033->GetXaxis()->SetTitleFont(42);
   lineFit1033->GetYaxis()->SetLabelFont(42);
   lineFit1033->GetYaxis()->SetTitleFont(42);
   lineFit1033->SetParameter(0,-1.979389);
   lineFit1033->SetParError(0,0.2923635);
   lineFit1033->SetParLimits(0,0,0);
   lineFit1033->SetParameter(1,0.05625);
   lineFit1033->SetParError(1,0.01614307);
   lineFit1033->SetParLimits(1,0,0);
   lineFit1033->Draw("same");
   
   Double_t 10.000000 ppm_fx1033[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1033[2] = {
   0.1706108,
   0.1456108};
   Double_t 10.000000 ppm_fex1033[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1033[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,10.000000 ppm_fx1033,10.000000 ppm_fy1033,10.000000 ppm_fex1033,10.000000 ppm_fey1033);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph_Graph_10dO000000sPppm100510151033 = new TH1F("Graph_Graph_Graph_10dO000000sPppm100510151033","Graph",100,15.6,20.4);
   Graph_Graph_Graph_10dO000000sPppm100510151033->SetMinimum(0.08831937);
   Graph_Graph_Graph_10dO000000sPppm100510151033->SetMaximum(0.2279022);
   Graph_Graph_Graph_10dO000000sPppm100510151033->SetDirectory(0);
   Graph_Graph_Graph_10dO000000sPppm100510151033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_10dO000000sPppm100510151033->SetLineColor(ci);
   Graph_Graph_Graph_10dO000000sPppm100510151033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm100510151033->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm100510151033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm100510151033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm100510151033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm100510151033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm100510151033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm100510151033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_10.000000 ppm100510151033);
   
   
   TF1 *lineFit1034 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1034->SetFillColor(19);
   lineFit1034->SetFillStyle(0);
   lineFit1034->SetLineColor(3);
   lineFit1034->SetLineWidth(2);
   lineFit1034->SetChisquare(1.348749e-28);
   lineFit1034->SetNDF(0);
   lineFit1034->GetXaxis()->SetLabelFont(42);
   lineFit1034->GetXaxis()->SetTitleOffset(1);
   lineFit1034->GetXaxis()->SetTitleFont(42);
   lineFit1034->GetYaxis()->SetLabelFont(42);
   lineFit1034->GetYaxis()->SetTitleFont(42);
   lineFit1034->SetParameter(0,0.2706108);
   lineFit1034->SetParError(0,0.2923635);
   lineFit1034->SetParLimits(0,0,0);
   lineFit1034->SetParameter(1,-0.00625);
   lineFit1034->SetParError(1,0.01614307);
   lineFit1034->SetParLimits(1,0,0);
   lineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1034);
   gre->Draw("p ");
   
   TF1 *lineFit1035 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1035->SetFillColor(19);
   lineFit1035->SetFillStyle(0);
   lineFit1035->SetLineColor(3);
   lineFit1035->SetLineWidth(2);
   lineFit1035->SetChisquare(1.348749e-28);
   lineFit1035->SetNDF(0);
   lineFit1035->GetXaxis()->SetLabelFont(42);
   lineFit1035->GetXaxis()->SetTitleOffset(1);
   lineFit1035->GetXaxis()->SetTitleFont(42);
   lineFit1035->GetYaxis()->SetLabelFont(42);
   lineFit1035->GetYaxis()->SetTitleFont(42);
   lineFit1035->SetParameter(0,0.2706108);
   lineFit1035->SetParError(0,0.2923635);
   lineFit1035->SetParLimits(0,0,0);
   lineFit1035->SetParameter(1,-0.00625);
   lineFit1035->SetParError(1,0.01614307);
   lineFit1035->SetParLimits(1,0,0);
   lineFit1035->Draw("same");
   
   Double_t 30.000000 ppm_fx1035[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1035[2] = {
   1.420611,
   1.145611};
   Double_t 30.000000 ppm_fex1035[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1035[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,30.000000 ppm_fx1035,30.000000 ppm_fy1035,30.000000 ppm_fex1035,30.000000 ppm_fey1035);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph_Graph_30dO000000sPppm100710171035 = new TH1F("Graph_Graph_Graph_30dO000000sPppm100710171035","Graph",100,15.6,20.4);
   Graph_Graph_Graph_30dO000000sPppm100710171035->SetMinimum(1.063319);
   Graph_Graph_Graph_30dO000000sPppm100710171035->SetMaximum(1.502902);
   Graph_Graph_Graph_30dO000000sPppm100710171035->SetDirectory(0);
   Graph_Graph_Graph_30dO000000sPppm100710171035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_30dO000000sPppm100710171035->SetLineColor(ci);
   Graph_Graph_Graph_30dO000000sPppm100710171035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm100710171035->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm100710171035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm100710171035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm100710171035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm100710171035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm100710171035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm100710171035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_30.000000 ppm100710171035);
   
   
   TF1 *lineFit1036 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1036->SetFillColor(19);
   lineFit1036->SetFillStyle(0);
   lineFit1036->SetLineColor(4);
   lineFit1036->SetLineWidth(2);
   lineFit1036->SetChisquare(3.490636e-26);
   lineFit1036->SetNDF(0);
   lineFit1036->GetXaxis()->SetLabelFont(42);
   lineFit1036->GetXaxis()->SetTitleOffset(1);
   lineFit1036->GetXaxis()->SetTitleFont(42);
   lineFit1036->GetYaxis()->SetLabelFont(42);
   lineFit1036->GetYaxis()->SetTitleFont(42);
   lineFit1036->SetParameter(0,2.520611);
   lineFit1036->SetParError(0,0.2923635);
   lineFit1036->SetParLimits(0,0,0);
   lineFit1036->SetParameter(1,-0.06875);
   lineFit1036->SetParError(1,0.01614307);
   lineFit1036->SetParLimits(1,0,0);
   lineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1036);
   gre->Draw("p ");
   
   TF1 *lineFit1037 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1037->SetFillColor(19);
   lineFit1037->SetFillStyle(0);
   lineFit1037->SetLineColor(4);
   lineFit1037->SetLineWidth(2);
   lineFit1037->SetChisquare(3.490636e-26);
   lineFit1037->SetNDF(0);
   lineFit1037->GetXaxis()->SetLabelFont(42);
   lineFit1037->GetXaxis()->SetTitleOffset(1);
   lineFit1037->GetXaxis()->SetTitleFont(42);
   lineFit1037->GetYaxis()->SetLabelFont(42);
   lineFit1037->GetYaxis()->SetTitleFont(42);
   lineFit1037->SetParameter(0,2.520611);
   lineFit1037->SetParError(0,0.2923635);
   lineFit1037->SetParLimits(0,0,0);
   lineFit1037->SetParameter(1,-0.06875);
   lineFit1037->SetParError(1,0.01614307);
   lineFit1037->SetParLimits(1,0,0);
   lineFit1037->Draw("same");
   
   Double_t -30.000000 ppm_fx1037[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1037[2] = {
   -2.350281,
   -1.875281};
   Double_t -30.000000 ppm_fex1037[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1037[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1037,-30.000000 ppm_fy1037,-30.000000 ppm_fex1037,-30.000000 ppm_fey1037);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_Graph_mI30dO000000sPppm10191037 = new TH1F("Graph_Graph_mI30dO000000sPppm10191037","Graph",100,15.6,20.4);
   Graph_Graph_mI30dO000000sPppm10191037->SetMinimum(-2.427475);
   Graph_Graph_mI30dO000000sPppm10191037->SetMaximum(-1.798087);
   Graph_Graph_mI30dO000000sPppm10191037->SetDirectory(0);
   Graph_Graph_mI30dO000000sPppm10191037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI30dO000000sPppm10191037->SetLineColor(ci);
   Graph_Graph_mI30dO000000sPppm10191037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10191037->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm10191037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm10191037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10191037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm10191037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10191037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm10191037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-30.000000 ppm10191037);
   
   
   TF1 *lineFit1038 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1038->SetFillColor(19);
   lineFit1038->SetFillStyle(0);
   lineFit1038->SetLineColor(5);
   lineFit1038->SetLineWidth(2);
   lineFit1038->SetChisquare(3.969524e-26);
   lineFit1038->SetNDF(0);
   lineFit1038->GetXaxis()->SetLabelFont(42);
   lineFit1038->GetXaxis()->SetTitleOffset(1);
   lineFit1038->GetXaxis()->SetTitleFont(42);
   lineFit1038->GetYaxis()->SetLabelFont(42);
   lineFit1038->GetYaxis()->SetTitleFont(42);
   lineFit1038->SetParameter(0,-4.250281);
   lineFit1038->SetParError(0,0.1584479);
   lineFit1038->SetParLimits(0,0,0);
   lineFit1038->SetParameter(1,0.11875);
   lineFit1038->SetParError(1,0.00874882);
   lineFit1038->SetParLimits(1,0,0);
   lineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1038);
   gre->Draw("p ");
   
   TF1 *lineFit1039 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1039->SetFillColor(19);
   lineFit1039->SetFillStyle(0);
   lineFit1039->SetLineColor(5);
   lineFit1039->SetLineWidth(2);
   lineFit1039->SetChisquare(3.969524e-26);
   lineFit1039->SetNDF(0);
   lineFit1039->GetXaxis()->SetLabelFont(42);
   lineFit1039->GetXaxis()->SetTitleOffset(1);
   lineFit1039->GetXaxis()->SetTitleFont(42);
   lineFit1039->GetYaxis()->SetLabelFont(42);
   lineFit1039->GetYaxis()->SetTitleFont(42);
   lineFit1039->SetParameter(0,-4.250281);
   lineFit1039->SetParError(0,0.1584479);
   lineFit1039->SetParLimits(0,0,0);
   lineFit1039->SetParameter(1,0.11875);
   lineFit1039->SetParError(1,0.00874882);
   lineFit1039->SetParLimits(1,0,0);
   lineFit1039->Draw("same");
   
   Double_t -10.000000 ppm_fx1039[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1039[2] = {
   -1.100281,
   -0.875281};
   Double_t -10.000000 ppm_fex1039[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1039[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1039,-10.000000 ppm_fy1039,-10.000000 ppm_fex1039,-10.000000 ppm_fey1039);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_Graph_mI10dO000000sPppm10211039 = new TH1F("Graph_Graph_mI10dO000000sPppm10211039","Graph",100,15.6,20.4);
   Graph_Graph_mI10dO000000sPppm10211039->SetMinimum(-1.152475);
   Graph_Graph_mI10dO000000sPppm10211039->SetMaximum(-0.8230865);
   Graph_Graph_mI10dO000000sPppm10211039->SetDirectory(0);
   Graph_Graph_mI10dO000000sPppm10211039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI10dO000000sPppm10211039->SetLineColor(ci);
   Graph_Graph_mI10dO000000sPppm10211039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10211039->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm10211039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm10211039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10211039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm10211039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10211039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm10211039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-10.000000 ppm10211039);
   
   
   TF1 *lineFit1040 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1040->SetFillColor(19);
   lineFit1040->SetFillStyle(0);
   lineFit1040->SetLineColor(6);
   lineFit1040->SetLineWidth(2);
   lineFit1040->SetChisquare(2.165927e-26);
   lineFit1040->SetNDF(0);
   lineFit1040->GetXaxis()->SetLabelFont(42);
   lineFit1040->GetXaxis()->SetTitleOffset(1);
   lineFit1040->GetXaxis()->SetTitleFont(42);
   lineFit1040->GetYaxis()->SetLabelFont(42);
   lineFit1040->GetYaxis()->SetTitleFont(42);
   lineFit1040->SetParameter(0,-2.000281);
   lineFit1040->SetParError(0,0.1584479);
   lineFit1040->SetParLimits(0,0,0);
   lineFit1040->SetParameter(1,0.05625);
   lineFit1040->SetParError(1,0.00874882);
   lineFit1040->SetParLimits(1,0,0);
   lineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1040);
   gre->Draw("p ");
   
   TF1 *lineFit1041 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1041->SetFillColor(19);
   lineFit1041->SetFillStyle(0);
   lineFit1041->SetLineColor(6);
   lineFit1041->SetLineWidth(2);
   lineFit1041->SetChisquare(2.165927e-26);
   lineFit1041->SetNDF(0);
   lineFit1041->GetXaxis()->SetLabelFont(42);
   lineFit1041->GetXaxis()->SetTitleOffset(1);
   lineFit1041->GetXaxis()->SetTitleFont(42);
   lineFit1041->GetYaxis()->SetLabelFont(42);
   lineFit1041->GetYaxis()->SetTitleFont(42);
   lineFit1041->SetParameter(0,-2.000281);
   lineFit1041->SetParError(0,0.1584479);
   lineFit1041->SetParLimits(0,0,0);
   lineFit1041->SetParameter(1,0.05625);
   lineFit1041->SetParError(1,0.00874882);
   lineFit1041->SetParLimits(1,0,0);
   lineFit1041->Draw("same");
   
   Double_t 10.000000 ppm_fx1041[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1041[2] = {
   0.149719,
   0.124719};
   Double_t 10.000000 ppm_fex1041[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1041[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,10.000000 ppm_fx1041,10.000000 ppm_fy1041,10.000000 ppm_fex1041,10.000000 ppm_fey1041);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_Graph_10dO000000sPppm10231041 = new TH1F("Graph_Graph_10dO000000sPppm10231041","Graph",100,15.6,20.4);
   Graph_Graph_10dO000000sPppm10231041->SetMinimum(0.09252451);
   Graph_Graph_10dO000000sPppm10231041->SetMaximum(0.1819135);
   Graph_Graph_10dO000000sPppm10231041->SetDirectory(0);
   Graph_Graph_10dO000000sPppm10231041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_10dO000000sPppm10231041->SetLineColor(ci);
   Graph_Graph_10dO000000sPppm10231041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10231041->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm10231041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm10231041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10231041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm10231041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10231041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm10231041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_10.000000 ppm10231041);
   
   
   TF1 *lineFit1042 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1042->SetFillColor(19);
   lineFit1042->SetFillStyle(0);
   lineFit1042->SetLineColor(7);
   lineFit1042->SetLineWidth(2);
   lineFit1042->SetChisquare(1.258089e-29);
   lineFit1042->SetNDF(0);
   lineFit1042->GetXaxis()->SetLabelFont(42);
   lineFit1042->GetXaxis()->SetTitleOffset(1);
   lineFit1042->GetXaxis()->SetTitleFont(42);
   lineFit1042->GetYaxis()->SetLabelFont(42);
   lineFit1042->GetYaxis()->SetTitleFont(42);
   lineFit1042->SetParameter(0,0.249719);
   lineFit1042->SetParError(0,0.1584479);
   lineFit1042->SetParLimits(0,0,0);
   lineFit1042->SetParameter(1,-0.00625);
   lineFit1042->SetParError(1,0.00874882);
   lineFit1042->SetParLimits(1,0,0);
   lineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1042);
   gre->Draw("p ");
   
   TF1 *lineFit1043 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1043->SetFillColor(19);
   lineFit1043->SetFillStyle(0);
   lineFit1043->SetLineColor(7);
   lineFit1043->SetLineWidth(2);
   lineFit1043->SetChisquare(1.258089e-29);
   lineFit1043->SetNDF(0);
   lineFit1043->GetXaxis()->SetLabelFont(42);
   lineFit1043->GetXaxis()->SetTitleOffset(1);
   lineFit1043->GetXaxis()->SetTitleFont(42);
   lineFit1043->GetYaxis()->SetLabelFont(42);
   lineFit1043->GetYaxis()->SetTitleFont(42);
   lineFit1043->SetParameter(0,0.249719);
   lineFit1043->SetParError(0,0.1584479);
   lineFit1043->SetParLimits(0,0,0);
   lineFit1043->SetParameter(1,-0.00625);
   lineFit1043->SetParError(1,0.00874882);
   lineFit1043->SetParLimits(1,0,0);
   lineFit1043->Draw("same");
   
   Double_t 30.000000 ppm_fx1043[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1043[2] = {
   1.399719,
   1.124719};
   Double_t 30.000000 ppm_fex1043[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1043[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,30.000000 ppm_fx1043,30.000000 ppm_fy1043,30.000000 ppm_fex1043,30.000000 ppm_fey1043);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_Graph_30dO000000sPppm10251043 = new TH1F("Graph_Graph_30dO000000sPppm10251043","Graph",100,15.6,20.4);
   Graph_Graph_30dO000000sPppm10251043->SetMinimum(1.067525);
   Graph_Graph_30dO000000sPppm10251043->SetMaximum(1.456913);
   Graph_Graph_30dO000000sPppm10251043->SetDirectory(0);
   Graph_Graph_30dO000000sPppm10251043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_30dO000000sPppm10251043->SetLineColor(ci);
   Graph_Graph_30dO000000sPppm10251043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10251043->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm10251043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm10251043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10251043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm10251043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10251043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm10251043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_30.000000 ppm10251043);
   
   
   TF1 *lineFit1044 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1044->SetFillColor(19);
   lineFit1044->SetFillStyle(0);
   lineFit1044->SetLineColor(8);
   lineFit1044->SetLineWidth(2);
   lineFit1044->SetChisquare(3.172398e-26);
   lineFit1044->SetNDF(0);
   lineFit1044->GetXaxis()->SetLabelFont(42);
   lineFit1044->GetXaxis()->SetTitleOffset(1);
   lineFit1044->GetXaxis()->SetTitleFont(42);
   lineFit1044->GetYaxis()->SetLabelFont(42);
   lineFit1044->GetYaxis()->SetTitleFont(42);
   lineFit1044->SetParameter(0,2.499719);
   lineFit1044->SetParError(0,0.1584479);
   lineFit1044->SetParLimits(0,0,0);
   lineFit1044->SetParameter(1,-0.06875);
   lineFit1044->SetParError(1,0.00874882);
   lineFit1044->SetParLimits(1,0,0);
   lineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1044);
   gre->Draw("p ");
   
   TF1 *lineFit1045 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1045->SetFillColor(19);
   lineFit1045->SetFillStyle(0);
   lineFit1045->SetLineColor(8);
   lineFit1045->SetLineWidth(2);
   lineFit1045->SetChisquare(3.172398e-26);
   lineFit1045->SetNDF(0);
   lineFit1045->GetXaxis()->SetLabelFont(42);
   lineFit1045->GetXaxis()->SetTitleOffset(1);
   lineFit1045->GetXaxis()->SetTitleFont(42);
   lineFit1045->GetYaxis()->SetLabelFont(42);
   lineFit1045->GetYaxis()->SetTitleFont(42);
   lineFit1045->SetParameter(0,2.499719);
   lineFit1045->SetParError(0,0.1584479);
   lineFit1045->SetParLimits(0,0,0);
   lineFit1045->SetParameter(1,-0.06875);
   lineFit1045->SetParError(1,0.00874882);
   lineFit1045->SetParLimits(1,0,0);
   lineFit1045->Draw("same");
   
   Double_t -30.000000 ppm_fx1045[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1045[2] = {
   -2.356066,
   -1.881066};
   Double_t -30.000000 ppm_fex1045[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1045[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1045,-30.000000 ppm_fy1045,-30.000000 ppm_fex1045,-30.000000 ppm_fey1045);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_mI30dO000000sPppm1045 = new TH1F("Graph_mI30dO000000sPppm1045","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1045->SetMinimum(-2.426311);
   Graph_mI30dO000000sPppm1045->SetMaximum(-1.810821);
   Graph_mI30dO000000sPppm1045->SetDirectory(0);
   Graph_mI30dO000000sPppm1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1045->SetLineColor(ci);
   Graph_mI30dO000000sPppm1045->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1045->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1045->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1045->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1045->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1045->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1045->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1045);
   
   
   TF1 *lineFit1046 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1046->SetFillColor(19);
   lineFit1046->SetFillStyle(0);
   lineFit1046->SetLineColor(9);
   lineFit1046->SetLineWidth(2);
   lineFit1046->SetChisquare(2.932805e-25);
   lineFit1046->SetNDF(0);
   lineFit1046->GetXaxis()->SetLabelFont(42);
   lineFit1046->GetXaxis()->SetTitleOffset(1);
   lineFit1046->GetXaxis()->SetTitleFont(42);
   lineFit1046->GetYaxis()->SetLabelFont(42);
   lineFit1046->GetYaxis()->SetTitleFont(42);
   lineFit1046->SetParameter(0,-4.256066);
   lineFit1046->SetParError(0,0.1213648);
   lineFit1046->SetParLimits(0,0,0);
   lineFit1046->SetParameter(1,0.11875);
   lineFit1046->SetParError(1,0.006701251);
   lineFit1046->SetParLimits(1,0,0);
   lineFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1046);
   gre->Draw("p ");
   
   TF1 *lineFit1047 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1047->SetFillColor(19);
   lineFit1047->SetFillStyle(0);
   lineFit1047->SetLineColor(9);
   lineFit1047->SetLineWidth(2);
   lineFit1047->SetChisquare(2.932805e-25);
   lineFit1047->SetNDF(0);
   lineFit1047->GetXaxis()->SetLabelFont(42);
   lineFit1047->GetXaxis()->SetTitleOffset(1);
   lineFit1047->GetXaxis()->SetTitleFont(42);
   lineFit1047->GetYaxis()->SetLabelFont(42);
   lineFit1047->GetYaxis()->SetTitleFont(42);
   lineFit1047->SetParameter(0,-4.256066);
   lineFit1047->SetParError(0,0.1213648);
   lineFit1047->SetParLimits(0,0,0);
   lineFit1047->SetParameter(1,0.11875);
   lineFit1047->SetParError(1,0.006701251);
   lineFit1047->SetParLimits(1,0,0);
   lineFit1047->Draw("same");
   
   Double_t -10.000000 ppm_fx1047[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1047[2] = {
   -1.106066,
   -0.8810662};
   Double_t -10.000000 ppm_fex1047[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1047[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1047,-10.000000 ppm_fy1047,-10.000000 ppm_fex1047,-10.000000 ppm_fey1047);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_mI10dO000000sPppm1047 = new TH1F("Graph_mI10dO000000sPppm1047","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1047->SetMinimum(-1.151311);
   Graph_mI10dO000000sPppm1047->SetMaximum(-0.8358214);
   Graph_mI10dO000000sPppm1047->SetDirectory(0);
   Graph_mI10dO000000sPppm1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1047->SetLineColor(ci);
   Graph_mI10dO000000sPppm1047->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1047->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1047->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1047->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1047->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1047->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1047->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1047);
   
   
   TF1 *lineFit1048 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1048->SetFillColor(19);
   lineFit1048->SetFillStyle(0);
   lineFit1048->SetLineColor(10);
   lineFit1048->SetLineWidth(2);
   lineFit1048->SetChisquare(1.210794e-25);
   lineFit1048->SetNDF(0);
   lineFit1048->GetXaxis()->SetLabelFont(42);
   lineFit1048->GetXaxis()->SetTitleOffset(1);
   lineFit1048->GetXaxis()->SetTitleFont(42);
   lineFit1048->GetYaxis()->SetLabelFont(42);
   lineFit1048->GetYaxis()->SetTitleFont(42);
   lineFit1048->SetParameter(0,-2.006066);
   lineFit1048->SetParError(0,0.1213648);
   lineFit1048->SetParLimits(0,0,0);
   lineFit1048->SetParameter(1,0.05625);
   lineFit1048->SetParError(1,0.006701251);
   lineFit1048->SetParLimits(1,0,0);
   lineFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1048);
   gre->Draw("p ");
   
   TF1 *lineFit1049 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1049->SetFillColor(19);
   lineFit1049->SetFillStyle(0);
   lineFit1049->SetLineColor(10);
   lineFit1049->SetLineWidth(2);
   lineFit1049->SetChisquare(1.210794e-25);
   lineFit1049->SetNDF(0);
   lineFit1049->GetXaxis()->SetLabelFont(42);
   lineFit1049->GetXaxis()->SetTitleOffset(1);
   lineFit1049->GetXaxis()->SetTitleFont(42);
   lineFit1049->GetYaxis()->SetLabelFont(42);
   lineFit1049->GetYaxis()->SetTitleFont(42);
   lineFit1049->SetParameter(0,-2.006066);
   lineFit1049->SetParError(0,0.1213648);
   lineFit1049->SetParLimits(0,0,0);
   lineFit1049->SetParameter(1,0.05625);
   lineFit1049->SetParError(1,0.006701251);
   lineFit1049->SetParLimits(1,0,0);
   lineFit1049->Draw("same");
   
   Double_t 10.000000 ppm_fx1049[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1049[2] = {
   0.1439338,
   0.1189338};
   Double_t 10.000000 ppm_fex1049[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1049[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,10.000000 ppm_fx1049,10.000000 ppm_fy1049,10.000000 ppm_fex1049,10.000000 ppm_fey1049);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_10dO000000sPppm1049 = new TH1F("Graph_10dO000000sPppm1049","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1049->SetMinimum(0.09368897);
   Graph_10dO000000sPppm1049->SetMaximum(0.1691786);
   Graph_10dO000000sPppm1049->SetDirectory(0);
   Graph_10dO000000sPppm1049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1049->SetLineColor(ci);
   Graph_10dO000000sPppm1049->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1049->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1049->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1049->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1049->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1049->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1049->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1049);
   
   
   TF1 *lineFit1050 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1050->SetFillColor(19);
   lineFit1050->SetFillStyle(0);
   lineFit1050->SetLineColor(11);
   lineFit1050->SetLineWidth(2);
   lineFit1050->SetChisquare(5.939891e-28);
   lineFit1050->SetNDF(0);
   lineFit1050->GetXaxis()->SetLabelFont(42);
   lineFit1050->GetXaxis()->SetTitleOffset(1);
   lineFit1050->GetXaxis()->SetTitleFont(42);
   lineFit1050->GetYaxis()->SetLabelFont(42);
   lineFit1050->GetYaxis()->SetTitleFont(42);
   lineFit1050->SetParameter(0,0.2439338);
   lineFit1050->SetParError(0,0.1213648);
   lineFit1050->SetParLimits(0,0,0);
   lineFit1050->SetParameter(1,-0.00625);
   lineFit1050->SetParError(1,0.006701251);
   lineFit1050->SetParLimits(1,0,0);
   lineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1050);
   gre->Draw("p ");
   
   TF1 *lineFit1051 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1051->SetFillColor(19);
   lineFit1051->SetFillStyle(0);
   lineFit1051->SetLineColor(11);
   lineFit1051->SetLineWidth(2);
   lineFit1051->SetChisquare(5.939891e-28);
   lineFit1051->SetNDF(0);
   lineFit1051->GetXaxis()->SetLabelFont(42);
   lineFit1051->GetXaxis()->SetTitleOffset(1);
   lineFit1051->GetXaxis()->SetTitleFont(42);
   lineFit1051->GetYaxis()->SetLabelFont(42);
   lineFit1051->GetYaxis()->SetTitleFont(42);
   lineFit1051->SetParameter(0,0.2439338);
   lineFit1051->SetParError(0,0.1213648);
   lineFit1051->SetParLimits(0,0,0);
   lineFit1051->SetParameter(1,-0.00625);
   lineFit1051->SetParError(1,0.006701251);
   lineFit1051->SetParLimits(1,0,0);
   lineFit1051->Draw("same");
   
   Double_t 30.000000 ppm_fx1051[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1051[2] = {
   1.393934,
   1.118934};
   Double_t 30.000000 ppm_fex1051[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1051[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,30.000000 ppm_fx1051,30.000000 ppm_fy1051,30.000000 ppm_fex1051,30.000000 ppm_fey1051);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(12);
   gre->SetMarkerColor(12);
   
   TH1F *Graph_30dO000000sPppm1051 = new TH1F("Graph_30dO000000sPppm1051","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1051->SetMinimum(1.068689);
   Graph_30dO000000sPppm1051->SetMaximum(1.444179);
   Graph_30dO000000sPppm1051->SetDirectory(0);
   Graph_30dO000000sPppm1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1051->SetLineColor(ci);
   Graph_30dO000000sPppm1051->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1051->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1051->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1051->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1051->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1051->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1051->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1051);
   
   
   TF1 *lineFit1052 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1052->SetFillColor(19);
   lineFit1052->SetFillStyle(0);
   lineFit1052->SetLineColor(12);
   lineFit1052->SetLineWidth(2);
   lineFit1052->SetChisquare(1.961151e-25);
   lineFit1052->SetNDF(0);
   lineFit1052->GetXaxis()->SetLabelFont(42);
   lineFit1052->GetXaxis()->SetTitleOffset(1);
   lineFit1052->GetXaxis()->SetTitleFont(42);
   lineFit1052->GetYaxis()->SetLabelFont(42);
   lineFit1052->GetYaxis()->SetTitleFont(42);
   lineFit1052->SetParameter(0,2.493934);
   lineFit1052->SetParError(0,0.1213648);
   lineFit1052->SetParLimits(0,0,0);
   lineFit1052->SetParameter(1,-0.06875);
   lineFit1052->SetParError(1,0.006701251);
   lineFit1052->SetParLimits(1,0,0);
   lineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1052);
   gre->Draw("p ");
   
   TF1 *lineFit1053 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1053->SetFillColor(19);
   lineFit1053->SetFillStyle(0);
   lineFit1053->SetLineColor(12);
   lineFit1053->SetLineWidth(2);
   lineFit1053->SetChisquare(1.961151e-25);
   lineFit1053->SetNDF(0);
   lineFit1053->GetXaxis()->SetLabelFont(42);
   lineFit1053->GetXaxis()->SetTitleOffset(1);
   lineFit1053->GetXaxis()->SetTitleFont(42);
   lineFit1053->GetYaxis()->SetLabelFont(42);
   lineFit1053->GetYaxis()->SetTitleFont(42);
   lineFit1053->SetParameter(0,2.493934);
   lineFit1053->SetParError(0,0.1213648);
   lineFit1053->SetParLimits(0,0,0);
   lineFit1053->SetParameter(1,-0.06875);
   lineFit1053->SetParError(1,0.006701251);
   lineFit1053->SetParLimits(1,0,0);
   lineFit1053->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","2.46e-299 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(12);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","3.04e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(11);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(11);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(10);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(10);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","   16 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(9);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","4.24e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","3.18e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","2.12e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.06e-312 ppm","lpf");
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
