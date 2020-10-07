void Scans_NSUBRUN_100()
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
   
   Double_t -30.000000 ppm_fx1055[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1055[2] = {
   -2.329389,
   -1.854389};
   Double_t -30.000000 ppm_fex1055[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1055[2] = {
   0.0456595,
   0.0456595};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1055,-30.000000 ppm_fy1055,-30.000000 ppm_fex1055,-30.000000 ppm_fey1055);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055 = new TH1F("Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055","",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->SetMinimum(-3);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->SetMaximum(2);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetXaxis()->SetTitle("QHV [kV]");
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-30.000000 ppm1001101110291055);
   
   
   TF1 *lineFit1056 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1056->SetFillColor(19);
   lineFit1056->SetFillStyle(0);
   lineFit1056->SetLineWidth(2);
   lineFit1056->SetChisquare(2.84974e-26);
   lineFit1056->SetNDF(0);
   lineFit1056->GetXaxis()->SetLabelFont(42);
   lineFit1056->GetXaxis()->SetTitleOffset(1);
   lineFit1056->GetXaxis()->SetTitleFont(42);
   lineFit1056->GetYaxis()->SetLabelFont(42);
   lineFit1056->GetYaxis()->SetTitleFont(42);
   lineFit1056->SetParameter(0,-4.229389);
   lineFit1056->SetParError(0,0.2923635);
   lineFit1056->SetParLimits(0,0,0);
   lineFit1056->SetParameter(1,0.11875);
   lineFit1056->SetParError(1,0.01614307);
   lineFit1056->SetParLimits(1,0,0);
   lineFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1056);
   gre->Draw("ap");
   
   TF1 *lineFit1057 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1057->SetFillColor(19);
   lineFit1057->SetFillStyle(0);
   lineFit1057->SetLineWidth(2);
   lineFit1057->SetChisquare(2.84974e-26);
   lineFit1057->SetNDF(0);
   lineFit1057->GetXaxis()->SetLabelFont(42);
   lineFit1057->GetXaxis()->SetTitleOffset(1);
   lineFit1057->GetXaxis()->SetTitleFont(42);
   lineFit1057->GetYaxis()->SetLabelFont(42);
   lineFit1057->GetYaxis()->SetTitleFont(42);
   lineFit1057->SetParameter(0,-4.229389);
   lineFit1057->SetParError(0,0.2923635);
   lineFit1057->SetParLimits(0,0,0);
   lineFit1057->SetParameter(1,0.11875);
   lineFit1057->SetParError(1,0.01614307);
   lineFit1057->SetParLimits(1,0,0);
   lineFit1057->Draw("same");
   
   Double_t -10.000000 ppm_fx1057[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1057[2] = {
   -1.079389,
   -0.8543892};
   Double_t -10.000000 ppm_fex1057[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1057[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1057,-10.000000 ppm_fy1057,-10.000000 ppm_fex1057,-10.000000 ppm_fey1057);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057 = new TH1F("Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->SetMinimum(-1.156681);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->SetMaximum(-0.7770978);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-10.000000 ppm1003101310311057);
   
   
   TF1 *lineFit1058 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1058->SetFillColor(19);
   lineFit1058->SetFillStyle(0);
   lineFit1058->SetLineColor(2);
   lineFit1058->SetLineWidth(2);
   lineFit1058->SetChisquare(1.146991e-26);
   lineFit1058->SetNDF(0);
   lineFit1058->GetXaxis()->SetLabelFont(42);
   lineFit1058->GetXaxis()->SetTitleOffset(1);
   lineFit1058->GetXaxis()->SetTitleFont(42);
   lineFit1058->GetYaxis()->SetLabelFont(42);
   lineFit1058->GetYaxis()->SetTitleFont(42);
   lineFit1058->SetParameter(0,-1.979389);
   lineFit1058->SetParError(0,0.2923635);
   lineFit1058->SetParLimits(0,0,0);
   lineFit1058->SetParameter(1,0.05625);
   lineFit1058->SetParError(1,0.01614307);
   lineFit1058->SetParLimits(1,0,0);
   lineFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1058);
   gre->Draw("p ");
   
   TF1 *lineFit1059 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1059->SetFillColor(19);
   lineFit1059->SetFillStyle(0);
   lineFit1059->SetLineColor(2);
   lineFit1059->SetLineWidth(2);
   lineFit1059->SetChisquare(1.146991e-26);
   lineFit1059->SetNDF(0);
   lineFit1059->GetXaxis()->SetLabelFont(42);
   lineFit1059->GetXaxis()->SetTitleOffset(1);
   lineFit1059->GetXaxis()->SetTitleFont(42);
   lineFit1059->GetYaxis()->SetLabelFont(42);
   lineFit1059->GetYaxis()->SetTitleFont(42);
   lineFit1059->SetParameter(0,-1.979389);
   lineFit1059->SetParError(0,0.2923635);
   lineFit1059->SetParLimits(0,0,0);
   lineFit1059->SetParameter(1,0.05625);
   lineFit1059->SetParError(1,0.01614307);
   lineFit1059->SetParLimits(1,0,0);
   lineFit1059->Draw("same");
   
   Double_t 10.000000 ppm_fx1059[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1059[2] = {
   0.1706108,
   0.1456108};
   Double_t 10.000000 ppm_fex1059[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1059[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,10.000000 ppm_fx1059,10.000000 ppm_fy1059,10.000000 ppm_fex1059,10.000000 ppm_fey1059);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059 = new TH1F("Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->SetMinimum(0.08831937);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->SetMaximum(0.2279022);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->SetDirectory(0);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->SetLineColor(ci);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_10.000000 ppm1005101510331059);
   
   
   TF1 *lineFit1060 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1060->SetFillColor(19);
   lineFit1060->SetFillStyle(0);
   lineFit1060->SetLineColor(3);
   lineFit1060->SetLineWidth(2);
   lineFit1060->SetChisquare(1.348749e-28);
   lineFit1060->SetNDF(0);
   lineFit1060->GetXaxis()->SetLabelFont(42);
   lineFit1060->GetXaxis()->SetTitleOffset(1);
   lineFit1060->GetXaxis()->SetTitleFont(42);
   lineFit1060->GetYaxis()->SetLabelFont(42);
   lineFit1060->GetYaxis()->SetTitleFont(42);
   lineFit1060->SetParameter(0,0.2706108);
   lineFit1060->SetParError(0,0.2923635);
   lineFit1060->SetParLimits(0,0,0);
   lineFit1060->SetParameter(1,-0.00625);
   lineFit1060->SetParError(1,0.01614307);
   lineFit1060->SetParLimits(1,0,0);
   lineFit1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1060);
   gre->Draw("p ");
   
   TF1 *lineFit1061 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1061->SetFillColor(19);
   lineFit1061->SetFillStyle(0);
   lineFit1061->SetLineColor(3);
   lineFit1061->SetLineWidth(2);
   lineFit1061->SetChisquare(1.348749e-28);
   lineFit1061->SetNDF(0);
   lineFit1061->GetXaxis()->SetLabelFont(42);
   lineFit1061->GetXaxis()->SetTitleOffset(1);
   lineFit1061->GetXaxis()->SetTitleFont(42);
   lineFit1061->GetYaxis()->SetLabelFont(42);
   lineFit1061->GetYaxis()->SetTitleFont(42);
   lineFit1061->SetParameter(0,0.2706108);
   lineFit1061->SetParError(0,0.2923635);
   lineFit1061->SetParLimits(0,0,0);
   lineFit1061->SetParameter(1,-0.00625);
   lineFit1061->SetParError(1,0.01614307);
   lineFit1061->SetParLimits(1,0,0);
   lineFit1061->Draw("same");
   
   Double_t 30.000000 ppm_fx1061[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1061[2] = {
   1.420611,
   1.145611};
   Double_t 30.000000 ppm_fex1061[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1061[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,30.000000 ppm_fx1061,30.000000 ppm_fy1061,30.000000 ppm_fex1061,30.000000 ppm_fey1061);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061 = new TH1F("Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->SetMinimum(1.063319);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->SetMaximum(1.502902);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->SetDirectory(0);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->SetLineColor(ci);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_30.000000 ppm1007101710351061);
   
   
   TF1 *lineFit1062 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1062->SetFillColor(19);
   lineFit1062->SetFillStyle(0);
   lineFit1062->SetLineColor(4);
   lineFit1062->SetLineWidth(2);
   lineFit1062->SetChisquare(3.490636e-26);
   lineFit1062->SetNDF(0);
   lineFit1062->GetXaxis()->SetLabelFont(42);
   lineFit1062->GetXaxis()->SetTitleOffset(1);
   lineFit1062->GetXaxis()->SetTitleFont(42);
   lineFit1062->GetYaxis()->SetLabelFont(42);
   lineFit1062->GetYaxis()->SetTitleFont(42);
   lineFit1062->SetParameter(0,2.520611);
   lineFit1062->SetParError(0,0.2923635);
   lineFit1062->SetParLimits(0,0,0);
   lineFit1062->SetParameter(1,-0.06875);
   lineFit1062->SetParError(1,0.01614307);
   lineFit1062->SetParLimits(1,0,0);
   lineFit1062->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1062);
   gre->Draw("p ");
   
   TF1 *lineFit1063 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1063->SetFillColor(19);
   lineFit1063->SetFillStyle(0);
   lineFit1063->SetLineColor(4);
   lineFit1063->SetLineWidth(2);
   lineFit1063->SetChisquare(3.490636e-26);
   lineFit1063->SetNDF(0);
   lineFit1063->GetXaxis()->SetLabelFont(42);
   lineFit1063->GetXaxis()->SetTitleOffset(1);
   lineFit1063->GetXaxis()->SetTitleFont(42);
   lineFit1063->GetYaxis()->SetLabelFont(42);
   lineFit1063->GetYaxis()->SetTitleFont(42);
   lineFit1063->SetParameter(0,2.520611);
   lineFit1063->SetParError(0,0.2923635);
   lineFit1063->SetParLimits(0,0,0);
   lineFit1063->SetParameter(1,-0.06875);
   lineFit1063->SetParError(1,0.01614307);
   lineFit1063->SetParLimits(1,0,0);
   lineFit1063->Draw("same");
   
   Double_t -30.000000 ppm_fx1063[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1063[2] = {
   -2.350281,
   -1.875281};
   Double_t -30.000000 ppm_fex1063[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1063[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1063,-30.000000 ppm_fy1063,-30.000000 ppm_fex1063,-30.000000 ppm_fey1063);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_Graph_Graph_mI30dO000000sPppm101910371063 = new TH1F("Graph_Graph_Graph_mI30dO000000sPppm101910371063","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->SetMinimum(-2.427475);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->SetMaximum(-1.798087);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->SetDirectory(0);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->SetLineColor(ci);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm101910371063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-30.000000 ppm101910371063);
   
   
   TF1 *lineFit1064 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1064->SetFillColor(19);
   lineFit1064->SetFillStyle(0);
   lineFit1064->SetLineColor(5);
   lineFit1064->SetLineWidth(2);
   lineFit1064->SetChisquare(3.969524e-26);
   lineFit1064->SetNDF(0);
   lineFit1064->GetXaxis()->SetLabelFont(42);
   lineFit1064->GetXaxis()->SetTitleOffset(1);
   lineFit1064->GetXaxis()->SetTitleFont(42);
   lineFit1064->GetYaxis()->SetLabelFont(42);
   lineFit1064->GetYaxis()->SetTitleFont(42);
   lineFit1064->SetParameter(0,-4.250281);
   lineFit1064->SetParError(0,0.1584479);
   lineFit1064->SetParLimits(0,0,0);
   lineFit1064->SetParameter(1,0.11875);
   lineFit1064->SetParError(1,0.00874882);
   lineFit1064->SetParLimits(1,0,0);
   lineFit1064->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1064);
   gre->Draw("p ");
   
   TF1 *lineFit1065 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1065->SetFillColor(19);
   lineFit1065->SetFillStyle(0);
   lineFit1065->SetLineColor(5);
   lineFit1065->SetLineWidth(2);
   lineFit1065->SetChisquare(3.969524e-26);
   lineFit1065->SetNDF(0);
   lineFit1065->GetXaxis()->SetLabelFont(42);
   lineFit1065->GetXaxis()->SetTitleOffset(1);
   lineFit1065->GetXaxis()->SetTitleFont(42);
   lineFit1065->GetYaxis()->SetLabelFont(42);
   lineFit1065->GetYaxis()->SetTitleFont(42);
   lineFit1065->SetParameter(0,-4.250281);
   lineFit1065->SetParError(0,0.1584479);
   lineFit1065->SetParLimits(0,0,0);
   lineFit1065->SetParameter(1,0.11875);
   lineFit1065->SetParError(1,0.00874882);
   lineFit1065->SetParLimits(1,0,0);
   lineFit1065->Draw("same");
   
   Double_t -10.000000 ppm_fx1065[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1065[2] = {
   -1.100281,
   -0.875281};
   Double_t -10.000000 ppm_fex1065[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1065[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1065,-10.000000 ppm_fy1065,-10.000000 ppm_fex1065,-10.000000 ppm_fey1065);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_Graph_Graph_mI10dO000000sPppm102110391065 = new TH1F("Graph_Graph_Graph_mI10dO000000sPppm102110391065","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->SetMinimum(-1.152475);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->SetMaximum(-0.8230865);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->SetDirectory(0);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->SetLineColor(ci);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm102110391065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-10.000000 ppm102110391065);
   
   
   TF1 *lineFit1066 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1066->SetFillColor(19);
   lineFit1066->SetFillStyle(0);
   lineFit1066->SetLineColor(6);
   lineFit1066->SetLineWidth(2);
   lineFit1066->SetChisquare(2.165927e-26);
   lineFit1066->SetNDF(0);
   lineFit1066->GetXaxis()->SetLabelFont(42);
   lineFit1066->GetXaxis()->SetTitleOffset(1);
   lineFit1066->GetXaxis()->SetTitleFont(42);
   lineFit1066->GetYaxis()->SetLabelFont(42);
   lineFit1066->GetYaxis()->SetTitleFont(42);
   lineFit1066->SetParameter(0,-2.000281);
   lineFit1066->SetParError(0,0.1584479);
   lineFit1066->SetParLimits(0,0,0);
   lineFit1066->SetParameter(1,0.05625);
   lineFit1066->SetParError(1,0.00874882);
   lineFit1066->SetParLimits(1,0,0);
   lineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1066);
   gre->Draw("p ");
   
   TF1 *lineFit1067 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1067->SetFillColor(19);
   lineFit1067->SetFillStyle(0);
   lineFit1067->SetLineColor(6);
   lineFit1067->SetLineWidth(2);
   lineFit1067->SetChisquare(2.165927e-26);
   lineFit1067->SetNDF(0);
   lineFit1067->GetXaxis()->SetLabelFont(42);
   lineFit1067->GetXaxis()->SetTitleOffset(1);
   lineFit1067->GetXaxis()->SetTitleFont(42);
   lineFit1067->GetYaxis()->SetLabelFont(42);
   lineFit1067->GetYaxis()->SetTitleFont(42);
   lineFit1067->SetParameter(0,-2.000281);
   lineFit1067->SetParError(0,0.1584479);
   lineFit1067->SetParLimits(0,0,0);
   lineFit1067->SetParameter(1,0.05625);
   lineFit1067->SetParError(1,0.00874882);
   lineFit1067->SetParLimits(1,0,0);
   lineFit1067->Draw("same");
   
   Double_t 10.000000 ppm_fx1067[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1067[2] = {
   0.149719,
   0.124719};
   Double_t 10.000000 ppm_fex1067[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1067[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,10.000000 ppm_fx1067,10.000000 ppm_fy1067,10.000000 ppm_fex1067,10.000000 ppm_fey1067);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_Graph_Graph_10dO000000sPppm102310411067 = new TH1F("Graph_Graph_Graph_10dO000000sPppm102310411067","Graph",100,15.6,20.4);
   Graph_Graph_Graph_10dO000000sPppm102310411067->SetMinimum(0.09252451);
   Graph_Graph_Graph_10dO000000sPppm102310411067->SetMaximum(0.1819135);
   Graph_Graph_Graph_10dO000000sPppm102310411067->SetDirectory(0);
   Graph_Graph_Graph_10dO000000sPppm102310411067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_10dO000000sPppm102310411067->SetLineColor(ci);
   Graph_Graph_Graph_10dO000000sPppm102310411067->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm102310411067->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm102310411067->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm102310411067->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm102310411067->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm102310411067->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm102310411067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm102310411067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_10.000000 ppm102310411067);
   
   
   TF1 *lineFit1068 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1068->SetFillColor(19);
   lineFit1068->SetFillStyle(0);
   lineFit1068->SetLineColor(7);
   lineFit1068->SetLineWidth(2);
   lineFit1068->SetChisquare(1.258089e-29);
   lineFit1068->SetNDF(0);
   lineFit1068->GetXaxis()->SetLabelFont(42);
   lineFit1068->GetXaxis()->SetTitleOffset(1);
   lineFit1068->GetXaxis()->SetTitleFont(42);
   lineFit1068->GetYaxis()->SetLabelFont(42);
   lineFit1068->GetYaxis()->SetTitleFont(42);
   lineFit1068->SetParameter(0,0.249719);
   lineFit1068->SetParError(0,0.1584479);
   lineFit1068->SetParLimits(0,0,0);
   lineFit1068->SetParameter(1,-0.00625);
   lineFit1068->SetParError(1,0.00874882);
   lineFit1068->SetParLimits(1,0,0);
   lineFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1068);
   gre->Draw("p ");
   
   TF1 *lineFit1069 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1069->SetFillColor(19);
   lineFit1069->SetFillStyle(0);
   lineFit1069->SetLineColor(7);
   lineFit1069->SetLineWidth(2);
   lineFit1069->SetChisquare(1.258089e-29);
   lineFit1069->SetNDF(0);
   lineFit1069->GetXaxis()->SetLabelFont(42);
   lineFit1069->GetXaxis()->SetTitleOffset(1);
   lineFit1069->GetXaxis()->SetTitleFont(42);
   lineFit1069->GetYaxis()->SetLabelFont(42);
   lineFit1069->GetYaxis()->SetTitleFont(42);
   lineFit1069->SetParameter(0,0.249719);
   lineFit1069->SetParError(0,0.1584479);
   lineFit1069->SetParLimits(0,0,0);
   lineFit1069->SetParameter(1,-0.00625);
   lineFit1069->SetParError(1,0.00874882);
   lineFit1069->SetParLimits(1,0,0);
   lineFit1069->Draw("same");
   
   Double_t 30.000000 ppm_fx1069[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1069[2] = {
   1.399719,
   1.124719};
   Double_t 30.000000 ppm_fex1069[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1069[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,30.000000 ppm_fx1069,30.000000 ppm_fy1069,30.000000 ppm_fex1069,30.000000 ppm_fey1069);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_Graph_Graph_30dO000000sPppm102510431069 = new TH1F("Graph_Graph_Graph_30dO000000sPppm102510431069","Graph",100,15.6,20.4);
   Graph_Graph_Graph_30dO000000sPppm102510431069->SetMinimum(1.067525);
   Graph_Graph_Graph_30dO000000sPppm102510431069->SetMaximum(1.456913);
   Graph_Graph_Graph_30dO000000sPppm102510431069->SetDirectory(0);
   Graph_Graph_Graph_30dO000000sPppm102510431069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_30dO000000sPppm102510431069->SetLineColor(ci);
   Graph_Graph_Graph_30dO000000sPppm102510431069->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm102510431069->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm102510431069->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm102510431069->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm102510431069->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm102510431069->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm102510431069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm102510431069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_30.000000 ppm102510431069);
   
   
   TF1 *lineFit1070 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1070->SetFillColor(19);
   lineFit1070->SetFillStyle(0);
   lineFit1070->SetLineColor(8);
   lineFit1070->SetLineWidth(2);
   lineFit1070->SetChisquare(3.172398e-26);
   lineFit1070->SetNDF(0);
   lineFit1070->GetXaxis()->SetLabelFont(42);
   lineFit1070->GetXaxis()->SetTitleOffset(1);
   lineFit1070->GetXaxis()->SetTitleFont(42);
   lineFit1070->GetYaxis()->SetLabelFont(42);
   lineFit1070->GetYaxis()->SetTitleFont(42);
   lineFit1070->SetParameter(0,2.499719);
   lineFit1070->SetParError(0,0.1584479);
   lineFit1070->SetParLimits(0,0,0);
   lineFit1070->SetParameter(1,-0.06875);
   lineFit1070->SetParError(1,0.00874882);
   lineFit1070->SetParLimits(1,0,0);
   lineFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1070);
   gre->Draw("p ");
   
   TF1 *lineFit1071 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1071->SetFillColor(19);
   lineFit1071->SetFillStyle(0);
   lineFit1071->SetLineColor(8);
   lineFit1071->SetLineWidth(2);
   lineFit1071->SetChisquare(3.172398e-26);
   lineFit1071->SetNDF(0);
   lineFit1071->GetXaxis()->SetLabelFont(42);
   lineFit1071->GetXaxis()->SetTitleOffset(1);
   lineFit1071->GetXaxis()->SetTitleFont(42);
   lineFit1071->GetYaxis()->SetLabelFont(42);
   lineFit1071->GetYaxis()->SetTitleFont(42);
   lineFit1071->SetParameter(0,2.499719);
   lineFit1071->SetParError(0,0.1584479);
   lineFit1071->SetParLimits(0,0,0);
   lineFit1071->SetParameter(1,-0.06875);
   lineFit1071->SetParError(1,0.00874882);
   lineFit1071->SetParLimits(1,0,0);
   lineFit1071->Draw("same");
   
   Double_t -30.000000 ppm_fx1071[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1071[2] = {
   -2.356066,
   -1.881066};
   Double_t -30.000000 ppm_fex1071[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1071[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1071,-30.000000 ppm_fy1071,-30.000000 ppm_fex1071,-30.000000 ppm_fey1071);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_Graph_mI30dO000000sPppm10451071 = new TH1F("Graph_Graph_mI30dO000000sPppm10451071","Graph",100,15.6,20.4);
   Graph_Graph_mI30dO000000sPppm10451071->SetMinimum(-2.426311);
   Graph_Graph_mI30dO000000sPppm10451071->SetMaximum(-1.810821);
   Graph_Graph_mI30dO000000sPppm10451071->SetDirectory(0);
   Graph_Graph_mI30dO000000sPppm10451071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI30dO000000sPppm10451071->SetLineColor(ci);
   Graph_Graph_mI30dO000000sPppm10451071->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10451071->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm10451071->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm10451071->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10451071->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm10451071->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10451071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm10451071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-30.000000 ppm10451071);
   
   
   TF1 *lineFit1072 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1072->SetFillColor(19);
   lineFit1072->SetFillStyle(0);
   lineFit1072->SetLineColor(9);
   lineFit1072->SetLineWidth(2);
   lineFit1072->SetChisquare(2.932805e-25);
   lineFit1072->SetNDF(0);
   lineFit1072->GetXaxis()->SetLabelFont(42);
   lineFit1072->GetXaxis()->SetTitleOffset(1);
   lineFit1072->GetXaxis()->SetTitleFont(42);
   lineFit1072->GetYaxis()->SetLabelFont(42);
   lineFit1072->GetYaxis()->SetTitleFont(42);
   lineFit1072->SetParameter(0,-4.256066);
   lineFit1072->SetParError(0,0.1213648);
   lineFit1072->SetParLimits(0,0,0);
   lineFit1072->SetParameter(1,0.11875);
   lineFit1072->SetParError(1,0.006701251);
   lineFit1072->SetParLimits(1,0,0);
   lineFit1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1072);
   gre->Draw("p ");
   
   TF1 *lineFit1073 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1073->SetFillColor(19);
   lineFit1073->SetFillStyle(0);
   lineFit1073->SetLineColor(9);
   lineFit1073->SetLineWidth(2);
   lineFit1073->SetChisquare(2.932805e-25);
   lineFit1073->SetNDF(0);
   lineFit1073->GetXaxis()->SetLabelFont(42);
   lineFit1073->GetXaxis()->SetTitleOffset(1);
   lineFit1073->GetXaxis()->SetTitleFont(42);
   lineFit1073->GetYaxis()->SetLabelFont(42);
   lineFit1073->GetYaxis()->SetTitleFont(42);
   lineFit1073->SetParameter(0,-4.256066);
   lineFit1073->SetParError(0,0.1213648);
   lineFit1073->SetParLimits(0,0,0);
   lineFit1073->SetParameter(1,0.11875);
   lineFit1073->SetParError(1,0.006701251);
   lineFit1073->SetParLimits(1,0,0);
   lineFit1073->Draw("same");
   
   Double_t -10.000000 ppm_fx1073[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1073[2] = {
   -1.106066,
   -0.8810662};
   Double_t -10.000000 ppm_fex1073[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1073[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1073,-10.000000 ppm_fy1073,-10.000000 ppm_fex1073,-10.000000 ppm_fey1073);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_Graph_mI10dO000000sPppm10471073 = new TH1F("Graph_Graph_mI10dO000000sPppm10471073","Graph",100,15.6,20.4);
   Graph_Graph_mI10dO000000sPppm10471073->SetMinimum(-1.151311);
   Graph_Graph_mI10dO000000sPppm10471073->SetMaximum(-0.8358214);
   Graph_Graph_mI10dO000000sPppm10471073->SetDirectory(0);
   Graph_Graph_mI10dO000000sPppm10471073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI10dO000000sPppm10471073->SetLineColor(ci);
   Graph_Graph_mI10dO000000sPppm10471073->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10471073->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm10471073->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm10471073->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10471073->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm10471073->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10471073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm10471073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-10.000000 ppm10471073);
   
   
   TF1 *lineFit1074 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1074->SetFillColor(19);
   lineFit1074->SetFillStyle(0);
   lineFit1074->SetLineColor(10);
   lineFit1074->SetLineWidth(2);
   lineFit1074->SetChisquare(1.210794e-25);
   lineFit1074->SetNDF(0);
   lineFit1074->GetXaxis()->SetLabelFont(42);
   lineFit1074->GetXaxis()->SetTitleOffset(1);
   lineFit1074->GetXaxis()->SetTitleFont(42);
   lineFit1074->GetYaxis()->SetLabelFont(42);
   lineFit1074->GetYaxis()->SetTitleFont(42);
   lineFit1074->SetParameter(0,-2.006066);
   lineFit1074->SetParError(0,0.1213648);
   lineFit1074->SetParLimits(0,0,0);
   lineFit1074->SetParameter(1,0.05625);
   lineFit1074->SetParError(1,0.006701251);
   lineFit1074->SetParLimits(1,0,0);
   lineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1074);
   gre->Draw("p ");
   
   TF1 *lineFit1075 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1075->SetFillColor(19);
   lineFit1075->SetFillStyle(0);
   lineFit1075->SetLineColor(10);
   lineFit1075->SetLineWidth(2);
   lineFit1075->SetChisquare(1.210794e-25);
   lineFit1075->SetNDF(0);
   lineFit1075->GetXaxis()->SetLabelFont(42);
   lineFit1075->GetXaxis()->SetTitleOffset(1);
   lineFit1075->GetXaxis()->SetTitleFont(42);
   lineFit1075->GetYaxis()->SetLabelFont(42);
   lineFit1075->GetYaxis()->SetTitleFont(42);
   lineFit1075->SetParameter(0,-2.006066);
   lineFit1075->SetParError(0,0.1213648);
   lineFit1075->SetParLimits(0,0,0);
   lineFit1075->SetParameter(1,0.05625);
   lineFit1075->SetParError(1,0.006701251);
   lineFit1075->SetParLimits(1,0,0);
   lineFit1075->Draw("same");
   
   Double_t 10.000000 ppm_fx1075[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1075[2] = {
   0.1439338,
   0.1189338};
   Double_t 10.000000 ppm_fex1075[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1075[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,10.000000 ppm_fx1075,10.000000 ppm_fy1075,10.000000 ppm_fex1075,10.000000 ppm_fey1075);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_Graph_10dO000000sPppm10491075 = new TH1F("Graph_Graph_10dO000000sPppm10491075","Graph",100,15.6,20.4);
   Graph_Graph_10dO000000sPppm10491075->SetMinimum(0.09368897);
   Graph_Graph_10dO000000sPppm10491075->SetMaximum(0.1691786);
   Graph_Graph_10dO000000sPppm10491075->SetDirectory(0);
   Graph_Graph_10dO000000sPppm10491075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_10dO000000sPppm10491075->SetLineColor(ci);
   Graph_Graph_10dO000000sPppm10491075->GetXaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10491075->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm10491075->GetXaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm10491075->GetYaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10491075->GetYaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm10491075->GetZaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10491075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm10491075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_10.000000 ppm10491075);
   
   
   TF1 *lineFit1076 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1076->SetFillColor(19);
   lineFit1076->SetFillStyle(0);
   lineFit1076->SetLineColor(11);
   lineFit1076->SetLineWidth(2);
   lineFit1076->SetChisquare(5.939891e-28);
   lineFit1076->SetNDF(0);
   lineFit1076->GetXaxis()->SetLabelFont(42);
   lineFit1076->GetXaxis()->SetTitleOffset(1);
   lineFit1076->GetXaxis()->SetTitleFont(42);
   lineFit1076->GetYaxis()->SetLabelFont(42);
   lineFit1076->GetYaxis()->SetTitleFont(42);
   lineFit1076->SetParameter(0,0.2439338);
   lineFit1076->SetParError(0,0.1213648);
   lineFit1076->SetParLimits(0,0,0);
   lineFit1076->SetParameter(1,-0.00625);
   lineFit1076->SetParError(1,0.006701251);
   lineFit1076->SetParLimits(1,0,0);
   lineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1076);
   gre->Draw("p ");
   
   TF1 *lineFit1077 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1077->SetFillColor(19);
   lineFit1077->SetFillStyle(0);
   lineFit1077->SetLineColor(11);
   lineFit1077->SetLineWidth(2);
   lineFit1077->SetChisquare(5.939891e-28);
   lineFit1077->SetNDF(0);
   lineFit1077->GetXaxis()->SetLabelFont(42);
   lineFit1077->GetXaxis()->SetTitleOffset(1);
   lineFit1077->GetXaxis()->SetTitleFont(42);
   lineFit1077->GetYaxis()->SetLabelFont(42);
   lineFit1077->GetYaxis()->SetTitleFont(42);
   lineFit1077->SetParameter(0,0.2439338);
   lineFit1077->SetParError(0,0.1213648);
   lineFit1077->SetParLimits(0,0,0);
   lineFit1077->SetParameter(1,-0.00625);
   lineFit1077->SetParError(1,0.006701251);
   lineFit1077->SetParLimits(1,0,0);
   lineFit1077->Draw("same");
   
   Double_t 30.000000 ppm_fx1077[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1077[2] = {
   1.393934,
   1.118934};
   Double_t 30.000000 ppm_fex1077[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1077[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,30.000000 ppm_fx1077,30.000000 ppm_fy1077,30.000000 ppm_fex1077,30.000000 ppm_fey1077);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(12);
   gre->SetMarkerColor(12);
   
   TH1F *Graph_Graph_30dO000000sPppm10511077 = new TH1F("Graph_Graph_30dO000000sPppm10511077","Graph",100,15.6,20.4);
   Graph_Graph_30dO000000sPppm10511077->SetMinimum(1.068689);
   Graph_Graph_30dO000000sPppm10511077->SetMaximum(1.444179);
   Graph_Graph_30dO000000sPppm10511077->SetDirectory(0);
   Graph_Graph_30dO000000sPppm10511077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_30dO000000sPppm10511077->SetLineColor(ci);
   Graph_Graph_30dO000000sPppm10511077->GetXaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10511077->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm10511077->GetXaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm10511077->GetYaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10511077->GetYaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm10511077->GetZaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10511077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm10511077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_30.000000 ppm10511077);
   
   
   TF1 *lineFit1078 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1078->SetFillColor(19);
   lineFit1078->SetFillStyle(0);
   lineFit1078->SetLineColor(12);
   lineFit1078->SetLineWidth(2);
   lineFit1078->SetChisquare(1.961151e-25);
   lineFit1078->SetNDF(0);
   lineFit1078->GetXaxis()->SetLabelFont(42);
   lineFit1078->GetXaxis()->SetTitleOffset(1);
   lineFit1078->GetXaxis()->SetTitleFont(42);
   lineFit1078->GetYaxis()->SetLabelFont(42);
   lineFit1078->GetYaxis()->SetTitleFont(42);
   lineFit1078->SetParameter(0,2.493934);
   lineFit1078->SetParError(0,0.1213648);
   lineFit1078->SetParLimits(0,0,0);
   lineFit1078->SetParameter(1,-0.06875);
   lineFit1078->SetParError(1,0.006701251);
   lineFit1078->SetParLimits(1,0,0);
   lineFit1078->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1078);
   gre->Draw("p ");
   
   TF1 *lineFit1079 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1079->SetFillColor(19);
   lineFit1079->SetFillStyle(0);
   lineFit1079->SetLineColor(12);
   lineFit1079->SetLineWidth(2);
   lineFit1079->SetChisquare(1.961151e-25);
   lineFit1079->SetNDF(0);
   lineFit1079->GetXaxis()->SetLabelFont(42);
   lineFit1079->GetXaxis()->SetTitleOffset(1);
   lineFit1079->GetXaxis()->SetTitleFont(42);
   lineFit1079->GetYaxis()->SetLabelFont(42);
   lineFit1079->GetYaxis()->SetTitleFont(42);
   lineFit1079->SetParameter(0,2.493934);
   lineFit1079->SetParError(0,0.1213648);
   lineFit1079->SetParLimits(0,0,0);
   lineFit1079->SetParameter(1,-0.06875);
   lineFit1079->SetParError(1,0.006701251);
   lineFit1079->SetParLimits(1,0,0);
   lineFit1079->Draw("same");
   
   Double_t -30.000000 ppm_fx1079[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1079[2] = {
   -2.359085,
   -1.884085};
   Double_t -30.000000 ppm_fex1079[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1079[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1079,-30.000000 ppm_fy1079,-30.000000 ppm_fex1079,-30.000000 ppm_fey1079);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(13);
   gre->SetMarkerColor(13);
   
   TH1F *Graph_mI30dO000000sPppm1079 = new TH1F("Graph_mI30dO000000sPppm1079","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1079->SetMinimum(-2.425703);
   Graph_mI30dO000000sPppm1079->SetMaximum(-1.817467);
   Graph_mI30dO000000sPppm1079->SetDirectory(0);
   Graph_mI30dO000000sPppm1079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1079->SetLineColor(ci);
   Graph_mI30dO000000sPppm1079->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1079->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1079->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1079->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1079->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1079->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1079->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1079);
   
   
   TF1 *lineFit1080 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1080->SetFillColor(19);
   lineFit1080->SetFillStyle(0);
   lineFit1080->SetLineColor(13);
   lineFit1080->SetLineWidth(2);
   lineFit1080->SetChisquare(1.274218e-25);
   lineFit1080->SetNDF(0);
   lineFit1080->GetXaxis()->SetLabelFont(42);
   lineFit1080->GetXaxis()->SetTitleOffset(1);
   lineFit1080->GetXaxis()->SetTitleFont(42);
   lineFit1080->GetYaxis()->SetLabelFont(42);
   lineFit1080->GetYaxis()->SetTitleFont(42);
   lineFit1080->SetParameter(0,-4.259085);
   lineFit1080->SetParError(0,0.1020146);
   lineFit1080->SetParLimits(0,0,0);
   lineFit1080->SetParameter(1,0.11875);
   lineFit1080->SetParError(1,0.005632813);
   lineFit1080->SetParLimits(1,0,0);
   lineFit1080->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1080);
   gre->Draw("p ");
   
   TF1 *lineFit1081 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1081->SetFillColor(19);
   lineFit1081->SetFillStyle(0);
   lineFit1081->SetLineColor(13);
   lineFit1081->SetLineWidth(2);
   lineFit1081->SetChisquare(1.274218e-25);
   lineFit1081->SetNDF(0);
   lineFit1081->GetXaxis()->SetLabelFont(42);
   lineFit1081->GetXaxis()->SetTitleOffset(1);
   lineFit1081->GetXaxis()->SetTitleFont(42);
   lineFit1081->GetYaxis()->SetLabelFont(42);
   lineFit1081->GetYaxis()->SetTitleFont(42);
   lineFit1081->SetParameter(0,-4.259085);
   lineFit1081->SetParError(0,0.1020146);
   lineFit1081->SetParLimits(0,0,0);
   lineFit1081->SetParameter(1,0.11875);
   lineFit1081->SetParError(1,0.005632813);
   lineFit1081->SetParLimits(1,0,0);
   lineFit1081->Draw("same");
   
   Double_t -10.000000 ppm_fx1081[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1081[2] = {
   -1.109085,
   -0.884085};
   Double_t -10.000000 ppm_fex1081[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1081[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1081,-10.000000 ppm_fy1081,-10.000000 ppm_fex1081,-10.000000 ppm_fey1081);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(14);
   gre->SetMarkerColor(14);
   
   TH1F *Graph_mI10dO000000sPppm1081 = new TH1F("Graph_mI10dO000000sPppm1081","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1081->SetMinimum(-1.150703);
   Graph_mI10dO000000sPppm1081->SetMaximum(-0.8424666);
   Graph_mI10dO000000sPppm1081->SetDirectory(0);
   Graph_mI10dO000000sPppm1081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1081->SetLineColor(ci);
   Graph_mI10dO000000sPppm1081->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1081->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1081->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1081->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1081->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1081->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1081->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1081);
   
   
   TF1 *lineFit1082 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1082->SetFillColor(19);
   lineFit1082->SetFillStyle(0);
   lineFit1082->SetLineColor(14);
   lineFit1082->SetLineWidth(2);
   lineFit1082->SetChisquare(1.214003e-27);
   lineFit1082->SetNDF(0);
   lineFit1082->GetXaxis()->SetLabelFont(42);
   lineFit1082->GetXaxis()->SetTitleOffset(1);
   lineFit1082->GetXaxis()->SetTitleFont(42);
   lineFit1082->GetYaxis()->SetLabelFont(42);
   lineFit1082->GetYaxis()->SetTitleFont(42);
   lineFit1082->SetParameter(0,-2.009085);
   lineFit1082->SetParError(0,0.1020146);
   lineFit1082->SetParLimits(0,0,0);
   lineFit1082->SetParameter(1,0.05625);
   lineFit1082->SetParError(1,0.005632813);
   lineFit1082->SetParLimits(1,0,0);
   lineFit1082->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1082);
   gre->Draw("p ");
   
   TF1 *lineFit1083 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1083->SetFillColor(19);
   lineFit1083->SetFillStyle(0);
   lineFit1083->SetLineColor(14);
   lineFit1083->SetLineWidth(2);
   lineFit1083->SetChisquare(1.214003e-27);
   lineFit1083->SetNDF(0);
   lineFit1083->GetXaxis()->SetLabelFont(42);
   lineFit1083->GetXaxis()->SetTitleOffset(1);
   lineFit1083->GetXaxis()->SetTitleFont(42);
   lineFit1083->GetYaxis()->SetLabelFont(42);
   lineFit1083->GetYaxis()->SetTitleFont(42);
   lineFit1083->SetParameter(0,-2.009085);
   lineFit1083->SetParError(0,0.1020146);
   lineFit1083->SetParLimits(0,0,0);
   lineFit1083->SetParameter(1,0.05625);
   lineFit1083->SetParError(1,0.005632813);
   lineFit1083->SetParLimits(1,0,0);
   lineFit1083->Draw("same");
   
   Double_t 10.000000 ppm_fx1083[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1083[2] = {
   0.140915,
   0.115915};
   Double_t 10.000000 ppm_fex1083[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1083[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,10.000000 ppm_fx1083,10.000000 ppm_fy1083,10.000000 ppm_fex1083,10.000000 ppm_fey1083);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(15);
   gre->SetMarkerColor(15);
   
   TH1F *Graph_10dO000000sPppm1083 = new TH1F("Graph_10dO000000sPppm1083","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1083->SetMinimum(0.0942966);
   Graph_10dO000000sPppm1083->SetMaximum(0.1625334);
   Graph_10dO000000sPppm1083->SetDirectory(0);
   Graph_10dO000000sPppm1083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1083->SetLineColor(ci);
   Graph_10dO000000sPppm1083->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1083->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1083->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1083->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1083->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1083->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1083->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1083);
   
   
   TF1 *lineFit1084 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1084->SetFillColor(19);
   lineFit1084->SetFillStyle(0);
   lineFit1084->SetLineColor(15);
   lineFit1084->SetLineWidth(2);
   lineFit1084->SetChisquare(5.463015e-29);
   lineFit1084->SetNDF(0);
   lineFit1084->GetXaxis()->SetLabelFont(42);
   lineFit1084->GetXaxis()->SetTitleOffset(1);
   lineFit1084->GetXaxis()->SetTitleFont(42);
   lineFit1084->GetYaxis()->SetLabelFont(42);
   lineFit1084->GetYaxis()->SetTitleFont(42);
   lineFit1084->SetParameter(0,0.240915);
   lineFit1084->SetParError(0,0.1020146);
   lineFit1084->SetParLimits(0,0,0);
   lineFit1084->SetParameter(1,-0.00625);
   lineFit1084->SetParError(1,0.005632813);
   lineFit1084->SetParLimits(1,0,0);
   lineFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1084);
   gre->Draw("p ");
   
   TF1 *lineFit1085 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1085->SetFillColor(19);
   lineFit1085->SetFillStyle(0);
   lineFit1085->SetLineColor(15);
   lineFit1085->SetLineWidth(2);
   lineFit1085->SetChisquare(5.463015e-29);
   lineFit1085->SetNDF(0);
   lineFit1085->GetXaxis()->SetLabelFont(42);
   lineFit1085->GetXaxis()->SetTitleOffset(1);
   lineFit1085->GetXaxis()->SetTitleFont(42);
   lineFit1085->GetYaxis()->SetLabelFont(42);
   lineFit1085->GetYaxis()->SetTitleFont(42);
   lineFit1085->SetParameter(0,0.240915);
   lineFit1085->SetParError(0,0.1020146);
   lineFit1085->SetParLimits(0,0,0);
   lineFit1085->SetParameter(1,-0.00625);
   lineFit1085->SetParError(1,0.005632813);
   lineFit1085->SetParLimits(1,0,0);
   lineFit1085->Draw("same");
   
   Double_t 30.000000 ppm_fx1085[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1085[2] = {
   1.390915,
   1.115915};
   Double_t 30.000000 ppm_fex1085[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1085[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,30.000000 ppm_fx1085,30.000000 ppm_fy1085,30.000000 ppm_fex1085,30.000000 ppm_fey1085);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(16);
   gre->SetMarkerColor(16);
   
   TH1F *Graph_30dO000000sPppm1085 = new TH1F("Graph_30dO000000sPppm1085","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1085->SetMinimum(1.069297);
   Graph_30dO000000sPppm1085->SetMaximum(1.437533);
   Graph_30dO000000sPppm1085->SetDirectory(0);
   Graph_30dO000000sPppm1085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1085->SetLineColor(ci);
   Graph_30dO000000sPppm1085->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1085->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1085->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1085->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1085->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1085->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1085->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1085);
   
   
   TF1 *lineFit1086 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1086->SetFillColor(19);
   lineFit1086->SetFillStyle(0);
   lineFit1086->SetLineColor(16);
   lineFit1086->SetLineWidth(2);
   lineFit1086->SetChisquare(8.779672e-26);
   lineFit1086->SetNDF(0);
   lineFit1086->GetXaxis()->SetLabelFont(42);
   lineFit1086->GetXaxis()->SetTitleOffset(1);
   lineFit1086->GetXaxis()->SetTitleFont(42);
   lineFit1086->GetYaxis()->SetLabelFont(42);
   lineFit1086->GetYaxis()->SetTitleFont(42);
   lineFit1086->SetParameter(0,2.490915);
   lineFit1086->SetParError(0,0.1020146);
   lineFit1086->SetParLimits(0,0,0);
   lineFit1086->SetParameter(1,-0.06875);
   lineFit1086->SetParError(1,0.005632813);
   lineFit1086->SetParLimits(1,0,0);
   lineFit1086->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1086);
   gre->Draw("p ");
   
   TF1 *lineFit1087 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1087->SetFillColor(19);
   lineFit1087->SetFillStyle(0);
   lineFit1087->SetLineColor(16);
   lineFit1087->SetLineWidth(2);
   lineFit1087->SetChisquare(8.779672e-26);
   lineFit1087->SetNDF(0);
   lineFit1087->GetXaxis()->SetLabelFont(42);
   lineFit1087->GetXaxis()->SetTitleOffset(1);
   lineFit1087->GetXaxis()->SetTitleFont(42);
   lineFit1087->GetYaxis()->SetLabelFont(42);
   lineFit1087->GetYaxis()->SetTitleFont(42);
   lineFit1087->SetParameter(0,2.490915);
   lineFit1087->SetParError(0,0.1020146);
   lineFit1087->SetParLimits(0,0,0);
   lineFit1087->SetParameter(1,-0.06875);
   lineFit1087->SetParError(1,0.005632813);
   lineFit1087->SetParLimits(1,0,0);
   lineFit1087->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","2.06e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(16);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(16);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","1.78e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(15);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(15);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","#minus4.52e#minus87 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(14);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(14);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","2.21e-236 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(13);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(13);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","2.46e-299 ppm","lpf");
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
