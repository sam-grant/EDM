void QuadScans_NSUBRUN_300_NEXP_500()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 24 16:05:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.208068,0.0663141,7.509605);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1177[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1177[3] = {
   -3.149041,
   -2.807411,
   -2.599119};
   Double_t -50.000000 ppm_fex1177[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1177[3] = {
   0.008522719,
   0.008522719,
   0.008522719};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1177,-50.000000 ppm_fy1177,-50.000000 ppm_fex1177,-50.000000 ppm_fey1177);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1177 = new TH1F("Graph_mI50dO000000sPppm1177","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1177->SetMinimum(-3.936301);
   Graph_mI50dO000000sPppm1177->SetMaximum(6.237837);
   Graph_mI50dO000000sPppm1177->SetDirectory(0);
   Graph_mI50dO000000sPppm1177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1177->SetLineColor(ci);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_mI50dO000000sPppm1177->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1177->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1177->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1177->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1177->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1177->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1177);
   
   
   TF1 *quadLineFit1178 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1178->SetFillColor(19);
   quadLineFit1178->SetFillStyle(0);
   quadLineFit1178->SetLineWidth(2);
   quadLineFit1178->SetChisquare(0.01301244);
   quadLineFit1178->SetNDF(1);
   quadLineFit1178->GetXaxis()->SetLabelFont(42);
   quadLineFit1178->GetXaxis()->SetTitleOffset(1);
   quadLineFit1178->GetXaxis()->SetTitleFont(42);
   quadLineFit1178->GetYaxis()->SetLabelFont(42);
   quadLineFit1178->GetYaxis()->SetTitleFont(42);
   quadLineFit1178->SetParameter(0,-0.08385032);
   quadLineFit1178->SetParError(0,0.06027747);
   quadLineFit1178->SetParLimits(0,0,0);
   quadLineFit1178->SetParameter(1,-49.03825);
   quadLineFit1178->SetParError(1,1.064318);
   quadLineFit1178->SetParLimits(1,0,0);
   quadLineFit1178->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1178);
   gre->Draw("ap");
   
   TF1 *quadLineFit1179 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1179->SetFillColor(19);
   quadLineFit1179->SetFillStyle(0);
   quadLineFit1179->SetLineWidth(2);
   quadLineFit1179->SetChisquare(0.01301244);
   quadLineFit1179->SetNDF(1);
   quadLineFit1179->GetXaxis()->SetLabelFont(42);
   quadLineFit1179->GetXaxis()->SetTitleOffset(1);
   quadLineFit1179->GetXaxis()->SetTitleFont(42);
   quadLineFit1179->GetYaxis()->SetLabelFont(42);
   quadLineFit1179->GetYaxis()->SetTitleFont(42);
   quadLineFit1179->SetParameter(0,-0.08385032);
   quadLineFit1179->SetParError(0,0.06027747);
   quadLineFit1179->SetParLimits(0,0,0);
   quadLineFit1179->SetParameter(1,-49.03825);
   quadLineFit1179->SetParError(1,1.064318);
   quadLineFit1179->SetParLimits(1,0,0);
   quadLineFit1179->Draw("same");
   
   Double_t -30.000000 ppm_fx1179[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1179[4] = {
   -1.893514,
   -1.638446,
   -1.473732,
   -1.350477};
   Double_t -30.000000 ppm_fex1179[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1179[4] = {
   0.008522719,
   0.008522719,
   0.008522719,
   0.008522719};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1179,-30.000000 ppm_fy1179,-30.000000 ppm_fex1179,-30.000000 ppm_fey1179);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1179 = new TH1F("Graph_mI30dO000000sPppm1179","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1179->SetMinimum(-1.958045);
   Graph_mI30dO000000sPppm1179->SetMaximum(-1.285946);
   Graph_mI30dO000000sPppm1179->SetDirectory(0);
   Graph_mI30dO000000sPppm1179->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1179->SetLineColor(ci);
   Graph_mI30dO000000sPppm1179->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1179->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1179->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1179->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1179->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1179->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1179->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1179);
   
   
   TF1 *quadLineFit1180 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1180->SetFillColor(19);
   quadLineFit1180->SetFillStyle(0);
   quadLineFit1180->SetLineColor(2);
   quadLineFit1180->SetLineWidth(2);
   quadLineFit1180->SetChisquare(3.31805);
   quadLineFit1180->SetNDF(2);
   quadLineFit1180->GetXaxis()->SetLabelFont(42);
   quadLineFit1180->GetXaxis()->SetTitleOffset(1);
   quadLineFit1180->GetXaxis()->SetTitleFont(42);
   quadLineFit1180->GetYaxis()->SetLabelFont(42);
   quadLineFit1180->GetYaxis()->SetTitleFont(42);
   quadLineFit1180->SetParameter(0,0.01509318);
   quadLineFit1180->SetParError(0,0.03391393);
   quadLineFit1180->SetParLimits(0,0,0);
   quadLineFit1180->SetParameter(1,-26.65051);
   quadLineFit1180->SetParError(1,0.5589678);
   quadLineFit1180->SetParLimits(1,0,0);
   quadLineFit1180->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1180);
   gre->Draw("p ");
   
   TF1 *quadLineFit1181 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1181->SetFillColor(19);
   quadLineFit1181->SetFillStyle(0);
   quadLineFit1181->SetLineColor(2);
   quadLineFit1181->SetLineWidth(2);
   quadLineFit1181->SetChisquare(3.31805);
   quadLineFit1181->SetNDF(2);
   quadLineFit1181->GetXaxis()->SetLabelFont(42);
   quadLineFit1181->GetXaxis()->SetTitleOffset(1);
   quadLineFit1181->GetXaxis()->SetTitleFont(42);
   quadLineFit1181->GetYaxis()->SetLabelFont(42);
   quadLineFit1181->GetYaxis()->SetTitleFont(42);
   quadLineFit1181->SetParameter(0,0.01509318);
   quadLineFit1181->SetParError(0,0.03391393);
   quadLineFit1181->SetParLimits(0,0,0);
   quadLineFit1181->SetParameter(1,-26.65051);
   quadLineFit1181->SetParError(1,0.5589678);
   quadLineFit1181->SetParLimits(1,0,0);
   quadLineFit1181->Draw("same");
   
   Double_t -10.000000 ppm_fx1181[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1181[4] = {
   -0.1678076,
   -0.1490429,
   -0.1271268,
   -0.1194231};
   Double_t -10.000000 ppm_fex1181[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1181[4] = {
   0.008522719,
   0.008522719,
   0.008522719,
   0.008522719};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1181,-10.000000 ppm_fy1181,-10.000000 ppm_fex1181,-10.000000 ppm_fey1181);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1181 = new TH1F("Graph_mI10dO000000sPppm1181","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1181->SetMinimum(-0.1828733);
   Graph_mI10dO000000sPppm1181->SetMaximum(-0.1043574);
   Graph_mI10dO000000sPppm1181->SetDirectory(0);
   Graph_mI10dO000000sPppm1181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1181->SetLineColor(ci);
   Graph_mI10dO000000sPppm1181->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1181->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1181->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1181->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1181->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1181->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1181->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1181);
   
   
   TF1 *quadLineFit1182 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1182->SetFillColor(19);
   quadLineFit1182->SetFillStyle(0);
   quadLineFit1182->SetLineColor(3);
   quadLineFit1182->SetLineWidth(2);
   quadLineFit1182->SetChisquare(0.1696218);
   quadLineFit1182->SetNDF(2);
   quadLineFit1182->GetXaxis()->SetLabelFont(42);
   quadLineFit1182->GetXaxis()->SetTitleOffset(1);
   quadLineFit1182->GetXaxis()->SetTitleFont(42);
   quadLineFit1182->GetYaxis()->SetLabelFont(42);
   quadLineFit1182->GetYaxis()->SetTitleFont(42);
   quadLineFit1182->SetParameter(0,0.008380985);
   quadLineFit1182->SetParError(0,0.03391463);
   quadLineFit1182->SetParLimits(0,0,0);
   quadLineFit1182->SetParameter(1,-2.47927);
   quadLineFit1182->SetParError(1,0.5589795);
   quadLineFit1182->SetParLimits(1,0,0);
   quadLineFit1182->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1182);
   gre->Draw("p ");
   
   TF1 *quadLineFit1183 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1183->SetFillColor(19);
   quadLineFit1183->SetFillStyle(0);
   quadLineFit1183->SetLineColor(3);
   quadLineFit1183->SetLineWidth(2);
   quadLineFit1183->SetChisquare(0.1696218);
   quadLineFit1183->SetNDF(2);
   quadLineFit1183->GetXaxis()->SetLabelFont(42);
   quadLineFit1183->GetXaxis()->SetTitleOffset(1);
   quadLineFit1183->GetXaxis()->SetTitleFont(42);
   quadLineFit1183->GetYaxis()->SetLabelFont(42);
   quadLineFit1183->GetYaxis()->SetTitleFont(42);
   quadLineFit1183->SetParameter(0,0.008380985);
   quadLineFit1183->SetParError(0,0.03391463);
   quadLineFit1183->SetParLimits(0,0,0);
   quadLineFit1183->SetParameter(1,-2.47927);
   quadLineFit1183->SetParError(1,0.5589795);
   quadLineFit1183->SetParLimits(1,0,0);
   quadLineFit1183->Draw("same");
   
   Double_t 10.000000 ppm_fx1183[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1183[3] = {
   1.547265,
   1.359645,
   1.118878};
   Double_t 10.000000 ppm_fex1183[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1183[3] = {
   0.008522719,
   0.008522719,
   0.008522719};
   gre = new TGraphErrors(3,10.000000 ppm_fx1183,10.000000 ppm_fy1183,10.000000 ppm_fex1183,10.000000 ppm_fey1183);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1183 = new TH1F("Graph_10dO000000sPppm1183","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1183->SetMinimum(1.065812);
   Graph_10dO000000sPppm1183->SetMaximum(1.600331);
   Graph_10dO000000sPppm1183->SetDirectory(0);
   Graph_10dO000000sPppm1183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1183->SetLineColor(ci);
   Graph_10dO000000sPppm1183->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1183->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1183->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1183->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1183->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1183->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1183->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1183);
   
   
   TF1 *quadLineFit1184 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1184->SetFillColor(19);
   quadLineFit1184->SetFillStyle(0);
   quadLineFit1184->SetLineColor(4);
   quadLineFit1184->SetLineWidth(2);
   quadLineFit1184->SetChisquare(0.04559366);
   quadLineFit1184->SetNDF(1);
   quadLineFit1184->GetXaxis()->SetLabelFont(42);
   quadLineFit1184->GetXaxis()->SetTitleOffset(1);
   quadLineFit1184->GetXaxis()->SetTitleFont(42);
   quadLineFit1184->GetYaxis()->SetLabelFont(42);
   quadLineFit1184->GetYaxis()->SetTitleFont(42);
   quadLineFit1184->SetParameter(0,0.02866583);
   quadLineFit1184->SetParError(0,0.03718276);
   quadLineFit1184->SetParLimits(0,0,0);
   quadLineFit1184->SetParameter(1,21.27195);
   quadLineFit1184->SetParError(1,0.5969809);
   quadLineFit1184->SetParLimits(1,0,0);
   quadLineFit1184->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1184);
   gre->Draw("p ");
   
   TF1 *quadLineFit1185 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1185->SetFillColor(19);
   quadLineFit1185->SetFillStyle(0);
   quadLineFit1185->SetLineColor(4);
   quadLineFit1185->SetLineWidth(2);
   quadLineFit1185->SetChisquare(0.04559366);
   quadLineFit1185->SetNDF(1);
   quadLineFit1185->GetXaxis()->SetLabelFont(42);
   quadLineFit1185->GetXaxis()->SetTitleOffset(1);
   quadLineFit1185->GetXaxis()->SetTitleFont(42);
   quadLineFit1185->GetYaxis()->SetLabelFont(42);
   quadLineFit1185->GetYaxis()->SetTitleFont(42);
   quadLineFit1185->SetParameter(0,0.02866583);
   quadLineFit1185->SetParError(0,0.03718276);
   quadLineFit1185->SetParLimits(0,0,0);
   quadLineFit1185->SetParameter(1,21.27195);
   quadLineFit1185->SetParError(1,0.5969809);
   quadLineFit1185->SetParLimits(1,0,0);
   quadLineFit1185->Draw("same");
   
   Double_t 30.000000 ppm_fx1185[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1185[4] = {
   3.273255,
   2.84815,
   2.552936,
   2.340498};
   Double_t 30.000000 ppm_fex1185[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1185[4] = {
   0.008522719,
   0.008522719,
   0.008522719,
   0.008522719};
   gre = new TGraphErrors(4,30.000000 ppm_fx1185,30.000000 ppm_fy1185,30.000000 ppm_fex1185,30.000000 ppm_fey1185);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1185 = new TH1F("Graph_30dO000000sPppm1185","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1185->SetMinimum(2.236995);
   Graph_30dO000000sPppm1185->SetMaximum(3.376758);
   Graph_30dO000000sPppm1185->SetDirectory(0);
   Graph_30dO000000sPppm1185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1185->SetLineColor(ci);
   Graph_30dO000000sPppm1185->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1185->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1185->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1185->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1185->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1185->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1185->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1185);
   
   
   TF1 *quadLineFit1186 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1186->SetFillColor(19);
   quadLineFit1186->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1186->SetLineColor(ci);
   quadLineFit1186->SetLineWidth(2);
   quadLineFit1186->SetChisquare(4.26022);
   quadLineFit1186->SetNDF(2);
   quadLineFit1186->GetXaxis()->SetLabelFont(42);
   quadLineFit1186->GetXaxis()->SetTitleOffset(1);
   quadLineFit1186->GetXaxis()->SetTitleFont(42);
   quadLineFit1186->GetYaxis()->SetLabelFont(42);
   quadLineFit1186->GetYaxis()->SetTitleFont(42);
   quadLineFit1186->SetParameter(0,-0.00856983);
   quadLineFit1186->SetParError(0,0.03391435);
   quadLineFit1186->SetParLimits(0,0,0);
   quadLineFit1186->SetParameter(1,45.89149);
   quadLineFit1186->SetParError(1,0.558975);
   quadLineFit1186->SetParLimits(1,0,0);
   quadLineFit1186->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1186);
   gre->Draw("p ");
   
   TF1 *quadLineFit1187 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1187->SetFillColor(19);
   quadLineFit1187->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1187->SetLineColor(ci);
   quadLineFit1187->SetLineWidth(2);
   quadLineFit1187->SetChisquare(4.26022);
   quadLineFit1187->SetNDF(2);
   quadLineFit1187->GetXaxis()->SetLabelFont(42);
   quadLineFit1187->GetXaxis()->SetTitleOffset(1);
   quadLineFit1187->GetXaxis()->SetTitleFont(42);
   quadLineFit1187->GetYaxis()->SetLabelFont(42);
   quadLineFit1187->GetYaxis()->SetTitleFont(42);
   quadLineFit1187->SetParameter(0,-0.00856983);
   quadLineFit1187->SetParError(0,0.03391435);
   quadLineFit1187->SetParLimits(0,0,0);
   quadLineFit1187->SetParameter(1,45.89149);
   quadLineFit1187->SetParError(1,0.558975);
   quadLineFit1187->SetParLimits(1,0,0);
   quadLineFit1187->Draw("same");
   
   Double_t 50.000000 ppm_fx1187[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1187[4] = {
   4.99027,
   4.369999,
   3.880052,
   3.587176};
   Double_t 50.000000 ppm_fex1187[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1187[4] = {
   0.008522719,
   0.008522719,
   0.008522719,
   0.008522719};
   gre = new TGraphErrors(4,50.000000 ppm_fx1187,50.000000 ppm_fy1187,50.000000 ppm_fex1187,50.000000 ppm_fey1187);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1187 = new TH1F("Graph_50dO000000sPppm1187","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1187->SetMinimum(3.436639);
   Graph_50dO000000sPppm1187->SetMaximum(5.140806);
   Graph_50dO000000sPppm1187->SetDirectory(0);
   Graph_50dO000000sPppm1187->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1187->SetLineColor(ci);
   Graph_50dO000000sPppm1187->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1187->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1187->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1187->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1187->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1187->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1187->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1187);
   
   
   TF1 *quadLineFit1188 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1188->SetFillColor(19);
   quadLineFit1188->SetFillStyle(0);
   quadLineFit1188->SetLineColor(6);
   quadLineFit1188->SetLineWidth(2);
   quadLineFit1188->SetChisquare(0.2699519);
   quadLineFit1188->SetNDF(2);
   quadLineFit1188->GetXaxis()->SetLabelFont(42);
   quadLineFit1188->GetXaxis()->SetTitleOffset(1);
   quadLineFit1188->GetXaxis()->SetTitleFont(42);
   quadLineFit1188->GetYaxis()->SetLabelFont(42);
   quadLineFit1188->GetYaxis()->SetTitleFont(42);
   quadLineFit1188->SetParameter(0,0.008233706);
   quadLineFit1188->SetParError(0,0.03391824);
   quadLineFit1188->SetParLimits(0,0,0);
   quadLineFit1188->SetParameter(1,69.75465);
   quadLineFit1188->SetParError(1,0.5590385);
   quadLineFit1188->SetParLimits(1,0,0);
   quadLineFit1188->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1188);
   gre->Draw("p ");
   
   TF1 *quadLineFit1189 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1189->SetFillColor(19);
   quadLineFit1189->SetFillStyle(0);
   quadLineFit1189->SetLineColor(6);
   quadLineFit1189->SetLineWidth(2);
   quadLineFit1189->SetChisquare(0.2699519);
   quadLineFit1189->SetNDF(2);
   quadLineFit1189->GetXaxis()->SetLabelFont(42);
   quadLineFit1189->GetXaxis()->SetTitleOffset(1);
   quadLineFit1189->GetXaxis()->SetTitleFont(42);
   quadLineFit1189->GetYaxis()->SetLabelFont(42);
   quadLineFit1189->GetYaxis()->SetTitleFont(42);
   quadLineFit1189->SetParameter(0,0.008233706);
   quadLineFit1189->SetParError(0,0.03391824);
   quadLineFit1189->SetParLimits(0,0,0);
   quadLineFit1189->SetParameter(1,69.75465);
   quadLineFit1189->SetParError(1,0.5590385);
   quadLineFit1189->SetParLimits(1,0,0);
   quadLineFit1189->Draw("same");
   
   TLegend *leg = new TLegend(0.87,0.4,0.99,0.6,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{a}#GT [ppm]","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
