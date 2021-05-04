void QuadScans()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 11:31:28 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04581371,70.625,0.08035061,79.375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t 50_ppm_fx1001[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50_ppm_fy1001[4] = {
   77.69152,
   77.21988,
   77.02055,
   76.81286};
   Double_t 50_ppm_fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t 50_ppm_fey1001[4] = {
   0.01263056,
   0.01009831,
   0.01058343,
   0.01034194};
   TGraphErrors *gre = new TGraphErrors(4,50_ppm_fx1001,50_ppm_fy1001,50_ppm_fex1001,50_ppm_fey1001);
   gre->SetName("50_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_50_ppm1001 = new TH1F("Graph_50_ppm1001","",100,0.0492674,0.07344323);
   Graph_50_ppm1001->SetMinimum(71.5);
   Graph_50_ppm1001->SetMaximum(78.5);
   Graph_50_ppm1001->SetDirectory(0);
   Graph_50_ppm1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_50_ppm1001->SetLineColor(ci);
   Graph_50_ppm1001->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_50_ppm1001->GetXaxis()->CenterTitle(true);
   Graph_50_ppm1001->GetXaxis()->SetLabelFont(42);
   Graph_50_ppm1001->GetXaxis()->SetTitleSize(0.04);
   Graph_50_ppm1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_50_ppm1001->GetXaxis()->SetTitleFont(42);
   Graph_50_ppm1001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_50_ppm1001->GetYaxis()->CenterTitle(true);
   Graph_50_ppm1001->GetYaxis()->SetNdivisions(4000510);
   Graph_50_ppm1001->GetYaxis()->SetLabelFont(42);
   Graph_50_ppm1001->GetYaxis()->SetTitleSize(0.04);
   Graph_50_ppm1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_50_ppm1001->GetYaxis()->SetTitleFont(42);
   Graph_50_ppm1001->GetZaxis()->SetLabelFont(42);
   Graph_50_ppm1001->GetZaxis()->SetTitleOffset(1);
   Graph_50_ppm1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50_ppm1001);
   
   
   TF1 *quadLineFit1002 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1002->SetFillColor(19);
   quadLineFit1002->SetFillStyle(0);
   quadLineFit1002->SetLineWidth(2);
   quadLineFit1002->SetChisquare(53.05558);
   quadLineFit1002->SetNDF(2);
   quadLineFit1002->GetXaxis()->SetLabelFont(42);
   quadLineFit1002->GetXaxis()->SetTitleOffset(1);
   quadLineFit1002->GetXaxis()->SetTitleFont(42);
   quadLineFit1002->GetYaxis()->SetLabelFont(42);
   quadLineFit1002->GetYaxis()->SetTitleFont(42);
   quadLineFit1002->SetParameter(0,74.67054);
   quadLineFit1002->SetParError(0,0.04484015);
   quadLineFit1002->SetParLimits(0,0,0);
   quadLineFit1002->SetParameter(1,41.72041);
   quadLineFit1002->SetParError(1,0.7510283);
   quadLineFit1002->SetParLimits(1,0,0);
   quadLineFit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1002);
   gre->Draw("ap");
   
   TF1 *quadLineFit1003 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1003->SetFillColor(19);
   quadLineFit1003->SetFillStyle(0);
   quadLineFit1003->SetLineWidth(2);
   quadLineFit1003->SetChisquare(53.05558);
   quadLineFit1003->SetNDF(2);
   quadLineFit1003->GetXaxis()->SetLabelFont(42);
   quadLineFit1003->GetXaxis()->SetTitleOffset(1);
   quadLineFit1003->GetXaxis()->SetTitleFont(42);
   quadLineFit1003->GetYaxis()->SetLabelFont(42);
   quadLineFit1003->GetYaxis()->SetTitleFont(42);
   quadLineFit1003->SetParameter(0,74.67054);
   quadLineFit1003->SetParError(0,0.04484015);
   quadLineFit1003->SetParLimits(0,0,0);
   quadLineFit1003->SetParameter(1,41.72041);
   quadLineFit1003->SetParError(1,0.7510283);
   quadLineFit1003->SetParLimits(1,0,0);
   quadLineFit1003->Draw("same");
   
   Double_t 30_ppm_fx1003[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30_ppm_fy1003[4] = {
   76.37578,
   76.10116,
   75.95612,
   75.82155};
   Double_t 30_ppm_fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t 30_ppm_fey1003[4] = {
   0.009074096,
   0.01297029,
   0.008700928,
   0.01057286};
   gre = new TGraphErrors(4,30_ppm_fx1003,30_ppm_fy1003,30_ppm_fex1003,30_ppm_fey1003);
   gre->SetName("30_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_30_ppm1003 = new TH1F("Graph_30_ppm1003","",100,0.0492674,0.07344323);
   Graph_30_ppm1003->SetMinimum(75.75359);
   Graph_30_ppm1003->SetMaximum(76.44224);
   Graph_30_ppm1003->SetDirectory(0);
   Graph_30_ppm1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30_ppm1003->SetLineColor(ci);
   Graph_30_ppm1003->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_30_ppm1003->GetXaxis()->CenterTitle(true);
   Graph_30_ppm1003->GetXaxis()->SetLabelFont(42);
   Graph_30_ppm1003->GetXaxis()->SetTitleOffset(1);
   Graph_30_ppm1003->GetXaxis()->SetTitleFont(42);
   Graph_30_ppm1003->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_30_ppm1003->GetYaxis()->CenterTitle(true);
   Graph_30_ppm1003->GetYaxis()->SetLabelFont(42);
   Graph_30_ppm1003->GetYaxis()->SetTitleFont(42);
   Graph_30_ppm1003->GetZaxis()->SetLabelFont(42);
   Graph_30_ppm1003->GetZaxis()->SetTitleOffset(1);
   Graph_30_ppm1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30_ppm1003);
   
   
   TF1 *quadLineFit1004 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1004->SetFillColor(19);
   quadLineFit1004->SetFillStyle(0);
   quadLineFit1004->SetLineColor(2);
   quadLineFit1004->SetLineWidth(2);
   quadLineFit1004->SetChisquare(7.927117);
   quadLineFit1004->SetNDF(2);
   quadLineFit1004->GetXaxis()->SetLabelFont(42);
   quadLineFit1004->GetXaxis()->SetTitleOffset(1);
   quadLineFit1004->GetXaxis()->SetTitleFont(42);
   quadLineFit1004->GetYaxis()->SetLabelFont(42);
   quadLineFit1004->GetYaxis()->SetTitleFont(42);
   quadLineFit1004->SetParameter(0,74.44637);
   quadLineFit1004->SetParError(0,0.03811651);
   quadLineFit1004->SetParLimits(0,0,0);
   quadLineFit1004->SetParameter(1,26.94254);
   quadLineFit1004->SetParError(1,0.6254251);
   quadLineFit1004->SetParLimits(1,0,0);
   quadLineFit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1004);
   gre->Draw("p ");
   
   TF1 *quadLineFit1005 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1005->SetFillColor(19);
   quadLineFit1005->SetFillStyle(0);
   quadLineFit1005->SetLineColor(2);
   quadLineFit1005->SetLineWidth(2);
   quadLineFit1005->SetChisquare(7.927117);
   quadLineFit1005->SetNDF(2);
   quadLineFit1005->GetXaxis()->SetLabelFont(42);
   quadLineFit1005->GetXaxis()->SetTitleOffset(1);
   quadLineFit1005->GetXaxis()->SetTitleFont(42);
   quadLineFit1005->GetYaxis()->SetLabelFont(42);
   quadLineFit1005->GetYaxis()->SetTitleFont(42);
   quadLineFit1005->SetParameter(0,74.44637);
   quadLineFit1005->SetParError(0,0.03811651);
   quadLineFit1005->SetParLimits(0,0,0);
   quadLineFit1005->SetParameter(1,26.94254);
   quadLineFit1005->SetParError(1,0.6254251);
   quadLineFit1005->SetParLimits(1,0,0);
   quadLineFit1005->Draw("same");
   
   Double_t 10_ppm_fx1005[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10_ppm_fy1005[3] = {
   74.95984,
   74.85798,
   74.78558};
   Double_t 10_ppm_fex1005[3] = {
   0,
   0,
   0};
   Double_t 10_ppm_fey1005[3] = {
   0.01109589,
   0.007562065,
   0.009854357};
   gre = new TGraphErrors(3,10_ppm_fx1005,10_ppm_fy1005,10_ppm_fex1005,10_ppm_fey1005);
   gre->SetName("10_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_10_ppm1005 = new TH1F("Graph_10_ppm1005","",100,0.0492674,0.07344323);
   Graph_10_ppm1005->SetMinimum(74.75621);
   Graph_10_ppm1005->SetMaximum(74.99046);
   Graph_10_ppm1005->SetDirectory(0);
   Graph_10_ppm1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10_ppm1005->SetLineColor(ci);
   Graph_10_ppm1005->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_10_ppm1005->GetXaxis()->CenterTitle(true);
   Graph_10_ppm1005->GetXaxis()->SetLabelFont(42);
   Graph_10_ppm1005->GetXaxis()->SetTitleOffset(1);
   Graph_10_ppm1005->GetXaxis()->SetTitleFont(42);
   Graph_10_ppm1005->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_10_ppm1005->GetYaxis()->CenterTitle(true);
   Graph_10_ppm1005->GetYaxis()->SetLabelFont(42);
   Graph_10_ppm1005->GetYaxis()->SetTitleFont(42);
   Graph_10_ppm1005->GetZaxis()->SetLabelFont(42);
   Graph_10_ppm1005->GetZaxis()->SetTitleOffset(1);
   Graph_10_ppm1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10_ppm1005);
   
   
   TF1 *quadLineFit1006 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1006->SetFillColor(19);
   quadLineFit1006->SetFillStyle(0);
   quadLineFit1006->SetLineColor(3);
   quadLineFit1006->SetLineWidth(2);
   quadLineFit1006->SetChisquare(5.30229);
   quadLineFit1006->SetNDF(1);
   quadLineFit1006->GetXaxis()->SetLabelFont(42);
   quadLineFit1006->GetXaxis()->SetTitleOffset(1);
   quadLineFit1006->GetXaxis()->SetTitleFont(42);
   quadLineFit1006->GetYaxis()->SetLabelFont(42);
   quadLineFit1006->GetYaxis()->SetTitleFont(42);
   quadLineFit1006->SetParameter(0,74.34674);
   quadLineFit1006->SetParError(0,0.04477671);
   quadLineFit1006->SetParLimits(0,0,0);
   quadLineFit1006->SetParameter(1,8.376735);
   quadLineFit1006->SetParError(1,0.7253364);
   quadLineFit1006->SetParLimits(1,0,0);
   quadLineFit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1006);
   gre->Draw("p ");
   
   TF1 *quadLineFit1007 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1007->SetFillColor(19);
   quadLineFit1007->SetFillStyle(0);
   quadLineFit1007->SetLineColor(3);
   quadLineFit1007->SetLineWidth(2);
   quadLineFit1007->SetChisquare(5.30229);
   quadLineFit1007->SetNDF(1);
   quadLineFit1007->GetXaxis()->SetLabelFont(42);
   quadLineFit1007->GetXaxis()->SetTitleOffset(1);
   quadLineFit1007->GetXaxis()->SetTitleFont(42);
   quadLineFit1007->GetYaxis()->SetLabelFont(42);
   quadLineFit1007->GetYaxis()->SetTitleFont(42);
   quadLineFit1007->SetParameter(0,74.34674);
   quadLineFit1007->SetParError(0,0.04477671);
   quadLineFit1007->SetParLimits(0,0,0);
   quadLineFit1007->SetParameter(1,8.376735);
   quadLineFit1007->SetParError(1,0.7253364);
   quadLineFit1007->SetParLimits(1,0,0);
   quadLineFit1007->Draw("same");
   
   Double_t -10_ppm_fx1007[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10_ppm_fy1007[4] = {
   73.48173,
   73.62685,
   73.69749,
   73.75739};
   Double_t -10_ppm_fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t -10_ppm_fey1007[4] = {
   0.009086065,
   0.009766785,
   0.009631385,
   0.01091006};
   gre = new TGraphErrors(4,-10_ppm_fx1007,-10_ppm_fy1007,-10_ppm_fex1007,-10_ppm_fey1007);
   gre->SetName("-10_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_mI10_ppm1007 = new TH1F("Graph_mI10_ppm1007","",100,0.0492674,0.07344323);
   Graph_mI10_ppm1007->SetMinimum(73.44308);
   Graph_mI10_ppm1007->SetMaximum(73.79786);
   Graph_mI10_ppm1007->SetDirectory(0);
   Graph_mI10_ppm1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10_ppm1007->SetLineColor(ci);
   Graph_mI10_ppm1007->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI10_ppm1007->GetXaxis()->CenterTitle(true);
   Graph_mI10_ppm1007->GetXaxis()->SetLabelFont(42);
   Graph_mI10_ppm1007->GetXaxis()->SetTitleOffset(1);
   Graph_mI10_ppm1007->GetXaxis()->SetTitleFont(42);
   Graph_mI10_ppm1007->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI10_ppm1007->GetYaxis()->CenterTitle(true);
   Graph_mI10_ppm1007->GetYaxis()->SetLabelFont(42);
   Graph_mI10_ppm1007->GetYaxis()->SetTitleFont(42);
   Graph_mI10_ppm1007->GetZaxis()->SetLabelFont(42);
   Graph_mI10_ppm1007->GetZaxis()->SetTitleOffset(1);
   Graph_mI10_ppm1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10_ppm1007);
   
   
   TF1 *quadLineFit1008 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1008->SetFillColor(19);
   quadLineFit1008->SetFillStyle(0);
   quadLineFit1008->SetLineColor(4);
   quadLineFit1008->SetLineWidth(2);
   quadLineFit1008->SetChisquare(4.252472);
   quadLineFit1008->SetNDF(2);
   quadLineFit1008->GetXaxis()->SetLabelFont(42);
   quadLineFit1008->GetXaxis()->SetTitleOffset(1);
   quadLineFit1008->GetXaxis()->SetTitleFont(42);
   quadLineFit1008->GetYaxis()->SetLabelFont(42);
   quadLineFit1008->GetYaxis()->SetTitleFont(42);
   quadLineFit1008->SetParameter(0,74.45363);
   quadLineFit1008->SetParError(0,0.0392733);
   quadLineFit1008->SetParLimits(0,0,0);
   quadLineFit1008->SetParameter(1,-13.50537);
   quadLineFit1008->SetParError(1,0.6383808);
   quadLineFit1008->SetParLimits(1,0,0);
   quadLineFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1008);
   gre->Draw("p ");
   
   TF1 *quadLineFit1009 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1009->SetFillColor(19);
   quadLineFit1009->SetFillStyle(0);
   quadLineFit1009->SetLineColor(4);
   quadLineFit1009->SetLineWidth(2);
   quadLineFit1009->SetChisquare(4.252472);
   quadLineFit1009->SetNDF(2);
   quadLineFit1009->GetXaxis()->SetLabelFont(42);
   quadLineFit1009->GetXaxis()->SetTitleOffset(1);
   quadLineFit1009->GetXaxis()->SetTitleFont(42);
   quadLineFit1009->GetYaxis()->SetLabelFont(42);
   quadLineFit1009->GetYaxis()->SetTitleFont(42);
   quadLineFit1009->SetParameter(0,74.45363);
   quadLineFit1009->SetParError(0,0.0392733);
   quadLineFit1009->SetParLimits(0,0,0);
   quadLineFit1009->SetParameter(1,-13.50537);
   quadLineFit1009->SetParError(1,0.6383808);
   quadLineFit1009->SetParLimits(1,0,0);
   quadLineFit1009->Draw("same");
   
   Double_t -30_ppm_fx1009[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30_ppm_fy1009[4] = {
   72.21334,
   72.51934,
   72.67829,
   72.79597};
   Double_t -30_ppm_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t -30_ppm_fey1009[4] = {
   0.0114686,
   0.01166327,
   0.008815269,
   0.007128771};
   gre = new TGraphErrors(4,-30_ppm_fx1009,-30_ppm_fy1009,-30_ppm_fex1009,-30_ppm_fey1009);
   gre->SetName("-30_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_mI30_ppm1009 = new TH1F("Graph_mI30_ppm1009","",100,0.0492674,0.07344323);
   Graph_mI30_ppm1009->SetMinimum(72.14174);
   Graph_mI30_ppm1009->SetMaximum(72.86322);
   Graph_mI30_ppm1009->SetDirectory(0);
   Graph_mI30_ppm1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30_ppm1009->SetLineColor(ci);
   Graph_mI30_ppm1009->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30_ppm1009->GetXaxis()->CenterTitle(true);
   Graph_mI30_ppm1009->GetXaxis()->SetLabelFont(42);
   Graph_mI30_ppm1009->GetXaxis()->SetTitleOffset(1);
   Graph_mI30_ppm1009->GetXaxis()->SetTitleFont(42);
   Graph_mI30_ppm1009->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30_ppm1009->GetYaxis()->CenterTitle(true);
   Graph_mI30_ppm1009->GetYaxis()->SetLabelFont(42);
   Graph_mI30_ppm1009->GetYaxis()->SetTitleFont(42);
   Graph_mI30_ppm1009->GetZaxis()->SetLabelFont(42);
   Graph_mI30_ppm1009->GetZaxis()->SetTitleOffset(1);
   Graph_mI30_ppm1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30_ppm1009);
   
   
   TF1 *quadLineFit1010 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1010->SetFillColor(19);
   quadLineFit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1010->SetLineColor(ci);
   quadLineFit1010->SetLineWidth(2);
   quadLineFit1010->SetChisquare(12.2917);
   quadLineFit1010->SetNDF(2);
   quadLineFit1010->GetXaxis()->SetLabelFont(42);
   quadLineFit1010->GetXaxis()->SetTitleOffset(1);
   quadLineFit1010->GetXaxis()->SetTitleFont(42);
   quadLineFit1010->GetYaxis()->SetLabelFont(42);
   quadLineFit1010->GetYaxis()->SetTitleFont(42);
   quadLineFit1010->SetParameter(0,74.24962);
   quadLineFit1010->SetParError(0,0.03682041);
   quadLineFit1010->SetParLimits(0,0,0);
   quadLineFit1010->SetParameter(1,-28.25057);
   quadLineFit1010->SetParError(1,0.6364641);
   quadLineFit1010->SetParLimits(1,0,0);
   quadLineFit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1010);
   gre->Draw("p ");
   
   TF1 *quadLineFit1011 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1011->SetFillColor(19);
   quadLineFit1011->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1011->SetLineColor(ci);
   quadLineFit1011->SetLineWidth(2);
   quadLineFit1011->SetChisquare(12.2917);
   quadLineFit1011->SetNDF(2);
   quadLineFit1011->GetXaxis()->SetLabelFont(42);
   quadLineFit1011->GetXaxis()->SetTitleOffset(1);
   quadLineFit1011->GetXaxis()->SetTitleFont(42);
   quadLineFit1011->GetYaxis()->SetLabelFont(42);
   quadLineFit1011->GetYaxis()->SetTitleFont(42);
   quadLineFit1011->SetParameter(0,74.24962);
   quadLineFit1011->SetParError(0,0.03682041);
   quadLineFit1011->SetParLimits(0,0,0);
   quadLineFit1011->SetParameter(1,-28.25057);
   quadLineFit1011->SetParError(1,0.6364641);
   quadLineFit1011->SetParLimits(1,0,0);
   quadLineFit1011->Draw("same");
   
   Double_t -50_ppm_fx1011[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50_ppm_fy1011[3] = {
   71.43918,
   71.69377,
   71.89495};
   Double_t -50_ppm_fex1011[3] = {
   0,
   0,
   0};
   Double_t -50_ppm_fey1011[3] = {
   0.0114502,
   0.008921909,
   0.009537131};
   gre = new TGraphErrors(3,-50_ppm_fx1011,-50_ppm_fy1011,-50_ppm_fex1011,-50_ppm_fey1011);
   gre->SetName("-50_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_mI50_ppm1011 = new TH1F("Graph_mI50_ppm1011","",100,0.05016026,0.06362179);
   Graph_mI50_ppm1011->SetMinimum(71.38005);
   Graph_mI50_ppm1011->SetMaximum(71.95216);
   Graph_mI50_ppm1011->SetDirectory(0);
   Graph_mI50_ppm1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI50_ppm1011->SetLineColor(ci);
   Graph_mI50_ppm1011->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI50_ppm1011->GetXaxis()->CenterTitle(true);
   Graph_mI50_ppm1011->GetXaxis()->SetLabelFont(42);
   Graph_mI50_ppm1011->GetXaxis()->SetTitleOffset(1);
   Graph_mI50_ppm1011->GetXaxis()->SetTitleFont(42);
   Graph_mI50_ppm1011->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50_ppm1011->GetYaxis()->CenterTitle(true);
   Graph_mI50_ppm1011->GetYaxis()->SetLabelFont(42);
   Graph_mI50_ppm1011->GetYaxis()->SetTitleFont(42);
   Graph_mI50_ppm1011->GetZaxis()->SetLabelFont(42);
   Graph_mI50_ppm1011->GetZaxis()->SetTitleOffset(1);
   Graph_mI50_ppm1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50_ppm1011);
   
   
   TF1 *quadLineFit1012 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1012->SetFillColor(19);
   quadLineFit1012->SetFillStyle(0);
   quadLineFit1012->SetLineColor(6);
   quadLineFit1012->SetLineWidth(2);
   quadLineFit1012->SetChisquare(5.68676);
   quadLineFit1012->SetNDF(1);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,73.96083);
   quadLineFit1012->SetParError(0,0.07410761);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,-40.51136);
   quadLineFit1012->SetParError(1,1.32546);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("p ");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineColor(6);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->SetChisquare(5.68676);
   quadLineFit1013->SetNDF(1);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,73.96083);
   quadLineFit1013->SetParError(0,0.07410761);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,-40.51136);
   quadLineFit1013->SetParError(1,1.32546);
   quadLineFit1013->SetParLimits(1,0,0);
   quadLineFit1013->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{App}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50_ppm","  #minus50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30_ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10_ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10_ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30_ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50_ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
