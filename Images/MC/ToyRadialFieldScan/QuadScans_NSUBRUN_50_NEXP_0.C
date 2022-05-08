void QuadScans_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 12:48:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.23291,0.0663141,7.53015);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1017[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1017[3] = {
   -3.165283,
   -2.796538,
   -2.599217};
   Double_t -50.000000 ppm_fex1017[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1017[3] = {
   0.02094686,
   0.02094686,
   0.02094686};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1017,-50.000000 ppm_fy1017,-50.000000 ppm_fex1017,-50.000000 ppm_fey1017);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1017 = new TH1F("Graph_mI50dO000000sPppm1017","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1017->SetMinimum(-3.956604);
   Graph_mI50dO000000sPppm1017->SetMaximum(6.253844);
   Graph_mI50dO000000sPppm1017->SetDirectory(0);
   Graph_mI50dO000000sPppm1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1017->SetLineColor(ci);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_mI50dO000000sPppm1017->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1017->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1017->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1017->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1017->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1017->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1017);
   
   
   TF1 *quadLineFit1018 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1018->SetFillColor(19);
   quadLineFit1018->SetFillStyle(0);
   quadLineFit1018->SetLineWidth(2);
   quadLineFit1018->SetChisquare(0.5006442);
   quadLineFit1018->SetNDF(1);
   quadLineFit1018->GetXaxis()->SetLabelFont(42);
   quadLineFit1018->GetXaxis()->SetTitleOffset(1);
   quadLineFit1018->GetXaxis()->SetTitleFont(42);
   quadLineFit1018->GetYaxis()->SetLabelFont(42);
   quadLineFit1018->GetYaxis()->SetTitleFont(42);
   quadLineFit1018->SetParameter(0,0.008985221);
   quadLineFit1018->SetParError(0,0.1481788);
   quadLineFit1018->SetParLimits(0,0,0);
   quadLineFit1018->SetParameter(1,-50.71522);
   quadLineFit1018->SetParError(1,2.616391);
   quadLineFit1018->SetParLimits(1,0,0);
   quadLineFit1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1018);
   gre->Draw("ap");
   
   TF1 *quadLineFit1019 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1019->SetFillColor(19);
   quadLineFit1019->SetFillStyle(0);
   quadLineFit1019->SetLineWidth(2);
   quadLineFit1019->SetChisquare(0.5006442);
   quadLineFit1019->SetNDF(1);
   quadLineFit1019->GetXaxis()->SetLabelFont(42);
   quadLineFit1019->GetXaxis()->SetTitleOffset(1);
   quadLineFit1019->GetXaxis()->SetTitleFont(42);
   quadLineFit1019->GetYaxis()->SetLabelFont(42);
   quadLineFit1019->GetYaxis()->SetTitleFont(42);
   quadLineFit1019->SetParameter(0,0.008985221);
   quadLineFit1019->SetParError(0,0.1481788);
   quadLineFit1019->SetParLimits(0,0,0);
   quadLineFit1019->SetParameter(1,-50.71522);
   quadLineFit1019->SetParError(1,2.616391);
   quadLineFit1019->SetParLimits(1,0,0);
   quadLineFit1019->Draw("same");
   
   Double_t -30.000000 ppm_fx1019[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1019[4] = {
   -1.916054,
   -1.645137,
   -1.49959,
   -1.362776};
   Double_t -30.000000 ppm_fex1019[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1019[4] = {
   0.02094686,
   0.02094686,
   0.02094686,
   0.02094686};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1019,-30.000000 ppm_fy1019,-30.000000 ppm_fex1019,-30.000000 ppm_fey1019);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1019 = new TH1F("Graph_mI30dO000000sPppm1019","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1019->SetMinimum(-1.996518);
   Graph_mI30dO000000sPppm1019->SetMaximum(-1.282312);
   Graph_mI30dO000000sPppm1019->SetDirectory(0);
   Graph_mI30dO000000sPppm1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1019->SetLineColor(ci);
   Graph_mI30dO000000sPppm1019->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1019->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1019->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1019->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1019->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1019->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1019->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1019);
   
   
   TF1 *quadLineFit1020 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1020->SetFillColor(19);
   quadLineFit1020->SetFillStyle(0);
   quadLineFit1020->SetLineColor(2);
   quadLineFit1020->SetLineWidth(2);
   quadLineFit1020->SetChisquare(2.127722);
   quadLineFit1020->SetNDF(2);
   quadLineFit1020->GetXaxis()->SetLabelFont(42);
   quadLineFit1020->GetXaxis()->SetTitleOffset(1);
   quadLineFit1020->GetXaxis()->SetTitleFont(42);
   quadLineFit1020->GetYaxis()->SetLabelFont(42);
   quadLineFit1020->GetYaxis()->SetTitleFont(42);
   quadLineFit1020->SetParameter(0,0.008415509);
   quadLineFit1020->SetParError(0,0.08335149);
   quadLineFit1020->SetParLimits(0,0,0);
   quadLineFit1020->SetParameter(1,-26.81946);
   quadLineFit1020->SetParError(1,1.373796);
   quadLineFit1020->SetParLimits(1,0,0);
   quadLineFit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1020);
   gre->Draw("p ");
   
   TF1 *quadLineFit1021 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1021->SetFillColor(19);
   quadLineFit1021->SetFillStyle(0);
   quadLineFit1021->SetLineColor(2);
   quadLineFit1021->SetLineWidth(2);
   quadLineFit1021->SetChisquare(2.127722);
   quadLineFit1021->SetNDF(2);
   quadLineFit1021->GetXaxis()->SetLabelFont(42);
   quadLineFit1021->GetXaxis()->SetTitleOffset(1);
   quadLineFit1021->GetXaxis()->SetTitleFont(42);
   quadLineFit1021->GetYaxis()->SetLabelFont(42);
   quadLineFit1021->GetYaxis()->SetTitleFont(42);
   quadLineFit1021->SetParameter(0,0.008415509);
   quadLineFit1021->SetParError(0,0.08335149);
   quadLineFit1021->SetParLimits(0,0,0);
   quadLineFit1021->SetParameter(1,-26.81946);
   quadLineFit1021->SetParError(1,1.373796);
   quadLineFit1021->SetParLimits(1,0,0);
   quadLineFit1021->Draw("same");
   
   Double_t -10.000000 ppm_fx1021[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1021[4] = {
   -0.15347,
   -0.168467,
   -0.1248963,
   -0.1250625};
   Double_t -10.000000 ppm_fex1021[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1021[4] = {
   0.02094686,
   0.02094686,
   0.02094686,
   0.02094686};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1021,-10.000000 ppm_fy1021,-10.000000 ppm_fex1021,-10.000000 ppm_fey1021);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1021 = new TH1F("Graph_mI10dO000000sPppm1021","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1021->SetMinimum(-0.1979603);
   Graph_mI10dO000000sPppm1021->SetMaximum(-0.09540299);
   Graph_mI10dO000000sPppm1021->SetDirectory(0);
   Graph_mI10dO000000sPppm1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1021->SetLineColor(ci);
   Graph_mI10dO000000sPppm1021->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1021->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1021->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1021->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1021->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1021->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1021->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1021);
   
   
   TF1 *quadLineFit1022 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1022->SetFillColor(19);
   quadLineFit1022->SetFillStyle(0);
   quadLineFit1022->SetLineColor(3);
   quadLineFit1022->SetLineWidth(2);
   quadLineFit1022->SetChisquare(1.477346);
   quadLineFit1022->SetNDF(2);
   quadLineFit1022->GetXaxis()->SetLabelFont(42);
   quadLineFit1022->GetXaxis()->SetTitleOffset(1);
   quadLineFit1022->GetXaxis()->SetTitleFont(42);
   quadLineFit1022->GetYaxis()->SetLabelFont(42);
   quadLineFit1022->GetYaxis()->SetTitleFont(42);
   quadLineFit1022->SetParameter(0,-0.03417991);
   quadLineFit1022->SetParError(0,0.08335364);
   quadLineFit1022->SetParLimits(0,0,0);
   quadLineFit1022->SetParameter(1,-1.807464);
   quadLineFit1022->SetParError(1,1.373831);
   quadLineFit1022->SetParLimits(1,0,0);
   quadLineFit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1022);
   gre->Draw("p ");
   
   TF1 *quadLineFit1023 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1023->SetFillColor(19);
   quadLineFit1023->SetFillStyle(0);
   quadLineFit1023->SetLineColor(3);
   quadLineFit1023->SetLineWidth(2);
   quadLineFit1023->SetChisquare(1.477346);
   quadLineFit1023->SetNDF(2);
   quadLineFit1023->GetXaxis()->SetLabelFont(42);
   quadLineFit1023->GetXaxis()->SetTitleOffset(1);
   quadLineFit1023->GetXaxis()->SetTitleFont(42);
   quadLineFit1023->GetYaxis()->SetLabelFont(42);
   quadLineFit1023->GetYaxis()->SetTitleFont(42);
   quadLineFit1023->SetParameter(0,-0.03417991);
   quadLineFit1023->SetParError(0,0.08335364);
   quadLineFit1023->SetParLimits(0,0,0);
   quadLineFit1023->SetParameter(1,-1.807464);
   quadLineFit1023->SetParError(1,1.373831);
   quadLineFit1023->SetParLimits(1,0,0);
   quadLineFit1023->Draw("same");
   
   Double_t 10.000000 ppm_fx1023[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1023[3] = {
   1.554304,
   1.329502,
   1.15131};
   Double_t 10.000000 ppm_fex1023[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1023[3] = {
   0.02094686,
   0.02094686,
   0.02094686};
   gre = new TGraphErrors(3,10.000000 ppm_fx1023,10.000000 ppm_fy1023,10.000000 ppm_fex1023,10.000000 ppm_fey1023);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1023 = new TH1F("Graph_10dO000000sPppm1023","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1023->SetMinimum(1.085875);
   Graph_10dO000000sPppm1023->SetMaximum(1.619739);
   Graph_10dO000000sPppm1023->SetDirectory(0);
   Graph_10dO000000sPppm1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1023->SetLineColor(ci);
   Graph_10dO000000sPppm1023->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1023->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1023->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1023->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1023->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1023->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1023->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1023);
   
   
   TF1 *quadLineFit1024 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1024->SetFillColor(19);
   quadLineFit1024->SetFillStyle(0);
   quadLineFit1024->SetLineColor(4);
   quadLineFit1024->SetLineWidth(2);
   quadLineFit1024->SetChisquare(3.229472);
   quadLineFit1024->SetNDF(1);
   quadLineFit1024->GetXaxis()->SetLabelFont(42);
   quadLineFit1024->GetXaxis()->SetTitleOffset(1);
   quadLineFit1024->GetXaxis()->SetTitleFont(42);
   quadLineFit1024->GetYaxis()->SetLabelFont(42);
   quadLineFit1024->GetYaxis()->SetTitleFont(42);
   quadLineFit1024->SetParameter(0,0.1207879);
   quadLineFit1024->SetParError(0,0.09138492);
   quadLineFit1024->SetParLimits(0,0,0);
   quadLineFit1024->SetParameter(1,19.83014);
   quadLineFit1024->SetParError(1,1.467214);
   quadLineFit1024->SetParLimits(1,0,0);
   quadLineFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1024);
   gre->Draw("p ");
   
   TF1 *quadLineFit1025 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1025->SetFillColor(19);
   quadLineFit1025->SetFillStyle(0);
   quadLineFit1025->SetLineColor(4);
   quadLineFit1025->SetLineWidth(2);
   quadLineFit1025->SetChisquare(3.229472);
   quadLineFit1025->SetNDF(1);
   quadLineFit1025->GetXaxis()->SetLabelFont(42);
   quadLineFit1025->GetXaxis()->SetTitleOffset(1);
   quadLineFit1025->GetXaxis()->SetTitleFont(42);
   quadLineFit1025->GetYaxis()->SetLabelFont(42);
   quadLineFit1025->GetYaxis()->SetTitleFont(42);
   quadLineFit1025->SetParameter(0,0.1207879);
   quadLineFit1025->SetParError(0,0.09138492);
   quadLineFit1025->SetParLimits(0,0,0);
   quadLineFit1025->SetParameter(1,19.83014);
   quadLineFit1025->SetParError(1,1.467214);
   quadLineFit1025->SetParLimits(1,0,0);
   quadLineFit1025->Draw("same");
   
   Double_t 30.000000 ppm_fx1025[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1025[4] = {
   3.240049,
   2.836644,
   2.556468,
   2.336772};
   Double_t 30.000000 ppm_fex1025[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1025[4] = {
   0.02094686,
   0.02094686,
   0.02094686,
   0.02094686};
   gre = new TGraphErrors(4,30.000000 ppm_fx1025,30.000000 ppm_fy1025,30.000000 ppm_fex1025,30.000000 ppm_fey1025);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1025 = new TH1F("Graph_30dO000000sPppm1025","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1025->SetMinimum(2.221308);
   Graph_30dO000000sPppm1025->SetMaximum(3.355513);
   Graph_30dO000000sPppm1025->SetDirectory(0);
   Graph_30dO000000sPppm1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1025->SetLineColor(ci);
   Graph_30dO000000sPppm1025->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1025->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1025->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1025->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1025->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1025->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1025->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1025);
   
   
   TF1 *quadLineFit1026 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1026->SetFillColor(19);
   quadLineFit1026->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1026->SetLineColor(ci);
   quadLineFit1026->SetLineWidth(2);
   quadLineFit1026->SetChisquare(1.279088);
   quadLineFit1026->SetNDF(2);
   quadLineFit1026->GetXaxis()->SetLabelFont(42);
   quadLineFit1026->GetXaxis()->SetTitleOffset(1);
   quadLineFit1026->GetXaxis()->SetTitleFont(42);
   quadLineFit1026->GetYaxis()->SetLabelFont(42);
   quadLineFit1026->GetYaxis()->SetTitleFont(42);
   quadLineFit1026->SetParameter(0,0.07933876);
   quadLineFit1026->SetParError(0,0.08335256);
   quadLineFit1026->SetParLimits(0,0,0);
   quadLineFit1026->SetParameter(1,44.2445);
   quadLineFit1026->SetParError(1,1.373813);
   quadLineFit1026->SetParLimits(1,0,0);
   quadLineFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1026);
   gre->Draw("p ");
   
   TF1 *quadLineFit1027 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1027->SetFillColor(19);
   quadLineFit1027->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1027->SetLineColor(ci);
   quadLineFit1027->SetLineWidth(2);
   quadLineFit1027->SetChisquare(1.279088);
   quadLineFit1027->SetNDF(2);
   quadLineFit1027->GetXaxis()->SetLabelFont(42);
   quadLineFit1027->GetXaxis()->SetTitleOffset(1);
   quadLineFit1027->GetXaxis()->SetTitleFont(42);
   quadLineFit1027->GetYaxis()->SetLabelFont(42);
   quadLineFit1027->GetYaxis()->SetTitleFont(42);
   quadLineFit1027->SetParameter(0,0.07933876);
   quadLineFit1027->SetParError(0,0.08335256);
   quadLineFit1027->SetParLimits(0,0,0);
   quadLineFit1027->SetParameter(1,44.2445);
   quadLineFit1027->SetParError(1,1.373813);
   quadLineFit1027->SetParLimits(1,0,0);
   quadLineFit1027->Draw("same");
   
   Double_t 50.000000 ppm_fx1027[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1027[4] = {
   5.003075,
   4.359109,
   3.918439,
   3.61597};
   Double_t 50.000000 ppm_fex1027[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1027[4] = {
   0.02094686,
   0.02094686,
   0.02094686,
   0.02094686};
   gre = new TGraphErrors(4,50.000000 ppm_fx1027,50.000000 ppm_fy1027,50.000000 ppm_fex1027,50.000000 ppm_fey1027);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1027 = new TH1F("Graph_50dO000000sPppm1027","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1027->SetMinimum(3.452123);
   Graph_50dO000000sPppm1027->SetMaximum(5.166922);
   Graph_50dO000000sPppm1027->SetDirectory(0);
   Graph_50dO000000sPppm1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1027->SetLineColor(ci);
   Graph_50dO000000sPppm1027->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1027->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1027->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1027->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1027->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1027->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1027->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1027);
   
   
   TF1 *quadLineFit1028 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1028->SetFillColor(19);
   quadLineFit1028->SetFillStyle(0);
   quadLineFit1028->SetLineColor(6);
   quadLineFit1028->SetLineWidth(2);
   quadLineFit1028->SetChisquare(1.740722);
   quadLineFit1028->SetNDF(2);
   quadLineFit1028->GetXaxis()->SetLabelFont(42);
   quadLineFit1028->GetXaxis()->SetTitleOffset(1);
   quadLineFit1028->GetXaxis()->SetTitleFont(42);
   quadLineFit1028->GetYaxis()->SetLabelFont(42);
   quadLineFit1028->GetYaxis()->SetTitleFont(42);
   quadLineFit1028->SetParameter(0,0.1072619);
   quadLineFit1028->SetParError(0,0.08334232);
   quadLineFit1028->SetParLimits(0,0,0);
   quadLineFit1028->SetParameter(1,68.39642);
   quadLineFit1028->SetParError(1,1.373644);
   quadLineFit1028->SetParLimits(1,0,0);
   quadLineFit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1028);
   gre->Draw("p ");
   
   TF1 *quadLineFit1029 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1029->SetFillColor(19);
   quadLineFit1029->SetFillStyle(0);
   quadLineFit1029->SetLineColor(6);
   quadLineFit1029->SetLineWidth(2);
   quadLineFit1029->SetChisquare(1.740722);
   quadLineFit1029->SetNDF(2);
   quadLineFit1029->GetXaxis()->SetLabelFont(42);
   quadLineFit1029->GetXaxis()->SetTitleOffset(1);
   quadLineFit1029->GetXaxis()->SetTitleFont(42);
   quadLineFit1029->GetYaxis()->SetLabelFont(42);
   quadLineFit1029->GetYaxis()->SetTitleFont(42);
   quadLineFit1029->SetParameter(0,0.1072619);
   quadLineFit1029->SetParError(0,0.08334232);
   quadLineFit1029->SetParLimits(0,0,0);
   quadLineFit1029->SetParameter(1,68.39642);
   quadLineFit1029->SetParError(1,1.373644);
   quadLineFit1029->SetParLimits(1,0,0);
   quadLineFit1029->Draw("same");
   
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
