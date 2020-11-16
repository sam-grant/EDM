void QuadScans_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 12 08:03:53 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.37143,-3.25,22.65714,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1037[4] = {
   14,
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1037[4] = {
   -3.620057,
   -3.171051,
   -2.808707,
   -2.547016};
   Double_t -50.000000 ppm_fex1037[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1037[4] = {
   0.01477369,
   0.01477369,
   0.01477369,
   0.01477369};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1037,-50.000000 ppm_fy1037,-50.000000 ppm_fex1037,-50.000000 ppm_fey1037);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1037 = new TH1F("Graph_mI50dO000000sPppm1037","",100,13.4,20.6);
   Graph_mI50dO000000sPppm1037->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1037->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1037->SetDirectory(0);
   Graph_mI50dO000000sPppm1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1037->SetLineColor(ci);
   Graph_mI50dO000000sPppm1037->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1037->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1037->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1037->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1037->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1037->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1037->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1037->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1037->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1037->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1037->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1037->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1037->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1037->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1037->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1037);
   
   
   TF1 *quadLineFit1038 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1038->SetFillColor(19);
   quadLineFit1038->SetFillStyle(0);
   quadLineFit1038->SetLineWidth(2);
   quadLineFit1038->SetChisquare(40.23405);
   quadLineFit1038->SetNDF(2);
   quadLineFit1038->GetXaxis()->SetLabelFont(42);
   quadLineFit1038->GetXaxis()->SetTitleOffset(1);
   quadLineFit1038->GetXaxis()->SetTitleFont(42);
   quadLineFit1038->GetYaxis()->SetLabelFont(42);
   quadLineFit1038->GetYaxis()->SetTitleFont(42);
   quadLineFit1038->SetParameter(0,-6.080955);
   quadLineFit1038->SetParError(0,0.05663286);
   quadLineFit1038->SetParLimits(0,0,0);
   quadLineFit1038->SetParameter(1,0.1790734);
   quadLineFit1038->SetParError(1,0.003302885);
   quadLineFit1038->SetParLimits(1,0,0);
   quadLineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1038);
   gre->Draw("ap");
   
   TF1 *quadLineFit1039 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1039->SetFillColor(19);
   quadLineFit1039->SetFillStyle(0);
   quadLineFit1039->SetLineWidth(2);
   quadLineFit1039->SetChisquare(40.23405);
   quadLineFit1039->SetNDF(2);
   quadLineFit1039->GetXaxis()->SetLabelFont(42);
   quadLineFit1039->GetXaxis()->SetTitleOffset(1);
   quadLineFit1039->GetXaxis()->SetTitleFont(42);
   quadLineFit1039->GetYaxis()->SetLabelFont(42);
   quadLineFit1039->GetYaxis()->SetTitleFont(42);
   quadLineFit1039->SetParameter(0,-6.080955);
   quadLineFit1039->SetParError(0,0.05663286);
   quadLineFit1039->SetParLimits(0,0,0);
   quadLineFit1039->SetParameter(1,0.1790734);
   quadLineFit1039->SetParError(1,0.003302885);
   quadLineFit1039->SetParLimits(1,0,0);
   quadLineFit1039->Draw("same");
   
   Double_t -30.000000 ppm_fx1039[4] = {
   14,
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1039[4] = {
   -1.876163,
   -1.67255,
   -1.491147,
   -1.314916};
   Double_t -30.000000 ppm_fex1039[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1039[4] = {
   0.01477369,
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1039,-30.000000 ppm_fy1039,-30.000000 ppm_fex1039,-30.000000 ppm_fey1039);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1039 = new TH1F("Graph_mI30dO000000sPppm1039","Graph",100,13.4,20.6);
   Graph_mI30dO000000sPppm1039->SetMinimum(-1.950016);
   Graph_mI30dO000000sPppm1039->SetMaximum(-1.241063);
   Graph_mI30dO000000sPppm1039->SetDirectory(0);
   Graph_mI30dO000000sPppm1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1039->SetLineColor(ci);
   Graph_mI30dO000000sPppm1039->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1039->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1039->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1039->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1039->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1039->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1039->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1039);
   
   
   TF1 *quadLineFit1040 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1040->SetFillColor(19);
   quadLineFit1040->SetFillStyle(0);
   quadLineFit1040->SetLineColor(2);
   quadLineFit1040->SetLineWidth(2);
   quadLineFit1040->SetChisquare(0.925315);
   quadLineFit1040->SetNDF(2);
   quadLineFit1040->GetXaxis()->SetLabelFont(42);
   quadLineFit1040->GetXaxis()->SetTitleOffset(1);
   quadLineFit1040->GetXaxis()->SetTitleFont(42);
   quadLineFit1040->GetYaxis()->SetLabelFont(42);
   quadLineFit1040->GetYaxis()->SetTitleFont(42);
   quadLineFit1040->SetParameter(0,-3.174065);
   quadLineFit1040->SetParError(0,0.05664229);
   quadLineFit1040->SetParLimits(0,0,0);
   quadLineFit1040->SetParameter(1,0.09325714);
   quadLineFit1040->SetParError(1,0.003303444);
   quadLineFit1040->SetParLimits(1,0,0);
   quadLineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1040);
   gre->Draw("p ");
   
   TF1 *quadLineFit1041 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1041->SetFillColor(19);
   quadLineFit1041->SetFillStyle(0);
   quadLineFit1041->SetLineColor(2);
   quadLineFit1041->SetLineWidth(2);
   quadLineFit1041->SetChisquare(0.925315);
   quadLineFit1041->SetNDF(2);
   quadLineFit1041->GetXaxis()->SetLabelFont(42);
   quadLineFit1041->GetXaxis()->SetTitleOffset(1);
   quadLineFit1041->GetXaxis()->SetTitleFont(42);
   quadLineFit1041->GetYaxis()->SetLabelFont(42);
   quadLineFit1041->GetYaxis()->SetTitleFont(42);
   quadLineFit1041->SetParameter(0,-3.174065);
   quadLineFit1041->SetParError(0,0.05664229);
   quadLineFit1041->SetParLimits(0,0,0);
   quadLineFit1041->SetParameter(1,0.09325714);
   quadLineFit1041->SetParError(1,0.003303444);
   quadLineFit1041->SetParLimits(1,0,0);
   quadLineFit1041->Draw("same");
   
   Double_t -10.000000 ppm_fx1041[4] = {
   14,
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1041[4] = {
   -0.169901,
   -0.1495645,
   -0.1240924,
   -0.1156821};
   Double_t -10.000000 ppm_fex1041[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1041[4] = {
   0.01477369,
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1041,-10.000000 ppm_fy1041,-10.000000 ppm_fex1041,-10.000000 ppm_fey1041);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1041 = new TH1F("Graph_mI10dO000000sPppm1041","Graph",100,13.4,20.6);
   Graph_mI10dO000000sPppm1041->SetMinimum(-0.1930513);
   Graph_mI10dO000000sPppm1041->SetMaximum(-0.09253178);
   Graph_mI10dO000000sPppm1041->SetDirectory(0);
   Graph_mI10dO000000sPppm1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1041->SetLineColor(ci);
   Graph_mI10dO000000sPppm1041->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1041->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1041->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1041->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1041->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1041->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1041->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1041);
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);
   quadLineFit1042->SetLineColor(3);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(0.2757907);
   quadLineFit1042->SetNDF(2);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,-0.2997194);
   quadLineFit1042->SetParError(0,0.05664319);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,0.009406436);
   quadLineFit1042->SetParError(1,0.003303498);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("p ");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineColor(3);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(0.2757907);
   quadLineFit1043->SetNDF(2);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,-0.2997194);
   quadLineFit1043->SetParError(0,0.05664319);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,0.009406436);
   quadLineFit1043->SetParError(1,0.003303498);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 10.000000 ppm_fx1043[4] = {
   14,
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1043[4] = {
   1.567955,
   1.350559,
   1.207056,
   1.096626};
   Double_t 10.000000 ppm_fex1043[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1043[4] = {
   0.01477369,
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(4,10.000000 ppm_fx1043,10.000000 ppm_fy1043,10.000000 ppm_fex1043,10.000000 ppm_fey1043);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_10dO000000sPppm1043 = new TH1F("Graph_10dO000000sPppm1043","Graph",100,13.4,20.6);
   Graph_10dO000000sPppm1043->SetMinimum(1.031764);
   Graph_10dO000000sPppm1043->SetMaximum(1.632817);
   Graph_10dO000000sPppm1043->SetDirectory(0);
   Graph_10dO000000sPppm1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1043->SetLineColor(ci);
   Graph_10dO000000sPppm1043->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1043->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1043->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1043->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1043->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1043->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1043->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1043);
   
   
   TF1 *quadLineFit1044 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1044->SetFillColor(19);
   quadLineFit1044->SetFillStyle(0);
   quadLineFit1044->SetLineColor(4);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(13.48731);
   quadLineFit1044->SetNDF(2);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,2.629418);
   quadLineFit1044->SetParError(0,0.0566434);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,-0.07787462);
   quadLineFit1044->SetParError(1,0.00330351);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(4);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(13.48731);
   quadLineFit1045->SetNDF(2);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,2.629418);
   quadLineFit1045->SetParError(0,0.0566434);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,-0.07787462);
   quadLineFit1045->SetParError(1,0.00330351);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
   Double_t 30.000000 ppm_fx1045[4] = {
   14,
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1045[4] = {
   3.280049,
   2.851236,
   2.536035,
   2.289959};
   Double_t 30.000000 ppm_fex1045[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1045[4] = {
   0.01477369,
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(4,30.000000 ppm_fx1045,30.000000 ppm_fy1045,30.000000 ppm_fex1045,30.000000 ppm_fey1045);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   
   TH1F *Graph_30dO000000sPppm1045 = new TH1F("Graph_30dO000000sPppm1045","Graph",100,13.4,20.6);
   Graph_30dO000000sPppm1045->SetMinimum(2.173222);
   Graph_30dO000000sPppm1045->SetMaximum(3.396787);
   Graph_30dO000000sPppm1045->SetDirectory(0);
   Graph_30dO000000sPppm1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1045->SetLineColor(ci);
   Graph_30dO000000sPppm1045->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1045->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1045->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1045->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1045->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1045->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1045->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1045);
   
   
   TF1 *quadLineFit1046 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1046->SetFillColor(19);
   quadLineFit1046->SetFillStyle(0);
   quadLineFit1046->SetLineColor(5);
   quadLineFit1046->SetLineWidth(2);
   quadLineFit1046->SetChisquare(38.70233);
   quadLineFit1046->SetNDF(2);
   quadLineFit1046->GetXaxis()->SetLabelFont(42);
   quadLineFit1046->GetXaxis()->SetTitleOffset(1);
   quadLineFit1046->GetXaxis()->SetTitleFont(42);
   quadLineFit1046->GetYaxis()->SetLabelFont(42);
   quadLineFit1046->GetYaxis()->SetTitleFont(42);
   quadLineFit1046->SetParameter(0,5.531971);
   quadLineFit1046->SetParError(0,0.056644);
   quadLineFit1046->SetParLimits(0,0,0);
   quadLineFit1046->SetParameter(1,-0.1642736);
   quadLineFit1046->SetParError(1,0.003303546);
   quadLineFit1046->SetParLimits(1,0,0);
   quadLineFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1046);
   gre->Draw("p ");
   
   TF1 *quadLineFit1047 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1047->SetFillColor(19);
   quadLineFit1047->SetFillStyle(0);
   quadLineFit1047->SetLineColor(5);
   quadLineFit1047->SetLineWidth(2);
   quadLineFit1047->SetChisquare(38.70233);
   quadLineFit1047->SetNDF(2);
   quadLineFit1047->GetXaxis()->SetLabelFont(42);
   quadLineFit1047->GetXaxis()->SetTitleOffset(1);
   quadLineFit1047->GetXaxis()->SetTitleFont(42);
   quadLineFit1047->GetYaxis()->SetLabelFont(42);
   quadLineFit1047->GetYaxis()->SetTitleFont(42);
   quadLineFit1047->SetParameter(0,5.531971);
   quadLineFit1047->SetParError(0,0.056644);
   quadLineFit1047->SetParLimits(0,0,0);
   quadLineFit1047->SetParameter(1,-0.1642736);
   quadLineFit1047->SetParError(1,0.003303546);
   quadLineFit1047->SetParLimits(1,0,0);
   quadLineFit1047->Draw("same");
   
   Double_t 50.000000 ppm_fx1047[4] = {
   14,
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1047[4] = {
   4.990489,
   4.379163,
   3.852067,
   3.528672};
   Double_t 50.000000 ppm_fex1047[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1047[4] = {
   0.01477369,
   0.01477369,
   0.01477369,
   0.01477369};
   gre = new TGraphErrors(4,50.000000 ppm_fx1047,50.000000 ppm_fy1047,50.000000 ppm_fex1047,50.000000 ppm_fey1047);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   
   TH1F *Graph_50dO000000sPppm1047 = new TH1F("Graph_50dO000000sPppm1047","Graph",100,13.4,20.6);
   Graph_50dO000000sPppm1047->SetMinimum(3.364761);
   Graph_50dO000000sPppm1047->SetMaximum(5.154399);
   Graph_50dO000000sPppm1047->SetDirectory(0);
   Graph_50dO000000sPppm1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1047->SetLineColor(ci);
   Graph_50dO000000sPppm1047->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1047->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1047->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1047->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1047->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1047->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1047->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1047);
   
   
   TF1 *quadLineFit1048 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1048->SetFillColor(19);
   quadLineFit1048->SetFillStyle(0);
   quadLineFit1048->SetLineColor(6);
   quadLineFit1048->SetLineWidth(2);
   quadLineFit1048->SetChisquare(98.22938);
   quadLineFit1048->SetNDF(2);
   quadLineFit1048->GetXaxis()->SetLabelFont(42);
   quadLineFit1048->GetXaxis()->SetTitleOffset(1);
   quadLineFit1048->GetXaxis()->SetTitleFont(42);
   quadLineFit1048->GetYaxis()->SetLabelFont(42);
   quadLineFit1048->GetYaxis()->SetTitleFont(42);
   quadLineFit1048->SetParameter(0,8.363263);
   quadLineFit1048->SetParError(0,0.05664374);
   quadLineFit1048->SetParLimits(0,0,0);
   quadLineFit1048->SetParameter(1,-0.2456274);
   quadLineFit1048->SetParError(1,0.003303531);
   quadLineFit1048->SetParLimits(1,0,0);
   quadLineFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1048);
   gre->Draw("p ");
   
   TF1 *quadLineFit1049 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1049->SetFillColor(19);
   quadLineFit1049->SetFillStyle(0);
   quadLineFit1049->SetLineColor(6);
   quadLineFit1049->SetLineWidth(2);
   quadLineFit1049->SetChisquare(98.22938);
   quadLineFit1049->SetNDF(2);
   quadLineFit1049->GetXaxis()->SetLabelFont(42);
   quadLineFit1049->GetXaxis()->SetTitleOffset(1);
   quadLineFit1049->GetXaxis()->SetTitleFont(42);
   quadLineFit1049->GetYaxis()->SetLabelFont(42);
   quadLineFit1049->GetYaxis()->SetTitleFont(42);
   quadLineFit1049->SetParameter(0,8.363263);
   quadLineFit1049->SetParError(0,0.05664374);
   quadLineFit1049->SetParLimits(0,0,0);
   quadLineFit1049->SetParameter(1,-0.2456274);
   quadLineFit1049->SetParError(1,0.003303531);
   quadLineFit1049->SetParLimits(1,0,0);
   quadLineFit1049->Draw("same");
   
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
