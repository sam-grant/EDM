void QuadScans_NSUBRUN_100_NEXP_50()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:01:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.242279,0.0663141,7.514075);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1049[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1049[3] = {
   -3.173315,
   -2.804013,
   -2.553543};
   Double_t -50.000000 ppm_fex1049[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1049[3] = {
   0.01485046,
   0.01485046,
   0.01485046};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1049,-50.000000 ppm_fy1049,-50.000000 ppm_fex1049,-50.000000 ppm_fey1049);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1049 = new TH1F("Graph_mI50dO000000sPppm1049","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1049->SetMinimum(-3.966644);
   Graph_mI50dO000000sPppm1049->SetMaximum(6.23844);
   Graph_mI50dO000000sPppm1049->SetDirectory(0);
   Graph_mI50dO000000sPppm1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1049->SetLineColor(ci);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_mI50dO000000sPppm1049->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1049->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1049->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1049->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1049);
   
   
   TF1 *quadLineFit1050 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1050->SetFillColor(19);
   quadLineFit1050->SetFillStyle(0);
   quadLineFit1050->SetLineWidth(2);
   quadLineFit1050->SetChisquare(0.6123681);
   quadLineFit1050->SetNDF(1);
   quadLineFit1050->GetXaxis()->SetLabelFont(42);
   quadLineFit1050->GetXaxis()->SetTitleOffset(1);
   quadLineFit1050->GetXaxis()->SetTitleFont(42);
   quadLineFit1050->GetYaxis()->SetLabelFont(42);
   quadLineFit1050->GetYaxis()->SetTitleFont(42);
   quadLineFit1050->SetParameter(0,0.2636517);
   quadLineFit1050->SetParError(0,0.1050415);
   quadLineFit1050->SetParLimits(0,0,0);
   quadLineFit1050->SetParameter(1,-55.04877);
   quadLineFit1050->SetParError(1,1.854715);
   quadLineFit1050->SetParLimits(1,0,0);
   quadLineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1050);
   gre->Draw("ap");
   
   TF1 *quadLineFit1051 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1051->SetFillColor(19);
   quadLineFit1051->SetFillStyle(0);
   quadLineFit1051->SetLineWidth(2);
   quadLineFit1051->SetChisquare(0.6123681);
   quadLineFit1051->SetNDF(1);
   quadLineFit1051->GetXaxis()->SetLabelFont(42);
   quadLineFit1051->GetXaxis()->SetTitleOffset(1);
   quadLineFit1051->GetXaxis()->SetTitleFont(42);
   quadLineFit1051->GetYaxis()->SetLabelFont(42);
   quadLineFit1051->GetYaxis()->SetTitleFont(42);
   quadLineFit1051->SetParameter(0,0.2636517);
   quadLineFit1051->SetParError(0,0.1050415);
   quadLineFit1051->SetParLimits(0,0,0);
   quadLineFit1051->SetParameter(1,-55.04877);
   quadLineFit1051->SetParError(1,1.854715);
   quadLineFit1051->SetParLimits(1,0,0);
   quadLineFit1051->Draw("same");
   
   Double_t -30.000000 ppm_fx1051[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1051[4] = {
   -1.911276,
   -1.673597,
   -1.475244,
   -1.338534};
   Double_t -30.000000 ppm_fex1051[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1051[4] = {
   0.01485046,
   0.01485046,
   0.01485046,
   0.01485046};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1051,-30.000000 ppm_fy1051,-30.000000 ppm_fex1051,-30.000000 ppm_fey1051);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1051 = new TH1F("Graph_mI30dO000000sPppm1051","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1051->SetMinimum(-1.986371);
   Graph_mI30dO000000sPppm1051->SetMaximum(-1.263439);
   Graph_mI30dO000000sPppm1051->SetDirectory(0);
   Graph_mI30dO000000sPppm1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1051->SetLineColor(ci);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1051);
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineColor(2);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(1.09585);
   quadLineFit1052->SetNDF(2);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,0.1028992);
   quadLineFit1052->SetParError(0,0.05909615);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,-28.28573);
   quadLineFit1052->SetParError(1,0.9740209);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("p ");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineColor(2);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(1.09585);
   quadLineFit1053->SetNDF(2);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,0.1028992);
   quadLineFit1053->SetParError(0,0.05909615);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,-28.28573);
   quadLineFit1053->SetParError(1,0.9740209);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
   Double_t -10.000000 ppm_fx1053[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1053[4] = {
   -0.1774094,
   -0.1403578,
   -0.1335098,
   -0.1125551};
   Double_t -10.000000 ppm_fex1053[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1053[4] = {
   0.01485046,
   0.01485046,
   0.01485046,
   0.01485046};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1053,-10.000000 ppm_fy1053,-10.000000 ppm_fex1053,-10.000000 ppm_fey1053);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1053 = new TH1F("Graph_mI10dO000000sPppm1053","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1053->SetMinimum(-0.2017153);
   Graph_mI10dO000000sPppm1053->SetMaximum(-0.08824917);
   Graph_mI10dO000000sPppm1053->SetDirectory(0);
   Graph_mI10dO000000sPppm1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1053->SetLineColor(ci);
   Graph_mI10dO000000sPppm1053->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1053->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1053->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1053->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1053->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1053->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1053->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1053);
   
   
   TF1 *quadLineFit1054 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1054->SetFillColor(19);
   quadLineFit1054->SetFillStyle(0);
   quadLineFit1054->SetLineColor(3);
   quadLineFit1054->SetLineWidth(2);
   quadLineFit1054->SetChisquare(0.4927263);
   quadLineFit1054->SetNDF(2);
   quadLineFit1054->GetXaxis()->SetLabelFont(42);
   quadLineFit1054->GetXaxis()->SetTitleOffset(1);
   quadLineFit1054->GetXaxis()->SetTitleFont(42);
   quadLineFit1054->GetYaxis()->SetLabelFont(42);
   quadLineFit1054->GetYaxis()->SetTitleFont(42);
   quadLineFit1054->SetParameter(0,0.03919994);
   quadLineFit1054->SetParError(0,0.05909542);
   quadLineFit1054->SetParLimits(0,0,0);
   quadLineFit1054->SetParameter(1,-2.993078);
   quadLineFit1054->SetParError(1,0.9740084);
   quadLineFit1054->SetParLimits(1,0,0);
   quadLineFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1054);
   gre->Draw("p ");
   
   TF1 *quadLineFit1055 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1055->SetFillColor(19);
   quadLineFit1055->SetFillStyle(0);
   quadLineFit1055->SetLineColor(3);
   quadLineFit1055->SetLineWidth(2);
   quadLineFit1055->SetChisquare(0.4927263);
   quadLineFit1055->SetNDF(2);
   quadLineFit1055->GetXaxis()->SetLabelFont(42);
   quadLineFit1055->GetXaxis()->SetTitleOffset(1);
   quadLineFit1055->GetXaxis()->SetTitleFont(42);
   quadLineFit1055->GetYaxis()->SetLabelFont(42);
   quadLineFit1055->GetYaxis()->SetTitleFont(42);
   quadLineFit1055->SetParameter(0,0.03919994);
   quadLineFit1055->SetParError(0,0.05909542);
   quadLineFit1055->SetParLimits(0,0,0);
   quadLineFit1055->SetParameter(1,-2.993078);
   quadLineFit1055->SetParError(1,0.9740084);
   quadLineFit1055->SetParLimits(1,0,0);
   quadLineFit1055->Draw("same");
   
   Double_t 10.000000 ppm_fx1055[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1055[3] = {
   1.547031,
   1.369191,
   1.146046};
   Double_t 10.000000 ppm_fex1055[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1055[3] = {
   0.01485046,
   0.01485046,
   0.01485046};
   gre = new TGraphErrors(3,10.000000 ppm_fx1055,10.000000 ppm_fy1055,10.000000 ppm_fex1055,10.000000 ppm_fey1055);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1055 = new TH1F("Graph_10dO000000sPppm1055","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1055->SetMinimum(1.088127);
   Graph_10dO000000sPppm1055->SetMaximum(1.60495);
   Graph_10dO000000sPppm1055->SetDirectory(0);
   Graph_10dO000000sPppm1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1055->SetLineColor(ci);
   Graph_10dO000000sPppm1055->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1055->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1055->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1055->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1055->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1055->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1055->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1055);
   
   
   TF1 *quadLineFit1056 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1056->SetFillColor(19);
   quadLineFit1056->SetFillStyle(0);
   quadLineFit1056->SetLineColor(4);
   quadLineFit1056->SetLineWidth(2);
   quadLineFit1056->SetChisquare(5.167403e-05);
   quadLineFit1056->SetNDF(1);
   quadLineFit1056->GetXaxis()->SetLabelFont(42);
   quadLineFit1056->GetXaxis()->SetTitleOffset(1);
   quadLineFit1056->GetXaxis()->SetTitleFont(42);
   quadLineFit1056->GetYaxis()->SetLabelFont(42);
   quadLineFit1056->GetYaxis()->SetTitleFont(42);
   quadLineFit1056->SetParameter(0,0.1253432);
   quadLineFit1056->SetParError(0,0.06478932);
   quadLineFit1056->SetParLimits(0,0,0);
   quadLineFit1056->SetParameter(1,19.90295);
   quadLineFit1056->SetParError(1,1.040213);
   quadLineFit1056->SetParLimits(1,0,0);
   quadLineFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1056);
   gre->Draw("p ");
   
   TF1 *quadLineFit1057 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1057->SetFillColor(19);
   quadLineFit1057->SetFillStyle(0);
   quadLineFit1057->SetLineColor(4);
   quadLineFit1057->SetLineWidth(2);
   quadLineFit1057->SetChisquare(5.167403e-05);
   quadLineFit1057->SetNDF(1);
   quadLineFit1057->GetXaxis()->SetLabelFont(42);
   quadLineFit1057->GetXaxis()->SetTitleOffset(1);
   quadLineFit1057->GetXaxis()->SetTitleFont(42);
   quadLineFit1057->GetYaxis()->SetLabelFont(42);
   quadLineFit1057->GetYaxis()->SetTitleFont(42);
   quadLineFit1057->SetParameter(0,0.1253432);
   quadLineFit1057->SetParError(0,0.06478932);
   quadLineFit1057->SetParLimits(0,0,0);
   quadLineFit1057->SetParameter(1,19.90295);
   quadLineFit1057->SetParError(1,1.040213);
   quadLineFit1057->SetParLimits(1,0,0);
   quadLineFit1057->Draw("same");
   
   Double_t 30.000000 ppm_fx1057[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1057[4] = {
   3.254997,
   2.848622,
   2.563381,
   2.336179};
   Double_t 30.000000 ppm_fex1057[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1057[4] = {
   0.01485046,
   0.01485046,
   0.01485046,
   0.01485046};
   gre = new TGraphErrors(4,30.000000 ppm_fx1057,30.000000 ppm_fy1057,30.000000 ppm_fex1057,30.000000 ppm_fey1057);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1057 = new TH1F("Graph_30dO000000sPppm1057","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1057->SetMinimum(2.226476);
   Graph_30dO000000sPppm1057->SetMaximum(3.364699);
   Graph_30dO000000sPppm1057->SetDirectory(0);
   Graph_30dO000000sPppm1057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1057->SetLineColor(ci);
   Graph_30dO000000sPppm1057->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1057->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1057->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1057->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1057->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1057->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1057->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1057);
   
   
   TF1 *quadLineFit1058 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1058->SetFillColor(19);
   quadLineFit1058->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1058->SetLineColor(ci);
   quadLineFit1058->SetLineWidth(2);
   quadLineFit1058->SetChisquare(3.063775);
   quadLineFit1058->SetNDF(2);
   quadLineFit1058->GetXaxis()->SetLabelFont(42);
   quadLineFit1058->GetXaxis()->SetTitleOffset(1);
   quadLineFit1058->GetXaxis()->SetTitleFont(42);
   quadLineFit1058->GetYaxis()->SetLabelFont(42);
   quadLineFit1058->GetYaxis()->SetTitleFont(42);
   quadLineFit1058->SetParameter(0,0.04393077);
   quadLineFit1058->SetParError(0,0.05893613);
   quadLineFit1058->SetParLimits(0,0,0);
   quadLineFit1058->SetParameter(1,44.97083);
   quadLineFit1058->SetParError(1,0.9713489);
   quadLineFit1058->SetParLimits(1,0,0);
   quadLineFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1058);
   gre->Draw("p ");
   
   TF1 *quadLineFit1059 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1059->SetFillColor(19);
   quadLineFit1059->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1059->SetLineColor(ci);
   quadLineFit1059->SetLineWidth(2);
   quadLineFit1059->SetChisquare(3.063775);
   quadLineFit1059->SetNDF(2);
   quadLineFit1059->GetXaxis()->SetLabelFont(42);
   quadLineFit1059->GetXaxis()->SetTitleOffset(1);
   quadLineFit1059->GetXaxis()->SetTitleFont(42);
   quadLineFit1059->GetYaxis()->SetLabelFont(42);
   quadLineFit1059->GetYaxis()->SetTitleFont(42);
   quadLineFit1059->SetParameter(0,0.04393077);
   quadLineFit1059->SetParError(0,0.05893613);
   quadLineFit1059->SetParLimits(0,0,0);
   quadLineFit1059->SetParameter(1,44.97083);
   quadLineFit1059->SetParError(1,0.9713489);
   quadLineFit1059->SetParLimits(1,0,0);
   quadLineFit1059->Draw("same");
   
   Double_t 50.000000 ppm_fx1059[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1059[4] = {
   4.990752,
   4.363276,
   3.877664,
   3.580717};
   Double_t 50.000000 ppm_fex1059[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1059[4] = {
   0.01485046,
   0.01485046,
   0.01485046,
   0.01485046};
   gre = new TGraphErrors(4,50.000000 ppm_fx1059,50.000000 ppm_fy1059,50.000000 ppm_fex1059,50.000000 ppm_fey1059);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1059 = new TH1F("Graph_50dO000000sPppm1059","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1059->SetMinimum(3.421893);
   Graph_50dO000000sPppm1059->SetMaximum(5.149576);
   Graph_50dO000000sPppm1059->SetDirectory(0);
   Graph_50dO000000sPppm1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1059->SetLineColor(ci);
   Graph_50dO000000sPppm1059->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1059->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1059->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1059->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1059->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1059->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1059->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1059);
   
   
   TF1 *quadLineFit1060 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1060->SetFillColor(19);
   quadLineFit1060->SetFillStyle(0);
   quadLineFit1060->SetLineColor(6);
   quadLineFit1060->SetLineWidth(2);
   quadLineFit1060->SetChisquare(0.02539634);
   quadLineFit1060->SetNDF(2);
   quadLineFit1060->GetXaxis()->SetLabelFont(42);
   quadLineFit1060->GetXaxis()->SetTitleOffset(1);
   quadLineFit1060->GetXaxis()->SetTitleFont(42);
   quadLineFit1060->GetYaxis()->SetLabelFont(42);
   quadLineFit1060->GetYaxis()->SetTitleFont(42);
   quadLineFit1060->SetParameter(0,-0.01068662);
   quadLineFit1060->SetParError(0,0.05909399);
   quadLineFit1060->SetParLimits(0,0,0);
   quadLineFit1060->SetParameter(1,70.00633);
   quadLineFit1060->SetParError(1,0.9739844);
   quadLineFit1060->SetParLimits(1,0,0);
   quadLineFit1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1060);
   gre->Draw("p ");
   
   TF1 *quadLineFit1061 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1061->SetFillColor(19);
   quadLineFit1061->SetFillStyle(0);
   quadLineFit1061->SetLineColor(6);
   quadLineFit1061->SetLineWidth(2);
   quadLineFit1061->SetChisquare(0.02539634);
   quadLineFit1061->SetNDF(2);
   quadLineFit1061->GetXaxis()->SetLabelFont(42);
   quadLineFit1061->GetXaxis()->SetTitleOffset(1);
   quadLineFit1061->GetXaxis()->SetTitleFont(42);
   quadLineFit1061->GetYaxis()->SetLabelFont(42);
   quadLineFit1061->GetYaxis()->SetTitleFont(42);
   quadLineFit1061->SetParameter(0,-0.01068662);
   quadLineFit1061->SetParError(0,0.05909399);
   quadLineFit1061->SetParLimits(0,0,0);
   quadLineFit1061->SetParameter(1,70.00633);
   quadLineFit1061->SetParError(1,0.9739844);
   quadLineFit1061->SetParLimits(1,0,0);
   quadLineFit1061->Draw("same");
   
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
