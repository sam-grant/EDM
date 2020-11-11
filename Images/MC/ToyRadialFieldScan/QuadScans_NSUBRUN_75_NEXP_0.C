void QuadScans_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 10 15:16:14 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04418367,-3.25,0.08091837,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1033[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t -50.000000 ppm_fy1033[4] = {
   -3.592792,
   -3.182103,
   -2.828911,
   -2.538544};
   Double_t -50.000000 ppm_fex1033[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1033[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1033,-50.000000 ppm_fy1033,-50.000000 ppm_fex1033,-50.000000 ppm_fey1033);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1033 = new TH1F("Graph_mI50dO000000sPppm1033","",100,0.04785714,0.07357143);
   Graph_mI50dO000000sPppm1033->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1033->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1033->SetDirectory(0);
   Graph_mI50dO000000sPppm1033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1033->SetLineColor(ci);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI50dO000000sPppm1033->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1033->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1033->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1033->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1033->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1033);
   
   
   TF1 *quadLineFit1034 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1034->SetFillColor(19);
   quadLineFit1034->SetFillStyle(0);
   quadLineFit1034->SetLineWidth(2);
   quadLineFit1034->SetChisquare(2.040232);
   quadLineFit1034->SetNDF(2);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,-0.08966862);
   quadLineFit1034->SetParError(0,0.06396421);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,-49.20441);
   quadLineFit1034->SetParError(1,1.058935);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("ap");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(2.040232);
   quadLineFit1035->SetNDF(2);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,-0.08966862);
   quadLineFit1035->SetParError(0,0.06396421);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,-49.20441);
   quadLineFit1035->SetParError(1,1.058935);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t -30.000000 ppm_fx1035[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t -30.000000 ppm_fy1035[4] = {
   -1.908871,
   -1.649469,
   -1.488897,
   -1.318776};
   Double_t -30.000000 ppm_fex1035[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1035[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1035,-30.000000 ppm_fy1035,-30.000000 ppm_fex1035,-30.000000 ppm_fey1035);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1035 = new TH1F("Graph_mI30dO000000sPppm1035","Graph",100,0.04785714,0.07357143);
   Graph_mI30dO000000sPppm1035->SetMinimum(-1.988234);
   Graph_mI30dO000000sPppm1035->SetMaximum(-1.239413);
   Graph_mI30dO000000sPppm1035->SetDirectory(0);
   Graph_mI30dO000000sPppm1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1035->SetLineColor(ci);
   Graph_mI30dO000000sPppm1035->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1035->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1035->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1035->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1035->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1035->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1035->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1035);
   
   
   TF1 *quadLineFit1036 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1036->SetFillColor(19);
   quadLineFit1036->SetFillStyle(0);
   quadLineFit1036->SetLineColor(2);
   quadLineFit1036->SetLineWidth(2);
   quadLineFit1036->SetChisquare(1.482854);
   quadLineFit1036->SetNDF(2);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,0.03165601);
   quadLineFit1036->SetParError(0,0.06396704);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,-27.11093);
   quadLineFit1036->SetParError(1,1.058982);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(2);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(1.482854);
   quadLineFit1037->SetNDF(2);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,0.03165601);
   quadLineFit1037->SetParError(0,0.06396704);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,-27.11093);
   quadLineFit1037->SetParError(1,1.058982);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
   Double_t -10.000000 ppm_fx1037[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t -10.000000 ppm_fy1037[4] = {
   -0.143497,
   -0.1721704,
   -0.1222726,
   -0.1083789};
   Double_t -10.000000 ppm_fex1037[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1037[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1037,-10.000000 ppm_fy1037,-10.000000 ppm_fex1037,-10.000000 ppm_fey1037);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1037 = new TH1F("Graph_mI10dO000000sPppm1037","Graph",100,0.04785714,0.07357143);
   Graph_mI10dO000000sPppm1037->SetMinimum(-0.1989031);
   Graph_mI10dO000000sPppm1037->SetMaximum(-0.08164615);
   Graph_mI10dO000000sPppm1037->SetDirectory(0);
   Graph_mI10dO000000sPppm1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1037->SetLineColor(ci);
   Graph_mI10dO000000sPppm1037->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1037->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1037->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1037->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1037->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1037->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1037->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1037);
   
   
   TF1 *quadLineFit1038 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1038->SetFillColor(19);
   quadLineFit1038->SetFillStyle(0);
   quadLineFit1038->SetLineColor(3);
   quadLineFit1038->SetLineWidth(2);
   quadLineFit1038->SetChisquare(4.470914);
   quadLineFit1038->SetNDF(2);
   quadLineFit1038->GetXaxis()->SetLabelFont(42);
   quadLineFit1038->GetXaxis()->SetTitleOffset(1);
   quadLineFit1038->GetXaxis()->SetTitleFont(42);
   quadLineFit1038->GetYaxis()->SetLabelFont(42);
   quadLineFit1038->GetYaxis()->SetTitleFont(42);
   quadLineFit1038->SetParameter(0,-0.01671409);
   quadLineFit1038->SetParError(0,0.06396475);
   quadLineFit1038->SetParLimits(0,0,0);
   quadLineFit1038->SetParameter(1,-2.002064);
   quadLineFit1038->SetParError(1,1.058944);
   quadLineFit1038->SetParLimits(1,0,0);
   quadLineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1038);
   gre->Draw("p ");
   
   TF1 *quadLineFit1039 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1039->SetFillColor(19);
   quadLineFit1039->SetFillStyle(0);
   quadLineFit1039->SetLineColor(3);
   quadLineFit1039->SetLineWidth(2);
   quadLineFit1039->SetChisquare(4.470914);
   quadLineFit1039->SetNDF(2);
   quadLineFit1039->GetXaxis()->SetLabelFont(42);
   quadLineFit1039->GetXaxis()->SetTitleOffset(1);
   quadLineFit1039->GetXaxis()->SetTitleFont(42);
   quadLineFit1039->GetYaxis()->SetLabelFont(42);
   quadLineFit1039->GetYaxis()->SetTitleFont(42);
   quadLineFit1039->SetParameter(0,-0.01671409);
   quadLineFit1039->SetParError(0,0.06396475);
   quadLineFit1039->SetParLimits(0,0,0);
   quadLineFit1039->SetParameter(1,-2.002064);
   quadLineFit1039->SetParError(1,1.058944);
   quadLineFit1039->SetParLimits(1,0,0);
   quadLineFit1039->Draw("same");
   
   Double_t 10.000000 ppm_fx1039[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t 10.000000 ppm_fy1039[4] = {
   1.531807,
   1.371308,
   1.210173,
   1.054162};
   Double_t 10.000000 ppm_fex1039[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1039[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,10.000000 ppm_fx1039,10.000000 ppm_fy1039,10.000000 ppm_fex1039,10.000000 ppm_fey1039);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_10dO000000sPppm1039 = new TH1F("Graph_10dO000000sPppm1039","Graph",100,0.04785714,0.07357143);
   Graph_10dO000000sPppm1039->SetMinimum(0.9860436);
   Graph_10dO000000sPppm1039->SetMaximum(1.599925);
   Graph_10dO000000sPppm1039->SetDirectory(0);
   Graph_10dO000000sPppm1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1039->SetLineColor(ci);
   Graph_10dO000000sPppm1039->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1039->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1039->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1039->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1039->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1039->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1039->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1039);
   
   
   TF1 *quadLineFit1040 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1040->SetFillColor(19);
   quadLineFit1040->SetFillStyle(0);
   quadLineFit1040->SetLineColor(4);
   quadLineFit1040->SetLineWidth(2);
   quadLineFit1040->SetChisquare(4.394125);
   quadLineFit1040->SetNDF(2);
   quadLineFit1040->GetXaxis()->SetLabelFont(42);
   quadLineFit1040->GetXaxis()->SetTitleOffset(1);
   quadLineFit1040->GetXaxis()->SetTitleFont(42);
   quadLineFit1040->GetYaxis()->SetLabelFont(42);
   quadLineFit1040->GetYaxis()->SetTitleFont(42);
   quadLineFit1040->SetParameter(0,-0.03389629);
   quadLineFit1040->SetParError(0,0.06396432);
   quadLineFit1040->SetParLimits(0,0,0);
   quadLineFit1040->SetParameter(1,22.14357);
   quadLineFit1040->SetParError(1,1.058937);
   quadLineFit1040->SetParLimits(1,0,0);
   quadLineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1040);
   gre->Draw("p ");
   
   TF1 *quadLineFit1041 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1041->SetFillColor(19);
   quadLineFit1041->SetFillStyle(0);
   quadLineFit1041->SetLineColor(4);
   quadLineFit1041->SetLineWidth(2);
   quadLineFit1041->SetChisquare(4.394125);
   quadLineFit1041->SetNDF(2);
   quadLineFit1041->GetXaxis()->SetLabelFont(42);
   quadLineFit1041->GetXaxis()->SetTitleOffset(1);
   quadLineFit1041->GetXaxis()->SetTitleFont(42);
   quadLineFit1041->GetYaxis()->SetLabelFont(42);
   quadLineFit1041->GetYaxis()->SetTitleFont(42);
   quadLineFit1041->SetParameter(0,-0.03389629);
   quadLineFit1041->SetParError(0,0.06396432);
   quadLineFit1041->SetParLimits(0,0,0);
   quadLineFit1041->SetParameter(1,22.14357);
   quadLineFit1041->SetParError(1,1.058937);
   quadLineFit1041->SetParLimits(1,0,0);
   quadLineFit1041->Draw("same");
   
   Double_t 30.000000 ppm_fx1041[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t 30.000000 ppm_fy1041[4] = {
   3.241784,
   2.874129,
   2.537111,
   2.284396};
   Double_t 30.000000 ppm_fex1041[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1041[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,30.000000 ppm_fx1041,30.000000 ppm_fy1041,30.000000 ppm_fex1041,30.000000 ppm_fey1041);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   
   TH1F *Graph_30dO000000sPppm1041 = new TH1F("Graph_30dO000000sPppm1041","Graph",100,0.04785714,0.07357143);
   Graph_30dO000000sPppm1041->SetMinimum(2.168304);
   Graph_30dO000000sPppm1041->SetMaximum(3.357876);
   Graph_30dO000000sPppm1041->SetDirectory(0);
   Graph_30dO000000sPppm1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1041->SetLineColor(ci);
   Graph_30dO000000sPppm1041->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1041->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1041->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1041->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1041->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1041->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1041->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1041);
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);
   quadLineFit1042->SetLineColor(5);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(2.301856);
   quadLineFit1042->SetNDF(2);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,0.04479003);
   quadLineFit1042->SetParError(0,0.06396384);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,44.92264);
   quadLineFit1042->SetParError(1,1.058929);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("p ");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineColor(5);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(2.301856);
   quadLineFit1043->SetNDF(2);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,0.04479003);
   quadLineFit1043->SetParError(0,0.06396384);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,44.92264);
   quadLineFit1043->SetParError(1,1.058929);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 50.000000 ppm_fx1043[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t 50.000000 ppm_fy1043[4] = {
   5.023522,
   4.369497,
   3.876879,
   3.504853};
   Double_t 50.000000 ppm_fex1043[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1043[4] = {
   0.01696128,
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(4,50.000000 ppm_fx1043,50.000000 ppm_fy1043,50.000000 ppm_fex1043,50.000000 ppm_fey1043);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   
   TH1F *Graph_50dO000000sPppm1043 = new TH1F("Graph_50dO000000sPppm1043","Graph",100,0.04785714,0.07357143);
   Graph_50dO000000sPppm1043->SetMinimum(3.332632);
   Graph_50dO000000sPppm1043->SetMaximum(5.195743);
   Graph_50dO000000sPppm1043->SetDirectory(0);
   Graph_50dO000000sPppm1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1043->SetLineColor(ci);
   Graph_50dO000000sPppm1043->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1043->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1043->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1043->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1043->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1043->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1043->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1043);
   
   
   TF1 *quadLineFit1044 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1044->SetFillColor(19);
   quadLineFit1044->SetFillStyle(0);
   quadLineFit1044->SetLineColor(6);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(1.584005);
   quadLineFit1044->SetNDF(2);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,-0.05826938);
   quadLineFit1044->SetParError(0,0.06396574);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,71.0186);
   quadLineFit1044->SetParError(1,1.058961);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(6);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(1.584005);
   quadLineFit1045->SetNDF(2);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,-0.05826938);
   quadLineFit1045->SetParError(0,0.06396574);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,71.0186);
   quadLineFit1045->SetParError(1,1.058961);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","App. #LTB_{r}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
