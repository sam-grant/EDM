void Scans_NSUBRUN_175()
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
   
   Double_t -30.000000 ppm_fx1181[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1181[2] = {
   -2.329389,
   -1.854389};
   Double_t -30.000000 ppm_fex1181[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1181[2] = {
   0.0456595,
   0.0456595};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1181,-30.000000 ppm_fy1181,-30.000000 ppm_fex1181,-30.000000 ppm_fey1181);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181","",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->SetMinimum(-3);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->SetMaximum(2);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetXaxis()->SetTitle("QHV [kV]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1001101110291055108911311181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_-30.000000 ppm1001101110291055108911311181);
   
   
   TF1 *lineFit1182 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1182->SetFillColor(19);
   lineFit1182->SetFillStyle(0);
   lineFit1182->SetLineWidth(2);
   lineFit1182->SetChisquare(2.84974e-26);
   lineFit1182->SetNDF(0);
   lineFit1182->GetXaxis()->SetLabelFont(42);
   lineFit1182->GetXaxis()->SetTitleOffset(1);
   lineFit1182->GetXaxis()->SetTitleFont(42);
   lineFit1182->GetYaxis()->SetLabelFont(42);
   lineFit1182->GetYaxis()->SetTitleFont(42);
   lineFit1182->SetParameter(0,-4.229389);
   lineFit1182->SetParError(0,0.2923635);
   lineFit1182->SetParLimits(0,0,0);
   lineFit1182->SetParameter(1,0.11875);
   lineFit1182->SetParError(1,0.01614307);
   lineFit1182->SetParLimits(1,0,0);
   lineFit1182->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1182);
   gre->Draw("ap");
   
   TF1 *lineFit1183 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1183->SetFillColor(19);
   lineFit1183->SetFillStyle(0);
   lineFit1183->SetLineWidth(2);
   lineFit1183->SetChisquare(2.84974e-26);
   lineFit1183->SetNDF(0);
   lineFit1183->GetXaxis()->SetLabelFont(42);
   lineFit1183->GetXaxis()->SetTitleOffset(1);
   lineFit1183->GetXaxis()->SetTitleFont(42);
   lineFit1183->GetYaxis()->SetLabelFont(42);
   lineFit1183->GetYaxis()->SetTitleFont(42);
   lineFit1183->SetParameter(0,-4.229389);
   lineFit1183->SetParError(0,0.2923635);
   lineFit1183->SetParLimits(0,0,0);
   lineFit1183->SetParameter(1,0.11875);
   lineFit1183->SetParError(1,0.01614307);
   lineFit1183->SetParLimits(1,0,0);
   lineFit1183->Draw("same");
   
   Double_t -10.000000 ppm_fx1183[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1183[2] = {
   -1.079389,
   -0.8543892};
   Double_t -10.000000 ppm_fex1183[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1183[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1183,-10.000000 ppm_fy1183,-10.000000 ppm_fex1183,-10.000000 ppm_fey1183);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->SetMinimum(-1.156681);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->SetMaximum(-0.7770978);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1003101310311057109111331183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_-10.000000 ppm1003101310311057109111331183);
   
   
   TF1 *lineFit1184 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1184->SetFillColor(19);
   lineFit1184->SetFillStyle(0);
   lineFit1184->SetLineColor(2);
   lineFit1184->SetLineWidth(2);
   lineFit1184->SetChisquare(1.146991e-26);
   lineFit1184->SetNDF(0);
   lineFit1184->GetXaxis()->SetLabelFont(42);
   lineFit1184->GetXaxis()->SetTitleOffset(1);
   lineFit1184->GetXaxis()->SetTitleFont(42);
   lineFit1184->GetYaxis()->SetLabelFont(42);
   lineFit1184->GetYaxis()->SetTitleFont(42);
   lineFit1184->SetParameter(0,-1.979389);
   lineFit1184->SetParError(0,0.2923635);
   lineFit1184->SetParLimits(0,0,0);
   lineFit1184->SetParameter(1,0.05625);
   lineFit1184->SetParError(1,0.01614307);
   lineFit1184->SetParLimits(1,0,0);
   lineFit1184->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1184);
   gre->Draw("p ");
   
   TF1 *lineFit1185 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1185->SetFillColor(19);
   lineFit1185->SetFillStyle(0);
   lineFit1185->SetLineColor(2);
   lineFit1185->SetLineWidth(2);
   lineFit1185->SetChisquare(1.146991e-26);
   lineFit1185->SetNDF(0);
   lineFit1185->GetXaxis()->SetLabelFont(42);
   lineFit1185->GetXaxis()->SetTitleOffset(1);
   lineFit1185->GetXaxis()->SetTitleFont(42);
   lineFit1185->GetYaxis()->SetLabelFont(42);
   lineFit1185->GetYaxis()->SetTitleFont(42);
   lineFit1185->SetParameter(0,-1.979389);
   lineFit1185->SetParError(0,0.2923635);
   lineFit1185->SetParLimits(0,0,0);
   lineFit1185->SetParameter(1,0.05625);
   lineFit1185->SetParError(1,0.01614307);
   lineFit1185->SetParLimits(1,0,0);
   lineFit1185->Draw("same");
   
   Double_t 10.000000 ppm_fx1185[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1185[2] = {
   0.1706108,
   0.1456108};
   Double_t 10.000000 ppm_fex1185[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1185[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,10.000000 ppm_fx1185,10.000000 ppm_fy1185,10.000000 ppm_fex1185,10.000000 ppm_fey1185);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->SetMinimum(0.08831937);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->SetMaximum(0.2279022);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1005101510331059109311351185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_10.000000 ppm1005101510331059109311351185);
   
   
   TF1 *lineFit1186 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1186->SetFillColor(19);
   lineFit1186->SetFillStyle(0);
   lineFit1186->SetLineColor(3);
   lineFit1186->SetLineWidth(2);
   lineFit1186->SetChisquare(1.348749e-28);
   lineFit1186->SetNDF(0);
   lineFit1186->GetXaxis()->SetLabelFont(42);
   lineFit1186->GetXaxis()->SetTitleOffset(1);
   lineFit1186->GetXaxis()->SetTitleFont(42);
   lineFit1186->GetYaxis()->SetLabelFont(42);
   lineFit1186->GetYaxis()->SetTitleFont(42);
   lineFit1186->SetParameter(0,0.2706108);
   lineFit1186->SetParError(0,0.2923635);
   lineFit1186->SetParLimits(0,0,0);
   lineFit1186->SetParameter(1,-0.00625);
   lineFit1186->SetParError(1,0.01614307);
   lineFit1186->SetParLimits(1,0,0);
   lineFit1186->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1186);
   gre->Draw("p ");
   
   TF1 *lineFit1187 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1187->SetFillColor(19);
   lineFit1187->SetFillStyle(0);
   lineFit1187->SetLineColor(3);
   lineFit1187->SetLineWidth(2);
   lineFit1187->SetChisquare(1.348749e-28);
   lineFit1187->SetNDF(0);
   lineFit1187->GetXaxis()->SetLabelFont(42);
   lineFit1187->GetXaxis()->SetTitleOffset(1);
   lineFit1187->GetXaxis()->SetTitleFont(42);
   lineFit1187->GetYaxis()->SetLabelFont(42);
   lineFit1187->GetYaxis()->SetTitleFont(42);
   lineFit1187->SetParameter(0,0.2706108);
   lineFit1187->SetParError(0,0.2923635);
   lineFit1187->SetParLimits(0,0,0);
   lineFit1187->SetParameter(1,-0.00625);
   lineFit1187->SetParError(1,0.01614307);
   lineFit1187->SetParLimits(1,0,0);
   lineFit1187->Draw("same");
   
   Double_t 30.000000 ppm_fx1187[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1187[2] = {
   1.420611,
   1.145611};
   Double_t 30.000000 ppm_fex1187[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1187[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,30.000000 ppm_fx1187,30.000000 ppm_fy1187,30.000000 ppm_fex1187,30.000000 ppm_fey1187);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->SetMinimum(1.063319);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->SetMaximum(1.502902);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1007101710351061109511371187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_30.000000 ppm1007101710351061109511371187);
   
   
   TF1 *lineFit1188 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1188->SetFillColor(19);
   lineFit1188->SetFillStyle(0);
   lineFit1188->SetLineColor(4);
   lineFit1188->SetLineWidth(2);
   lineFit1188->SetChisquare(3.490636e-26);
   lineFit1188->SetNDF(0);
   lineFit1188->GetXaxis()->SetLabelFont(42);
   lineFit1188->GetXaxis()->SetTitleOffset(1);
   lineFit1188->GetXaxis()->SetTitleFont(42);
   lineFit1188->GetYaxis()->SetLabelFont(42);
   lineFit1188->GetYaxis()->SetTitleFont(42);
   lineFit1188->SetParameter(0,2.520611);
   lineFit1188->SetParError(0,0.2923635);
   lineFit1188->SetParLimits(0,0,0);
   lineFit1188->SetParameter(1,-0.06875);
   lineFit1188->SetParError(1,0.01614307);
   lineFit1188->SetParLimits(1,0,0);
   lineFit1188->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1188);
   gre->Draw("p ");
   
   TF1 *lineFit1189 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1189->SetFillColor(19);
   lineFit1189->SetFillStyle(0);
   lineFit1189->SetLineColor(4);
   lineFit1189->SetLineWidth(2);
   lineFit1189->SetChisquare(3.490636e-26);
   lineFit1189->SetNDF(0);
   lineFit1189->GetXaxis()->SetLabelFont(42);
   lineFit1189->GetXaxis()->SetTitleOffset(1);
   lineFit1189->GetXaxis()->SetTitleFont(42);
   lineFit1189->GetYaxis()->SetLabelFont(42);
   lineFit1189->GetYaxis()->SetTitleFont(42);
   lineFit1189->SetParameter(0,2.520611);
   lineFit1189->SetParError(0,0.2923635);
   lineFit1189->SetParLimits(0,0,0);
   lineFit1189->SetParameter(1,-0.06875);
   lineFit1189->SetParError(1,0.01614307);
   lineFit1189->SetParLimits(1,0,0);
   lineFit1189->Draw("same");
   
   Double_t -30.000000 ppm_fx1189[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1189[2] = {
   -2.350281,
   -1.875281};
   Double_t -30.000000 ppm_fex1189[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1189[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1189,-30.000000 ppm_fy1189,-30.000000 ppm_fex1189,-30.000000 ppm_fey1189);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->SetMinimum(-2.427475);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->SetMaximum(-1.798087);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm101910371063109711391189->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_-30.000000 ppm101910371063109711391189);
   
   
   TF1 *lineFit1190 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1190->SetFillColor(19);
   lineFit1190->SetFillStyle(0);
   lineFit1190->SetLineColor(5);
   lineFit1190->SetLineWidth(2);
   lineFit1190->SetChisquare(3.969524e-26);
   lineFit1190->SetNDF(0);
   lineFit1190->GetXaxis()->SetLabelFont(42);
   lineFit1190->GetXaxis()->SetTitleOffset(1);
   lineFit1190->GetXaxis()->SetTitleFont(42);
   lineFit1190->GetYaxis()->SetLabelFont(42);
   lineFit1190->GetYaxis()->SetTitleFont(42);
   lineFit1190->SetParameter(0,-4.250281);
   lineFit1190->SetParError(0,0.1584479);
   lineFit1190->SetParLimits(0,0,0);
   lineFit1190->SetParameter(1,0.11875);
   lineFit1190->SetParError(1,0.00874882);
   lineFit1190->SetParLimits(1,0,0);
   lineFit1190->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1190);
   gre->Draw("p ");
   
   TF1 *lineFit1191 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1191->SetFillColor(19);
   lineFit1191->SetFillStyle(0);
   lineFit1191->SetLineColor(5);
   lineFit1191->SetLineWidth(2);
   lineFit1191->SetChisquare(3.969524e-26);
   lineFit1191->SetNDF(0);
   lineFit1191->GetXaxis()->SetLabelFont(42);
   lineFit1191->GetXaxis()->SetTitleOffset(1);
   lineFit1191->GetXaxis()->SetTitleFont(42);
   lineFit1191->GetYaxis()->SetLabelFont(42);
   lineFit1191->GetYaxis()->SetTitleFont(42);
   lineFit1191->SetParameter(0,-4.250281);
   lineFit1191->SetParError(0,0.1584479);
   lineFit1191->SetParLimits(0,0,0);
   lineFit1191->SetParameter(1,0.11875);
   lineFit1191->SetParError(1,0.00874882);
   lineFit1191->SetParLimits(1,0,0);
   lineFit1191->Draw("same");
   
   Double_t -10.000000 ppm_fx1191[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1191[2] = {
   -1.100281,
   -0.875281};
   Double_t -10.000000 ppm_fex1191[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1191[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1191,-10.000000 ppm_fy1191,-10.000000 ppm_fex1191,-10.000000 ppm_fey1191);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->SetMinimum(-1.152475);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->SetMaximum(-0.8230865);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm102110391065109911411191->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_-10.000000 ppm102110391065109911411191);
   
   
   TF1 *lineFit1192 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1192->SetFillColor(19);
   lineFit1192->SetFillStyle(0);
   lineFit1192->SetLineColor(6);
   lineFit1192->SetLineWidth(2);
   lineFit1192->SetChisquare(2.165927e-26);
   lineFit1192->SetNDF(0);
   lineFit1192->GetXaxis()->SetLabelFont(42);
   lineFit1192->GetXaxis()->SetTitleOffset(1);
   lineFit1192->GetXaxis()->SetTitleFont(42);
   lineFit1192->GetYaxis()->SetLabelFont(42);
   lineFit1192->GetYaxis()->SetTitleFont(42);
   lineFit1192->SetParameter(0,-2.000281);
   lineFit1192->SetParError(0,0.1584479);
   lineFit1192->SetParLimits(0,0,0);
   lineFit1192->SetParameter(1,0.05625);
   lineFit1192->SetParError(1,0.00874882);
   lineFit1192->SetParLimits(1,0,0);
   lineFit1192->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1192);
   gre->Draw("p ");
   
   TF1 *lineFit1193 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1193->SetFillColor(19);
   lineFit1193->SetFillStyle(0);
   lineFit1193->SetLineColor(6);
   lineFit1193->SetLineWidth(2);
   lineFit1193->SetChisquare(2.165927e-26);
   lineFit1193->SetNDF(0);
   lineFit1193->GetXaxis()->SetLabelFont(42);
   lineFit1193->GetXaxis()->SetTitleOffset(1);
   lineFit1193->GetXaxis()->SetTitleFont(42);
   lineFit1193->GetYaxis()->SetLabelFont(42);
   lineFit1193->GetYaxis()->SetTitleFont(42);
   lineFit1193->SetParameter(0,-2.000281);
   lineFit1193->SetParError(0,0.1584479);
   lineFit1193->SetParLimits(0,0,0);
   lineFit1193->SetParameter(1,0.05625);
   lineFit1193->SetParError(1,0.00874882);
   lineFit1193->SetParLimits(1,0,0);
   lineFit1193->Draw("same");
   
   Double_t 10.000000 ppm_fx1193[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1193[2] = {
   0.149719,
   0.124719};
   Double_t 10.000000 ppm_fex1193[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1193[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,10.000000 ppm_fx1193,10.000000 ppm_fy1193,10.000000 ppm_fex1193,10.000000 ppm_fey1193);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->SetMinimum(0.09252451);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->SetMaximum(0.1819135);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm102310411067110111431193->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_10.000000 ppm102310411067110111431193);
   
   
   TF1 *lineFit1194 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1194->SetFillColor(19);
   lineFit1194->SetFillStyle(0);
   lineFit1194->SetLineColor(7);
   lineFit1194->SetLineWidth(2);
   lineFit1194->SetChisquare(1.258089e-29);
   lineFit1194->SetNDF(0);
   lineFit1194->GetXaxis()->SetLabelFont(42);
   lineFit1194->GetXaxis()->SetTitleOffset(1);
   lineFit1194->GetXaxis()->SetTitleFont(42);
   lineFit1194->GetYaxis()->SetLabelFont(42);
   lineFit1194->GetYaxis()->SetTitleFont(42);
   lineFit1194->SetParameter(0,0.249719);
   lineFit1194->SetParError(0,0.1584479);
   lineFit1194->SetParLimits(0,0,0);
   lineFit1194->SetParameter(1,-0.00625);
   lineFit1194->SetParError(1,0.00874882);
   lineFit1194->SetParLimits(1,0,0);
   lineFit1194->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1194);
   gre->Draw("p ");
   
   TF1 *lineFit1195 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1195->SetFillColor(19);
   lineFit1195->SetFillStyle(0);
   lineFit1195->SetLineColor(7);
   lineFit1195->SetLineWidth(2);
   lineFit1195->SetChisquare(1.258089e-29);
   lineFit1195->SetNDF(0);
   lineFit1195->GetXaxis()->SetLabelFont(42);
   lineFit1195->GetXaxis()->SetTitleOffset(1);
   lineFit1195->GetXaxis()->SetTitleFont(42);
   lineFit1195->GetYaxis()->SetLabelFont(42);
   lineFit1195->GetYaxis()->SetTitleFont(42);
   lineFit1195->SetParameter(0,0.249719);
   lineFit1195->SetParError(0,0.1584479);
   lineFit1195->SetParLimits(0,0,0);
   lineFit1195->SetParameter(1,-0.00625);
   lineFit1195->SetParError(1,0.00874882);
   lineFit1195->SetParLimits(1,0,0);
   lineFit1195->Draw("same");
   
   Double_t 30.000000 ppm_fx1195[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1195[2] = {
   1.399719,
   1.124719};
   Double_t 30.000000 ppm_fex1195[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1195[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,30.000000 ppm_fx1195,30.000000 ppm_fy1195,30.000000 ppm_fex1195,30.000000 ppm_fey1195);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->SetMinimum(1.067525);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->SetMaximum(1.456913);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm102510431069110311451195->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_30.000000 ppm102510431069110311451195);
   
   
   TF1 *lineFit1196 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1196->SetFillColor(19);
   lineFit1196->SetFillStyle(0);
   lineFit1196->SetLineColor(8);
   lineFit1196->SetLineWidth(2);
   lineFit1196->SetChisquare(3.172398e-26);
   lineFit1196->SetNDF(0);
   lineFit1196->GetXaxis()->SetLabelFont(42);
   lineFit1196->GetXaxis()->SetTitleOffset(1);
   lineFit1196->GetXaxis()->SetTitleFont(42);
   lineFit1196->GetYaxis()->SetLabelFont(42);
   lineFit1196->GetYaxis()->SetTitleFont(42);
   lineFit1196->SetParameter(0,2.499719);
   lineFit1196->SetParError(0,0.1584479);
   lineFit1196->SetParLimits(0,0,0);
   lineFit1196->SetParameter(1,-0.06875);
   lineFit1196->SetParError(1,0.00874882);
   lineFit1196->SetParLimits(1,0,0);
   lineFit1196->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1196);
   gre->Draw("p ");
   
   TF1 *lineFit1197 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1197->SetFillColor(19);
   lineFit1197->SetFillStyle(0);
   lineFit1197->SetLineColor(8);
   lineFit1197->SetLineWidth(2);
   lineFit1197->SetChisquare(3.172398e-26);
   lineFit1197->SetNDF(0);
   lineFit1197->GetXaxis()->SetLabelFont(42);
   lineFit1197->GetXaxis()->SetTitleOffset(1);
   lineFit1197->GetXaxis()->SetTitleFont(42);
   lineFit1197->GetYaxis()->SetLabelFont(42);
   lineFit1197->GetYaxis()->SetTitleFont(42);
   lineFit1197->SetParameter(0,2.499719);
   lineFit1197->SetParError(0,0.1584479);
   lineFit1197->SetParLimits(0,0,0);
   lineFit1197->SetParameter(1,-0.06875);
   lineFit1197->SetParError(1,0.00874882);
   lineFit1197->SetParLimits(1,0,0);
   lineFit1197->Draw("same");
   
   Double_t -30.000000 ppm_fx1197[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1197[2] = {
   -2.356066,
   -1.881066};
   Double_t -30.000000 ppm_fex1197[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1197[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1197,-30.000000 ppm_fy1197,-30.000000 ppm_fex1197,-30.000000 ppm_fey1197);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197 = new TH1F("Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->SetMinimum(-2.426311);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->SetMaximum(-1.810821);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10451071110511471197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_-30.000000 ppm10451071110511471197);
   
   
   TF1 *lineFit1198 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1198->SetFillColor(19);
   lineFit1198->SetFillStyle(0);
   lineFit1198->SetLineColor(9);
   lineFit1198->SetLineWidth(2);
   lineFit1198->SetChisquare(2.932805e-25);
   lineFit1198->SetNDF(0);
   lineFit1198->GetXaxis()->SetLabelFont(42);
   lineFit1198->GetXaxis()->SetTitleOffset(1);
   lineFit1198->GetXaxis()->SetTitleFont(42);
   lineFit1198->GetYaxis()->SetLabelFont(42);
   lineFit1198->GetYaxis()->SetTitleFont(42);
   lineFit1198->SetParameter(0,-4.256066);
   lineFit1198->SetParError(0,0.1213648);
   lineFit1198->SetParLimits(0,0,0);
   lineFit1198->SetParameter(1,0.11875);
   lineFit1198->SetParError(1,0.006701251);
   lineFit1198->SetParLimits(1,0,0);
   lineFit1198->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1198);
   gre->Draw("p ");
   
   TF1 *lineFit1199 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1199->SetFillColor(19);
   lineFit1199->SetFillStyle(0);
   lineFit1199->SetLineColor(9);
   lineFit1199->SetLineWidth(2);
   lineFit1199->SetChisquare(2.932805e-25);
   lineFit1199->SetNDF(0);
   lineFit1199->GetXaxis()->SetLabelFont(42);
   lineFit1199->GetXaxis()->SetTitleOffset(1);
   lineFit1199->GetXaxis()->SetTitleFont(42);
   lineFit1199->GetYaxis()->SetLabelFont(42);
   lineFit1199->GetYaxis()->SetTitleFont(42);
   lineFit1199->SetParameter(0,-4.256066);
   lineFit1199->SetParError(0,0.1213648);
   lineFit1199->SetParLimits(0,0,0);
   lineFit1199->SetParameter(1,0.11875);
   lineFit1199->SetParError(1,0.006701251);
   lineFit1199->SetParLimits(1,0,0);
   lineFit1199->Draw("same");
   
   Double_t -10.000000 ppm_fx1199[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1199[2] = {
   -1.106066,
   -0.8810662};
   Double_t -10.000000 ppm_fex1199[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1199[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1199,-10.000000 ppm_fy1199,-10.000000 ppm_fex1199,-10.000000 ppm_fey1199);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199 = new TH1F("Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->SetMinimum(-1.151311);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->SetMaximum(-0.8358214);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10471073110711491199->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_-10.000000 ppm10471073110711491199);
   
   
   TF1 *lineFit1200 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1200->SetFillColor(19);
   lineFit1200->SetFillStyle(0);
   lineFit1200->SetLineColor(10);
   lineFit1200->SetLineWidth(2);
   lineFit1200->SetChisquare(1.210794e-25);
   lineFit1200->SetNDF(0);
   lineFit1200->GetXaxis()->SetLabelFont(42);
   lineFit1200->GetXaxis()->SetTitleOffset(1);
   lineFit1200->GetXaxis()->SetTitleFont(42);
   lineFit1200->GetYaxis()->SetLabelFont(42);
   lineFit1200->GetYaxis()->SetTitleFont(42);
   lineFit1200->SetParameter(0,-2.006066);
   lineFit1200->SetParError(0,0.1213648);
   lineFit1200->SetParLimits(0,0,0);
   lineFit1200->SetParameter(1,0.05625);
   lineFit1200->SetParError(1,0.006701251);
   lineFit1200->SetParLimits(1,0,0);
   lineFit1200->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1200);
   gre->Draw("p ");
   
   TF1 *lineFit1201 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1201->SetFillColor(19);
   lineFit1201->SetFillStyle(0);
   lineFit1201->SetLineColor(10);
   lineFit1201->SetLineWidth(2);
   lineFit1201->SetChisquare(1.210794e-25);
   lineFit1201->SetNDF(0);
   lineFit1201->GetXaxis()->SetLabelFont(42);
   lineFit1201->GetXaxis()->SetTitleOffset(1);
   lineFit1201->GetXaxis()->SetTitleFont(42);
   lineFit1201->GetYaxis()->SetLabelFont(42);
   lineFit1201->GetYaxis()->SetTitleFont(42);
   lineFit1201->SetParameter(0,-2.006066);
   lineFit1201->SetParError(0,0.1213648);
   lineFit1201->SetParLimits(0,0,0);
   lineFit1201->SetParameter(1,0.05625);
   lineFit1201->SetParError(1,0.006701251);
   lineFit1201->SetParLimits(1,0,0);
   lineFit1201->Draw("same");
   
   Double_t 10.000000 ppm_fx1201[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1201[2] = {
   0.1439338,
   0.1189338};
   Double_t 10.000000 ppm_fex1201[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1201[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,10.000000 ppm_fx1201,10.000000 ppm_fy1201,10.000000 ppm_fex1201,10.000000 ppm_fey1201);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201 = new TH1F("Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->SetMinimum(0.09368897);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->SetMaximum(0.1691786);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10491075110911511201->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_10.000000 ppm10491075110911511201);
   
   
   TF1 *lineFit1202 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1202->SetFillColor(19);
   lineFit1202->SetFillStyle(0);
   lineFit1202->SetLineColor(11);
   lineFit1202->SetLineWidth(2);
   lineFit1202->SetChisquare(5.939891e-28);
   lineFit1202->SetNDF(0);
   lineFit1202->GetXaxis()->SetLabelFont(42);
   lineFit1202->GetXaxis()->SetTitleOffset(1);
   lineFit1202->GetXaxis()->SetTitleFont(42);
   lineFit1202->GetYaxis()->SetLabelFont(42);
   lineFit1202->GetYaxis()->SetTitleFont(42);
   lineFit1202->SetParameter(0,0.2439338);
   lineFit1202->SetParError(0,0.1213648);
   lineFit1202->SetParLimits(0,0,0);
   lineFit1202->SetParameter(1,-0.00625);
   lineFit1202->SetParError(1,0.006701251);
   lineFit1202->SetParLimits(1,0,0);
   lineFit1202->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1202);
   gre->Draw("p ");
   
   TF1 *lineFit1203 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1203->SetFillColor(19);
   lineFit1203->SetFillStyle(0);
   lineFit1203->SetLineColor(11);
   lineFit1203->SetLineWidth(2);
   lineFit1203->SetChisquare(5.939891e-28);
   lineFit1203->SetNDF(0);
   lineFit1203->GetXaxis()->SetLabelFont(42);
   lineFit1203->GetXaxis()->SetTitleOffset(1);
   lineFit1203->GetXaxis()->SetTitleFont(42);
   lineFit1203->GetYaxis()->SetLabelFont(42);
   lineFit1203->GetYaxis()->SetTitleFont(42);
   lineFit1203->SetParameter(0,0.2439338);
   lineFit1203->SetParError(0,0.1213648);
   lineFit1203->SetParLimits(0,0,0);
   lineFit1203->SetParameter(1,-0.00625);
   lineFit1203->SetParError(1,0.006701251);
   lineFit1203->SetParLimits(1,0,0);
   lineFit1203->Draw("same");
   
   Double_t 30.000000 ppm_fx1203[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1203[2] = {
   1.393934,
   1.118934};
   Double_t 30.000000 ppm_fex1203[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1203[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,30.000000 ppm_fx1203,30.000000 ppm_fy1203,30.000000 ppm_fex1203,30.000000 ppm_fey1203);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(12);
   gre->SetMarkerColor(12);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203 = new TH1F("Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->SetMinimum(1.068689);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->SetMaximum(1.444179);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10511077111111531203->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_30.000000 ppm10511077111111531203);
   
   
   TF1 *lineFit1204 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1204->SetFillColor(19);
   lineFit1204->SetFillStyle(0);
   lineFit1204->SetLineColor(12);
   lineFit1204->SetLineWidth(2);
   lineFit1204->SetChisquare(1.961151e-25);
   lineFit1204->SetNDF(0);
   lineFit1204->GetXaxis()->SetLabelFont(42);
   lineFit1204->GetXaxis()->SetTitleOffset(1);
   lineFit1204->GetXaxis()->SetTitleFont(42);
   lineFit1204->GetYaxis()->SetLabelFont(42);
   lineFit1204->GetYaxis()->SetTitleFont(42);
   lineFit1204->SetParameter(0,2.493934);
   lineFit1204->SetParError(0,0.1213648);
   lineFit1204->SetParLimits(0,0,0);
   lineFit1204->SetParameter(1,-0.06875);
   lineFit1204->SetParError(1,0.006701251);
   lineFit1204->SetParLimits(1,0,0);
   lineFit1204->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1204);
   gre->Draw("p ");
   
   TF1 *lineFit1205 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1205->SetFillColor(19);
   lineFit1205->SetFillStyle(0);
   lineFit1205->SetLineColor(12);
   lineFit1205->SetLineWidth(2);
   lineFit1205->SetChisquare(1.961151e-25);
   lineFit1205->SetNDF(0);
   lineFit1205->GetXaxis()->SetLabelFont(42);
   lineFit1205->GetXaxis()->SetTitleOffset(1);
   lineFit1205->GetXaxis()->SetTitleFont(42);
   lineFit1205->GetYaxis()->SetLabelFont(42);
   lineFit1205->GetYaxis()->SetTitleFont(42);
   lineFit1205->SetParameter(0,2.493934);
   lineFit1205->SetParError(0,0.1213648);
   lineFit1205->SetParLimits(0,0,0);
   lineFit1205->SetParameter(1,-0.06875);
   lineFit1205->SetParError(1,0.006701251);
   lineFit1205->SetParLimits(1,0,0);
   lineFit1205->Draw("same");
   
   Double_t -30.000000 ppm_fx1205[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1205[2] = {
   -2.359085,
   -1.884085};
   Double_t -30.000000 ppm_fex1205[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1205[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1205,-30.000000 ppm_fy1205,-30.000000 ppm_fex1205,-30.000000 ppm_fey1205);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(13);
   gre->SetMarkerColor(13);
   
   TH1F *Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205 = new TH1F("Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->SetMinimum(-2.425703);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->SetMaximum(-1.817467);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1079111311551205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-30.000000 ppm1079111311551205);
   
   
   TF1 *lineFit1206 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1206->SetFillColor(19);
   lineFit1206->SetFillStyle(0);
   lineFit1206->SetLineColor(13);
   lineFit1206->SetLineWidth(2);
   lineFit1206->SetChisquare(1.274218e-25);
   lineFit1206->SetNDF(0);
   lineFit1206->GetXaxis()->SetLabelFont(42);
   lineFit1206->GetXaxis()->SetTitleOffset(1);
   lineFit1206->GetXaxis()->SetTitleFont(42);
   lineFit1206->GetYaxis()->SetLabelFont(42);
   lineFit1206->GetYaxis()->SetTitleFont(42);
   lineFit1206->SetParameter(0,-4.259085);
   lineFit1206->SetParError(0,0.1020146);
   lineFit1206->SetParLimits(0,0,0);
   lineFit1206->SetParameter(1,0.11875);
   lineFit1206->SetParError(1,0.005632813);
   lineFit1206->SetParLimits(1,0,0);
   lineFit1206->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1206);
   gre->Draw("p ");
   
   TF1 *lineFit1207 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1207->SetFillColor(19);
   lineFit1207->SetFillStyle(0);
   lineFit1207->SetLineColor(13);
   lineFit1207->SetLineWidth(2);
   lineFit1207->SetChisquare(1.274218e-25);
   lineFit1207->SetNDF(0);
   lineFit1207->GetXaxis()->SetLabelFont(42);
   lineFit1207->GetXaxis()->SetTitleOffset(1);
   lineFit1207->GetXaxis()->SetTitleFont(42);
   lineFit1207->GetYaxis()->SetLabelFont(42);
   lineFit1207->GetYaxis()->SetTitleFont(42);
   lineFit1207->SetParameter(0,-4.259085);
   lineFit1207->SetParError(0,0.1020146);
   lineFit1207->SetParLimits(0,0,0);
   lineFit1207->SetParameter(1,0.11875);
   lineFit1207->SetParError(1,0.005632813);
   lineFit1207->SetParLimits(1,0,0);
   lineFit1207->Draw("same");
   
   Double_t -10.000000 ppm_fx1207[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1207[2] = {
   -1.109085,
   -0.884085};
   Double_t -10.000000 ppm_fex1207[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1207[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1207,-10.000000 ppm_fy1207,-10.000000 ppm_fex1207,-10.000000 ppm_fey1207);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(14);
   gre->SetMarkerColor(14);
   
   TH1F *Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207 = new TH1F("Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->SetMinimum(-1.150703);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->SetMaximum(-0.8424666);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1081111511571207->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-10.000000 ppm1081111511571207);
   
   
   TF1 *lineFit1208 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1208->SetFillColor(19);
   lineFit1208->SetFillStyle(0);
   lineFit1208->SetLineColor(14);
   lineFit1208->SetLineWidth(2);
   lineFit1208->SetChisquare(1.214003e-27);
   lineFit1208->SetNDF(0);
   lineFit1208->GetXaxis()->SetLabelFont(42);
   lineFit1208->GetXaxis()->SetTitleOffset(1);
   lineFit1208->GetXaxis()->SetTitleFont(42);
   lineFit1208->GetYaxis()->SetLabelFont(42);
   lineFit1208->GetYaxis()->SetTitleFont(42);
   lineFit1208->SetParameter(0,-2.009085);
   lineFit1208->SetParError(0,0.1020146);
   lineFit1208->SetParLimits(0,0,0);
   lineFit1208->SetParameter(1,0.05625);
   lineFit1208->SetParError(1,0.005632813);
   lineFit1208->SetParLimits(1,0,0);
   lineFit1208->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1208);
   gre->Draw("p ");
   
   TF1 *lineFit1209 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1209->SetFillColor(19);
   lineFit1209->SetFillStyle(0);
   lineFit1209->SetLineColor(14);
   lineFit1209->SetLineWidth(2);
   lineFit1209->SetChisquare(1.214003e-27);
   lineFit1209->SetNDF(0);
   lineFit1209->GetXaxis()->SetLabelFont(42);
   lineFit1209->GetXaxis()->SetTitleOffset(1);
   lineFit1209->GetXaxis()->SetTitleFont(42);
   lineFit1209->GetYaxis()->SetLabelFont(42);
   lineFit1209->GetYaxis()->SetTitleFont(42);
   lineFit1209->SetParameter(0,-2.009085);
   lineFit1209->SetParError(0,0.1020146);
   lineFit1209->SetParLimits(0,0,0);
   lineFit1209->SetParameter(1,0.05625);
   lineFit1209->SetParError(1,0.005632813);
   lineFit1209->SetParLimits(1,0,0);
   lineFit1209->Draw("same");
   
   Double_t 10.000000 ppm_fx1209[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1209[2] = {
   0.140915,
   0.115915};
   Double_t 10.000000 ppm_fex1209[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1209[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,10.000000 ppm_fx1209,10.000000 ppm_fy1209,10.000000 ppm_fex1209,10.000000 ppm_fey1209);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(15);
   gre->SetMarkerColor(15);
   
   TH1F *Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209 = new TH1F("Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->SetMinimum(0.0942966);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->SetMaximum(0.1625334);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->SetDirectory(0);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->SetLineColor(ci);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1083111711591209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_10.000000 ppm1083111711591209);
   
   
   TF1 *lineFit1210 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1210->SetFillColor(19);
   lineFit1210->SetFillStyle(0);
   lineFit1210->SetLineColor(15);
   lineFit1210->SetLineWidth(2);
   lineFit1210->SetChisquare(5.463015e-29);
   lineFit1210->SetNDF(0);
   lineFit1210->GetXaxis()->SetLabelFont(42);
   lineFit1210->GetXaxis()->SetTitleOffset(1);
   lineFit1210->GetXaxis()->SetTitleFont(42);
   lineFit1210->GetYaxis()->SetLabelFont(42);
   lineFit1210->GetYaxis()->SetTitleFont(42);
   lineFit1210->SetParameter(0,0.240915);
   lineFit1210->SetParError(0,0.1020146);
   lineFit1210->SetParLimits(0,0,0);
   lineFit1210->SetParameter(1,-0.00625);
   lineFit1210->SetParError(1,0.005632813);
   lineFit1210->SetParLimits(1,0,0);
   lineFit1210->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1210);
   gre->Draw("p ");
   
   TF1 *lineFit1211 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1211->SetFillColor(19);
   lineFit1211->SetFillStyle(0);
   lineFit1211->SetLineColor(15);
   lineFit1211->SetLineWidth(2);
   lineFit1211->SetChisquare(5.463015e-29);
   lineFit1211->SetNDF(0);
   lineFit1211->GetXaxis()->SetLabelFont(42);
   lineFit1211->GetXaxis()->SetTitleOffset(1);
   lineFit1211->GetXaxis()->SetTitleFont(42);
   lineFit1211->GetYaxis()->SetLabelFont(42);
   lineFit1211->GetYaxis()->SetTitleFont(42);
   lineFit1211->SetParameter(0,0.240915);
   lineFit1211->SetParError(0,0.1020146);
   lineFit1211->SetParLimits(0,0,0);
   lineFit1211->SetParameter(1,-0.00625);
   lineFit1211->SetParError(1,0.005632813);
   lineFit1211->SetParLimits(1,0,0);
   lineFit1211->Draw("same");
   
   Double_t 30.000000 ppm_fx1211[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1211[2] = {
   1.390915,
   1.115915};
   Double_t 30.000000 ppm_fex1211[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1211[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,30.000000 ppm_fx1211,30.000000 ppm_fy1211,30.000000 ppm_fex1211,30.000000 ppm_fey1211);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(16);
   gre->SetMarkerColor(16);
   
   TH1F *Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211 = new TH1F("Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->SetMinimum(1.069297);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->SetMaximum(1.437533);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->SetDirectory(0);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->SetLineColor(ci);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1085111911611211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_30.000000 ppm1085111911611211);
   
   
   TF1 *lineFit1212 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1212->SetFillColor(19);
   lineFit1212->SetFillStyle(0);
   lineFit1212->SetLineColor(16);
   lineFit1212->SetLineWidth(2);
   lineFit1212->SetChisquare(8.779672e-26);
   lineFit1212->SetNDF(0);
   lineFit1212->GetXaxis()->SetLabelFont(42);
   lineFit1212->GetXaxis()->SetTitleOffset(1);
   lineFit1212->GetXaxis()->SetTitleFont(42);
   lineFit1212->GetYaxis()->SetLabelFont(42);
   lineFit1212->GetYaxis()->SetTitleFont(42);
   lineFit1212->SetParameter(0,2.490915);
   lineFit1212->SetParError(0,0.1020146);
   lineFit1212->SetParLimits(0,0,0);
   lineFit1212->SetParameter(1,-0.06875);
   lineFit1212->SetParError(1,0.005632813);
   lineFit1212->SetParLimits(1,0,0);
   lineFit1212->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1212);
   gre->Draw("p ");
   
   TF1 *lineFit1213 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1213->SetFillColor(19);
   lineFit1213->SetFillStyle(0);
   lineFit1213->SetLineColor(16);
   lineFit1213->SetLineWidth(2);
   lineFit1213->SetChisquare(8.779672e-26);
   lineFit1213->SetNDF(0);
   lineFit1213->GetXaxis()->SetLabelFont(42);
   lineFit1213->GetXaxis()->SetTitleOffset(1);
   lineFit1213->GetXaxis()->SetTitleFont(42);
   lineFit1213->GetYaxis()->SetLabelFont(42);
   lineFit1213->GetYaxis()->SetTitleFont(42);
   lineFit1213->SetParameter(0,2.490915);
   lineFit1213->SetParError(0,0.1020146);
   lineFit1213->SetParLimits(0,0,0);
   lineFit1213->SetParameter(1,-0.06875);
   lineFit1213->SetParError(1,0.005632813);
   lineFit1213->SetParLimits(1,0,0);
   lineFit1213->Draw("same");
   
   Double_t -30.000000 ppm_fx1213[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1213[2] = {
   -2.360165,
   -1.885165};
   Double_t -30.000000 ppm_fex1213[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1213[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1213,-30.000000 ppm_fy1213,-30.000000 ppm_fex1213,-30.000000 ppm_fey1213);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(17);
   gre->SetMarkerColor(17);
   
   TH1F *Graph_Graph_Graph_mI30dO000000sPppm112111631213 = new TH1F("Graph_Graph_Graph_mI30dO000000sPppm112111631213","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->SetMinimum(-2.425486);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->SetMaximum(-1.819845);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->SetDirectory(0);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->SetLineColor(ci);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm112111631213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-30.000000 ppm112111631213);
   
   
   TF1 *lineFit1214 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1214->SetFillColor(19);
   lineFit1214->SetFillStyle(0);
   lineFit1214->SetLineColor(17);
   lineFit1214->SetLineWidth(2);
   lineFit1214->SetChisquare(9.803201e-25);
   lineFit1214->SetNDF(0);
   lineFit1214->GetXaxis()->SetLabelFont(42);
   lineFit1214->GetXaxis()->SetTitleOffset(1);
   lineFit1214->GetXaxis()->SetTitleFont(42);
   lineFit1214->GetYaxis()->SetLabelFont(42);
   lineFit1214->GetYaxis()->SetTitleFont(42);
   lineFit1214->SetParameter(0,-4.260165);
   lineFit1214->SetParError(0,0.0950896);
   lineFit1214->SetParLimits(0,0,0);
   lineFit1214->SetParameter(1,0.11875);
   lineFit1214->SetParError(1,0.005250445);
   lineFit1214->SetParLimits(1,0,0);
   lineFit1214->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1214);
   gre->Draw("p ");
   
   TF1 *lineFit1215 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1215->SetFillColor(19);
   lineFit1215->SetFillStyle(0);
   lineFit1215->SetLineColor(17);
   lineFit1215->SetLineWidth(2);
   lineFit1215->SetChisquare(9.803201e-25);
   lineFit1215->SetNDF(0);
   lineFit1215->GetXaxis()->SetLabelFont(42);
   lineFit1215->GetXaxis()->SetTitleOffset(1);
   lineFit1215->GetXaxis()->SetTitleFont(42);
   lineFit1215->GetYaxis()->SetLabelFont(42);
   lineFit1215->GetYaxis()->SetTitleFont(42);
   lineFit1215->SetParameter(0,-4.260165);
   lineFit1215->SetParError(0,0.0950896);
   lineFit1215->SetParLimits(0,0,0);
   lineFit1215->SetParameter(1,0.11875);
   lineFit1215->SetParError(1,0.005250445);
   lineFit1215->SetParLimits(1,0,0);
   lineFit1215->Draw("same");
   
   Double_t -10.000000 ppm_fx1215[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1215[2] = {
   -1.110165,
   -0.8851653};
   Double_t -10.000000 ppm_fex1215[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1215[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1215,-10.000000 ppm_fy1215,-10.000000 ppm_fex1215,-10.000000 ppm_fey1215);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(18);
   gre->SetMarkerColor(18);
   
   TH1F *Graph_Graph_Graph_mI10dO000000sPppm112311651215 = new TH1F("Graph_Graph_Graph_mI10dO000000sPppm112311651215","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->SetMinimum(-1.150486);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->SetMaximum(-0.8448447);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->SetDirectory(0);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->SetLineColor(ci);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm112311651215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-10.000000 ppm112311651215);
   
   
   TF1 *lineFit1216 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1216->SetFillColor(19);
   lineFit1216->SetFillStyle(0);
   lineFit1216->SetLineColor(18);
   lineFit1216->SetLineWidth(2);
   lineFit1216->SetChisquare(1.632004e-25);
   lineFit1216->SetNDF(0);
   lineFit1216->GetXaxis()->SetLabelFont(42);
   lineFit1216->GetXaxis()->SetTitleOffset(1);
   lineFit1216->GetXaxis()->SetTitleFont(42);
   lineFit1216->GetYaxis()->SetLabelFont(42);
   lineFit1216->GetYaxis()->SetTitleFont(42);
   lineFit1216->SetParameter(0,-2.010165);
   lineFit1216->SetParError(0,0.0950896);
   lineFit1216->SetParLimits(0,0,0);
   lineFit1216->SetParameter(1,0.05625);
   lineFit1216->SetParError(1,0.005250445);
   lineFit1216->SetParLimits(1,0,0);
   lineFit1216->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1216);
   gre->Draw("p ");
   
   TF1 *lineFit1217 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1217->SetFillColor(19);
   lineFit1217->SetFillStyle(0);
   lineFit1217->SetLineColor(18);
   lineFit1217->SetLineWidth(2);
   lineFit1217->SetChisquare(1.632004e-25);
   lineFit1217->SetNDF(0);
   lineFit1217->GetXaxis()->SetLabelFont(42);
   lineFit1217->GetXaxis()->SetTitleOffset(1);
   lineFit1217->GetXaxis()->SetTitleFont(42);
   lineFit1217->GetYaxis()->SetLabelFont(42);
   lineFit1217->GetYaxis()->SetTitleFont(42);
   lineFit1217->SetParameter(0,-2.010165);
   lineFit1217->SetParError(0,0.0950896);
   lineFit1217->SetParLimits(0,0,0);
   lineFit1217->SetParameter(1,0.05625);
   lineFit1217->SetParError(1,0.005250445);
   lineFit1217->SetParLimits(1,0,0);
   lineFit1217->Draw("same");
   
   Double_t 10.000000 ppm_fx1217[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1217[2] = {
   0.1398347,
   0.1148347};
   Double_t 10.000000 ppm_fex1217[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1217[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,10.000000 ppm_fx1217,10.000000 ppm_fy1217,10.000000 ppm_fex1217,10.000000 ppm_fey1217);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(19);
   gre->SetMarkerColor(19);
   
   TH1F *Graph_Graph_Graph_10dO000000sPppm112511671217 = new TH1F("Graph_Graph_Graph_10dO000000sPppm112511671217","Graph",100,15.6,20.4);
   Graph_Graph_Graph_10dO000000sPppm112511671217->SetMinimum(0.09451405);
   Graph_Graph_Graph_10dO000000sPppm112511671217->SetMaximum(0.1601553);
   Graph_Graph_Graph_10dO000000sPppm112511671217->SetDirectory(0);
   Graph_Graph_Graph_10dO000000sPppm112511671217->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_10dO000000sPppm112511671217->SetLineColor(ci);
   Graph_Graph_Graph_10dO000000sPppm112511671217->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm112511671217->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm112511671217->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm112511671217->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm112511671217->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm112511671217->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm112511671217->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm112511671217->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_10.000000 ppm112511671217);
   
   
   TF1 *lineFit1218 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1218->SetFillColor(19);
   lineFit1218->SetFillStyle(0);
   lineFit1218->SetLineColor(19);
   lineFit1218->SetLineWidth(2);
   lineFit1218->SetChisquare(3.976088e-27);
   lineFit1218->SetNDF(0);
   lineFit1218->GetXaxis()->SetLabelFont(42);
   lineFit1218->GetXaxis()->SetTitleOffset(1);
   lineFit1218->GetXaxis()->SetTitleFont(42);
   lineFit1218->GetYaxis()->SetLabelFont(42);
   lineFit1218->GetYaxis()->SetTitleFont(42);
   lineFit1218->SetParameter(0,0.2398347);
   lineFit1218->SetParError(0,0.0950896);
   lineFit1218->SetParLimits(0,0,0);
   lineFit1218->SetParameter(1,-0.00625);
   lineFit1218->SetParError(1,0.005250445);
   lineFit1218->SetParLimits(1,0,0);
   lineFit1218->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1218);
   gre->Draw("p ");
   
   TF1 *lineFit1219 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1219->SetFillColor(19);
   lineFit1219->SetFillStyle(0);
   lineFit1219->SetLineColor(19);
   lineFit1219->SetLineWidth(2);
   lineFit1219->SetChisquare(3.976088e-27);
   lineFit1219->SetNDF(0);
   lineFit1219->GetXaxis()->SetLabelFont(42);
   lineFit1219->GetXaxis()->SetTitleOffset(1);
   lineFit1219->GetXaxis()->SetTitleFont(42);
   lineFit1219->GetYaxis()->SetLabelFont(42);
   lineFit1219->GetYaxis()->SetTitleFont(42);
   lineFit1219->SetParameter(0,0.2398347);
   lineFit1219->SetParError(0,0.0950896);
   lineFit1219->SetParLimits(0,0,0);
   lineFit1219->SetParameter(1,-0.00625);
   lineFit1219->SetParError(1,0.005250445);
   lineFit1219->SetParLimits(1,0,0);
   lineFit1219->Draw("same");
   
   Double_t 30.000000 ppm_fx1219[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1219[2] = {
   1.389835,
   1.114835};
   Double_t 30.000000 ppm_fex1219[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1219[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,30.000000 ppm_fx1219,30.000000 ppm_fy1219,30.000000 ppm_fex1219,30.000000 ppm_fey1219);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(20);
   gre->SetMarkerColor(20);
   
   TH1F *Graph_Graph_Graph_30dO000000sPppm112711691219 = new TH1F("Graph_Graph_Graph_30dO000000sPppm112711691219","Graph",100,15.6,20.4);
   Graph_Graph_Graph_30dO000000sPppm112711691219->SetMinimum(1.069514);
   Graph_Graph_Graph_30dO000000sPppm112711691219->SetMaximum(1.435155);
   Graph_Graph_Graph_30dO000000sPppm112711691219->SetDirectory(0);
   Graph_Graph_Graph_30dO000000sPppm112711691219->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_30dO000000sPppm112711691219->SetLineColor(ci);
   Graph_Graph_Graph_30dO000000sPppm112711691219->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm112711691219->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm112711691219->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm112711691219->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm112711691219->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm112711691219->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm112711691219->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm112711691219->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_30.000000 ppm112711691219);
   
   
   TF1 *lineFit1220 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1220->SetFillColor(19);
   lineFit1220->SetFillStyle(0);
   lineFit1220->SetLineColor(20);
   lineFit1220->SetLineWidth(2);
   lineFit1220->SetChisquare(1.379379e-25);
   lineFit1220->SetNDF(0);
   lineFit1220->GetXaxis()->SetLabelFont(42);
   lineFit1220->GetXaxis()->SetTitleOffset(1);
   lineFit1220->GetXaxis()->SetTitleFont(42);
   lineFit1220->GetYaxis()->SetLabelFont(42);
   lineFit1220->GetYaxis()->SetTitleFont(42);
   lineFit1220->SetParameter(0,2.489835);
   lineFit1220->SetParError(0,0.0950896);
   lineFit1220->SetParLimits(0,0,0);
   lineFit1220->SetParameter(1,-0.06875);
   lineFit1220->SetParError(1,0.005250445);
   lineFit1220->SetParLimits(1,0,0);
   lineFit1220->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1220);
   gre->Draw("p ");
   
   TF1 *lineFit1221 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1221->SetFillColor(19);
   lineFit1221->SetFillStyle(0);
   lineFit1221->SetLineColor(20);
   lineFit1221->SetLineWidth(2);
   lineFit1221->SetChisquare(1.379379e-25);
   lineFit1221->SetNDF(0);
   lineFit1221->GetXaxis()->SetLabelFont(42);
   lineFit1221->GetXaxis()->SetTitleOffset(1);
   lineFit1221->GetXaxis()->SetTitleFont(42);
   lineFit1221->GetYaxis()->SetLabelFont(42);
   lineFit1221->GetYaxis()->SetTitleFont(42);
   lineFit1221->SetParameter(0,2.489835);
   lineFit1221->SetParError(0,0.0950896);
   lineFit1221->SetParLimits(0,0,0);
   lineFit1221->SetParameter(1,-0.06875);
   lineFit1221->SetParError(1,0.005250445);
   lineFit1221->SetParLimits(1,0,0);
   lineFit1221->Draw("same");
   
   Double_t -30.000000 ppm_fx1221[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1221[2] = {
   -2.361757,
   -1.886757};
   Double_t -30.000000 ppm_fex1221[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1221[2] = {
   0.0132568,
   0.0132568};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1221,-30.000000 ppm_fy1221,-30.000000 ppm_fex1221,-30.000000 ppm_fey1221);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(21);
   gre->SetMarkerColor(21);
   
   TH1F *Graph_Graph_mI30dO000000sPppm11711221 = new TH1F("Graph_Graph_mI30dO000000sPppm11711221","Graph",100,15.6,20.4);
   Graph_Graph_mI30dO000000sPppm11711221->SetMinimum(-2.425166);
   Graph_Graph_mI30dO000000sPppm11711221->SetMaximum(-1.823349);
   Graph_Graph_mI30dO000000sPppm11711221->SetDirectory(0);
   Graph_Graph_mI30dO000000sPppm11711221->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI30dO000000sPppm11711221->SetLineColor(ci);
   Graph_Graph_mI30dO000000sPppm11711221->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm11711221->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm11711221->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm11711221->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm11711221->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm11711221->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm11711221->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm11711221->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-30.000000 ppm11711221);
   
   
   TF1 *lineFit1222 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1222->SetFillColor(19);
   lineFit1222->SetFillStyle(0);
   lineFit1222->SetLineColor(21);
   lineFit1222->SetLineWidth(2);
   lineFit1222->SetChisquare(2.244363e-25);
   lineFit1222->SetNDF(0);
   lineFit1222->GetXaxis()->SetLabelFont(42);
   lineFit1222->GetXaxis()->SetTitleOffset(1);
   lineFit1222->GetXaxis()->SetTitleFont(42);
   lineFit1222->GetYaxis()->SetLabelFont(42);
   lineFit1222->GetYaxis()->SetTitleFont(42);
   lineFit1222->SetParameter(0,-4.261757);
   lineFit1222->SetParError(0,0.08488494);
   lineFit1222->SetParLimits(0,0,0);
   lineFit1222->SetParameter(1,0.11875);
   lineFit1222->SetParError(1,0.004686987);
   lineFit1222->SetParLimits(1,0,0);
   lineFit1222->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1222);
   gre->Draw("p ");
   
   TF1 *lineFit1223 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1223->SetFillColor(19);
   lineFit1223->SetFillStyle(0);
   lineFit1223->SetLineColor(21);
   lineFit1223->SetLineWidth(2);
   lineFit1223->SetChisquare(2.244363e-25);
   lineFit1223->SetNDF(0);
   lineFit1223->GetXaxis()->SetLabelFont(42);
   lineFit1223->GetXaxis()->SetTitleOffset(1);
   lineFit1223->GetXaxis()->SetTitleFont(42);
   lineFit1223->GetYaxis()->SetLabelFont(42);
   lineFit1223->GetYaxis()->SetTitleFont(42);
   lineFit1223->SetParameter(0,-4.261757);
   lineFit1223->SetParError(0,0.08488494);
   lineFit1223->SetParLimits(0,0,0);
   lineFit1223->SetParameter(1,0.11875);
   lineFit1223->SetParError(1,0.004686987);
   lineFit1223->SetParLimits(1,0,0);
   lineFit1223->Draw("same");
   
   Double_t -10.000000 ppm_fx1223[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1223[2] = {
   -1.111757,
   -0.8867573};
   Double_t -10.000000 ppm_fex1223[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1223[2] = {
   0.0132568,
   0.0132568};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1223,-10.000000 ppm_fy1223,-10.000000 ppm_fex1223,-10.000000 ppm_fey1223);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(22);
   gre->SetMarkerColor(22);
   
   TH1F *Graph_Graph_mI10dO000000sPppm11731223 = new TH1F("Graph_Graph_mI10dO000000sPppm11731223","Graph",100,15.6,20.4);
   Graph_Graph_mI10dO000000sPppm11731223->SetMinimum(-1.150166);
   Graph_Graph_mI10dO000000sPppm11731223->SetMaximum(-0.8483492);
   Graph_Graph_mI10dO000000sPppm11731223->SetDirectory(0);
   Graph_Graph_mI10dO000000sPppm11731223->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI10dO000000sPppm11731223->SetLineColor(ci);
   Graph_Graph_mI10dO000000sPppm11731223->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm11731223->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm11731223->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm11731223->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm11731223->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm11731223->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm11731223->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm11731223->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-10.000000 ppm11731223);
   
   
   TF1 *lineFit1224 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1224->SetFillColor(19);
   lineFit1224->SetFillStyle(0);
   lineFit1224->SetLineColor(22);
   lineFit1224->SetLineWidth(2);
   lineFit1224->SetChisquare(4.067907e-26);
   lineFit1224->SetNDF(0);
   lineFit1224->GetXaxis()->SetLabelFont(42);
   lineFit1224->GetXaxis()->SetTitleOffset(1);
   lineFit1224->GetXaxis()->SetTitleFont(42);
   lineFit1224->GetYaxis()->SetLabelFont(42);
   lineFit1224->GetYaxis()->SetTitleFont(42);
   lineFit1224->SetParameter(0,-2.011757);
   lineFit1224->SetParError(0,0.08488494);
   lineFit1224->SetParLimits(0,0,0);
   lineFit1224->SetParameter(1,0.05625);
   lineFit1224->SetParError(1,0.004686987);
   lineFit1224->SetParLimits(1,0,0);
   lineFit1224->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1224);
   gre->Draw("p ");
   
   TF1 *lineFit1225 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1225->SetFillColor(19);
   lineFit1225->SetFillStyle(0);
   lineFit1225->SetLineColor(22);
   lineFit1225->SetLineWidth(2);
   lineFit1225->SetChisquare(4.067907e-26);
   lineFit1225->SetNDF(0);
   lineFit1225->GetXaxis()->SetLabelFont(42);
   lineFit1225->GetXaxis()->SetTitleOffset(1);
   lineFit1225->GetXaxis()->SetTitleFont(42);
   lineFit1225->GetYaxis()->SetLabelFont(42);
   lineFit1225->GetYaxis()->SetTitleFont(42);
   lineFit1225->SetParameter(0,-2.011757);
   lineFit1225->SetParError(0,0.08488494);
   lineFit1225->SetParLimits(0,0,0);
   lineFit1225->SetParameter(1,0.05625);
   lineFit1225->SetParError(1,0.004686987);
   lineFit1225->SetParLimits(1,0,0);
   lineFit1225->Draw("same");
   
   Double_t 10.000000 ppm_fx1225[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1225[2] = {
   0.1382427,
   0.1132427};
   Double_t 10.000000 ppm_fex1225[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1225[2] = {
   0.0132568,
   0.0132568};
   gre = new TGraphErrors(2,10.000000 ppm_fx1225,10.000000 ppm_fy1225,10.000000 ppm_fex1225,10.000000 ppm_fey1225);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(23);
   gre->SetMarkerColor(23);
   
   TH1F *Graph_Graph_10dO000000sPppm11751225 = new TH1F("Graph_Graph_10dO000000sPppm11751225","Graph",100,15.6,20.4);
   Graph_Graph_10dO000000sPppm11751225->SetMinimum(0.09483449);
   Graph_Graph_10dO000000sPppm11751225->SetMaximum(0.1566508);
   Graph_Graph_10dO000000sPppm11751225->SetDirectory(0);
   Graph_Graph_10dO000000sPppm11751225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_10dO000000sPppm11751225->SetLineColor(ci);
   Graph_Graph_10dO000000sPppm11751225->GetXaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm11751225->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm11751225->GetXaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm11751225->GetYaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm11751225->GetYaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm11751225->GetZaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm11751225->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm11751225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_10.000000 ppm11751225);
   
   
   TF1 *lineFit1226 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1226->SetFillColor(19);
   lineFit1226->SetFillStyle(0);
   lineFit1226->SetLineColor(23);
   lineFit1226->SetLineWidth(2);
   lineFit1226->SetChisquare(4.383521e-28);
   lineFit1226->SetNDF(0);
   lineFit1226->GetXaxis()->SetLabelFont(42);
   lineFit1226->GetXaxis()->SetTitleOffset(1);
   lineFit1226->GetXaxis()->SetTitleFont(42);
   lineFit1226->GetYaxis()->SetLabelFont(42);
   lineFit1226->GetYaxis()->SetTitleFont(42);
   lineFit1226->SetParameter(0,0.2382427);
   lineFit1226->SetParError(0,0.08488494);
   lineFit1226->SetParLimits(0,0,0);
   lineFit1226->SetParameter(1,-0.00625);
   lineFit1226->SetParError(1,0.004686987);
   lineFit1226->SetParLimits(1,0,0);
   lineFit1226->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1226);
   gre->Draw("p ");
   
   TF1 *lineFit1227 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1227->SetFillColor(19);
   lineFit1227->SetFillStyle(0);
   lineFit1227->SetLineColor(23);
   lineFit1227->SetLineWidth(2);
   lineFit1227->SetChisquare(4.383521e-28);
   lineFit1227->SetNDF(0);
   lineFit1227->GetXaxis()->SetLabelFont(42);
   lineFit1227->GetXaxis()->SetTitleOffset(1);
   lineFit1227->GetXaxis()->SetTitleFont(42);
   lineFit1227->GetYaxis()->SetLabelFont(42);
   lineFit1227->GetYaxis()->SetTitleFont(42);
   lineFit1227->SetParameter(0,0.2382427);
   lineFit1227->SetParError(0,0.08488494);
   lineFit1227->SetParLimits(0,0,0);
   lineFit1227->SetParameter(1,-0.00625);
   lineFit1227->SetParError(1,0.004686987);
   lineFit1227->SetParLimits(1,0,0);
   lineFit1227->Draw("same");
   
   Double_t 30.000000 ppm_fx1227[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1227[2] = {
   1.388243,
   1.113243};
   Double_t 30.000000 ppm_fex1227[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1227[2] = {
   0.0132568,
   0.0132568};
   gre = new TGraphErrors(2,30.000000 ppm_fx1227,30.000000 ppm_fy1227,30.000000 ppm_fex1227,30.000000 ppm_fey1227);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(24);
   gre->SetMarkerColor(24);
   
   TH1F *Graph_Graph_30dO000000sPppm11771227 = new TH1F("Graph_Graph_30dO000000sPppm11771227","Graph",100,15.6,20.4);
   Graph_Graph_30dO000000sPppm11771227->SetMinimum(1.069834);
   Graph_Graph_30dO000000sPppm11771227->SetMaximum(1.431651);
   Graph_Graph_30dO000000sPppm11771227->SetDirectory(0);
   Graph_Graph_30dO000000sPppm11771227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_30dO000000sPppm11771227->SetLineColor(ci);
   Graph_Graph_30dO000000sPppm11771227->GetXaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm11771227->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm11771227->GetXaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm11771227->GetYaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm11771227->GetYaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm11771227->GetZaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm11771227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm11771227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_30.000000 ppm11771227);
   
   
   TF1 *lineFit1228 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1228->SetFillColor(19);
   lineFit1228->SetFillStyle(0);
   lineFit1228->SetLineColor(24);
   lineFit1228->SetLineWidth(2);
   lineFit1228->SetChisquare(2.805453e-27);
   lineFit1228->SetNDF(0);
   lineFit1228->GetXaxis()->SetLabelFont(42);
   lineFit1228->GetXaxis()->SetTitleOffset(1);
   lineFit1228->GetXaxis()->SetTitleFont(42);
   lineFit1228->GetYaxis()->SetLabelFont(42);
   lineFit1228->GetYaxis()->SetTitleFont(42);
   lineFit1228->SetParameter(0,2.488243);
   lineFit1228->SetParError(0,0.08488494);
   lineFit1228->SetParLimits(0,0,0);
   lineFit1228->SetParameter(1,-0.06875);
   lineFit1228->SetParError(1,0.004686987);
   lineFit1228->SetParLimits(1,0,0);
   lineFit1228->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1228);
   gre->Draw("p ");
   
   TF1 *lineFit1229 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1229->SetFillColor(19);
   lineFit1229->SetFillStyle(0);
   lineFit1229->SetLineColor(24);
   lineFit1229->SetLineWidth(2);
   lineFit1229->SetChisquare(2.805453e-27);
   lineFit1229->SetNDF(0);
   lineFit1229->GetXaxis()->SetLabelFont(42);
   lineFit1229->GetXaxis()->SetTitleOffset(1);
   lineFit1229->GetXaxis()->SetTitleFont(42);
   lineFit1229->GetYaxis()->SetLabelFont(42);
   lineFit1229->GetYaxis()->SetTitleFont(42);
   lineFit1229->SetParameter(0,2.488243);
   lineFit1229->SetParError(0,0.08488494);
   lineFit1229->SetParLimits(0,0,0);
   lineFit1229->SetParameter(1,-0.06875);
   lineFit1229->SetParError(1,0.004686987);
   lineFit1229->SetParLimits(1,0,0);
   lineFit1229->Draw("same");
   
   Double_t -30.000000 ppm_fx1229[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1229[2] = {
   -2.362925,
   -1.887925};
   Double_t -30.000000 ppm_fex1229[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1229[2] = {
   0.0120878,
   0.0120878};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1229,-30.000000 ppm_fy1229,-30.000000 ppm_fex1229,-30.000000 ppm_fey1229);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(25);
   gre->SetMarkerColor(25);
   
   TH1F *Graph_mI30dO000000sPppm1229 = new TH1F("Graph_mI30dO000000sPppm1229","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1229->SetMinimum(-2.42493);
   Graph_mI30dO000000sPppm1229->SetMaximum(-1.82592);
   Graph_mI30dO000000sPppm1229->SetDirectory(0);
   Graph_mI30dO000000sPppm1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1229->SetLineColor(ci);
   Graph_mI30dO000000sPppm1229->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1229->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1229->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1229->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1229->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1229->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1229->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1229);
   
   
   TF1 *lineFit1230 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1230->SetFillColor(19);
   lineFit1230->SetFillStyle(0);
   lineFit1230->SetLineColor(25);
   lineFit1230->SetLineWidth(2);
   lineFit1230->SetChisquare(4.066052e-25);
   lineFit1230->SetNDF(0);
   lineFit1230->GetXaxis()->SetLabelFont(42);
   lineFit1230->GetXaxis()->SetTitleOffset(1);
   lineFit1230->GetXaxis()->SetTitleFont(42);
   lineFit1230->GetYaxis()->SetLabelFont(42);
   lineFit1230->GetYaxis()->SetTitleFont(42);
   lineFit1230->SetParameter(0,-4.262925);
   lineFit1230->SetParError(0,0.07739969);
   lineFit1230->SetParLimits(0,0,0);
   lineFit1230->SetParameter(1,0.11875);
   lineFit1230->SetParError(1,0.004273683);
   lineFit1230->SetParLimits(1,0,0);
   lineFit1230->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1230);
   gre->Draw("p ");
   
   TF1 *lineFit1231 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1231->SetFillColor(19);
   lineFit1231->SetFillStyle(0);
   lineFit1231->SetLineColor(25);
   lineFit1231->SetLineWidth(2);
   lineFit1231->SetChisquare(4.066052e-25);
   lineFit1231->SetNDF(0);
   lineFit1231->GetXaxis()->SetLabelFont(42);
   lineFit1231->GetXaxis()->SetTitleOffset(1);
   lineFit1231->GetXaxis()->SetTitleFont(42);
   lineFit1231->GetYaxis()->SetLabelFont(42);
   lineFit1231->GetYaxis()->SetTitleFont(42);
   lineFit1231->SetParameter(0,-4.262925);
   lineFit1231->SetParError(0,0.07739969);
   lineFit1231->SetParLimits(0,0,0);
   lineFit1231->SetParameter(1,0.11875);
   lineFit1231->SetParError(1,0.004273683);
   lineFit1231->SetParLimits(1,0,0);
   lineFit1231->Draw("same");
   
   Double_t -10.000000 ppm_fx1231[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1231[2] = {
   -1.112925,
   -0.8879251};
   Double_t -10.000000 ppm_fex1231[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1231[2] = {
   0.0120878,
   0.0120878};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1231,-10.000000 ppm_fy1231,-10.000000 ppm_fex1231,-10.000000 ppm_fey1231);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(26);
   gre->SetMarkerColor(26);
   
   TH1F *Graph_mI10dO000000sPppm1231 = new TH1F("Graph_mI10dO000000sPppm1231","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1231->SetMinimum(-1.14993);
   Graph_mI10dO000000sPppm1231->SetMaximum(-0.8509197);
   Graph_mI10dO000000sPppm1231->SetDirectory(0);
   Graph_mI10dO000000sPppm1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1231->SetLineColor(ci);
   Graph_mI10dO000000sPppm1231->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1231->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1231->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1231->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1231->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1231->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1231->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1231);
   
   
   TF1 *lineFit1232 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1232->SetFillColor(19);
   lineFit1232->SetFillStyle(0);
   lineFit1232->SetLineColor(26);
   lineFit1232->SetLineWidth(2);
   lineFit1232->SetChisquare(1.687159e-26);
   lineFit1232->SetNDF(0);
   lineFit1232->GetXaxis()->SetLabelFont(42);
   lineFit1232->GetXaxis()->SetTitleOffset(1);
   lineFit1232->GetXaxis()->SetTitleFont(42);
   lineFit1232->GetYaxis()->SetLabelFont(42);
   lineFit1232->GetYaxis()->SetTitleFont(42);
   lineFit1232->SetParameter(0,-2.012925);
   lineFit1232->SetParError(0,0.07739969);
   lineFit1232->SetParLimits(0,0,0);
   lineFit1232->SetParameter(1,0.05625);
   lineFit1232->SetParError(1,0.004273683);
   lineFit1232->SetParLimits(1,0,0);
   lineFit1232->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1232);
   gre->Draw("p ");
   
   TF1 *lineFit1233 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1233->SetFillColor(19);
   lineFit1233->SetFillStyle(0);
   lineFit1233->SetLineColor(26);
   lineFit1233->SetLineWidth(2);
   lineFit1233->SetChisquare(1.687159e-26);
   lineFit1233->SetNDF(0);
   lineFit1233->GetXaxis()->SetLabelFont(42);
   lineFit1233->GetXaxis()->SetTitleOffset(1);
   lineFit1233->GetXaxis()->SetTitleFont(42);
   lineFit1233->GetYaxis()->SetLabelFont(42);
   lineFit1233->GetYaxis()->SetTitleFont(42);
   lineFit1233->SetParameter(0,-2.012925);
   lineFit1233->SetParError(0,0.07739969);
   lineFit1233->SetParLimits(0,0,0);
   lineFit1233->SetParameter(1,0.05625);
   lineFit1233->SetParError(1,0.004273683);
   lineFit1233->SetParLimits(1,0,0);
   lineFit1233->Draw("same");
   
   Double_t 10.000000 ppm_fx1233[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1233[2] = {
   0.1370749,
   0.1120749};
   Double_t 10.000000 ppm_fex1233[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1233[2] = {
   0.0120878,
   0.0120878};
   gre = new TGraphErrors(2,10.000000 ppm_fx1233,10.000000 ppm_fy1233,10.000000 ppm_fex1233,10.000000 ppm_fey1233);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(27);
   gre->SetMarkerColor(27);
   
   TH1F *Graph_10dO000000sPppm1233 = new TH1F("Graph_10dO000000sPppm1233","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1233->SetMinimum(0.09506954);
   Graph_10dO000000sPppm1233->SetMaximum(0.1540803);
   Graph_10dO000000sPppm1233->SetDirectory(0);
   Graph_10dO000000sPppm1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1233->SetLineColor(ci);
   Graph_10dO000000sPppm1233->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1233->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1233->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1233->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1233->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1233->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1233->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1233);
   
   
   TF1 *lineFit1234 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1234->SetFillColor(19);
   lineFit1234->SetFillStyle(0);
   lineFit1234->SetLineColor(27);
   lineFit1234->SetLineWidth(2);
   lineFit1234->SetChisquare(2.161672e-28);
   lineFit1234->SetNDF(0);
   lineFit1234->GetXaxis()->SetLabelFont(42);
   lineFit1234->GetXaxis()->SetTitleOffset(1);
   lineFit1234->GetXaxis()->SetTitleFont(42);
   lineFit1234->GetYaxis()->SetLabelFont(42);
   lineFit1234->GetYaxis()->SetTitleFont(42);
   lineFit1234->SetParameter(0,0.2370749);
   lineFit1234->SetParError(0,0.07739969);
   lineFit1234->SetParLimits(0,0,0);
   lineFit1234->SetParameter(1,-0.00625);
   lineFit1234->SetParError(1,0.004273683);
   lineFit1234->SetParLimits(1,0,0);
   lineFit1234->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1234);
   gre->Draw("p ");
   
   TF1 *lineFit1235 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1235->SetFillColor(19);
   lineFit1235->SetFillStyle(0);
   lineFit1235->SetLineColor(27);
   lineFit1235->SetLineWidth(2);
   lineFit1235->SetChisquare(2.161672e-28);
   lineFit1235->SetNDF(0);
   lineFit1235->GetXaxis()->SetLabelFont(42);
   lineFit1235->GetXaxis()->SetTitleOffset(1);
   lineFit1235->GetXaxis()->SetTitleFont(42);
   lineFit1235->GetYaxis()->SetLabelFont(42);
   lineFit1235->GetYaxis()->SetTitleFont(42);
   lineFit1235->SetParameter(0,0.2370749);
   lineFit1235->SetParError(0,0.07739969);
   lineFit1235->SetParLimits(0,0,0);
   lineFit1235->SetParameter(1,-0.00625);
   lineFit1235->SetParError(1,0.004273683);
   lineFit1235->SetParLimits(1,0,0);
   lineFit1235->Draw("same");
   
   Double_t 30.000000 ppm_fx1235[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1235[2] = {
   1.387075,
   1.112075};
   Double_t 30.000000 ppm_fex1235[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1235[2] = {
   0.0120878,
   0.0120878};
   gre = new TGraphErrors(2,30.000000 ppm_fx1235,30.000000 ppm_fy1235,30.000000 ppm_fex1235,30.000000 ppm_fey1235);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(28);
   gre->SetMarkerColor(28);
   
   TH1F *Graph_30dO000000sPppm1235 = new TH1F("Graph_30dO000000sPppm1235","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1235->SetMinimum(1.07007);
   Graph_30dO000000sPppm1235->SetMaximum(1.42908);
   Graph_30dO000000sPppm1235->SetDirectory(0);
   Graph_30dO000000sPppm1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1235->SetLineColor(ci);
   Graph_30dO000000sPppm1235->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1235->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1235->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1235->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1235->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1235->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1235->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1235);
   
   
   TF1 *lineFit1236 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1236->SetFillColor(19);
   lineFit1236->SetFillStyle(0);
   lineFit1236->SetLineColor(28);
   lineFit1236->SetLineWidth(2);
   lineFit1236->SetChisquare(1.38347e-26);
   lineFit1236->SetNDF(0);
   lineFit1236->GetXaxis()->SetLabelFont(42);
   lineFit1236->GetXaxis()->SetTitleOffset(1);
   lineFit1236->GetXaxis()->SetTitleFont(42);
   lineFit1236->GetYaxis()->SetLabelFont(42);
   lineFit1236->GetYaxis()->SetTitleFont(42);
   lineFit1236->SetParameter(0,2.487075);
   lineFit1236->SetParError(0,0.07739969);
   lineFit1236->SetParLimits(0,0,0);
   lineFit1236->SetParameter(1,-0.06875);
   lineFit1236->SetParError(1,0.004273683);
   lineFit1236->SetParLimits(1,0,0);
   lineFit1236->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1236);
   gre->Draw("p ");
   
   TF1 *lineFit1237 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1237->SetFillColor(19);
   lineFit1237->SetFillStyle(0);
   lineFit1237->SetLineColor(28);
   lineFit1237->SetLineWidth(2);
   lineFit1237->SetChisquare(1.38347e-26);
   lineFit1237->SetNDF(0);
   lineFit1237->GetXaxis()->SetLabelFont(42);
   lineFit1237->GetXaxis()->SetTitleOffset(1);
   lineFit1237->GetXaxis()->SetTitleFont(42);
   lineFit1237->GetYaxis()->SetLabelFont(42);
   lineFit1237->GetYaxis()->SetTitleFont(42);
   lineFit1237->SetParameter(0,2.487075);
   lineFit1237->SetParError(0,0.07739969);
   lineFit1237->SetParLimits(0,0,0);
   lineFit1237->SetParameter(1,-0.06875);
   lineFit1237->SetParError(1,0.004273683);
   lineFit1237->SetParLimits(1,0,0);
   lineFit1237->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","1.14e-286 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(28);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(28);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","2.23e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(27);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(27);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","6.71e-315 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(26);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(26);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.7e-300 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(25);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(25);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","8.85e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(24);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(24);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","#minus2.55e+198 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(23);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(23);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","#minus3.11e+231 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(22);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(22);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","4.45e-307 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(21);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(21);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","1.47e-285 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(20);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(20);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","6.36e-272 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(19);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(19);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","1.94e-77 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(18);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(18);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.89e-307 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(17);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(17);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","2.06e-310 ppm","lpf");
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
