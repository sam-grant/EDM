void Scans_NSUBRUN_200()
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
   
   Double_t -30.000000 ppm_fx1239[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1239[2] = {
   -2.329389,
   -1.854389};
   Double_t -30.000000 ppm_fex1239[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1239[2] = {
   0.0456595,
   0.0456595};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1239,-30.000000 ppm_fy1239,-30.000000 ppm_fex1239,-30.000000 ppm_fey1239);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239","",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->SetMinimum(-3);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->SetMaximum(2);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetXaxis()->SetTitle("QHV [kV]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089113111811239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_-30.000000 ppm10011011102910551089113111811239);
   
   
   TF1 *lineFit1240 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1240->SetFillColor(19);
   lineFit1240->SetFillStyle(0);
   lineFit1240->SetLineWidth(2);
   lineFit1240->SetChisquare(2.84974e-26);
   lineFit1240->SetNDF(0);
   lineFit1240->GetXaxis()->SetLabelFont(42);
   lineFit1240->GetXaxis()->SetTitleOffset(1);
   lineFit1240->GetXaxis()->SetTitleFont(42);
   lineFit1240->GetYaxis()->SetLabelFont(42);
   lineFit1240->GetYaxis()->SetTitleFont(42);
   lineFit1240->SetParameter(0,-4.229389);
   lineFit1240->SetParError(0,0.2923635);
   lineFit1240->SetParLimits(0,0,0);
   lineFit1240->SetParameter(1,0.11875);
   lineFit1240->SetParError(1,0.01614307);
   lineFit1240->SetParLimits(1,0,0);
   lineFit1240->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1240);
   gre->Draw("ap");
   
   TF1 *lineFit1241 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1241->SetFillColor(19);
   lineFit1241->SetFillStyle(0);
   lineFit1241->SetLineWidth(2);
   lineFit1241->SetChisquare(2.84974e-26);
   lineFit1241->SetNDF(0);
   lineFit1241->GetXaxis()->SetLabelFont(42);
   lineFit1241->GetXaxis()->SetTitleOffset(1);
   lineFit1241->GetXaxis()->SetTitleFont(42);
   lineFit1241->GetYaxis()->SetLabelFont(42);
   lineFit1241->GetYaxis()->SetTitleFont(42);
   lineFit1241->SetParameter(0,-4.229389);
   lineFit1241->SetParError(0,0.2923635);
   lineFit1241->SetParLimits(0,0,0);
   lineFit1241->SetParameter(1,0.11875);
   lineFit1241->SetParError(1,0.01614307);
   lineFit1241->SetParLimits(1,0,0);
   lineFit1241->Draw("same");
   
   Double_t -10.000000 ppm_fx1241[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1241[2] = {
   -1.079389,
   -0.8543892};
   Double_t -10.000000 ppm_fex1241[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1241[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1241,-10.000000 ppm_fy1241,-10.000000 ppm_fex1241,-10.000000 ppm_fey1241);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->SetMinimum(-1.156681);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->SetMaximum(-0.7770978);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091113311831241->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_-10.000000 ppm10031013103110571091113311831241);
   
   
   TF1 *lineFit1242 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1242->SetFillColor(19);
   lineFit1242->SetFillStyle(0);
   lineFit1242->SetLineColor(2);
   lineFit1242->SetLineWidth(2);
   lineFit1242->SetChisquare(1.146991e-26);
   lineFit1242->SetNDF(0);
   lineFit1242->GetXaxis()->SetLabelFont(42);
   lineFit1242->GetXaxis()->SetTitleOffset(1);
   lineFit1242->GetXaxis()->SetTitleFont(42);
   lineFit1242->GetYaxis()->SetLabelFont(42);
   lineFit1242->GetYaxis()->SetTitleFont(42);
   lineFit1242->SetParameter(0,-1.979389);
   lineFit1242->SetParError(0,0.2923635);
   lineFit1242->SetParLimits(0,0,0);
   lineFit1242->SetParameter(1,0.05625);
   lineFit1242->SetParError(1,0.01614307);
   lineFit1242->SetParLimits(1,0,0);
   lineFit1242->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1242);
   gre->Draw("p ");
   
   TF1 *lineFit1243 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1243->SetFillColor(19);
   lineFit1243->SetFillStyle(0);
   lineFit1243->SetLineColor(2);
   lineFit1243->SetLineWidth(2);
   lineFit1243->SetChisquare(1.146991e-26);
   lineFit1243->SetNDF(0);
   lineFit1243->GetXaxis()->SetLabelFont(42);
   lineFit1243->GetXaxis()->SetTitleOffset(1);
   lineFit1243->GetXaxis()->SetTitleFont(42);
   lineFit1243->GetYaxis()->SetLabelFont(42);
   lineFit1243->GetYaxis()->SetTitleFont(42);
   lineFit1243->SetParameter(0,-1.979389);
   lineFit1243->SetParError(0,0.2923635);
   lineFit1243->SetParLimits(0,0,0);
   lineFit1243->SetParameter(1,0.05625);
   lineFit1243->SetParError(1,0.01614307);
   lineFit1243->SetParLimits(1,0,0);
   lineFit1243->Draw("same");
   
   Double_t 10.000000 ppm_fx1243[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1243[2] = {
   0.1706108,
   0.1456108};
   Double_t 10.000000 ppm_fex1243[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1243[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,10.000000 ppm_fx1243,10.000000 ppm_fy1243,10.000000 ppm_fex1243,10.000000 ppm_fey1243);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->SetMinimum(0.08831937);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->SetMaximum(0.2279022);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093113511851243->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_10.000000 ppm10051015103310591093113511851243);
   
   
   TF1 *lineFit1244 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1244->SetFillColor(19);
   lineFit1244->SetFillStyle(0);
   lineFit1244->SetLineColor(3);
   lineFit1244->SetLineWidth(2);
   lineFit1244->SetChisquare(1.348749e-28);
   lineFit1244->SetNDF(0);
   lineFit1244->GetXaxis()->SetLabelFont(42);
   lineFit1244->GetXaxis()->SetTitleOffset(1);
   lineFit1244->GetXaxis()->SetTitleFont(42);
   lineFit1244->GetYaxis()->SetLabelFont(42);
   lineFit1244->GetYaxis()->SetTitleFont(42);
   lineFit1244->SetParameter(0,0.2706108);
   lineFit1244->SetParError(0,0.2923635);
   lineFit1244->SetParLimits(0,0,0);
   lineFit1244->SetParameter(1,-0.00625);
   lineFit1244->SetParError(1,0.01614307);
   lineFit1244->SetParLimits(1,0,0);
   lineFit1244->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1244);
   gre->Draw("p ");
   
   TF1 *lineFit1245 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1245->SetFillColor(19);
   lineFit1245->SetFillStyle(0);
   lineFit1245->SetLineColor(3);
   lineFit1245->SetLineWidth(2);
   lineFit1245->SetChisquare(1.348749e-28);
   lineFit1245->SetNDF(0);
   lineFit1245->GetXaxis()->SetLabelFont(42);
   lineFit1245->GetXaxis()->SetTitleOffset(1);
   lineFit1245->GetXaxis()->SetTitleFont(42);
   lineFit1245->GetYaxis()->SetLabelFont(42);
   lineFit1245->GetYaxis()->SetTitleFont(42);
   lineFit1245->SetParameter(0,0.2706108);
   lineFit1245->SetParError(0,0.2923635);
   lineFit1245->SetParLimits(0,0,0);
   lineFit1245->SetParameter(1,-0.00625);
   lineFit1245->SetParError(1,0.01614307);
   lineFit1245->SetParLimits(1,0,0);
   lineFit1245->Draw("same");
   
   Double_t 30.000000 ppm_fx1245[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1245[2] = {
   1.420611,
   1.145611};
   Double_t 30.000000 ppm_fex1245[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1245[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,30.000000 ppm_fx1245,30.000000 ppm_fy1245,30.000000 ppm_fex1245,30.000000 ppm_fey1245);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->SetMinimum(1.063319);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->SetMaximum(1.502902);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095113711871245->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_Graph_30.000000 ppm10071017103510611095113711871245);
   
   
   TF1 *lineFit1246 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1246->SetFillColor(19);
   lineFit1246->SetFillStyle(0);
   lineFit1246->SetLineColor(4);
   lineFit1246->SetLineWidth(2);
   lineFit1246->SetChisquare(3.490636e-26);
   lineFit1246->SetNDF(0);
   lineFit1246->GetXaxis()->SetLabelFont(42);
   lineFit1246->GetXaxis()->SetTitleOffset(1);
   lineFit1246->GetXaxis()->SetTitleFont(42);
   lineFit1246->GetYaxis()->SetLabelFont(42);
   lineFit1246->GetYaxis()->SetTitleFont(42);
   lineFit1246->SetParameter(0,2.520611);
   lineFit1246->SetParError(0,0.2923635);
   lineFit1246->SetParLimits(0,0,0);
   lineFit1246->SetParameter(1,-0.06875);
   lineFit1246->SetParError(1,0.01614307);
   lineFit1246->SetParLimits(1,0,0);
   lineFit1246->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1246);
   gre->Draw("p ");
   
   TF1 *lineFit1247 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1247->SetFillColor(19);
   lineFit1247->SetFillStyle(0);
   lineFit1247->SetLineColor(4);
   lineFit1247->SetLineWidth(2);
   lineFit1247->SetChisquare(3.490636e-26);
   lineFit1247->SetNDF(0);
   lineFit1247->GetXaxis()->SetLabelFont(42);
   lineFit1247->GetXaxis()->SetTitleOffset(1);
   lineFit1247->GetXaxis()->SetTitleFont(42);
   lineFit1247->GetYaxis()->SetLabelFont(42);
   lineFit1247->GetYaxis()->SetTitleFont(42);
   lineFit1247->SetParameter(0,2.520611);
   lineFit1247->SetParError(0,0.2923635);
   lineFit1247->SetParLimits(0,0,0);
   lineFit1247->SetParameter(1,-0.06875);
   lineFit1247->SetParError(1,0.01614307);
   lineFit1247->SetParLimits(1,0,0);
   lineFit1247->Draw("same");
   
   Double_t -30.000000 ppm_fx1247[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1247[2] = {
   -2.350281,
   -1.875281};
   Double_t -30.000000 ppm_fex1247[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1247[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1247,-30.000000 ppm_fy1247,-30.000000 ppm_fex1247,-30.000000 ppm_fey1247);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->SetMinimum(-2.427475);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->SetMaximum(-1.798087);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097113911891247->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_-30.000000 ppm1019103710631097113911891247);
   
   
   TF1 *lineFit1248 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1248->SetFillColor(19);
   lineFit1248->SetFillStyle(0);
   lineFit1248->SetLineColor(5);
   lineFit1248->SetLineWidth(2);
   lineFit1248->SetChisquare(3.969524e-26);
   lineFit1248->SetNDF(0);
   lineFit1248->GetXaxis()->SetLabelFont(42);
   lineFit1248->GetXaxis()->SetTitleOffset(1);
   lineFit1248->GetXaxis()->SetTitleFont(42);
   lineFit1248->GetYaxis()->SetLabelFont(42);
   lineFit1248->GetYaxis()->SetTitleFont(42);
   lineFit1248->SetParameter(0,-4.250281);
   lineFit1248->SetParError(0,0.1584479);
   lineFit1248->SetParLimits(0,0,0);
   lineFit1248->SetParameter(1,0.11875);
   lineFit1248->SetParError(1,0.00874882);
   lineFit1248->SetParLimits(1,0,0);
   lineFit1248->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1248);
   gre->Draw("p ");
   
   TF1 *lineFit1249 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1249->SetFillColor(19);
   lineFit1249->SetFillStyle(0);
   lineFit1249->SetLineColor(5);
   lineFit1249->SetLineWidth(2);
   lineFit1249->SetChisquare(3.969524e-26);
   lineFit1249->SetNDF(0);
   lineFit1249->GetXaxis()->SetLabelFont(42);
   lineFit1249->GetXaxis()->SetTitleOffset(1);
   lineFit1249->GetXaxis()->SetTitleFont(42);
   lineFit1249->GetYaxis()->SetLabelFont(42);
   lineFit1249->GetYaxis()->SetTitleFont(42);
   lineFit1249->SetParameter(0,-4.250281);
   lineFit1249->SetParError(0,0.1584479);
   lineFit1249->SetParLimits(0,0,0);
   lineFit1249->SetParameter(1,0.11875);
   lineFit1249->SetParError(1,0.00874882);
   lineFit1249->SetParLimits(1,0,0);
   lineFit1249->Draw("same");
   
   Double_t -10.000000 ppm_fx1249[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1249[2] = {
   -1.100281,
   -0.875281};
   Double_t -10.000000 ppm_fex1249[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1249[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1249,-10.000000 ppm_fy1249,-10.000000 ppm_fex1249,-10.000000 ppm_fey1249);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->SetMinimum(-1.152475);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->SetMaximum(-0.8230865);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099114111911249->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_-10.000000 ppm1021103910651099114111911249);
   
   
   TF1 *lineFit1250 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1250->SetFillColor(19);
   lineFit1250->SetFillStyle(0);
   lineFit1250->SetLineColor(6);
   lineFit1250->SetLineWidth(2);
   lineFit1250->SetChisquare(2.165927e-26);
   lineFit1250->SetNDF(0);
   lineFit1250->GetXaxis()->SetLabelFont(42);
   lineFit1250->GetXaxis()->SetTitleOffset(1);
   lineFit1250->GetXaxis()->SetTitleFont(42);
   lineFit1250->GetYaxis()->SetLabelFont(42);
   lineFit1250->GetYaxis()->SetTitleFont(42);
   lineFit1250->SetParameter(0,-2.000281);
   lineFit1250->SetParError(0,0.1584479);
   lineFit1250->SetParLimits(0,0,0);
   lineFit1250->SetParameter(1,0.05625);
   lineFit1250->SetParError(1,0.00874882);
   lineFit1250->SetParLimits(1,0,0);
   lineFit1250->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1250);
   gre->Draw("p ");
   
   TF1 *lineFit1251 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1251->SetFillColor(19);
   lineFit1251->SetFillStyle(0);
   lineFit1251->SetLineColor(6);
   lineFit1251->SetLineWidth(2);
   lineFit1251->SetChisquare(2.165927e-26);
   lineFit1251->SetNDF(0);
   lineFit1251->GetXaxis()->SetLabelFont(42);
   lineFit1251->GetXaxis()->SetTitleOffset(1);
   lineFit1251->GetXaxis()->SetTitleFont(42);
   lineFit1251->GetYaxis()->SetLabelFont(42);
   lineFit1251->GetYaxis()->SetTitleFont(42);
   lineFit1251->SetParameter(0,-2.000281);
   lineFit1251->SetParError(0,0.1584479);
   lineFit1251->SetParLimits(0,0,0);
   lineFit1251->SetParameter(1,0.05625);
   lineFit1251->SetParError(1,0.00874882);
   lineFit1251->SetParLimits(1,0,0);
   lineFit1251->Draw("same");
   
   Double_t 10.000000 ppm_fx1251[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1251[2] = {
   0.149719,
   0.124719};
   Double_t 10.000000 ppm_fex1251[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1251[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,10.000000 ppm_fx1251,10.000000 ppm_fy1251,10.000000 ppm_fex1251,10.000000 ppm_fey1251);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->SetMinimum(0.09252451);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->SetMaximum(0.1819135);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101114311931251->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_10.000000 ppm1023104110671101114311931251);
   
   
   TF1 *lineFit1252 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1252->SetFillColor(19);
   lineFit1252->SetFillStyle(0);
   lineFit1252->SetLineColor(7);
   lineFit1252->SetLineWidth(2);
   lineFit1252->SetChisquare(1.258089e-29);
   lineFit1252->SetNDF(0);
   lineFit1252->GetXaxis()->SetLabelFont(42);
   lineFit1252->GetXaxis()->SetTitleOffset(1);
   lineFit1252->GetXaxis()->SetTitleFont(42);
   lineFit1252->GetYaxis()->SetLabelFont(42);
   lineFit1252->GetYaxis()->SetTitleFont(42);
   lineFit1252->SetParameter(0,0.249719);
   lineFit1252->SetParError(0,0.1584479);
   lineFit1252->SetParLimits(0,0,0);
   lineFit1252->SetParameter(1,-0.00625);
   lineFit1252->SetParError(1,0.00874882);
   lineFit1252->SetParLimits(1,0,0);
   lineFit1252->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1252);
   gre->Draw("p ");
   
   TF1 *lineFit1253 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1253->SetFillColor(19);
   lineFit1253->SetFillStyle(0);
   lineFit1253->SetLineColor(7);
   lineFit1253->SetLineWidth(2);
   lineFit1253->SetChisquare(1.258089e-29);
   lineFit1253->SetNDF(0);
   lineFit1253->GetXaxis()->SetLabelFont(42);
   lineFit1253->GetXaxis()->SetTitleOffset(1);
   lineFit1253->GetXaxis()->SetTitleFont(42);
   lineFit1253->GetYaxis()->SetLabelFont(42);
   lineFit1253->GetYaxis()->SetTitleFont(42);
   lineFit1253->SetParameter(0,0.249719);
   lineFit1253->SetParError(0,0.1584479);
   lineFit1253->SetParLimits(0,0,0);
   lineFit1253->SetParameter(1,-0.00625);
   lineFit1253->SetParError(1,0.00874882);
   lineFit1253->SetParLimits(1,0,0);
   lineFit1253->Draw("same");
   
   Double_t 30.000000 ppm_fx1253[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1253[2] = {
   1.399719,
   1.124719};
   Double_t 30.000000 ppm_fex1253[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1253[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,30.000000 ppm_fx1253,30.000000 ppm_fy1253,30.000000 ppm_fex1253,30.000000 ppm_fey1253);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->SetMinimum(1.067525);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->SetMaximum(1.456913);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103114511951253->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph_30.000000 ppm1025104310691103114511951253);
   
   
   TF1 *lineFit1254 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1254->SetFillColor(19);
   lineFit1254->SetFillStyle(0);
   lineFit1254->SetLineColor(8);
   lineFit1254->SetLineWidth(2);
   lineFit1254->SetChisquare(3.172398e-26);
   lineFit1254->SetNDF(0);
   lineFit1254->GetXaxis()->SetLabelFont(42);
   lineFit1254->GetXaxis()->SetTitleOffset(1);
   lineFit1254->GetXaxis()->SetTitleFont(42);
   lineFit1254->GetYaxis()->SetLabelFont(42);
   lineFit1254->GetYaxis()->SetTitleFont(42);
   lineFit1254->SetParameter(0,2.499719);
   lineFit1254->SetParError(0,0.1584479);
   lineFit1254->SetParLimits(0,0,0);
   lineFit1254->SetParameter(1,-0.06875);
   lineFit1254->SetParError(1,0.00874882);
   lineFit1254->SetParLimits(1,0,0);
   lineFit1254->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1254);
   gre->Draw("p ");
   
   TF1 *lineFit1255 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1255->SetFillColor(19);
   lineFit1255->SetFillStyle(0);
   lineFit1255->SetLineColor(8);
   lineFit1255->SetLineWidth(2);
   lineFit1255->SetChisquare(3.172398e-26);
   lineFit1255->SetNDF(0);
   lineFit1255->GetXaxis()->SetLabelFont(42);
   lineFit1255->GetXaxis()->SetTitleOffset(1);
   lineFit1255->GetXaxis()->SetTitleFont(42);
   lineFit1255->GetYaxis()->SetLabelFont(42);
   lineFit1255->GetYaxis()->SetTitleFont(42);
   lineFit1255->SetParameter(0,2.499719);
   lineFit1255->SetParError(0,0.1584479);
   lineFit1255->SetParLimits(0,0,0);
   lineFit1255->SetParameter(1,-0.06875);
   lineFit1255->SetParError(1,0.00874882);
   lineFit1255->SetParLimits(1,0,0);
   lineFit1255->Draw("same");
   
   Double_t -30.000000 ppm_fx1255[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1255[2] = {
   -2.356066,
   -1.881066};
   Double_t -30.000000 ppm_fex1255[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1255[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1255,-30.000000 ppm_fy1255,-30.000000 ppm_fex1255,-30.000000 ppm_fey1255);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->SetMinimum(-2.426311);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->SetMaximum(-1.810821);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm104510711105114711971255->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_-30.000000 ppm104510711105114711971255);
   
   
   TF1 *lineFit1256 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1256->SetFillColor(19);
   lineFit1256->SetFillStyle(0);
   lineFit1256->SetLineColor(9);
   lineFit1256->SetLineWidth(2);
   lineFit1256->SetChisquare(2.932805e-25);
   lineFit1256->SetNDF(0);
   lineFit1256->GetXaxis()->SetLabelFont(42);
   lineFit1256->GetXaxis()->SetTitleOffset(1);
   lineFit1256->GetXaxis()->SetTitleFont(42);
   lineFit1256->GetYaxis()->SetLabelFont(42);
   lineFit1256->GetYaxis()->SetTitleFont(42);
   lineFit1256->SetParameter(0,-4.256066);
   lineFit1256->SetParError(0,0.1213648);
   lineFit1256->SetParLimits(0,0,0);
   lineFit1256->SetParameter(1,0.11875);
   lineFit1256->SetParError(1,0.006701251);
   lineFit1256->SetParLimits(1,0,0);
   lineFit1256->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1256);
   gre->Draw("p ");
   
   TF1 *lineFit1257 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1257->SetFillColor(19);
   lineFit1257->SetFillStyle(0);
   lineFit1257->SetLineColor(9);
   lineFit1257->SetLineWidth(2);
   lineFit1257->SetChisquare(2.932805e-25);
   lineFit1257->SetNDF(0);
   lineFit1257->GetXaxis()->SetLabelFont(42);
   lineFit1257->GetXaxis()->SetTitleOffset(1);
   lineFit1257->GetXaxis()->SetTitleFont(42);
   lineFit1257->GetYaxis()->SetLabelFont(42);
   lineFit1257->GetYaxis()->SetTitleFont(42);
   lineFit1257->SetParameter(0,-4.256066);
   lineFit1257->SetParError(0,0.1213648);
   lineFit1257->SetParLimits(0,0,0);
   lineFit1257->SetParameter(1,0.11875);
   lineFit1257->SetParError(1,0.006701251);
   lineFit1257->SetParLimits(1,0,0);
   lineFit1257->Draw("same");
   
   Double_t -10.000000 ppm_fx1257[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1257[2] = {
   -1.106066,
   -0.8810662};
   Double_t -10.000000 ppm_fex1257[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1257[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1257,-10.000000 ppm_fy1257,-10.000000 ppm_fex1257,-10.000000 ppm_fey1257);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->SetMinimum(-1.151311);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->SetMaximum(-0.8358214);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm104710731107114911991257->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_-10.000000 ppm104710731107114911991257);
   
   
   TF1 *lineFit1258 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1258->SetFillColor(19);
   lineFit1258->SetFillStyle(0);
   lineFit1258->SetLineColor(10);
   lineFit1258->SetLineWidth(2);
   lineFit1258->SetChisquare(1.210794e-25);
   lineFit1258->SetNDF(0);
   lineFit1258->GetXaxis()->SetLabelFont(42);
   lineFit1258->GetXaxis()->SetTitleOffset(1);
   lineFit1258->GetXaxis()->SetTitleFont(42);
   lineFit1258->GetYaxis()->SetLabelFont(42);
   lineFit1258->GetYaxis()->SetTitleFont(42);
   lineFit1258->SetParameter(0,-2.006066);
   lineFit1258->SetParError(0,0.1213648);
   lineFit1258->SetParLimits(0,0,0);
   lineFit1258->SetParameter(1,0.05625);
   lineFit1258->SetParError(1,0.006701251);
   lineFit1258->SetParLimits(1,0,0);
   lineFit1258->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1258);
   gre->Draw("p ");
   
   TF1 *lineFit1259 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1259->SetFillColor(19);
   lineFit1259->SetFillStyle(0);
   lineFit1259->SetLineColor(10);
   lineFit1259->SetLineWidth(2);
   lineFit1259->SetChisquare(1.210794e-25);
   lineFit1259->SetNDF(0);
   lineFit1259->GetXaxis()->SetLabelFont(42);
   lineFit1259->GetXaxis()->SetTitleOffset(1);
   lineFit1259->GetXaxis()->SetTitleFont(42);
   lineFit1259->GetYaxis()->SetLabelFont(42);
   lineFit1259->GetYaxis()->SetTitleFont(42);
   lineFit1259->SetParameter(0,-2.006066);
   lineFit1259->SetParError(0,0.1213648);
   lineFit1259->SetParLimits(0,0,0);
   lineFit1259->SetParameter(1,0.05625);
   lineFit1259->SetParError(1,0.006701251);
   lineFit1259->SetParLimits(1,0,0);
   lineFit1259->Draw("same");
   
   Double_t 10.000000 ppm_fx1259[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1259[2] = {
   0.1439338,
   0.1189338};
   Double_t 10.000000 ppm_fex1259[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1259[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,10.000000 ppm_fx1259,10.000000 ppm_fy1259,10.000000 ppm_fex1259,10.000000 ppm_fey1259);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->SetMinimum(0.09368897);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->SetMaximum(0.1691786);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_10dO000000sPppm104910751109115112011259->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_10.000000 ppm104910751109115112011259);
   
   
   TF1 *lineFit1260 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1260->SetFillColor(19);
   lineFit1260->SetFillStyle(0);
   lineFit1260->SetLineColor(11);
   lineFit1260->SetLineWidth(2);
   lineFit1260->SetChisquare(5.939891e-28);
   lineFit1260->SetNDF(0);
   lineFit1260->GetXaxis()->SetLabelFont(42);
   lineFit1260->GetXaxis()->SetTitleOffset(1);
   lineFit1260->GetXaxis()->SetTitleFont(42);
   lineFit1260->GetYaxis()->SetLabelFont(42);
   lineFit1260->GetYaxis()->SetTitleFont(42);
   lineFit1260->SetParameter(0,0.2439338);
   lineFit1260->SetParError(0,0.1213648);
   lineFit1260->SetParLimits(0,0,0);
   lineFit1260->SetParameter(1,-0.00625);
   lineFit1260->SetParError(1,0.006701251);
   lineFit1260->SetParLimits(1,0,0);
   lineFit1260->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1260);
   gre->Draw("p ");
   
   TF1 *lineFit1261 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1261->SetFillColor(19);
   lineFit1261->SetFillStyle(0);
   lineFit1261->SetLineColor(11);
   lineFit1261->SetLineWidth(2);
   lineFit1261->SetChisquare(5.939891e-28);
   lineFit1261->SetNDF(0);
   lineFit1261->GetXaxis()->SetLabelFont(42);
   lineFit1261->GetXaxis()->SetTitleOffset(1);
   lineFit1261->GetXaxis()->SetTitleFont(42);
   lineFit1261->GetYaxis()->SetLabelFont(42);
   lineFit1261->GetYaxis()->SetTitleFont(42);
   lineFit1261->SetParameter(0,0.2439338);
   lineFit1261->SetParError(0,0.1213648);
   lineFit1261->SetParLimits(0,0,0);
   lineFit1261->SetParameter(1,-0.00625);
   lineFit1261->SetParError(1,0.006701251);
   lineFit1261->SetParLimits(1,0,0);
   lineFit1261->Draw("same");
   
   Double_t 30.000000 ppm_fx1261[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1261[2] = {
   1.393934,
   1.118934};
   Double_t 30.000000 ppm_fex1261[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1261[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,30.000000 ppm_fx1261,30.000000 ppm_fy1261,30.000000 ppm_fex1261,30.000000 ppm_fey1261);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(12);
   gre->SetMarkerColor(12);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->SetMinimum(1.068689);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->SetMaximum(1.444179);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_Graph_30dO000000sPppm105110771111115312031261->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_30.000000 ppm105110771111115312031261);
   
   
   TF1 *lineFit1262 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1262->SetFillColor(19);
   lineFit1262->SetFillStyle(0);
   lineFit1262->SetLineColor(12);
   lineFit1262->SetLineWidth(2);
   lineFit1262->SetChisquare(1.961151e-25);
   lineFit1262->SetNDF(0);
   lineFit1262->GetXaxis()->SetLabelFont(42);
   lineFit1262->GetXaxis()->SetTitleOffset(1);
   lineFit1262->GetXaxis()->SetTitleFont(42);
   lineFit1262->GetYaxis()->SetLabelFont(42);
   lineFit1262->GetYaxis()->SetTitleFont(42);
   lineFit1262->SetParameter(0,2.493934);
   lineFit1262->SetParError(0,0.1213648);
   lineFit1262->SetParLimits(0,0,0);
   lineFit1262->SetParameter(1,-0.06875);
   lineFit1262->SetParError(1,0.006701251);
   lineFit1262->SetParLimits(1,0,0);
   lineFit1262->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1262);
   gre->Draw("p ");
   
   TF1 *lineFit1263 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1263->SetFillColor(19);
   lineFit1263->SetFillStyle(0);
   lineFit1263->SetLineColor(12);
   lineFit1263->SetLineWidth(2);
   lineFit1263->SetChisquare(1.961151e-25);
   lineFit1263->SetNDF(0);
   lineFit1263->GetXaxis()->SetLabelFont(42);
   lineFit1263->GetXaxis()->SetTitleOffset(1);
   lineFit1263->GetXaxis()->SetTitleFont(42);
   lineFit1263->GetYaxis()->SetLabelFont(42);
   lineFit1263->GetYaxis()->SetTitleFont(42);
   lineFit1263->SetParameter(0,2.493934);
   lineFit1263->SetParError(0,0.1213648);
   lineFit1263->SetParLimits(0,0,0);
   lineFit1263->SetParameter(1,-0.06875);
   lineFit1263->SetParError(1,0.006701251);
   lineFit1263->SetParLimits(1,0,0);
   lineFit1263->Draw("same");
   
   Double_t -30.000000 ppm_fx1263[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1263[2] = {
   -2.359085,
   -1.884085};
   Double_t -30.000000 ppm_fex1263[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1263[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1263,-30.000000 ppm_fy1263,-30.000000 ppm_fex1263,-30.000000 ppm_fey1263);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(13);
   gre->SetMarkerColor(13);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263 = new TH1F("Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->SetMinimum(-2.425703);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->SetMaximum(-1.817467);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10791113115512051263->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_-30.000000 ppm10791113115512051263);
   
   
   TF1 *lineFit1264 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1264->SetFillColor(19);
   lineFit1264->SetFillStyle(0);
   lineFit1264->SetLineColor(13);
   lineFit1264->SetLineWidth(2);
   lineFit1264->SetChisquare(1.274218e-25);
   lineFit1264->SetNDF(0);
   lineFit1264->GetXaxis()->SetLabelFont(42);
   lineFit1264->GetXaxis()->SetTitleOffset(1);
   lineFit1264->GetXaxis()->SetTitleFont(42);
   lineFit1264->GetYaxis()->SetLabelFont(42);
   lineFit1264->GetYaxis()->SetTitleFont(42);
   lineFit1264->SetParameter(0,-4.259085);
   lineFit1264->SetParError(0,0.1020146);
   lineFit1264->SetParLimits(0,0,0);
   lineFit1264->SetParameter(1,0.11875);
   lineFit1264->SetParError(1,0.005632813);
   lineFit1264->SetParLimits(1,0,0);
   lineFit1264->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1264);
   gre->Draw("p ");
   
   TF1 *lineFit1265 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1265->SetFillColor(19);
   lineFit1265->SetFillStyle(0);
   lineFit1265->SetLineColor(13);
   lineFit1265->SetLineWidth(2);
   lineFit1265->SetChisquare(1.274218e-25);
   lineFit1265->SetNDF(0);
   lineFit1265->GetXaxis()->SetLabelFont(42);
   lineFit1265->GetXaxis()->SetTitleOffset(1);
   lineFit1265->GetXaxis()->SetTitleFont(42);
   lineFit1265->GetYaxis()->SetLabelFont(42);
   lineFit1265->GetYaxis()->SetTitleFont(42);
   lineFit1265->SetParameter(0,-4.259085);
   lineFit1265->SetParError(0,0.1020146);
   lineFit1265->SetParLimits(0,0,0);
   lineFit1265->SetParameter(1,0.11875);
   lineFit1265->SetParError(1,0.005632813);
   lineFit1265->SetParLimits(1,0,0);
   lineFit1265->Draw("same");
   
   Double_t -10.000000 ppm_fx1265[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1265[2] = {
   -1.109085,
   -0.884085};
   Double_t -10.000000 ppm_fex1265[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1265[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1265,-10.000000 ppm_fy1265,-10.000000 ppm_fex1265,-10.000000 ppm_fey1265);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(14);
   gre->SetMarkerColor(14);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265 = new TH1F("Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->SetMinimum(-1.150703);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->SetMaximum(-0.8424666);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10811115115712071265->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_-10.000000 ppm10811115115712071265);
   
   
   TF1 *lineFit1266 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1266->SetFillColor(19);
   lineFit1266->SetFillStyle(0);
   lineFit1266->SetLineColor(14);
   lineFit1266->SetLineWidth(2);
   lineFit1266->SetChisquare(1.214003e-27);
   lineFit1266->SetNDF(0);
   lineFit1266->GetXaxis()->SetLabelFont(42);
   lineFit1266->GetXaxis()->SetTitleOffset(1);
   lineFit1266->GetXaxis()->SetTitleFont(42);
   lineFit1266->GetYaxis()->SetLabelFont(42);
   lineFit1266->GetYaxis()->SetTitleFont(42);
   lineFit1266->SetParameter(0,-2.009085);
   lineFit1266->SetParError(0,0.1020146);
   lineFit1266->SetParLimits(0,0,0);
   lineFit1266->SetParameter(1,0.05625);
   lineFit1266->SetParError(1,0.005632813);
   lineFit1266->SetParLimits(1,0,0);
   lineFit1266->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1266);
   gre->Draw("p ");
   
   TF1 *lineFit1267 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1267->SetFillColor(19);
   lineFit1267->SetFillStyle(0);
   lineFit1267->SetLineColor(14);
   lineFit1267->SetLineWidth(2);
   lineFit1267->SetChisquare(1.214003e-27);
   lineFit1267->SetNDF(0);
   lineFit1267->GetXaxis()->SetLabelFont(42);
   lineFit1267->GetXaxis()->SetTitleOffset(1);
   lineFit1267->GetXaxis()->SetTitleFont(42);
   lineFit1267->GetYaxis()->SetLabelFont(42);
   lineFit1267->GetYaxis()->SetTitleFont(42);
   lineFit1267->SetParameter(0,-2.009085);
   lineFit1267->SetParError(0,0.1020146);
   lineFit1267->SetParLimits(0,0,0);
   lineFit1267->SetParameter(1,0.05625);
   lineFit1267->SetParError(1,0.005632813);
   lineFit1267->SetParLimits(1,0,0);
   lineFit1267->Draw("same");
   
   Double_t 10.000000 ppm_fx1267[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1267[2] = {
   0.140915,
   0.115915};
   Double_t 10.000000 ppm_fex1267[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1267[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,10.000000 ppm_fx1267,10.000000 ppm_fy1267,10.000000 ppm_fex1267,10.000000 ppm_fey1267);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(15);
   gre->SetMarkerColor(15);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267 = new TH1F("Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->SetMinimum(0.0942966);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->SetMaximum(0.1625334);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10831117115912091267->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_10.000000 ppm10831117115912091267);
   
   
   TF1 *lineFit1268 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1268->SetFillColor(19);
   lineFit1268->SetFillStyle(0);
   lineFit1268->SetLineColor(15);
   lineFit1268->SetLineWidth(2);
   lineFit1268->SetChisquare(5.463015e-29);
   lineFit1268->SetNDF(0);
   lineFit1268->GetXaxis()->SetLabelFont(42);
   lineFit1268->GetXaxis()->SetTitleOffset(1);
   lineFit1268->GetXaxis()->SetTitleFont(42);
   lineFit1268->GetYaxis()->SetLabelFont(42);
   lineFit1268->GetYaxis()->SetTitleFont(42);
   lineFit1268->SetParameter(0,0.240915);
   lineFit1268->SetParError(0,0.1020146);
   lineFit1268->SetParLimits(0,0,0);
   lineFit1268->SetParameter(1,-0.00625);
   lineFit1268->SetParError(1,0.005632813);
   lineFit1268->SetParLimits(1,0,0);
   lineFit1268->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1268);
   gre->Draw("p ");
   
   TF1 *lineFit1269 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1269->SetFillColor(19);
   lineFit1269->SetFillStyle(0);
   lineFit1269->SetLineColor(15);
   lineFit1269->SetLineWidth(2);
   lineFit1269->SetChisquare(5.463015e-29);
   lineFit1269->SetNDF(0);
   lineFit1269->GetXaxis()->SetLabelFont(42);
   lineFit1269->GetXaxis()->SetTitleOffset(1);
   lineFit1269->GetXaxis()->SetTitleFont(42);
   lineFit1269->GetYaxis()->SetLabelFont(42);
   lineFit1269->GetYaxis()->SetTitleFont(42);
   lineFit1269->SetParameter(0,0.240915);
   lineFit1269->SetParError(0,0.1020146);
   lineFit1269->SetParLimits(0,0,0);
   lineFit1269->SetParameter(1,-0.00625);
   lineFit1269->SetParError(1,0.005632813);
   lineFit1269->SetParLimits(1,0,0);
   lineFit1269->Draw("same");
   
   Double_t 30.000000 ppm_fx1269[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1269[2] = {
   1.390915,
   1.115915};
   Double_t 30.000000 ppm_fex1269[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1269[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,30.000000 ppm_fx1269,30.000000 ppm_fy1269,30.000000 ppm_fex1269,30.000000 ppm_fey1269);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(16);
   gre->SetMarkerColor(16);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269 = new TH1F("Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->SetMinimum(1.069297);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->SetMaximum(1.437533);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10851119116112111269->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_30.000000 ppm10851119116112111269);
   
   
   TF1 *lineFit1270 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1270->SetFillColor(19);
   lineFit1270->SetFillStyle(0);
   lineFit1270->SetLineColor(16);
   lineFit1270->SetLineWidth(2);
   lineFit1270->SetChisquare(8.779672e-26);
   lineFit1270->SetNDF(0);
   lineFit1270->GetXaxis()->SetLabelFont(42);
   lineFit1270->GetXaxis()->SetTitleOffset(1);
   lineFit1270->GetXaxis()->SetTitleFont(42);
   lineFit1270->GetYaxis()->SetLabelFont(42);
   lineFit1270->GetYaxis()->SetTitleFont(42);
   lineFit1270->SetParameter(0,2.490915);
   lineFit1270->SetParError(0,0.1020146);
   lineFit1270->SetParLimits(0,0,0);
   lineFit1270->SetParameter(1,-0.06875);
   lineFit1270->SetParError(1,0.005632813);
   lineFit1270->SetParLimits(1,0,0);
   lineFit1270->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1270);
   gre->Draw("p ");
   
   TF1 *lineFit1271 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1271->SetFillColor(19);
   lineFit1271->SetFillStyle(0);
   lineFit1271->SetLineColor(16);
   lineFit1271->SetLineWidth(2);
   lineFit1271->SetChisquare(8.779672e-26);
   lineFit1271->SetNDF(0);
   lineFit1271->GetXaxis()->SetLabelFont(42);
   lineFit1271->GetXaxis()->SetTitleOffset(1);
   lineFit1271->GetXaxis()->SetTitleFont(42);
   lineFit1271->GetYaxis()->SetLabelFont(42);
   lineFit1271->GetYaxis()->SetTitleFont(42);
   lineFit1271->SetParameter(0,2.490915);
   lineFit1271->SetParError(0,0.1020146);
   lineFit1271->SetParLimits(0,0,0);
   lineFit1271->SetParameter(1,-0.06875);
   lineFit1271->SetParError(1,0.005632813);
   lineFit1271->SetParLimits(1,0,0);
   lineFit1271->Draw("same");
   
   Double_t -30.000000 ppm_fx1271[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1271[2] = {
   -2.360165,
   -1.885165};
   Double_t -30.000000 ppm_fex1271[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1271[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1271,-30.000000 ppm_fy1271,-30.000000 ppm_fex1271,-30.000000 ppm_fey1271);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(17);
   gre->SetMarkerColor(17);
   
   TH1F *Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271 = new TH1F("Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->SetMinimum(-2.425486);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->SetMaximum(-1.819845);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1121116312131271->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-30.000000 ppm1121116312131271);
   
   
   TF1 *lineFit1272 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1272->SetFillColor(19);
   lineFit1272->SetFillStyle(0);
   lineFit1272->SetLineColor(17);
   lineFit1272->SetLineWidth(2);
   lineFit1272->SetChisquare(9.803201e-25);
   lineFit1272->SetNDF(0);
   lineFit1272->GetXaxis()->SetLabelFont(42);
   lineFit1272->GetXaxis()->SetTitleOffset(1);
   lineFit1272->GetXaxis()->SetTitleFont(42);
   lineFit1272->GetYaxis()->SetLabelFont(42);
   lineFit1272->GetYaxis()->SetTitleFont(42);
   lineFit1272->SetParameter(0,-4.260165);
   lineFit1272->SetParError(0,0.0950896);
   lineFit1272->SetParLimits(0,0,0);
   lineFit1272->SetParameter(1,0.11875);
   lineFit1272->SetParError(1,0.005250445);
   lineFit1272->SetParLimits(1,0,0);
   lineFit1272->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1272);
   gre->Draw("p ");
   
   TF1 *lineFit1273 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1273->SetFillColor(19);
   lineFit1273->SetFillStyle(0);
   lineFit1273->SetLineColor(17);
   lineFit1273->SetLineWidth(2);
   lineFit1273->SetChisquare(9.803201e-25);
   lineFit1273->SetNDF(0);
   lineFit1273->GetXaxis()->SetLabelFont(42);
   lineFit1273->GetXaxis()->SetTitleOffset(1);
   lineFit1273->GetXaxis()->SetTitleFont(42);
   lineFit1273->GetYaxis()->SetLabelFont(42);
   lineFit1273->GetYaxis()->SetTitleFont(42);
   lineFit1273->SetParameter(0,-4.260165);
   lineFit1273->SetParError(0,0.0950896);
   lineFit1273->SetParLimits(0,0,0);
   lineFit1273->SetParameter(1,0.11875);
   lineFit1273->SetParError(1,0.005250445);
   lineFit1273->SetParLimits(1,0,0);
   lineFit1273->Draw("same");
   
   Double_t -10.000000 ppm_fx1273[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1273[2] = {
   -1.110165,
   -0.8851653};
   Double_t -10.000000 ppm_fex1273[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1273[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1273,-10.000000 ppm_fy1273,-10.000000 ppm_fex1273,-10.000000 ppm_fey1273);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(18);
   gre->SetMarkerColor(18);
   
   TH1F *Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273 = new TH1F("Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->SetMinimum(-1.150486);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->SetMaximum(-0.8448447);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1123116512151273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-10.000000 ppm1123116512151273);
   
   
   TF1 *lineFit1274 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1274->SetFillColor(19);
   lineFit1274->SetFillStyle(0);
   lineFit1274->SetLineColor(18);
   lineFit1274->SetLineWidth(2);
   lineFit1274->SetChisquare(1.632004e-25);
   lineFit1274->SetNDF(0);
   lineFit1274->GetXaxis()->SetLabelFont(42);
   lineFit1274->GetXaxis()->SetTitleOffset(1);
   lineFit1274->GetXaxis()->SetTitleFont(42);
   lineFit1274->GetYaxis()->SetLabelFont(42);
   lineFit1274->GetYaxis()->SetTitleFont(42);
   lineFit1274->SetParameter(0,-2.010165);
   lineFit1274->SetParError(0,0.0950896);
   lineFit1274->SetParLimits(0,0,0);
   lineFit1274->SetParameter(1,0.05625);
   lineFit1274->SetParError(1,0.005250445);
   lineFit1274->SetParLimits(1,0,0);
   lineFit1274->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1274);
   gre->Draw("p ");
   
   TF1 *lineFit1275 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1275->SetFillColor(19);
   lineFit1275->SetFillStyle(0);
   lineFit1275->SetLineColor(18);
   lineFit1275->SetLineWidth(2);
   lineFit1275->SetChisquare(1.632004e-25);
   lineFit1275->SetNDF(0);
   lineFit1275->GetXaxis()->SetLabelFont(42);
   lineFit1275->GetXaxis()->SetTitleOffset(1);
   lineFit1275->GetXaxis()->SetTitleFont(42);
   lineFit1275->GetYaxis()->SetLabelFont(42);
   lineFit1275->GetYaxis()->SetTitleFont(42);
   lineFit1275->SetParameter(0,-2.010165);
   lineFit1275->SetParError(0,0.0950896);
   lineFit1275->SetParLimits(0,0,0);
   lineFit1275->SetParameter(1,0.05625);
   lineFit1275->SetParError(1,0.005250445);
   lineFit1275->SetParLimits(1,0,0);
   lineFit1275->Draw("same");
   
   Double_t 10.000000 ppm_fx1275[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1275[2] = {
   0.1398347,
   0.1148347};
   Double_t 10.000000 ppm_fex1275[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1275[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,10.000000 ppm_fx1275,10.000000 ppm_fy1275,10.000000 ppm_fex1275,10.000000 ppm_fey1275);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(19);
   gre->SetMarkerColor(19);
   
   TH1F *Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275 = new TH1F("Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->SetMinimum(0.09451405);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->SetMaximum(0.1601553);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->SetDirectory(0);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->SetLineColor(ci);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1125116712171275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_10.000000 ppm1125116712171275);
   
   
   TF1 *lineFit1276 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1276->SetFillColor(19);
   lineFit1276->SetFillStyle(0);
   lineFit1276->SetLineColor(19);
   lineFit1276->SetLineWidth(2);
   lineFit1276->SetChisquare(3.976088e-27);
   lineFit1276->SetNDF(0);
   lineFit1276->GetXaxis()->SetLabelFont(42);
   lineFit1276->GetXaxis()->SetTitleOffset(1);
   lineFit1276->GetXaxis()->SetTitleFont(42);
   lineFit1276->GetYaxis()->SetLabelFont(42);
   lineFit1276->GetYaxis()->SetTitleFont(42);
   lineFit1276->SetParameter(0,0.2398347);
   lineFit1276->SetParError(0,0.0950896);
   lineFit1276->SetParLimits(0,0,0);
   lineFit1276->SetParameter(1,-0.00625);
   lineFit1276->SetParError(1,0.005250445);
   lineFit1276->SetParLimits(1,0,0);
   lineFit1276->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1276);
   gre->Draw("p ");
   
   TF1 *lineFit1277 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1277->SetFillColor(19);
   lineFit1277->SetFillStyle(0);
   lineFit1277->SetLineColor(19);
   lineFit1277->SetLineWidth(2);
   lineFit1277->SetChisquare(3.976088e-27);
   lineFit1277->SetNDF(0);
   lineFit1277->GetXaxis()->SetLabelFont(42);
   lineFit1277->GetXaxis()->SetTitleOffset(1);
   lineFit1277->GetXaxis()->SetTitleFont(42);
   lineFit1277->GetYaxis()->SetLabelFont(42);
   lineFit1277->GetYaxis()->SetTitleFont(42);
   lineFit1277->SetParameter(0,0.2398347);
   lineFit1277->SetParError(0,0.0950896);
   lineFit1277->SetParLimits(0,0,0);
   lineFit1277->SetParameter(1,-0.00625);
   lineFit1277->SetParError(1,0.005250445);
   lineFit1277->SetParLimits(1,0,0);
   lineFit1277->Draw("same");
   
   Double_t 30.000000 ppm_fx1277[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1277[2] = {
   1.389835,
   1.114835};
   Double_t 30.000000 ppm_fex1277[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1277[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,30.000000 ppm_fx1277,30.000000 ppm_fy1277,30.000000 ppm_fex1277,30.000000 ppm_fey1277);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(20);
   gre->SetMarkerColor(20);
   
   TH1F *Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277 = new TH1F("Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->SetMinimum(1.069514);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->SetMaximum(1.435155);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->SetDirectory(0);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->SetLineColor(ci);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1127116912191277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_30.000000 ppm1127116912191277);
   
   
   TF1 *lineFit1278 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1278->SetFillColor(19);
   lineFit1278->SetFillStyle(0);
   lineFit1278->SetLineColor(20);
   lineFit1278->SetLineWidth(2);
   lineFit1278->SetChisquare(1.379379e-25);
   lineFit1278->SetNDF(0);
   lineFit1278->GetXaxis()->SetLabelFont(42);
   lineFit1278->GetXaxis()->SetTitleOffset(1);
   lineFit1278->GetXaxis()->SetTitleFont(42);
   lineFit1278->GetYaxis()->SetLabelFont(42);
   lineFit1278->GetYaxis()->SetTitleFont(42);
   lineFit1278->SetParameter(0,2.489835);
   lineFit1278->SetParError(0,0.0950896);
   lineFit1278->SetParLimits(0,0,0);
   lineFit1278->SetParameter(1,-0.06875);
   lineFit1278->SetParError(1,0.005250445);
   lineFit1278->SetParLimits(1,0,0);
   lineFit1278->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1278);
   gre->Draw("p ");
   
   TF1 *lineFit1279 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1279->SetFillColor(19);
   lineFit1279->SetFillStyle(0);
   lineFit1279->SetLineColor(20);
   lineFit1279->SetLineWidth(2);
   lineFit1279->SetChisquare(1.379379e-25);
   lineFit1279->SetNDF(0);
   lineFit1279->GetXaxis()->SetLabelFont(42);
   lineFit1279->GetXaxis()->SetTitleOffset(1);
   lineFit1279->GetXaxis()->SetTitleFont(42);
   lineFit1279->GetYaxis()->SetLabelFont(42);
   lineFit1279->GetYaxis()->SetTitleFont(42);
   lineFit1279->SetParameter(0,2.489835);
   lineFit1279->SetParError(0,0.0950896);
   lineFit1279->SetParLimits(0,0,0);
   lineFit1279->SetParameter(1,-0.06875);
   lineFit1279->SetParError(1,0.005250445);
   lineFit1279->SetParLimits(1,0,0);
   lineFit1279->Draw("same");
   
   Double_t -30.000000 ppm_fx1279[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1279[2] = {
   -2.361757,
   -1.886757};
   Double_t -30.000000 ppm_fex1279[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1279[2] = {
   0.0132568,
   0.0132568};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1279,-30.000000 ppm_fy1279,-30.000000 ppm_fex1279,-30.000000 ppm_fey1279);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(21);
   gre->SetMarkerColor(21);
   
   TH1F *Graph_Graph_Graph_mI30dO000000sPppm117112211279 = new TH1F("Graph_Graph_Graph_mI30dO000000sPppm117112211279","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->SetMinimum(-2.425166);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->SetMaximum(-1.823349);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->SetDirectory(0);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->SetLineColor(ci);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm117112211279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-30.000000 ppm117112211279);
   
   
   TF1 *lineFit1280 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1280->SetFillColor(19);
   lineFit1280->SetFillStyle(0);
   lineFit1280->SetLineColor(21);
   lineFit1280->SetLineWidth(2);
   lineFit1280->SetChisquare(2.244363e-25);
   lineFit1280->SetNDF(0);
   lineFit1280->GetXaxis()->SetLabelFont(42);
   lineFit1280->GetXaxis()->SetTitleOffset(1);
   lineFit1280->GetXaxis()->SetTitleFont(42);
   lineFit1280->GetYaxis()->SetLabelFont(42);
   lineFit1280->GetYaxis()->SetTitleFont(42);
   lineFit1280->SetParameter(0,-4.261757);
   lineFit1280->SetParError(0,0.08488494);
   lineFit1280->SetParLimits(0,0,0);
   lineFit1280->SetParameter(1,0.11875);
   lineFit1280->SetParError(1,0.004686987);
   lineFit1280->SetParLimits(1,0,0);
   lineFit1280->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1280);
   gre->Draw("p ");
   
   TF1 *lineFit1281 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1281->SetFillColor(19);
   lineFit1281->SetFillStyle(0);
   lineFit1281->SetLineColor(21);
   lineFit1281->SetLineWidth(2);
   lineFit1281->SetChisquare(2.244363e-25);
   lineFit1281->SetNDF(0);
   lineFit1281->GetXaxis()->SetLabelFont(42);
   lineFit1281->GetXaxis()->SetTitleOffset(1);
   lineFit1281->GetXaxis()->SetTitleFont(42);
   lineFit1281->GetYaxis()->SetLabelFont(42);
   lineFit1281->GetYaxis()->SetTitleFont(42);
   lineFit1281->SetParameter(0,-4.261757);
   lineFit1281->SetParError(0,0.08488494);
   lineFit1281->SetParLimits(0,0,0);
   lineFit1281->SetParameter(1,0.11875);
   lineFit1281->SetParError(1,0.004686987);
   lineFit1281->SetParLimits(1,0,0);
   lineFit1281->Draw("same");
   
   Double_t -10.000000 ppm_fx1281[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1281[2] = {
   -1.111757,
   -0.8867573};
   Double_t -10.000000 ppm_fex1281[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1281[2] = {
   0.0132568,
   0.0132568};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1281,-10.000000 ppm_fy1281,-10.000000 ppm_fex1281,-10.000000 ppm_fey1281);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(22);
   gre->SetMarkerColor(22);
   
   TH1F *Graph_Graph_Graph_mI10dO000000sPppm117312231281 = new TH1F("Graph_Graph_Graph_mI10dO000000sPppm117312231281","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->SetMinimum(-1.150166);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->SetMaximum(-0.8483492);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->SetDirectory(0);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->SetLineColor(ci);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm117312231281->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-10.000000 ppm117312231281);
   
   
   TF1 *lineFit1282 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1282->SetFillColor(19);
   lineFit1282->SetFillStyle(0);
   lineFit1282->SetLineColor(22);
   lineFit1282->SetLineWidth(2);
   lineFit1282->SetChisquare(4.067907e-26);
   lineFit1282->SetNDF(0);
   lineFit1282->GetXaxis()->SetLabelFont(42);
   lineFit1282->GetXaxis()->SetTitleOffset(1);
   lineFit1282->GetXaxis()->SetTitleFont(42);
   lineFit1282->GetYaxis()->SetLabelFont(42);
   lineFit1282->GetYaxis()->SetTitleFont(42);
   lineFit1282->SetParameter(0,-2.011757);
   lineFit1282->SetParError(0,0.08488494);
   lineFit1282->SetParLimits(0,0,0);
   lineFit1282->SetParameter(1,0.05625);
   lineFit1282->SetParError(1,0.004686987);
   lineFit1282->SetParLimits(1,0,0);
   lineFit1282->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1282);
   gre->Draw("p ");
   
   TF1 *lineFit1283 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1283->SetFillColor(19);
   lineFit1283->SetFillStyle(0);
   lineFit1283->SetLineColor(22);
   lineFit1283->SetLineWidth(2);
   lineFit1283->SetChisquare(4.067907e-26);
   lineFit1283->SetNDF(0);
   lineFit1283->GetXaxis()->SetLabelFont(42);
   lineFit1283->GetXaxis()->SetTitleOffset(1);
   lineFit1283->GetXaxis()->SetTitleFont(42);
   lineFit1283->GetYaxis()->SetLabelFont(42);
   lineFit1283->GetYaxis()->SetTitleFont(42);
   lineFit1283->SetParameter(0,-2.011757);
   lineFit1283->SetParError(0,0.08488494);
   lineFit1283->SetParLimits(0,0,0);
   lineFit1283->SetParameter(1,0.05625);
   lineFit1283->SetParError(1,0.004686987);
   lineFit1283->SetParLimits(1,0,0);
   lineFit1283->Draw("same");
   
   Double_t 10.000000 ppm_fx1283[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1283[2] = {
   0.1382427,
   0.1132427};
   Double_t 10.000000 ppm_fex1283[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1283[2] = {
   0.0132568,
   0.0132568};
   gre = new TGraphErrors(2,10.000000 ppm_fx1283,10.000000 ppm_fy1283,10.000000 ppm_fex1283,10.000000 ppm_fey1283);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(23);
   gre->SetMarkerColor(23);
   
   TH1F *Graph_Graph_Graph_10dO000000sPppm117512251283 = new TH1F("Graph_Graph_Graph_10dO000000sPppm117512251283","Graph",100,15.6,20.4);
   Graph_Graph_Graph_10dO000000sPppm117512251283->SetMinimum(0.09483449);
   Graph_Graph_Graph_10dO000000sPppm117512251283->SetMaximum(0.1566508);
   Graph_Graph_Graph_10dO000000sPppm117512251283->SetDirectory(0);
   Graph_Graph_Graph_10dO000000sPppm117512251283->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_10dO000000sPppm117512251283->SetLineColor(ci);
   Graph_Graph_Graph_10dO000000sPppm117512251283->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm117512251283->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm117512251283->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm117512251283->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm117512251283->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm117512251283->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm117512251283->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm117512251283->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_10.000000 ppm117512251283);
   
   
   TF1 *lineFit1284 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1284->SetFillColor(19);
   lineFit1284->SetFillStyle(0);
   lineFit1284->SetLineColor(23);
   lineFit1284->SetLineWidth(2);
   lineFit1284->SetChisquare(4.383521e-28);
   lineFit1284->SetNDF(0);
   lineFit1284->GetXaxis()->SetLabelFont(42);
   lineFit1284->GetXaxis()->SetTitleOffset(1);
   lineFit1284->GetXaxis()->SetTitleFont(42);
   lineFit1284->GetYaxis()->SetLabelFont(42);
   lineFit1284->GetYaxis()->SetTitleFont(42);
   lineFit1284->SetParameter(0,0.2382427);
   lineFit1284->SetParError(0,0.08488494);
   lineFit1284->SetParLimits(0,0,0);
   lineFit1284->SetParameter(1,-0.00625);
   lineFit1284->SetParError(1,0.004686987);
   lineFit1284->SetParLimits(1,0,0);
   lineFit1284->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1284);
   gre->Draw("p ");
   
   TF1 *lineFit1285 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1285->SetFillColor(19);
   lineFit1285->SetFillStyle(0);
   lineFit1285->SetLineColor(23);
   lineFit1285->SetLineWidth(2);
   lineFit1285->SetChisquare(4.383521e-28);
   lineFit1285->SetNDF(0);
   lineFit1285->GetXaxis()->SetLabelFont(42);
   lineFit1285->GetXaxis()->SetTitleOffset(1);
   lineFit1285->GetXaxis()->SetTitleFont(42);
   lineFit1285->GetYaxis()->SetLabelFont(42);
   lineFit1285->GetYaxis()->SetTitleFont(42);
   lineFit1285->SetParameter(0,0.2382427);
   lineFit1285->SetParError(0,0.08488494);
   lineFit1285->SetParLimits(0,0,0);
   lineFit1285->SetParameter(1,-0.00625);
   lineFit1285->SetParError(1,0.004686987);
   lineFit1285->SetParLimits(1,0,0);
   lineFit1285->Draw("same");
   
   Double_t 30.000000 ppm_fx1285[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1285[2] = {
   1.388243,
   1.113243};
   Double_t 30.000000 ppm_fex1285[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1285[2] = {
   0.0132568,
   0.0132568};
   gre = new TGraphErrors(2,30.000000 ppm_fx1285,30.000000 ppm_fy1285,30.000000 ppm_fex1285,30.000000 ppm_fey1285);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(24);
   gre->SetMarkerColor(24);
   
   TH1F *Graph_Graph_Graph_30dO000000sPppm117712271285 = new TH1F("Graph_Graph_Graph_30dO000000sPppm117712271285","Graph",100,15.6,20.4);
   Graph_Graph_Graph_30dO000000sPppm117712271285->SetMinimum(1.069834);
   Graph_Graph_Graph_30dO000000sPppm117712271285->SetMaximum(1.431651);
   Graph_Graph_Graph_30dO000000sPppm117712271285->SetDirectory(0);
   Graph_Graph_Graph_30dO000000sPppm117712271285->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_30dO000000sPppm117712271285->SetLineColor(ci);
   Graph_Graph_Graph_30dO000000sPppm117712271285->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm117712271285->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm117712271285->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm117712271285->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm117712271285->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm117712271285->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm117712271285->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm117712271285->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_30.000000 ppm117712271285);
   
   
   TF1 *lineFit1286 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1286->SetFillColor(19);
   lineFit1286->SetFillStyle(0);
   lineFit1286->SetLineColor(24);
   lineFit1286->SetLineWidth(2);
   lineFit1286->SetChisquare(2.805453e-27);
   lineFit1286->SetNDF(0);
   lineFit1286->GetXaxis()->SetLabelFont(42);
   lineFit1286->GetXaxis()->SetTitleOffset(1);
   lineFit1286->GetXaxis()->SetTitleFont(42);
   lineFit1286->GetYaxis()->SetLabelFont(42);
   lineFit1286->GetYaxis()->SetTitleFont(42);
   lineFit1286->SetParameter(0,2.488243);
   lineFit1286->SetParError(0,0.08488494);
   lineFit1286->SetParLimits(0,0,0);
   lineFit1286->SetParameter(1,-0.06875);
   lineFit1286->SetParError(1,0.004686987);
   lineFit1286->SetParLimits(1,0,0);
   lineFit1286->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1286);
   gre->Draw("p ");
   
   TF1 *lineFit1287 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1287->SetFillColor(19);
   lineFit1287->SetFillStyle(0);
   lineFit1287->SetLineColor(24);
   lineFit1287->SetLineWidth(2);
   lineFit1287->SetChisquare(2.805453e-27);
   lineFit1287->SetNDF(0);
   lineFit1287->GetXaxis()->SetLabelFont(42);
   lineFit1287->GetXaxis()->SetTitleOffset(1);
   lineFit1287->GetXaxis()->SetTitleFont(42);
   lineFit1287->GetYaxis()->SetLabelFont(42);
   lineFit1287->GetYaxis()->SetTitleFont(42);
   lineFit1287->SetParameter(0,2.488243);
   lineFit1287->SetParError(0,0.08488494);
   lineFit1287->SetParLimits(0,0,0);
   lineFit1287->SetParameter(1,-0.06875);
   lineFit1287->SetParError(1,0.004686987);
   lineFit1287->SetParLimits(1,0,0);
   lineFit1287->Draw("same");
   
   Double_t -30.000000 ppm_fx1287[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1287[2] = {
   -2.362925,
   -1.887925};
   Double_t -30.000000 ppm_fex1287[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1287[2] = {
   0.0120878,
   0.0120878};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1287,-30.000000 ppm_fy1287,-30.000000 ppm_fex1287,-30.000000 ppm_fey1287);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(25);
   gre->SetMarkerColor(25);
   
   TH1F *Graph_Graph_mI30dO000000sPppm12291287 = new TH1F("Graph_Graph_mI30dO000000sPppm12291287","Graph",100,15.6,20.4);
   Graph_Graph_mI30dO000000sPppm12291287->SetMinimum(-2.42493);
   Graph_Graph_mI30dO000000sPppm12291287->SetMaximum(-1.82592);
   Graph_Graph_mI30dO000000sPppm12291287->SetDirectory(0);
   Graph_Graph_mI30dO000000sPppm12291287->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI30dO000000sPppm12291287->SetLineColor(ci);
   Graph_Graph_mI30dO000000sPppm12291287->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm12291287->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm12291287->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm12291287->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm12291287->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm12291287->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm12291287->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm12291287->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-30.000000 ppm12291287);
   
   
   TF1 *lineFit1288 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1288->SetFillColor(19);
   lineFit1288->SetFillStyle(0);
   lineFit1288->SetLineColor(25);
   lineFit1288->SetLineWidth(2);
   lineFit1288->SetChisquare(4.066052e-25);
   lineFit1288->SetNDF(0);
   lineFit1288->GetXaxis()->SetLabelFont(42);
   lineFit1288->GetXaxis()->SetTitleOffset(1);
   lineFit1288->GetXaxis()->SetTitleFont(42);
   lineFit1288->GetYaxis()->SetLabelFont(42);
   lineFit1288->GetYaxis()->SetTitleFont(42);
   lineFit1288->SetParameter(0,-4.262925);
   lineFit1288->SetParError(0,0.07739969);
   lineFit1288->SetParLimits(0,0,0);
   lineFit1288->SetParameter(1,0.11875);
   lineFit1288->SetParError(1,0.004273683);
   lineFit1288->SetParLimits(1,0,0);
   lineFit1288->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1288);
   gre->Draw("p ");
   
   TF1 *lineFit1289 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1289->SetFillColor(19);
   lineFit1289->SetFillStyle(0);
   lineFit1289->SetLineColor(25);
   lineFit1289->SetLineWidth(2);
   lineFit1289->SetChisquare(4.066052e-25);
   lineFit1289->SetNDF(0);
   lineFit1289->GetXaxis()->SetLabelFont(42);
   lineFit1289->GetXaxis()->SetTitleOffset(1);
   lineFit1289->GetXaxis()->SetTitleFont(42);
   lineFit1289->GetYaxis()->SetLabelFont(42);
   lineFit1289->GetYaxis()->SetTitleFont(42);
   lineFit1289->SetParameter(0,-4.262925);
   lineFit1289->SetParError(0,0.07739969);
   lineFit1289->SetParLimits(0,0,0);
   lineFit1289->SetParameter(1,0.11875);
   lineFit1289->SetParError(1,0.004273683);
   lineFit1289->SetParLimits(1,0,0);
   lineFit1289->Draw("same");
   
   Double_t -10.000000 ppm_fx1289[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1289[2] = {
   -1.112925,
   -0.8879251};
   Double_t -10.000000 ppm_fex1289[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1289[2] = {
   0.0120878,
   0.0120878};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1289,-10.000000 ppm_fy1289,-10.000000 ppm_fex1289,-10.000000 ppm_fey1289);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(26);
   gre->SetMarkerColor(26);
   
   TH1F *Graph_Graph_mI10dO000000sPppm12311289 = new TH1F("Graph_Graph_mI10dO000000sPppm12311289","Graph",100,15.6,20.4);
   Graph_Graph_mI10dO000000sPppm12311289->SetMinimum(-1.14993);
   Graph_Graph_mI10dO000000sPppm12311289->SetMaximum(-0.8509197);
   Graph_Graph_mI10dO000000sPppm12311289->SetDirectory(0);
   Graph_Graph_mI10dO000000sPppm12311289->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI10dO000000sPppm12311289->SetLineColor(ci);
   Graph_Graph_mI10dO000000sPppm12311289->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm12311289->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm12311289->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm12311289->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm12311289->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm12311289->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm12311289->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm12311289->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-10.000000 ppm12311289);
   
   
   TF1 *lineFit1290 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1290->SetFillColor(19);
   lineFit1290->SetFillStyle(0);
   lineFit1290->SetLineColor(26);
   lineFit1290->SetLineWidth(2);
   lineFit1290->SetChisquare(1.687159e-26);
   lineFit1290->SetNDF(0);
   lineFit1290->GetXaxis()->SetLabelFont(42);
   lineFit1290->GetXaxis()->SetTitleOffset(1);
   lineFit1290->GetXaxis()->SetTitleFont(42);
   lineFit1290->GetYaxis()->SetLabelFont(42);
   lineFit1290->GetYaxis()->SetTitleFont(42);
   lineFit1290->SetParameter(0,-2.012925);
   lineFit1290->SetParError(0,0.07739969);
   lineFit1290->SetParLimits(0,0,0);
   lineFit1290->SetParameter(1,0.05625);
   lineFit1290->SetParError(1,0.004273683);
   lineFit1290->SetParLimits(1,0,0);
   lineFit1290->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1290);
   gre->Draw("p ");
   
   TF1 *lineFit1291 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1291->SetFillColor(19);
   lineFit1291->SetFillStyle(0);
   lineFit1291->SetLineColor(26);
   lineFit1291->SetLineWidth(2);
   lineFit1291->SetChisquare(1.687159e-26);
   lineFit1291->SetNDF(0);
   lineFit1291->GetXaxis()->SetLabelFont(42);
   lineFit1291->GetXaxis()->SetTitleOffset(1);
   lineFit1291->GetXaxis()->SetTitleFont(42);
   lineFit1291->GetYaxis()->SetLabelFont(42);
   lineFit1291->GetYaxis()->SetTitleFont(42);
   lineFit1291->SetParameter(0,-2.012925);
   lineFit1291->SetParError(0,0.07739969);
   lineFit1291->SetParLimits(0,0,0);
   lineFit1291->SetParameter(1,0.05625);
   lineFit1291->SetParError(1,0.004273683);
   lineFit1291->SetParLimits(1,0,0);
   lineFit1291->Draw("same");
   
   Double_t 10.000000 ppm_fx1291[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1291[2] = {
   0.1370749,
   0.1120749};
   Double_t 10.000000 ppm_fex1291[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1291[2] = {
   0.0120878,
   0.0120878};
   gre = new TGraphErrors(2,10.000000 ppm_fx1291,10.000000 ppm_fy1291,10.000000 ppm_fex1291,10.000000 ppm_fey1291);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(27);
   gre->SetMarkerColor(27);
   
   TH1F *Graph_Graph_10dO000000sPppm12331291 = new TH1F("Graph_Graph_10dO000000sPppm12331291","Graph",100,15.6,20.4);
   Graph_Graph_10dO000000sPppm12331291->SetMinimum(0.09506954);
   Graph_Graph_10dO000000sPppm12331291->SetMaximum(0.1540803);
   Graph_Graph_10dO000000sPppm12331291->SetDirectory(0);
   Graph_Graph_10dO000000sPppm12331291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_10dO000000sPppm12331291->SetLineColor(ci);
   Graph_Graph_10dO000000sPppm12331291->GetXaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm12331291->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm12331291->GetXaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm12331291->GetYaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm12331291->GetYaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm12331291->GetZaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm12331291->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm12331291->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_10.000000 ppm12331291);
   
   
   TF1 *lineFit1292 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1292->SetFillColor(19);
   lineFit1292->SetFillStyle(0);
   lineFit1292->SetLineColor(27);
   lineFit1292->SetLineWidth(2);
   lineFit1292->SetChisquare(2.161672e-28);
   lineFit1292->SetNDF(0);
   lineFit1292->GetXaxis()->SetLabelFont(42);
   lineFit1292->GetXaxis()->SetTitleOffset(1);
   lineFit1292->GetXaxis()->SetTitleFont(42);
   lineFit1292->GetYaxis()->SetLabelFont(42);
   lineFit1292->GetYaxis()->SetTitleFont(42);
   lineFit1292->SetParameter(0,0.2370749);
   lineFit1292->SetParError(0,0.07739969);
   lineFit1292->SetParLimits(0,0,0);
   lineFit1292->SetParameter(1,-0.00625);
   lineFit1292->SetParError(1,0.004273683);
   lineFit1292->SetParLimits(1,0,0);
   lineFit1292->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1292);
   gre->Draw("p ");
   
   TF1 *lineFit1293 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1293->SetFillColor(19);
   lineFit1293->SetFillStyle(0);
   lineFit1293->SetLineColor(27);
   lineFit1293->SetLineWidth(2);
   lineFit1293->SetChisquare(2.161672e-28);
   lineFit1293->SetNDF(0);
   lineFit1293->GetXaxis()->SetLabelFont(42);
   lineFit1293->GetXaxis()->SetTitleOffset(1);
   lineFit1293->GetXaxis()->SetTitleFont(42);
   lineFit1293->GetYaxis()->SetLabelFont(42);
   lineFit1293->GetYaxis()->SetTitleFont(42);
   lineFit1293->SetParameter(0,0.2370749);
   lineFit1293->SetParError(0,0.07739969);
   lineFit1293->SetParLimits(0,0,0);
   lineFit1293->SetParameter(1,-0.00625);
   lineFit1293->SetParError(1,0.004273683);
   lineFit1293->SetParLimits(1,0,0);
   lineFit1293->Draw("same");
   
   Double_t 30.000000 ppm_fx1293[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1293[2] = {
   1.387075,
   1.112075};
   Double_t 30.000000 ppm_fex1293[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1293[2] = {
   0.0120878,
   0.0120878};
   gre = new TGraphErrors(2,30.000000 ppm_fx1293,30.000000 ppm_fy1293,30.000000 ppm_fex1293,30.000000 ppm_fey1293);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(28);
   gre->SetMarkerColor(28);
   
   TH1F *Graph_Graph_30dO000000sPppm12351293 = new TH1F("Graph_Graph_30dO000000sPppm12351293","Graph",100,15.6,20.4);
   Graph_Graph_30dO000000sPppm12351293->SetMinimum(1.07007);
   Graph_Graph_30dO000000sPppm12351293->SetMaximum(1.42908);
   Graph_Graph_30dO000000sPppm12351293->SetDirectory(0);
   Graph_Graph_30dO000000sPppm12351293->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_30dO000000sPppm12351293->SetLineColor(ci);
   Graph_Graph_30dO000000sPppm12351293->GetXaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm12351293->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm12351293->GetXaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm12351293->GetYaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm12351293->GetYaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm12351293->GetZaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm12351293->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm12351293->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_30.000000 ppm12351293);
   
   
   TF1 *lineFit1294 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1294->SetFillColor(19);
   lineFit1294->SetFillStyle(0);
   lineFit1294->SetLineColor(28);
   lineFit1294->SetLineWidth(2);
   lineFit1294->SetChisquare(1.38347e-26);
   lineFit1294->SetNDF(0);
   lineFit1294->GetXaxis()->SetLabelFont(42);
   lineFit1294->GetXaxis()->SetTitleOffset(1);
   lineFit1294->GetXaxis()->SetTitleFont(42);
   lineFit1294->GetYaxis()->SetLabelFont(42);
   lineFit1294->GetYaxis()->SetTitleFont(42);
   lineFit1294->SetParameter(0,2.487075);
   lineFit1294->SetParError(0,0.07739969);
   lineFit1294->SetParLimits(0,0,0);
   lineFit1294->SetParameter(1,-0.06875);
   lineFit1294->SetParError(1,0.004273683);
   lineFit1294->SetParLimits(1,0,0);
   lineFit1294->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1294);
   gre->Draw("p ");
   
   TF1 *lineFit1295 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1295->SetFillColor(19);
   lineFit1295->SetFillStyle(0);
   lineFit1295->SetLineColor(28);
   lineFit1295->SetLineWidth(2);
   lineFit1295->SetChisquare(1.38347e-26);
   lineFit1295->SetNDF(0);
   lineFit1295->GetXaxis()->SetLabelFont(42);
   lineFit1295->GetXaxis()->SetTitleOffset(1);
   lineFit1295->GetXaxis()->SetTitleFont(42);
   lineFit1295->GetYaxis()->SetLabelFont(42);
   lineFit1295->GetYaxis()->SetTitleFont(42);
   lineFit1295->SetParameter(0,2.487075);
   lineFit1295->SetParError(0,0.07739969);
   lineFit1295->SetParLimits(0,0,0);
   lineFit1295->SetParameter(1,-0.06875);
   lineFit1295->SetParError(1,0.004273683);
   lineFit1295->SetParLimits(1,0,0);
   lineFit1295->Draw("same");
   
   Double_t -30.000000 ppm_fx1295[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1295[2] = {
   -2.363828,
   -1.888828};
   Double_t -30.000000 ppm_fex1295[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1295[2] = {
   0.0111837,
   0.0111837};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1295,-30.000000 ppm_fy1295,-30.000000 ppm_fex1295,-30.000000 ppm_fey1295);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(29);
   gre->SetMarkerColor(29);
   
   TH1F *Graph_mI30dO000000sPppm1295 = new TH1F("Graph_mI30dO000000sPppm1295","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1295->SetMinimum(-2.424749);
   Graph_mI30dO000000sPppm1295->SetMaximum(-1.827908);
   Graph_mI30dO000000sPppm1295->SetDirectory(0);
   Graph_mI30dO000000sPppm1295->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1295->SetLineColor(ci);
   Graph_mI30dO000000sPppm1295->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1295->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1295->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1295->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1295->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1295->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1295->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1295->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1295);
   
   
   TF1 *lineFit1296 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1296->SetFillColor(19);
   lineFit1296->SetFillStyle(0);
   lineFit1296->SetLineColor(29);
   lineFit1296->SetLineWidth(2);
   lineFit1296->SetChisquare(4.572644e-25);
   lineFit1296->SetNDF(0);
   lineFit1296->GetXaxis()->SetLabelFont(42);
   lineFit1296->GetXaxis()->SetTitleOffset(1);
   lineFit1296->GetXaxis()->SetTitleFont(42);
   lineFit1296->GetYaxis()->SetLabelFont(42);
   lineFit1296->GetYaxis()->SetTitleFont(42);
   lineFit1296->SetParameter(0,-4.263828);
   lineFit1296->SetParError(0,0.07161062);
   lineFit1296->SetParLimits(0,0,0);
   lineFit1296->SetParameter(1,0.11875);
   lineFit1296->SetParError(1,0.003954035);
   lineFit1296->SetParLimits(1,0,0);
   lineFit1296->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1296);
   gre->Draw("p ");
   
   TF1 *lineFit1297 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1297->SetFillColor(19);
   lineFit1297->SetFillStyle(0);
   lineFit1297->SetLineColor(29);
   lineFit1297->SetLineWidth(2);
   lineFit1297->SetChisquare(4.572644e-25);
   lineFit1297->SetNDF(0);
   lineFit1297->GetXaxis()->SetLabelFont(42);
   lineFit1297->GetXaxis()->SetTitleOffset(1);
   lineFit1297->GetXaxis()->SetTitleFont(42);
   lineFit1297->GetYaxis()->SetLabelFont(42);
   lineFit1297->GetYaxis()->SetTitleFont(42);
   lineFit1297->SetParameter(0,-4.263828);
   lineFit1297->SetParError(0,0.07161062);
   lineFit1297->SetParLimits(0,0,0);
   lineFit1297->SetParameter(1,0.11875);
   lineFit1297->SetParError(1,0.003954035);
   lineFit1297->SetParLimits(1,0,0);
   lineFit1297->Draw("same");
   
   Double_t -10.000000 ppm_fx1297[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1297[2] = {
   -1.113828,
   -0.8888282};
   Double_t -10.000000 ppm_fex1297[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1297[2] = {
   0.0111837,
   0.0111837};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1297,-10.000000 ppm_fy1297,-10.000000 ppm_fex1297,-10.000000 ppm_fey1297);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(30);
   gre->SetMarkerColor(30);
   
   TH1F *Graph_mI10dO000000sPppm1297 = new TH1F("Graph_mI10dO000000sPppm1297","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1297->SetMinimum(-1.149749);
   Graph_mI10dO000000sPppm1297->SetMaximum(-0.8529078);
   Graph_mI10dO000000sPppm1297->SetDirectory(0);
   Graph_mI10dO000000sPppm1297->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1297->SetLineColor(ci);
   Graph_mI10dO000000sPppm1297->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1297->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1297->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1297->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1297->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1297->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1297->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1297->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1297);
   
   
   TF1 *lineFit1298 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1298->SetFillColor(19);
   lineFit1298->SetFillStyle(0);
   lineFit1298->SetLineColor(30);
   lineFit1298->SetLineWidth(2);
   lineFit1298->SetChisquare(5.361031e-26);
   lineFit1298->SetNDF(0);
   lineFit1298->GetXaxis()->SetLabelFont(42);
   lineFit1298->GetXaxis()->SetTitleOffset(1);
   lineFit1298->GetXaxis()->SetTitleFont(42);
   lineFit1298->GetYaxis()->SetLabelFont(42);
   lineFit1298->GetYaxis()->SetTitleFont(42);
   lineFit1298->SetParameter(0,-2.013828);
   lineFit1298->SetParError(0,0.07161062);
   lineFit1298->SetParLimits(0,0,0);
   lineFit1298->SetParameter(1,0.05625);
   lineFit1298->SetParError(1,0.003954035);
   lineFit1298->SetParLimits(1,0,0);
   lineFit1298->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1298);
   gre->Draw("p ");
   
   TF1 *lineFit1299 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1299->SetFillColor(19);
   lineFit1299->SetFillStyle(0);
   lineFit1299->SetLineColor(30);
   lineFit1299->SetLineWidth(2);
   lineFit1299->SetChisquare(5.361031e-26);
   lineFit1299->SetNDF(0);
   lineFit1299->GetXaxis()->SetLabelFont(42);
   lineFit1299->GetXaxis()->SetTitleOffset(1);
   lineFit1299->GetXaxis()->SetTitleFont(42);
   lineFit1299->GetYaxis()->SetLabelFont(42);
   lineFit1299->GetYaxis()->SetTitleFont(42);
   lineFit1299->SetParameter(0,-2.013828);
   lineFit1299->SetParError(0,0.07161062);
   lineFit1299->SetParLimits(0,0,0);
   lineFit1299->SetParameter(1,0.05625);
   lineFit1299->SetParError(1,0.003954035);
   lineFit1299->SetParLimits(1,0,0);
   lineFit1299->Draw("same");
   
   Double_t 10.000000 ppm_fx1299[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1299[2] = {
   0.1361718,
   0.1111718};
   Double_t 10.000000 ppm_fex1299[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1299[2] = {
   0.0111837,
   0.0111837};
   gre = new TGraphErrors(2,10.000000 ppm_fx1299,10.000000 ppm_fy1299,10.000000 ppm_fex1299,10.000000 ppm_fey1299);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(31);
   gre->SetMarkerColor(31);
   
   TH1F *Graph_10dO000000sPppm1299 = new TH1F("Graph_10dO000000sPppm1299","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1299->SetMinimum(0.09525132);
   Graph_10dO000000sPppm1299->SetMaximum(0.1520922);
   Graph_10dO000000sPppm1299->SetDirectory(0);
   Graph_10dO000000sPppm1299->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1299->SetLineColor(ci);
   Graph_10dO000000sPppm1299->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1299->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1299->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1299->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1299->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1299->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1299->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1299->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1299);
   
   
   TF1 *lineFit1300 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1300->SetFillColor(19);
   lineFit1300->SetFillStyle(0);
   lineFit1300->SetLineColor(31);
   lineFit1300->SetLineWidth(2);
   lineFit1300->SetChisquare(1.539818e-30);
   lineFit1300->SetNDF(0);
   lineFit1300->GetXaxis()->SetLabelFont(42);
   lineFit1300->GetXaxis()->SetTitleOffset(1);
   lineFit1300->GetXaxis()->SetTitleFont(42);
   lineFit1300->GetYaxis()->SetLabelFont(42);
   lineFit1300->GetYaxis()->SetTitleFont(42);
   lineFit1300->SetParameter(0,0.2361718);
   lineFit1300->SetParError(0,0.07161062);
   lineFit1300->SetParLimits(0,0,0);
   lineFit1300->SetParameter(1,-0.00625);
   lineFit1300->SetParError(1,0.003954035);
   lineFit1300->SetParLimits(1,0,0);
   lineFit1300->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1300);
   gre->Draw("p ");
   
   TF1 *lineFit1301 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1301->SetFillColor(19);
   lineFit1301->SetFillStyle(0);
   lineFit1301->SetLineColor(31);
   lineFit1301->SetLineWidth(2);
   lineFit1301->SetChisquare(1.539818e-30);
   lineFit1301->SetNDF(0);
   lineFit1301->GetXaxis()->SetLabelFont(42);
   lineFit1301->GetXaxis()->SetTitleOffset(1);
   lineFit1301->GetXaxis()->SetTitleFont(42);
   lineFit1301->GetYaxis()->SetLabelFont(42);
   lineFit1301->GetYaxis()->SetTitleFont(42);
   lineFit1301->SetParameter(0,0.2361718);
   lineFit1301->SetParError(0,0.07161062);
   lineFit1301->SetParLimits(0,0,0);
   lineFit1301->SetParameter(1,-0.00625);
   lineFit1301->SetParError(1,0.003954035);
   lineFit1301->SetParLimits(1,0,0);
   lineFit1301->Draw("same");
   
   Double_t 30.000000 ppm_fx1301[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1301[2] = {
   1.386172,
   1.111172};
   Double_t 30.000000 ppm_fex1301[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1301[2] = {
   0.0111837,
   0.0111837};
   gre = new TGraphErrors(2,30.000000 ppm_fx1301,30.000000 ppm_fy1301,30.000000 ppm_fex1301,30.000000 ppm_fey1301);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(32);
   gre->SetMarkerColor(32);
   
   TH1F *Graph_30dO000000sPppm1301 = new TH1F("Graph_30dO000000sPppm1301","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1301->SetMinimum(1.070251);
   Graph_30dO000000sPppm1301->SetMaximum(1.427092);
   Graph_30dO000000sPppm1301->SetDirectory(0);
   Graph_30dO000000sPppm1301->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1301->SetLineColor(ci);
   Graph_30dO000000sPppm1301->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1301->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1301->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1301->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1301->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1301->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1301->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1301);
   
   
   TF1 *lineFit1302 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1302->SetFillColor(19);
   lineFit1302->SetFillStyle(0);
   lineFit1302->SetLineColor(32);
   lineFit1302->SetLineWidth(2);
   lineFit1302->SetChisquare(5.873483e-26);
   lineFit1302->SetNDF(0);
   lineFit1302->GetXaxis()->SetLabelFont(42);
   lineFit1302->GetXaxis()->SetTitleOffset(1);
   lineFit1302->GetXaxis()->SetTitleFont(42);
   lineFit1302->GetYaxis()->SetLabelFont(42);
   lineFit1302->GetYaxis()->SetTitleFont(42);
   lineFit1302->SetParameter(0,2.486172);
   lineFit1302->SetParError(0,0.07161062);
   lineFit1302->SetParLimits(0,0,0);
   lineFit1302->SetParameter(1,-0.06875);
   lineFit1302->SetParError(1,0.003954035);
   lineFit1302->SetParLimits(1,0,0);
   lineFit1302->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1302);
   gre->Draw("p ");
   
   TF1 *lineFit1303 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1303->SetFillColor(19);
   lineFit1303->SetFillStyle(0);
   lineFit1303->SetLineColor(32);
   lineFit1303->SetLineWidth(2);
   lineFit1303->SetChisquare(5.873483e-26);
   lineFit1303->SetNDF(0);
   lineFit1303->GetXaxis()->SetLabelFont(42);
   lineFit1303->GetXaxis()->SetTitleOffset(1);
   lineFit1303->GetXaxis()->SetTitleFont(42);
   lineFit1303->GetYaxis()->SetLabelFont(42);
   lineFit1303->GetYaxis()->SetTitleFont(42);
   lineFit1303->SetParameter(0,2.486172);
   lineFit1303->SetParError(0,0.07161062);
   lineFit1303->SetParLimits(0,0,0);
   lineFit1303->SetParameter(1,-0.06875);
   lineFit1303->SetParError(1,0.003954035);
   lineFit1303->SetParLimits(1,0,0);
   lineFit1303->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","2.31e-272 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(32);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(32);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","4.56e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(31);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(31);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","1.34e-149 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(30);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.09e-308 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(29);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(29);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","1.14e-286 ppm","lpf");
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
