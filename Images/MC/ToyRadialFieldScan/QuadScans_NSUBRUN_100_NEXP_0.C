void QuadScans_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:07:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1037[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -30.000000 ppm_fy1037[3] = {
   -1.878671,
   -1.654303,
   -1.483033};
   Double_t -30.000000 ppm_fex1037[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1037[3] = {
   0.01485046,
   0.01485046,
   0.01485046};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1037,-30.000000 ppm_fy1037,-30.000000 ppm_fex1037,-30.000000 ppm_fey1037);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1037 = new TH1F("Graph_mI30dO000000sPppm1037","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1037->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1037->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1037->SetDirectory(0);
   Graph_mI30dO000000sPppm1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1037->SetLineColor(ci);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30dO000000sPppm1037->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1037->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1037->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1037->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1037->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1037->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1037);
   
   
   TF1 *quadLineFit1038 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1038->SetFillColor(19);
   quadLineFit1038->SetFillStyle(0);
   quadLineFit1038->SetLineWidth(2);
   quadLineFit1038->SetChisquare(0.00997936);
   quadLineFit1038->SetNDF(1);
   quadLineFit1038->GetXaxis()->SetLabelFont(42);
   quadLineFit1038->GetXaxis()->SetTitleOffset(1);
   quadLineFit1038->GetXaxis()->SetTitleFont(42);
   quadLineFit1038->GetYaxis()->SetLabelFont(42);
   quadLineFit1038->GetYaxis()->SetTitleFont(42);
   quadLineFit1038->SetParameter(0,-0.09709242);
   quadLineFit1038->SetParError(0,0.08379239);
   quadLineFit1038->SetParLimits(0,0,0);
   quadLineFit1038->SetParameter(1,-24.9347);
   quadLineFit1038->SetParError(1,1.319677);
   quadLineFit1038->SetParLimits(1,0,0);
   quadLineFit1038->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1038);
   gre->Draw("ap");
   
   TF1 *quadLineFit1039 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1039->SetFillColor(19);
   quadLineFit1039->SetFillStyle(0);
   quadLineFit1039->SetLineWidth(2);
   quadLineFit1039->SetChisquare(0.00997936);
   quadLineFit1039->SetNDF(1);
   quadLineFit1039->GetXaxis()->SetLabelFont(42);
   quadLineFit1039->GetXaxis()->SetTitleOffset(1);
   quadLineFit1039->GetXaxis()->SetTitleFont(42);
   quadLineFit1039->GetYaxis()->SetLabelFont(42);
   quadLineFit1039->GetYaxis()->SetTitleFont(42);
   quadLineFit1039->SetParameter(0,-0.09709242);
   quadLineFit1039->SetParError(0,0.08379239);
   quadLineFit1039->SetParLimits(0,0,0);
   quadLineFit1039->SetParameter(1,-24.9347);
   quadLineFit1039->SetParError(1,1.319677);
   quadLineFit1039->SetParLimits(1,0,0);
   quadLineFit1039->Draw("same");
   
   Double_t -10.000000 ppm_fx1039[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -10.000000 ppm_fy1039[3] = {
   -0.1876885,
   -0.1783075,
   -0.1269135};
   Double_t -10.000000 ppm_fex1039[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1039[3] = {
   0.01485046,
   0.01485046,
   0.01485046};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1039,-10.000000 ppm_fy1039,-10.000000 ppm_fex1039,-10.000000 ppm_fey1039);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1039 = new TH1F("Graph_mI10dO000000sPppm1039","Graph",100,0.05396825,0.07301587);
   Graph_mI10dO000000sPppm1039->SetMinimum(-0.2115866);
   Graph_mI10dO000000sPppm1039->SetMaximum(-0.1030154);
   Graph_mI10dO000000sPppm1039->SetDirectory(0);
   Graph_mI10dO000000sPppm1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1039->SetLineColor(ci);
   Graph_mI10dO000000sPppm1039->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1039->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1039->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1039->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1039->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1039->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1039->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1039);
   
   
   TF1 *quadLineFit1040 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1040->SetFillColor(19);
   quadLineFit1040->SetFillStyle(0);
   quadLineFit1040->SetLineColor(2);
   quadLineFit1040->SetLineWidth(2);
   quadLineFit1040->SetChisquare(1.850336);
   quadLineFit1040->SetNDF(1);
   quadLineFit1040->GetXaxis()->SetLabelFont(42);
   quadLineFit1040->GetXaxis()->SetTitleOffset(1);
   quadLineFit1040->GetXaxis()->SetTitleFont(42);
   quadLineFit1040->GetYaxis()->SetLabelFont(42);
   quadLineFit1040->GetYaxis()->SetTitleFont(42);
   quadLineFit1040->SetParameter(0,0.06934817);
   quadLineFit1040->SetParError(0,0.08379324);
   quadLineFit1040->SetParLimits(0,0,0);
   quadLineFit1040->SetParameter(1,-3.699276);
   quadLineFit1040->SetParError(1,1.31969);
   quadLineFit1040->SetParLimits(1,0,0);
   quadLineFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1040);
   gre->Draw("p ");
   
   TF1 *quadLineFit1041 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1041->SetFillColor(19);
   quadLineFit1041->SetFillStyle(0);
   quadLineFit1041->SetLineColor(2);
   quadLineFit1041->SetLineWidth(2);
   quadLineFit1041->SetChisquare(1.850336);
   quadLineFit1041->SetNDF(1);
   quadLineFit1041->GetXaxis()->SetLabelFont(42);
   quadLineFit1041->GetXaxis()->SetTitleOffset(1);
   quadLineFit1041->GetXaxis()->SetTitleFont(42);
   quadLineFit1041->GetYaxis()->SetLabelFont(42);
   quadLineFit1041->GetYaxis()->SetTitleFont(42);
   quadLineFit1041->SetParameter(0,0.06934817);
   quadLineFit1041->SetParError(0,0.08379324);
   quadLineFit1041->SetParLimits(0,0,0);
   quadLineFit1041->SetParameter(1,-3.699276);
   quadLineFit1041->SetParError(1,1.31969);
   quadLineFit1041->SetParLimits(1,0,0);
   quadLineFit1041->Draw("same");
   
   Double_t 10.000000 ppm_fx1041[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 10.000000 ppm_fy1041[3] = {
   1.536068,
   1.34253,
   1.219357};
   Double_t 10.000000 ppm_fex1041[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1041[3] = {
   0.01485046,
   0.01485046,
   0.01485046};
   gre = new TGraphErrors(3,10.000000 ppm_fx1041,10.000000 ppm_fy1041,10.000000 ppm_fex1041,10.000000 ppm_fey1041);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_10dO000000sPppm1041 = new TH1F("Graph_10dO000000sPppm1041","Graph",100,0.05396825,0.07301587);
   Graph_10dO000000sPppm1041->SetMinimum(1.169866);
   Graph_10dO000000sPppm1041->SetMaximum(1.585559);
   Graph_10dO000000sPppm1041->SetDirectory(0);
   Graph_10dO000000sPppm1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1041->SetLineColor(ci);
   Graph_10dO000000sPppm1041->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1041->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1041->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1041->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1041->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1041->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1041->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1041);
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);
   quadLineFit1042->SetLineColor(3);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(0.7120709);
   quadLineFit1042->SetNDF(1);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,0.1006669);
   quadLineFit1042->SetParError(0,0.08379238);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,20.0331);
   quadLineFit1042->SetParError(1,1.319676);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("p ");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineColor(3);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(0.7120709);
   quadLineFit1043->SetNDF(1);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,0.1006669);
   quadLineFit1043->SetParError(0,0.08379238);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,20.0331);
   quadLineFit1043->SetParError(1,1.319676);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 30.000000 ppm_fx1043[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 30.000000 ppm_fy1043[3] = {
   3.25303,
   2.853674,
   2.553218};
   Double_t 30.000000 ppm_fex1043[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1043[3] = {
   0.01485046,
   0.01485046,
   0.01485046};
   gre = new TGraphErrors(3,30.000000 ppm_fx1043,30.000000 ppm_fy1043,30.000000 ppm_fex1043,30.000000 ppm_fey1043);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_30dO000000sPppm1043 = new TH1F("Graph_30dO000000sPppm1043","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1043->SetMinimum(2.465416);
   Graph_30dO000000sPppm1043->SetMaximum(3.340832);
   Graph_30dO000000sPppm1043->SetDirectory(0);
   Graph_30dO000000sPppm1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1043->SetLineColor(ci);
   Graph_30dO000000sPppm1043->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1043->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1043->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1043->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1043->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1043->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1043->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1043);
   
   
   TF1 *quadLineFit1044 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1044->SetFillColor(19);
   quadLineFit1044->SetFillStyle(0);
   quadLineFit1044->SetLineColor(4);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(0.09811408);
   quadLineFit1044->SetNDF(1);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,0.1000854);
   quadLineFit1044->SetParError(0,0.08379236);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,44.11802);
   quadLineFit1044->SetParError(1,1.319676);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(4);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(0.09811408);
   quadLineFit1045->SetNDF(1);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,0.1000854);
   quadLineFit1045->SetParError(0,0.08379236);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,44.11802);
   quadLineFit1045->SetParError(1,1.319676);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
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
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
