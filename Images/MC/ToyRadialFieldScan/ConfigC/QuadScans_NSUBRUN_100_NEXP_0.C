void QuadScans_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:58 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1049[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1049[3] = {
   -3.192707,
   -2.81224,
   -2.546444};
   Double_t -50.000000 ppm_fex1049[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1049[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1049,-50.000000 ppm_fy1049,-50.000000 ppm_fex1049,-50.000000 ppm_fey1049);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1049 = new TH1F("Graph_mI50dO000000sPppm1049","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1049->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1049->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1049->SetDirectory(0);
   Graph_mI50dO000000sPppm1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1049->SetLineColor(ci);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitle("QHV [kV]");
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
   
   
   TF1 *quadLineFit1050 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1050->SetFillColor(19);
   quadLineFit1050->SetFillStyle(0);
   quadLineFit1050->SetLineWidth(2);
   quadLineFit1050->SetChisquare(10.04101);
   quadLineFit1050->SetNDF(1);
   quadLineFit1050->GetXaxis()->SetLabelFont(42);
   quadLineFit1050->GetXaxis()->SetTitleOffset(1);
   quadLineFit1050->GetXaxis()->SetTitleFont(42);
   quadLineFit1050->GetYaxis()->SetLabelFont(42);
   quadLineFit1050->GetYaxis()->SetTitleFont(42);
   quadLineFit1050->SetParameter(0,-5.758647);
   quadLineFit1050->SetParError(0,0.09440103);
   quadLineFit1050->SetParLimits(0,0,0);
   quadLineFit1050->SetParameter(1,0.1615657);
   quadLineFit1050->SetParError(1,0.00522305);
   quadLineFit1050->SetParLimits(1,0,0);
   quadLineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1050);
   gre->Draw("ap");
   
   TF1 *quadLineFit1051 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1051->SetFillColor(19);
   quadLineFit1051->SetFillStyle(0);
   quadLineFit1051->SetLineWidth(2);
   quadLineFit1051->SetChisquare(10.04101);
   quadLineFit1051->SetNDF(1);
   quadLineFit1051->GetXaxis()->SetLabelFont(42);
   quadLineFit1051->GetXaxis()->SetTitleOffset(1);
   quadLineFit1051->GetXaxis()->SetTitleFont(42);
   quadLineFit1051->GetYaxis()->SetLabelFont(42);
   quadLineFit1051->GetYaxis()->SetTitleFont(42);
   quadLineFit1051->SetParameter(0,-5.758647);
   quadLineFit1051->SetParError(0,0.09440103);
   quadLineFit1051->SetParLimits(0,0,0);
   quadLineFit1051->SetParameter(1,0.1615657);
   quadLineFit1051->SetParError(1,0.00522305);
   quadLineFit1051->SetParLimits(1,0,0);
   quadLineFit1051->Draw("same");
   
   Double_t -30.000000 ppm_fx1051[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1051[3] = {
   -1.648326,
   -1.497122,
   -1.345267};
   Double_t -30.000000 ppm_fex1051[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1051[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1051,-30.000000 ppm_fy1051,-30.000000 ppm_fex1051,-30.000000 ppm_fey1051);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1051 = new TH1F("Graph_mI30dO000000sPppm1051","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1051->SetMinimum(-1.696361);
   Graph_mI30dO000000sPppm1051->SetMaximum(-1.297232);
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
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineColor(2);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(0.0003244815);
   quadLineFit1052->SetNDF(1);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,-2.860674);
   quadLineFit1052->SetParError(0,0.09440529);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,0.07576493);
   quadLineFit1052->SetParError(1,0.005223287);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("p ");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineColor(2);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(0.0003244815);
   quadLineFit1053->SetNDF(1);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,-2.860674);
   quadLineFit1053->SetParError(0,0.09440529);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,0.07576493);
   quadLineFit1053->SetParError(1,0.005223287);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
   Double_t -10.000000 ppm_fx1053[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1053[3] = {
   -0.1255342,
   -0.1462322,
   -0.1098691};
   Double_t -10.000000 ppm_fex1053[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1053[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1053,-10.000000 ppm_fy1053,-10.000000 ppm_fex1053,-10.000000 ppm_fey1053);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1053 = new TH1F("Graph_mI10dO000000sPppm1053","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1053->SetMinimum(-0.1675969);
   Graph_mI10dO000000sPppm1053->SetMaximum(-0.08850433);
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
   
   
   TF1 *quadLineFit1054 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1054->SetFillColor(19);
   quadLineFit1054->SetFillStyle(0);
   quadLineFit1054->SetLineColor(3);
   quadLineFit1054->SetLineWidth(2);
   quadLineFit1054->SetChisquare(2.486286);
   quadLineFit1054->SetNDF(1);
   quadLineFit1054->GetXaxis()->SetLabelFont(42);
   quadLineFit1054->GetXaxis()->SetTitleOffset(1);
   quadLineFit1054->GetXaxis()->SetTitleFont(42);
   quadLineFit1054->GetYaxis()->SetLabelFont(42);
   quadLineFit1054->GetYaxis()->SetTitleFont(42);
   quadLineFit1054->SetParameter(0,-0.1977047);
   quadLineFit1054->SetParError(0,0.09440514);
   quadLineFit1054->SetParLimits(0,0,0);
   quadLineFit1054->SetParameter(1,0.003916275);
   quadLineFit1054->SetParError(1,0.005223279);
   quadLineFit1054->SetParLimits(1,0,0);
   quadLineFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1054);
   gre->Draw("p ");
   
   TF1 *quadLineFit1055 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1055->SetFillColor(19);
   quadLineFit1055->SetFillStyle(0);
   quadLineFit1055->SetLineColor(3);
   quadLineFit1055->SetLineWidth(2);
   quadLineFit1055->SetChisquare(2.486286);
   quadLineFit1055->SetNDF(1);
   quadLineFit1055->GetXaxis()->SetLabelFont(42);
   quadLineFit1055->GetXaxis()->SetTitleOffset(1);
   quadLineFit1055->GetXaxis()->SetTitleFont(42);
   quadLineFit1055->GetYaxis()->SetLabelFont(42);
   quadLineFit1055->GetYaxis()->SetTitleFont(42);
   quadLineFit1055->SetParameter(0,-0.1977047);
   quadLineFit1055->SetParError(0,0.09440514);
   quadLineFit1055->SetParLimits(0,0,0);
   quadLineFit1055->SetParameter(1,0.003916275);
   quadLineFit1055->SetParError(1,0.005223279);
   quadLineFit1055->SetParLimits(1,0,0);
   quadLineFit1055->Draw("same");
   
   Double_t 10.000000 ppm_fx1055[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1055[3] = {
   1.378319,
   1.220029,
   1.106014};
   Double_t 10.000000 ppm_fex1055[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1055[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,10.000000 ppm_fx1055,10.000000 ppm_fy1055,10.000000 ppm_fex1055,10.000000 ppm_fey1055);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1055 = new TH1F("Graph_10dO000000sPppm1055","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1055->SetMinimum(1.061055);
   Graph_10dO000000sPppm1055->SetMaximum(1.423278);
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
   
   
   TF1 *quadLineFit1056 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1056->SetFillColor(19);
   quadLineFit1056->SetFillStyle(0);
   quadLineFit1056->SetLineColor(4);
   quadLineFit1056->SetLineWidth(2);
   quadLineFit1056->SetChisquare(1.496899);
   quadLineFit1056->SetNDF(1);
   quadLineFit1056->GetXaxis()->SetLabelFont(42);
   quadLineFit1056->GetXaxis()->SetTitleOffset(1);
   quadLineFit1056->GetXaxis()->SetTitleFont(42);
   quadLineFit1056->GetYaxis()->SetLabelFont(42);
   quadLineFit1056->GetYaxis()->SetTitleFont(42);
   quadLineFit1056->SetParameter(0,2.460162);
   quadLineFit1056->SetParError(0,0.09440568);
   quadLineFit1056->SetParLimits(0,0,0);
   quadLineFit1056->SetParameter(1,-0.06807637);
   quadLineFit1056->SetParError(1,0.005223309);
   quadLineFit1056->SetParLimits(1,0,0);
   quadLineFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1056);
   gre->Draw("p ");
   
   TF1 *quadLineFit1057 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1057->SetFillColor(19);
   quadLineFit1057->SetFillStyle(0);
   quadLineFit1057->SetLineColor(4);
   quadLineFit1057->SetLineWidth(2);
   quadLineFit1057->SetChisquare(1.496899);
   quadLineFit1057->SetNDF(1);
   quadLineFit1057->GetXaxis()->SetLabelFont(42);
   quadLineFit1057->GetXaxis()->SetTitleOffset(1);
   quadLineFit1057->GetXaxis()->SetTitleFont(42);
   quadLineFit1057->GetYaxis()->SetLabelFont(42);
   quadLineFit1057->GetYaxis()->SetTitleFont(42);
   quadLineFit1057->SetParameter(0,2.460162);
   quadLineFit1057->SetParError(0,0.09440568);
   quadLineFit1057->SetParLimits(0,0,0);
   quadLineFit1057->SetParameter(1,-0.06807637);
   quadLineFit1057->SetParError(1,0.005223309);
   quadLineFit1057->SetParLimits(1,0,0);
   quadLineFit1057->Draw("same");
   
   Double_t 30.000000 ppm_fx1057[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1057[3] = {
   2.859706,
   2.527069,
   2.28384};
   Double_t 30.000000 ppm_fex1057[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1057[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,30.000000 ppm_fx1057,30.000000 ppm_fy1057,30.000000 ppm_fex1057,30.000000 ppm_fey1057);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1057 = new TH1F("Graph_30dO000000sPppm1057","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1057->SetMinimum(2.208525);
   Graph_30dO000000sPppm1057->SetMaximum(2.935021);
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
   
   
   TF1 *quadLineFit1058 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1058->SetFillColor(19);
   quadLineFit1058->SetFillStyle(0);
   quadLineFit1058->SetLineColor(5);
   quadLineFit1058->SetLineWidth(2);
   quadLineFit1058->SetChisquare(6.104174);
   quadLineFit1058->SetNDF(1);
   quadLineFit1058->GetXaxis()->SetLabelFont(42);
   quadLineFit1058->GetXaxis()->SetTitleOffset(1);
   quadLineFit1058->GetXaxis()->SetTitleFont(42);
   quadLineFit1058->GetYaxis()->SetLabelFont(42);
   quadLineFit1058->GetYaxis()->SetTitleFont(42);
   quadLineFit1058->SetParameter(0,5.14827);
   quadLineFit1058->SetParError(0,0.09440265);
   quadLineFit1058->SetParLimits(0,0,0);
   quadLineFit1058->SetParameter(1,-0.1439665);
   quadLineFit1058->SetParError(1,0.00522314);
   quadLineFit1058->SetParLimits(1,0,0);
   quadLineFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1058);
   gre->Draw("p ");
   
   TF1 *quadLineFit1059 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1059->SetFillColor(19);
   quadLineFit1059->SetFillStyle(0);
   quadLineFit1059->SetLineColor(5);
   quadLineFit1059->SetLineWidth(2);
   quadLineFit1059->SetChisquare(6.104174);
   quadLineFit1059->SetNDF(1);
   quadLineFit1059->GetXaxis()->SetLabelFont(42);
   quadLineFit1059->GetXaxis()->SetTitleOffset(1);
   quadLineFit1059->GetXaxis()->SetTitleFont(42);
   quadLineFit1059->GetYaxis()->SetLabelFont(42);
   quadLineFit1059->GetYaxis()->SetTitleFont(42);
   quadLineFit1059->SetParameter(0,5.14827);
   quadLineFit1059->SetParError(0,0.09440265);
   quadLineFit1059->SetParLimits(0,0,0);
   quadLineFit1059->SetParameter(1,-0.1439665);
   quadLineFit1059->SetParError(1,0.00522314);
   quadLineFit1059->SetParLimits(1,0,0);
   quadLineFit1059->Draw("same");
   
   Double_t 50.000000 ppm_fx1059[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1059[3] = {
   4.37564,
   3.874113,
   3.487507};
   Double_t 50.000000 ppm_fex1059[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1059[3] = {
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(3,50.000000 ppm_fx1059,50.000000 ppm_fy1059,50.000000 ppm_fex1059,50.000000 ppm_fey1059);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1059 = new TH1F("Graph_50dO000000sPppm1059","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1059->SetMinimum(3.380966);
   Graph_50dO000000sPppm1059->SetMaximum(4.482182);
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
   
   
   TF1 *quadLineFit1060 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1060->SetFillColor(19);
   quadLineFit1060->SetFillStyle(0);
   quadLineFit1060->SetLineColor(6);
   quadLineFit1060->SetLineWidth(2);
   quadLineFit1060->SetChisquare(10.08495);
   quadLineFit1060->SetNDF(1);
   quadLineFit1060->GetXaxis()->SetLabelFont(42);
   quadLineFit1060->GetXaxis()->SetTitleOffset(1);
   quadLineFit1060->GetXaxis()->SetTitleFont(42);
   quadLineFit1060->GetYaxis()->SetLabelFont(42);
   quadLineFit1060->GetYaxis()->SetTitleFont(42);
   quadLineFit1060->SetParameter(0,7.909018);
   quadLineFit1060->SetParError(0,0.09440964);
   quadLineFit1060->SetParLimits(0,0,0);
   quadLineFit1060->SetParameter(1,-0.2220332);
   quadLineFit1060->SetParError(1,0.005223526);
   quadLineFit1060->SetParLimits(1,0,0);
   quadLineFit1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1060);
   gre->Draw("p ");
   
   TF1 *quadLineFit1061 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1061->SetFillColor(19);
   quadLineFit1061->SetFillStyle(0);
   quadLineFit1061->SetLineColor(6);
   quadLineFit1061->SetLineWidth(2);
   quadLineFit1061->SetChisquare(10.08495);
   quadLineFit1061->SetNDF(1);
   quadLineFit1061->GetXaxis()->SetLabelFont(42);
   quadLineFit1061->GetXaxis()->SetTitleOffset(1);
   quadLineFit1061->GetXaxis()->SetTitleFont(42);
   quadLineFit1061->GetYaxis()->SetLabelFont(42);
   quadLineFit1061->GetYaxis()->SetTitleFont(42);
   quadLineFit1061->SetParameter(0,7.909018);
   quadLineFit1061->SetParError(0,0.09440964);
   quadLineFit1061->SetParLimits(0,0,0);
   quadLineFit1061->SetParameter(1,-0.2220332);
   quadLineFit1061->SetParError(1,0.005223526);
   quadLineFit1061->SetParLimits(1,0,0);
   quadLineFit1061->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
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
