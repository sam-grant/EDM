void QuadScans()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 12:10:22 2021) by ROOT version 6.22/08
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
   77.7006,
   77.29649,
   76.99664,
   76.78515};
   Double_t 50_ppm_fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t 50_ppm_fey1001[4] = {
   0.0162251,
   0.01295378,
   0.01344799,
   0.01310521};
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
   quadLineFit1002->SetChisquare(1.052667);
   quadLineFit1002->SetNDF(2);
   quadLineFit1002->GetXaxis()->SetLabelFont(42);
   quadLineFit1002->GetXaxis()->SetTitleOffset(1);
   quadLineFit1002->GetXaxis()->SetTitleFont(42);
   quadLineFit1002->GetYaxis()->SetLabelFont(42);
   quadLineFit1002->GetYaxis()->SetTitleFont(42);
   quadLineFit1002->SetParameter(0,74.47739);
   quadLineFit1002->SetParError(0,0.057538);
   quadLineFit1002->SetParLimits(0,0,0);
   quadLineFit1002->SetParameter(1,45.14407);
   quadLineFit1002->SetParError(1,0.9650526);
   quadLineFit1002->SetParLimits(1,0,0);
   quadLineFit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1002);
   gre->Draw("ap");
   
   TF1 *quadLineFit1003 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1003->SetFillColor(19);
   quadLineFit1003->SetFillStyle(0);
   quadLineFit1003->SetLineWidth(2);
   quadLineFit1003->SetChisquare(1.052667);
   quadLineFit1003->SetNDF(2);
   quadLineFit1003->GetXaxis()->SetLabelFont(42);
   quadLineFit1003->GetXaxis()->SetTitleOffset(1);
   quadLineFit1003->GetXaxis()->SetTitleFont(42);
   quadLineFit1003->GetYaxis()->SetLabelFont(42);
   quadLineFit1003->GetYaxis()->SetTitleFont(42);
   quadLineFit1003->SetParameter(0,74.47739);
   quadLineFit1003->SetParError(0,0.057538);
   quadLineFit1003->SetParLimits(0,0,0);
   quadLineFit1003->SetParameter(1,45.14407);
   quadLineFit1003->SetParError(1,0.9650526);
   quadLineFit1003->SetParLimits(1,0,0);
   quadLineFit1003->Draw("same");
   
   Double_t 30_ppm_fx1003[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30_ppm_fy1003[4] = {
   76.29892,
   76.0885,
   75.90586,
   75.80496};
   Double_t 30_ppm_fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t 30_ppm_fey1003[4] = {
   0.01162551,
   0.01654795,
   0.01101277,
   0.01335871};
   gre = new TGraphErrors(4,30_ppm_fx1003,30_ppm_fy1003,30_ppm_fex1003,30_ppm_fey1003);
   gre->SetName("30_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_30_ppm1003 = new TH1F("Graph_30_ppm1003","",100,0.0492674,0.07344323);
   Graph_30_ppm1003->SetMinimum(75.7397);
   Graph_30_ppm1003->SetMaximum(76.36245);
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
   quadLineFit1004->SetChisquare(0.356499);
   quadLineFit1004->SetNDF(2);
   quadLineFit1004->GetXaxis()->SetLabelFont(42);
   quadLineFit1004->GetXaxis()->SetTitleOffset(1);
   quadLineFit1004->GetXaxis()->SetTitleFont(42);
   quadLineFit1004->GetYaxis()->SetLabelFont(42);
   quadLineFit1004->GetYaxis()->SetTitleFont(42);
   quadLineFit1004->SetParameter(0,74.53912);
   quadLineFit1004->SetParError(0,0.04848728);
   quadLineFit1004->SetParLimits(0,0,0);
   quadLineFit1004->SetParameter(1,24.65838);
   quadLineFit1004->SetParError(1,0.79682);
   quadLineFit1004->SetParLimits(1,0,0);
   quadLineFit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1004);
   gre->Draw("p ");
   
   TF1 *quadLineFit1005 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1005->SetFillColor(19);
   quadLineFit1005->SetFillStyle(0);
   quadLineFit1005->SetLineColor(2);
   quadLineFit1005->SetLineWidth(2);
   quadLineFit1005->SetChisquare(0.356499);
   quadLineFit1005->SetNDF(2);
   quadLineFit1005->GetXaxis()->SetLabelFont(42);
   quadLineFit1005->GetXaxis()->SetTitleOffset(1);
   quadLineFit1005->GetXaxis()->SetTitleFont(42);
   quadLineFit1005->GetYaxis()->SetLabelFont(42);
   quadLineFit1005->GetYaxis()->SetTitleFont(42);
   quadLineFit1005->SetParameter(0,74.53912);
   quadLineFit1005->SetParError(0,0.04848728);
   quadLineFit1005->SetParLimits(0,0,0);
   quadLineFit1005->SetParameter(1,24.65838);
   quadLineFit1005->SetParError(1,0.79682);
   quadLineFit1005->SetParLimits(1,0,0);
   quadLineFit1005->Draw("same");
   
   Double_t 10_ppm_fx1005[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10_ppm_fy1005[3] = {
   74.94852,
   74.86249,
   74.78624};
   Double_t 10_ppm_fex1005[3] = {
   0,
   0,
   0};
   Double_t 10_ppm_fey1005[3] = {
   0.01415326,
   0.009585974,
   0.01241394};
   gre = new TGraphErrors(3,10_ppm_fx1005,10_ppm_fy1005,10_ppm_fex1005,10_ppm_fey1005);
   gre->SetName("10_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_10_ppm1005 = new TH1F("Graph_10_ppm1005","",100,0.0492674,0.07344323);
   Graph_10_ppm1005->SetMinimum(74.75495);
   Graph_10_ppm1005->SetMaximum(74.98155);
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
   quadLineFit1006->SetChisquare(1.080633);
   quadLineFit1006->SetNDF(1);
   quadLineFit1006->GetXaxis()->SetLabelFont(42);
   quadLineFit1006->GetXaxis()->SetTitleOffset(1);
   quadLineFit1006->GetXaxis()->SetTitleFont(42);
   quadLineFit1006->GetYaxis()->SetLabelFont(42);
   quadLineFit1006->GetYaxis()->SetTitleFont(42);
   quadLineFit1006->SetParameter(0,74.37638);
   quadLineFit1006->SetParError(0,0.05680311);
   quadLineFit1006->SetParLimits(0,0,0);
   quadLineFit1006->SetParameter(1,7.890283);
   quadLineFit1006->SetParError(1,0.9211284);
   quadLineFit1006->SetParLimits(1,0,0);
   quadLineFit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1006);
   gre->Draw("p ");
   
   TF1 *quadLineFit1007 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1007->SetFillColor(19);
   quadLineFit1007->SetFillStyle(0);
   quadLineFit1007->SetLineColor(3);
   quadLineFit1007->SetLineWidth(2);
   quadLineFit1007->SetChisquare(1.080633);
   quadLineFit1007->SetNDF(1);
   quadLineFit1007->GetXaxis()->SetLabelFont(42);
   quadLineFit1007->GetXaxis()->SetTitleOffset(1);
   quadLineFit1007->GetXaxis()->SetTitleFont(42);
   quadLineFit1007->GetYaxis()->SetLabelFont(42);
   quadLineFit1007->GetYaxis()->SetTitleFont(42);
   quadLineFit1007->SetParameter(0,74.37638);
   quadLineFit1007->SetParError(0,0.05680311);
   quadLineFit1007->SetParLimits(0,0,0);
   quadLineFit1007->SetParameter(1,7.890283);
   quadLineFit1007->SetParError(1,0.9211284);
   quadLineFit1007->SetParLimits(1,0,0);
   quadLineFit1007->Draw("same");
   
   Double_t -10_ppm_fx1007[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10_ppm_fy1007[4] = {
   73.54963,
   73.66891,
   73.71178,
   73.79209};
   Double_t -10_ppm_fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t -10_ppm_fey1007[4] = {
   0.01161686,
   0.01239609,
   0.01216695,
   0.01378086};
   gre = new TGraphErrors(4,-10_ppm_fx1007,-10_ppm_fy1007,-10_ppm_fex1007,-10_ppm_fey1007);
   gre->SetName("-10_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_mI10_ppm1007 = new TH1F("Graph_mI10_ppm1007","",100,0.0492674,0.07344323);
   Graph_mI10_ppm1007->SetMinimum(73.51122);
   Graph_mI10_ppm1007->SetMaximum(73.83266);
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
   quadLineFit1008->SetChisquare(5.099015);
   quadLineFit1008->SetNDF(2);
   quadLineFit1008->GetXaxis()->SetLabelFont(42);
   quadLineFit1008->GetXaxis()->SetTitleOffset(1);
   quadLineFit1008->GetXaxis()->SetTitleFont(42);
   quadLineFit1008->GetYaxis()->SetLabelFont(42);
   quadLineFit1008->GetYaxis()->SetTitleFont(42);
   quadLineFit1008->SetParameter(0,74.3576);
   quadLineFit1008->SetParError(0,0.04986124);
   quadLineFit1008->SetParLimits(0,0,0);
   quadLineFit1008->SetParameter(1,-11.26222);
   quadLineFit1008->SetParError(1,0.811502);
   quadLineFit1008->SetParLimits(1,0,0);
   quadLineFit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1008);
   gre->Draw("p ");
   
   TF1 *quadLineFit1009 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344323, TF1::EAddToList::kNo);
   quadLineFit1009->SetFillColor(19);
   quadLineFit1009->SetFillStyle(0);
   quadLineFit1009->SetLineColor(4);
   quadLineFit1009->SetLineWidth(2);
   quadLineFit1009->SetChisquare(5.099015);
   quadLineFit1009->SetNDF(2);
   quadLineFit1009->GetXaxis()->SetLabelFont(42);
   quadLineFit1009->GetXaxis()->SetTitleOffset(1);
   quadLineFit1009->GetXaxis()->SetTitleFont(42);
   quadLineFit1009->GetYaxis()->SetLabelFont(42);
   quadLineFit1009->GetYaxis()->SetTitleFont(42);
   quadLineFit1009->SetParameter(0,74.3576);
   quadLineFit1009->SetParError(0,0.04986124);
   quadLineFit1009->SetParLimits(0,0,0);
   quadLineFit1009->SetParameter(1,-11.26222);
   quadLineFit1009->SetParError(1,0.811502);
   quadLineFit1009->SetParLimits(1,0,0);
   quadLineFit1009->Draw("same");
   
   Double_t -30_ppm_fx1009[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30_ppm_fy1009[4] = {
   72.21091,
   72.46606,
   72.67561,
   72.79218};
   Double_t -30_ppm_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t -30_ppm_fey1009[4] = {
   0.01474665,
   0.01492336,
   0.01120756,
   0.009056154};
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
   Graph_mI30_ppm1009->SetMinimum(72.13566);
   Graph_mI30_ppm1009->SetMaximum(72.86175);
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
   quadLineFit1010->SetChisquare(0.3098063);
   quadLineFit1010->SetNDF(2);
   quadLineFit1010->GetXaxis()->SetLabelFont(42);
   quadLineFit1010->GetXaxis()->SetTitleOffset(1);
   quadLineFit1010->GetXaxis()->SetTitleFont(42);
   quadLineFit1010->GetYaxis()->SetLabelFont(42);
   quadLineFit1010->GetYaxis()->SetTitleFont(42);
   quadLineFit1010->SetParameter(0,74.27903);
   quadLineFit1010->SetParError(0,0.04710431);
   quadLineFit1010->SetParLimits(0,0,0);
   quadLineFit1010->SetParameter(1,-28.95332);
   quadLineFit1010->SetParError(1,0.8151923);
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
   quadLineFit1011->SetChisquare(0.3098063);
   quadLineFit1011->SetNDF(2);
   quadLineFit1011->GetXaxis()->SetLabelFont(42);
   quadLineFit1011->GetXaxis()->SetTitleOffset(1);
   quadLineFit1011->GetXaxis()->SetTitleFont(42);
   quadLineFit1011->GetYaxis()->SetLabelFont(42);
   quadLineFit1011->GetYaxis()->SetTitleFont(42);
   quadLineFit1011->SetParameter(0,74.27903);
   quadLineFit1011->SetParError(0,0.04710431);
   quadLineFit1011->SetParLimits(0,0,0);
   quadLineFit1011->SetParameter(1,-28.95332);
   quadLineFit1011->SetParError(1,0.8151923);
   quadLineFit1011->SetParLimits(1,0,0);
   quadLineFit1011->Draw("same");
   
   Double_t -50_ppm_fx1011[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50_ppm_fy1011[3] = {
   71.27907,
   71.61876,
   71.82006};
   Double_t -50_ppm_fex1011[3] = {
   0,
   0,
   0};
   Double_t -50_ppm_fey1011[3] = {
   0.01471954,
   0.01140883,
   0.01217981};
   gre = new TGraphErrors(3,-50_ppm_fx1011,-50_ppm_fy1011,-50_ppm_fex1011,-50_ppm_fey1011);
   gre->SetName("-50_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_mI50_ppm1011 = new TH1F("Graph_mI50_ppm1011","",100,0.05016026,0.06362179);
   Graph_mI50_ppm1011->SetMinimum(71.20756);
   Graph_mI50_ppm1011->SetMaximum(71.88903);
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
   quadLineFit1012->SetChisquare(0.105015);
   quadLineFit1012->SetNDF(1);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,74.29613);
   quadLineFit1012->SetParError(0,0.09511268);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,-48.24414);
   quadLineFit1012->SetParError(1,1.701831);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("p ");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineColor(6);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->SetChisquare(0.105015);
   quadLineFit1013->SetNDF(1);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,74.29613);
   quadLineFit1013->SetParError(0,0.09511268);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,-48.24414);
   quadLineFit1013->SetParError(1,1.701831);
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
