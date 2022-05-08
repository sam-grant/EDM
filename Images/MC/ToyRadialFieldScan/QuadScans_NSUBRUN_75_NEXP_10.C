void QuadScans_NSUBRUN_75_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.302025,0.0663141,7.485699);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1033[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1033[3] = {
   -3.218602,
   -2.830285,
   -2.592034};
   Double_t -50.000000 ppm_fex1033[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1033[3] = {
   0.01707517,
   0.01707517,
   0.01707517};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1033,-50.000000 ppm_fy1033,-50.000000 ppm_fex1033,-50.000000 ppm_fey1033);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1033 = new TH1F("Graph_mI50dO000000sPppm1033","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1033->SetMinimum(-4.023253);
   Graph_mI50dO000000sPppm1033->SetMaximum(6.206926);
   Graph_mI50dO000000sPppm1033->SetDirectory(0);
   Graph_mI50dO000000sPppm1033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1033->SetLineColor(ci);
   Graph_mI50dO000000sPppm1033->GetXaxis()->SetTitle("1/V [kV^{-1}]");
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
   
   
   TF1 *quadLineFit1034 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1034->SetFillColor(19);
   quadLineFit1034->SetFillStyle(0);
   quadLineFit1034->SetLineWidth(2);
   quadLineFit1034->SetChisquare(0.0004372832);
   quadLineFit1034->SetNDF(1);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,0.2727732);
   quadLineFit1034->SetParError(0,0.1207777);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,-55.86025);
   quadLineFit1034->SetParError(1,2.132569);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("ap");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",0.05016026,0.06362179, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(0.0004372832);
   quadLineFit1035->SetNDF(1);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,0.2727732);
   quadLineFit1035->SetParError(0,0.1207777);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,-55.86025);
   quadLineFit1035->SetParError(1,2.132569);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t -30.000000 ppm_fx1035[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1035[4] = {
   -1.882175,
   -1.64919,
   -1.465948,
   -1.365635};
   Double_t -30.000000 ppm_fex1035[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1035[4] = {
   0.01707517,
   0.01707517,
   0.01707517,
   0.01707517};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1035,-30.000000 ppm_fy1035,-30.000000 ppm_fex1035,-30.000000 ppm_fey1035);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1035 = new TH1F("Graph_mI30dO000000sPppm1035","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1035->SetMinimum(-1.954319);
   Graph_mI30dO000000sPppm1035->SetMaximum(-1.293491);
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
   
   
   TF1 *quadLineFit1036 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1036->SetFillColor(19);
   quadLineFit1036->SetFillStyle(0);
   quadLineFit1036->SetLineColor(2);
   quadLineFit1036->SetLineWidth(2);
   quadLineFit1036->SetChisquare(0.1817762);
   quadLineFit1036->SetNDF(2);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,-0.03879519);
   quadLineFit1036->SetParError(0,0.06794654);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,-25.78338);
   quadLineFit1036->SetParError(1,1.119892);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(2);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(0.1817762);
   quadLineFit1037->SetNDF(2);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,-0.03879519);
   quadLineFit1037->SetParError(0,0.06794654);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,-25.78338);
   quadLineFit1037->SetParError(1,1.119892);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
   Double_t -10.000000 ppm_fx1037[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1037[4] = {
   -0.1705822,
   -0.1834912,
   -0.1324116,
   -0.1140317};
   Double_t -10.000000 ppm_fex1037[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1037[4] = {
   0.01707517,
   0.01707517,
   0.01707517,
   0.01707517};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1037,-10.000000 ppm_fy1037,-10.000000 ppm_fex1037,-10.000000 ppm_fey1037);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1037 = new TH1F("Graph_mI10dO000000sPppm1037","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1037->SetMinimum(-0.2109273);
   Graph_mI10dO000000sPppm1037->SetMaximum(-0.0865955);
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
   
   
   TF1 *quadLineFit1038 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1038->SetFillColor(19);
   quadLineFit1038->SetFillStyle(0);
   quadLineFit1038->SetLineColor(3);
   quadLineFit1038->SetLineWidth(2);
   quadLineFit1038->SetChisquare(3.348231);
   quadLineFit1038->SetNDF(2);
   quadLineFit1038->GetXaxis()->SetLabelFont(42);
   quadLineFit1038->GetXaxis()->SetTitleOffset(1);
   quadLineFit1038->GetXaxis()->SetTitleFont(42);
   quadLineFit1038->GetYaxis()->SetLabelFont(42);
   quadLineFit1038->GetYaxis()->SetTitleFont(42);
   quadLineFit1038->SetParameter(0,0.03385842);
   quadLineFit1038->SetParError(0,0.06794806);
   quadLineFit1038->SetParLimits(0,0,0);
   quadLineFit1038->SetParameter(1,-3.056701);
   quadLineFit1038->SetParError(1,1.119917);
   quadLineFit1038->SetParLimits(1,0,0);
   quadLineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1038);
   gre->Draw("p ");
   
   TF1 *quadLineFit1039 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1039->SetFillColor(19);
   quadLineFit1039->SetFillStyle(0);
   quadLineFit1039->SetLineColor(3);
   quadLineFit1039->SetLineWidth(2);
   quadLineFit1039->SetChisquare(3.348231);
   quadLineFit1039->SetNDF(2);
   quadLineFit1039->GetXaxis()->SetLabelFont(42);
   quadLineFit1039->GetXaxis()->SetTitleOffset(1);
   quadLineFit1039->GetXaxis()->SetTitleFont(42);
   quadLineFit1039->GetYaxis()->SetLabelFont(42);
   quadLineFit1039->GetYaxis()->SetTitleFont(42);
   quadLineFit1039->SetParameter(0,0.03385842);
   quadLineFit1039->SetParError(0,0.06794806);
   quadLineFit1039->SetParLimits(0,0,0);
   quadLineFit1039->SetParameter(1,-3.056701);
   quadLineFit1039->SetParError(1,1.119917);
   quadLineFit1039->SetParLimits(1,0,0);
   quadLineFit1039->Draw("same");
   
   Double_t 10.000000 ppm_fx1039[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1039[3] = {
   1.563752,
   1.344933,
   1.127791};
   Double_t 10.000000 ppm_fex1039[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1039[3] = {
   0.01707517,
   0.01707517,
   0.01707517};
   gre = new TGraphErrors(3,10.000000 ppm_fx1039,10.000000 ppm_fy1039,10.000000 ppm_fex1039,10.000000 ppm_fey1039);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1039 = new TH1F("Graph_10dO000000sPppm1039","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1039->SetMinimum(1.063705);
   Graph_10dO000000sPppm1039->SetMaximum(1.627838);
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
   
   
   TF1 *quadLineFit1040 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1040->SetFillColor(19);
   quadLineFit1040->SetFillStyle(0);
   quadLineFit1040->SetLineColor(4);
   quadLineFit1040->SetLineWidth(2);
   quadLineFit1040->SetChisquare(1.493174);
   quadLineFit1040->SetNDF(1);
   quadLineFit1040->GetXaxis()->SetLabelFont(42);
   quadLineFit1040->GetXaxis()->SetTitleOffset(1);
   quadLineFit1040->GetXaxis()->SetTitleFont(42);
   quadLineFit1040->GetYaxis()->SetLabelFont(42);
   quadLineFit1040->GetYaxis()->SetTitleFont(42);
   quadLineFit1040->SetParameter(0,0.015456);
   quadLineFit1040->SetParError(0,0.07449473);
   quadLineFit1040->SetParLimits(0,0,0);
   quadLineFit1040->SetParameter(1,21.54362);
   quadLineFit1040->SetParError(1,1.196036);
   quadLineFit1040->SetParLimits(1,0,0);
   quadLineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1040);
   gre->Draw("p ");
   
   TF1 *quadLineFit1041 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1041->SetFillColor(19);
   quadLineFit1041->SetFillStyle(0);
   quadLineFit1041->SetLineColor(4);
   quadLineFit1041->SetLineWidth(2);
   quadLineFit1041->SetChisquare(1.493174);
   quadLineFit1041->SetNDF(1);
   quadLineFit1041->GetXaxis()->SetLabelFont(42);
   quadLineFit1041->GetXaxis()->SetTitleOffset(1);
   quadLineFit1041->GetXaxis()->SetTitleFont(42);
   quadLineFit1041->GetYaxis()->SetLabelFont(42);
   quadLineFit1041->GetYaxis()->SetTitleFont(42);
   quadLineFit1041->SetParameter(0,0.015456);
   quadLineFit1041->SetParError(0,0.07449473);
   quadLineFit1041->SetParLimits(0,0,0);
   quadLineFit1041->SetParameter(1,21.54362);
   quadLineFit1041->SetParError(1,1.196036);
   quadLineFit1041->SetParLimits(1,0,0);
   quadLineFit1041->Draw("same");
   
   Double_t 30.000000 ppm_fx1041[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1041[4] = {
   3.310188,
   2.874998,
   2.527994,
   2.330621};
   Double_t 30.000000 ppm_fex1041[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1041[4] = {
   0.01707517,
   0.01707517,
   0.01707517,
   0.01707517};
   gre = new TGraphErrors(4,30.000000 ppm_fx1041,30.000000 ppm_fy1041,30.000000 ppm_fex1041,30.000000 ppm_fey1041);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1041 = new TH1F("Graph_30dO000000sPppm1041","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1041->SetMinimum(2.212174);
   Graph_30dO000000sPppm1041->SetMaximum(3.428635);
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
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1042->SetLineColor(ci);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(0.2318834);
   quadLineFit1042->SetNDF(2);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,-0.1775576);
   quadLineFit1042->SetParError(0,0.06793587);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,48.81928);
   quadLineFit1042->SetParError(1,1.119716);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("p ");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1043->SetLineColor(ci);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(0.2318834);
   quadLineFit1043->SetNDF(2);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,-0.1775576);
   quadLineFit1043->SetParError(0,0.06793587);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,48.81928);
   quadLineFit1043->SetParError(1,1.119716);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 50.000000 ppm_fx1043[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1043[4] = {
   4.965541,
   4.362495,
   3.903556,
   3.576224};
   Double_t 50.000000 ppm_fex1043[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1043[4] = {
   0.01707517,
   0.01707517,
   0.01707517,
   0.01707517};
   gre = new TGraphErrors(4,50.000000 ppm_fx1043,50.000000 ppm_fy1043,50.000000 ppm_fex1043,50.000000 ppm_fey1043);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1043 = new TH1F("Graph_50dO000000sPppm1043","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1043->SetMinimum(3.416803);
   Graph_50dO000000sPppm1043->SetMaximum(5.124963);
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
   
   
   TF1 *quadLineFit1044 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1044->SetFillColor(19);
   quadLineFit1044->SetFillStyle(0);
   quadLineFit1044->SetLineColor(6);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(2.222868);
   quadLineFit1044->SetNDF(2);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,0.08269687);
   quadLineFit1044->SetParError(0,0.06794994);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,68.43581);
   quadLineFit1044->SetParError(1,1.119949);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",0.0492674,0.07344322, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(6);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(2.222868);
   quadLineFit1045->SetNDF(2);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,0.08269687);
   quadLineFit1045->SetParError(0,0.06794994);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,68.43581);
   quadLineFit1045->SetParError(1,1.119949);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
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
