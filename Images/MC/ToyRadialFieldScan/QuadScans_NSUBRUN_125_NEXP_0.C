void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 09:35:37 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.125,21.77143,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1041[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1041[2] = {
   -2.387382,
   -1.907743};
   Double_t -30.000000 ppm_fex1041[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1041[2] = {
   0.01320349,
   0.01320349};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1041,-30.000000 ppm_fy1041,-30.000000 ppm_fex1041,-30.000000 ppm_fey1041);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1041 = new TH1F("Graph_mI30dO000000sPppm1041","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1041->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1041->SetMaximum(2.5);
   Graph_mI30dO000000sPppm1041->SetDirectory(0);
   Graph_mI30dO000000sPppm1041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1041->SetLineColor(ci);
   Graph_mI30dO000000sPppm1041->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1041->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1041->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1041->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1041->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1041->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1041->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1041->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1041->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1041->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1041->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1041->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1041->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1041->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1041->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1041);
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(9.622388e-20);
   quadLineFit1042->SetNDF(0);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,-4.305939);
   quadLineFit1042->SetParError(0,0.08454357);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,0.1199098);
   quadLineFit1042->SetParError(1,0.004668138);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("ap");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(9.622388e-20);
   quadLineFit1043->SetNDF(0);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,-4.305939);
   quadLineFit1043->SetParError(0,0.08454357);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,0.1199098);
   quadLineFit1043->SetParError(1,0.004668138);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t -10.000000 ppm_fx1043[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1043[2] = {
   -1.131335,
   -0.8931123};
   Double_t -10.000000 ppm_fex1043[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1043[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1043,-10.000000 ppm_fy1043,-10.000000 ppm_fex1043,-10.000000 ppm_fey1043);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1043 = new TH1F("Graph_mI10dO000000sPppm1043","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1043->SetMinimum(-1.171001);
   Graph_mI10dO000000sPppm1043->SetMaximum(-0.8534459);
   Graph_mI10dO000000sPppm1043->SetDirectory(0);
   Graph_mI10dO000000sPppm1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1043->SetLineColor(ci);
   Graph_mI10dO000000sPppm1043->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1043->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1043->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1043->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1043->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1043->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1043->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1043);
   
   
   TF1 *quadLineFit1044 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1044->SetFillColor(19);
   quadLineFit1044->SetFillStyle(0);
   quadLineFit1044->SetLineColor(2);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(5.926031e-20);
   quadLineFit1044->SetNDF(0);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,-2.084225);
   quadLineFit1044->SetParError(0,0.08454357);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,0.05955563);
   quadLineFit1044->SetParError(1,0.004668138);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(2);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(5.926031e-20);
   quadLineFit1045->SetNDF(0);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,-2.084225);
   quadLineFit1045->SetParError(0,0.08454357);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,0.05955563);
   quadLineFit1045->SetParError(1,0.004668138);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
   Double_t 10.000000 ppm_fx1045[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1045[2] = {
   0.141394,
   0.07901882};
   Double_t 10.000000 ppm_fex1045[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1045[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,10.000000 ppm_fx1045,10.000000 ppm_fy1045,10.000000 ppm_fex1045,10.000000 ppm_fey1045);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1045 = new TH1F("Graph_10dO000000sPppm1045","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1045->SetMinimum(0.05693712);
   Graph_10dO000000sPppm1045->SetMaximum(0.1634757);
   Graph_10dO000000sPppm1045->SetDirectory(0);
   Graph_10dO000000sPppm1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1045->SetLineColor(ci);
   Graph_10dO000000sPppm1045->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1045->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1045->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1045->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1045->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1045->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1045->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1045);
   
   
   TF1 *quadLineFit1046 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1046->SetFillColor(19);
   quadLineFit1046->SetFillStyle(0);
   quadLineFit1046->SetLineColor(3);
   quadLineFit1046->SetLineWidth(2);
   quadLineFit1046->SetChisquare(1.223442e-21);
   quadLineFit1046->SetNDF(0);
   quadLineFit1046->GetXaxis()->SetLabelFont(42);
   quadLineFit1046->GetXaxis()->SetTitleOffset(1);
   quadLineFit1046->GetXaxis()->SetTitleFont(42);
   quadLineFit1046->GetYaxis()->SetLabelFont(42);
   quadLineFit1046->GetYaxis()->SetTitleFont(42);
   quadLineFit1046->SetParameter(0,0.3908949);
   quadLineFit1046->SetParError(0,0.08454357);
   quadLineFit1046->SetParLimits(0,0,0);
   quadLineFit1046->SetParameter(1,-0.0155938);
   quadLineFit1046->SetParError(1,0.004668138);
   quadLineFit1046->SetParLimits(1,0,0);
   quadLineFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1046);
   gre->Draw("p ");
   
   TF1 *quadLineFit1047 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1047->SetFillColor(19);
   quadLineFit1047->SetFillStyle(0);
   quadLineFit1047->SetLineColor(3);
   quadLineFit1047->SetLineWidth(2);
   quadLineFit1047->SetChisquare(1.223442e-21);
   quadLineFit1047->SetNDF(0);
   quadLineFit1047->GetXaxis()->SetLabelFont(42);
   quadLineFit1047->GetXaxis()->SetTitleOffset(1);
   quadLineFit1047->GetXaxis()->SetTitleFont(42);
   quadLineFit1047->GetYaxis()->SetLabelFont(42);
   quadLineFit1047->GetYaxis()->SetTitleFont(42);
   quadLineFit1047->SetParameter(0,0.3908949);
   quadLineFit1047->SetParError(0,0.08454357);
   quadLineFit1047->SetParLimits(0,0,0);
   quadLineFit1047->SetParameter(1,-0.0155938);
   quadLineFit1047->SetParError(1,0.004668138);
   quadLineFit1047->SetParLimits(1,0,0);
   quadLineFit1047->Draw("same");
   
   Double_t 30.000000 ppm_fx1047[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1047[2] = {
   1.375633,
   1.123799};
   Double_t 30.000000 ppm_fex1047[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1047[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,30.000000 ppm_fx1047,30.000000 ppm_fy1047,30.000000 ppm_fex1047,30.000000 ppm_fey1047);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1047 = new TH1F("Graph_30dO000000sPppm1047","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1047->SetMinimum(1.082772);
   Graph_30dO000000sPppm1047->SetMaximum(1.416661);
   Graph_30dO000000sPppm1047->SetDirectory(0);
   Graph_30dO000000sPppm1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1047->SetLineColor(ci);
   Graph_30dO000000sPppm1047->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1047->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1047->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1047->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1047->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1047->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1047->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1047);
   
   
   TF1 *quadLineFit1048 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1048->SetFillColor(19);
   quadLineFit1048->SetFillStyle(0);
   quadLineFit1048->SetLineColor(4);
   quadLineFit1048->SetLineWidth(2);
   quadLineFit1048->SetChisquare(1.046617e-18);
   quadLineFit1048->SetNDF(0);
   quadLineFit1048->GetXaxis()->SetLabelFont(42);
   quadLineFit1048->GetXaxis()->SetTitleOffset(1);
   quadLineFit1048->GetXaxis()->SetTitleFont(42);
   quadLineFit1048->GetYaxis()->SetLabelFont(42);
   quadLineFit1048->GetYaxis()->SetTitleFont(42);
   quadLineFit1048->SetParameter(0,2.38297);
   quadLineFit1048->SetParError(0,0.08454357);
   quadLineFit1048->SetParLimits(0,0,0);
   quadLineFit1048->SetParameter(1,-0.06295852);
   quadLineFit1048->SetParError(1,0.004668138);
   quadLineFit1048->SetParLimits(1,0,0);
   quadLineFit1048->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1048);
   gre->Draw("p ");
   
   TF1 *quadLineFit1049 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1049->SetFillColor(19);
   quadLineFit1049->SetFillStyle(0);
   quadLineFit1049->SetLineColor(4);
   quadLineFit1049->SetLineWidth(2);
   quadLineFit1049->SetChisquare(1.046617e-18);
   quadLineFit1049->SetNDF(0);
   quadLineFit1049->GetXaxis()->SetLabelFont(42);
   quadLineFit1049->GetXaxis()->SetTitleOffset(1);
   quadLineFit1049->GetXaxis()->SetTitleFont(42);
   quadLineFit1049->GetYaxis()->SetLabelFont(42);
   quadLineFit1049->GetYaxis()->SetTitleFont(42);
   quadLineFit1049->SetParameter(0,2.38297);
   quadLineFit1049->SetParError(0,0.08454357);
   quadLineFit1049->SetParLimits(0,0,0);
   quadLineFit1049->SetParameter(1,-0.06295852);
   quadLineFit1049->SetParError(1,0.004668138);
   quadLineFit1049->SetParLimits(1,0,0);
   quadLineFit1049->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
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
