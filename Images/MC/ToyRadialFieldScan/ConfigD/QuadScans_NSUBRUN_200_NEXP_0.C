void QuadScans_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:23 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.37143,-3.25,22.65714,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1085[4] = {
   14,
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1085[4] = {
   -1.892693,
   -1.65011,
   -1.470588,
   -1.325201};
   Double_t -30.000000 ppm_fex1085[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1085[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   TGraphErrors *gre = new TGraphErrors(4,-30.000000 ppm_fx1085,-30.000000 ppm_fy1085,-30.000000 ppm_fex1085,-30.000000 ppm_fey1085);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1085 = new TH1F("Graph_mI30dO000000sPppm1085","",100,13.4,20.6);
   Graph_mI30dO000000sPppm1085->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1085->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1085->SetDirectory(0);
   Graph_mI30dO000000sPppm1085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1085->SetLineColor(ci);
   Graph_mI30dO000000sPppm1085->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1085->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1085->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1085->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1085->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1085->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1085->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1085->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1085->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1085->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1085->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1085->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1085->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1085->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1085->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1085);
   
   
   TF1 *quadLineFit1086 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1086->SetFillColor(19);
   quadLineFit1086->SetFillStyle(0);
   quadLineFit1086->SetLineWidth(2);
   quadLineFit1086->SetChisquare(22.10587);
   quadLineFit1086->SetNDF(2);
   quadLineFit1086->GetXaxis()->SetLabelFont(42);
   quadLineFit1086->GetXaxis()->SetTitleOffset(1);
   quadLineFit1086->GetXaxis()->SetTitleFont(42);
   quadLineFit1086->GetYaxis()->SetLabelFont(42);
   quadLineFit1086->GetYaxis()->SetTitleFont(42);
   quadLineFit1086->SetParameter(0,-3.184345);
   quadLineFit1086->SetParError(0,0.03998018);
   quadLineFit1086->SetParLimits(0,0,0);
   quadLineFit1086->SetParameter(1,0.09409983);
   quadLineFit1086->SetParError(1,0.002331692);
   quadLineFit1086->SetParLimits(1,0,0);
   quadLineFit1086->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1086);
   gre->Draw("ap");
   
   TF1 *quadLineFit1087 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1087->SetFillColor(19);
   quadLineFit1087->SetFillStyle(0);
   quadLineFit1087->SetLineWidth(2);
   quadLineFit1087->SetChisquare(22.10587);
   quadLineFit1087->SetNDF(2);
   quadLineFit1087->GetXaxis()->SetLabelFont(42);
   quadLineFit1087->GetXaxis()->SetTitleOffset(1);
   quadLineFit1087->GetXaxis()->SetTitleFont(42);
   quadLineFit1087->GetYaxis()->SetLabelFont(42);
   quadLineFit1087->GetYaxis()->SetTitleFont(42);
   quadLineFit1087->SetParameter(0,-3.184345);
   quadLineFit1087->SetParError(0,0.03998018);
   quadLineFit1087->SetParLimits(0,0,0);
   quadLineFit1087->SetParameter(1,0.09409983);
   quadLineFit1087->SetParError(1,0.002331692);
   quadLineFit1087->SetParLimits(1,0,0);
   quadLineFit1087->Draw("same");
   
   Double_t -10.000000 ppm_fx1087[4] = {
   14,
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1087[4] = {
   -0.1710178,
   -0.1673032,
   -0.1443368,
   -0.1404132};
   Double_t -10.000000 ppm_fex1087[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1087[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1087,-10.000000 ppm_fy1087,-10.000000 ppm_fex1087,-10.000000 ppm_fey1087);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1087 = new TH1F("Graph_mI10dO000000sPppm1087","Graph",100,13.4,20.6);
   Graph_mI10dO000000sPppm1087->SetMinimum(-0.1865913);
   Graph_mI10dO000000sPppm1087->SetMaximum(-0.1248398);
   Graph_mI10dO000000sPppm1087->SetDirectory(0);
   Graph_mI10dO000000sPppm1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1087->SetLineColor(ci);
   Graph_mI10dO000000sPppm1087->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1087->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1087->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1087->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1087->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1087->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1087->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1087);
   
   
   TF1 *quadLineFit1088 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1088->SetFillColor(19);
   quadLineFit1088->SetFillStyle(0);
   quadLineFit1088->SetLineColor(2);
   quadLineFit1088->SetLineWidth(2);
   quadLineFit1088->SetChisquare(0.6744557);
   quadLineFit1088->SetNDF(2);
   quadLineFit1088->GetXaxis()->SetLabelFont(42);
   quadLineFit1088->GetXaxis()->SetTitleOffset(1);
   quadLineFit1088->GetXaxis()->SetTitleFont(42);
   quadLineFit1088->GetYaxis()->SetLabelFont(42);
   quadLineFit1088->GetYaxis()->SetTitleFont(42);
   quadLineFit1088->SetParameter(0,-0.253331);
   quadLineFit1088->SetParError(0,0.03997967);
   quadLineFit1088->SetParLimits(0,0,0);
   quadLineFit1088->SetParameter(1,0.005739011);
   quadLineFit1088->SetParError(1,0.002331662);
   quadLineFit1088->SetParLimits(1,0,0);
   quadLineFit1088->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1088);
   gre->Draw("p ");
   
   TF1 *quadLineFit1089 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1089->SetFillColor(19);
   quadLineFit1089->SetFillStyle(0);
   quadLineFit1089->SetLineColor(2);
   quadLineFit1089->SetLineWidth(2);
   quadLineFit1089->SetChisquare(0.6744557);
   quadLineFit1089->SetNDF(2);
   quadLineFit1089->GetXaxis()->SetLabelFont(42);
   quadLineFit1089->GetXaxis()->SetTitleOffset(1);
   quadLineFit1089->GetXaxis()->SetTitleFont(42);
   quadLineFit1089->GetYaxis()->SetLabelFont(42);
   quadLineFit1089->GetYaxis()->SetTitleFont(42);
   quadLineFit1089->SetParameter(0,-0.253331);
   quadLineFit1089->SetParError(0,0.03997967);
   quadLineFit1089->SetParLimits(0,0,0);
   quadLineFit1089->SetParameter(1,0.005739011);
   quadLineFit1089->SetParError(1,0.002331662);
   quadLineFit1089->SetParLimits(1,0,0);
   quadLineFit1089->Draw("same");
   
   Double_t 10.000000 ppm_fx1089[4] = {
   14,
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1089[4] = {
   1.565458,
   1.35933,
   1.200475,
   1.10085};
   Double_t 10.000000 ppm_fex1089[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1089[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(4,10.000000 ppm_fx1089,10.000000 ppm_fy1089,10.000000 ppm_fex1089,10.000000 ppm_fey1089);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1089 = new TH1F("Graph_10dO000000sPppm1089","Graph",100,13.4,20.6);
   Graph_10dO000000sPppm1089->SetMinimum(1.041876);
   Graph_10dO000000sPppm1089->SetMaximum(1.624432);
   Graph_10dO000000sPppm1089->SetDirectory(0);
   Graph_10dO000000sPppm1089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1089->SetLineColor(ci);
   Graph_10dO000000sPppm1089->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1089->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1089->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1089->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1089->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1089->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1089->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1089);
   
   
   TF1 *quadLineFit1090 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1090->SetFillColor(19);
   quadLineFit1090->SetFillStyle(0);
   quadLineFit1090->SetLineColor(3);
   quadLineFit1090->SetLineWidth(2);
   quadLineFit1090->SetChisquare(26.14553);
   quadLineFit1090->SetNDF(2);
   quadLineFit1090->GetXaxis()->SetLabelFont(42);
   quadLineFit1090->GetXaxis()->SetTitleOffset(1);
   quadLineFit1090->GetXaxis()->SetTitleFont(42);
   quadLineFit1090->GetYaxis()->SetLabelFont(42);
   quadLineFit1090->GetYaxis()->SetTitleFont(42);
   quadLineFit1090->SetParameter(0,2.626307);
   quadLineFit1090->SetParError(0,0.03997978);
   quadLineFit1090->SetParLimits(0,0,0);
   quadLineFit1090->SetParameter(1,-0.07763403);
   quadLineFit1090->SetParError(1,0.002331668);
   quadLineFit1090->SetParLimits(1,0,0);
   quadLineFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1090);
   gre->Draw("p ");
   
   TF1 *quadLineFit1091 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1091->SetFillColor(19);
   quadLineFit1091->SetFillStyle(0);
   quadLineFit1091->SetLineColor(3);
   quadLineFit1091->SetLineWidth(2);
   quadLineFit1091->SetChisquare(26.14553);
   quadLineFit1091->SetNDF(2);
   quadLineFit1091->GetXaxis()->SetLabelFont(42);
   quadLineFit1091->GetXaxis()->SetTitleOffset(1);
   quadLineFit1091->GetXaxis()->SetTitleFont(42);
   quadLineFit1091->GetYaxis()->SetLabelFont(42);
   quadLineFit1091->GetYaxis()->SetTitleFont(42);
   quadLineFit1091->SetParameter(0,2.626307);
   quadLineFit1091->SetParError(0,0.03997978);
   quadLineFit1091->SetParLimits(0,0,0);
   quadLineFit1091->SetParameter(1,-0.07763403);
   quadLineFit1091->SetParError(1,0.002331668);
   quadLineFit1091->SetParLimits(1,0,0);
   quadLineFit1091->Draw("same");
   
   Double_t 30.000000 ppm_fx1091[4] = {
   14,
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1091[4] = {
   3.279176,
   2.868975,
   2.552535,
   2.294858};
   Double_t 30.000000 ppm_fex1091[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1091[4] = {
   0.01042751,
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(4,30.000000 ppm_fx1091,30.000000 ppm_fy1091,30.000000 ppm_fex1091,30.000000 ppm_fey1091);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1091 = new TH1F("Graph_30dO000000sPppm1091","Graph",100,13.4,20.6);
   Graph_30dO000000sPppm1091->SetMinimum(2.183913);
   Graph_30dO000000sPppm1091->SetMaximum(3.390121);
   Graph_30dO000000sPppm1091->SetDirectory(0);
   Graph_30dO000000sPppm1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1091->SetLineColor(ci);
   Graph_30dO000000sPppm1091->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1091->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1091->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1091->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1091->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1091->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1091->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1091);
   
   
   TF1 *quadLineFit1092 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1092->SetFillColor(19);
   quadLineFit1092->SetFillStyle(0);
   quadLineFit1092->SetLineColor(4);
   quadLineFit1092->SetLineWidth(2);
   quadLineFit1092->SetChisquare(54.05172);
   quadLineFit1092->SetNDF(2);
   quadLineFit1092->GetXaxis()->SetLabelFont(42);
   quadLineFit1092->GetXaxis()->SetTitleOffset(1);
   quadLineFit1092->GetXaxis()->SetTitleFont(42);
   quadLineFit1092->GetYaxis()->SetLabelFont(42);
   quadLineFit1092->GetYaxis()->SetTitleFont(42);
   quadLineFit1092->SetParameter(0,5.52787);
   quadLineFit1092->SetParError(0,0.03997963);
   quadLineFit1092->SetParLimits(0,0,0);
   quadLineFit1092->SetParameter(1,-0.1634697);
   quadLineFit1092->SetParError(1,0.002331659);
   quadLineFit1092->SetParLimits(1,0,0);
   quadLineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1092);
   gre->Draw("p ");
   
   TF1 *quadLineFit1093 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1093->SetFillColor(19);
   quadLineFit1093->SetFillStyle(0);
   quadLineFit1093->SetLineColor(4);
   quadLineFit1093->SetLineWidth(2);
   quadLineFit1093->SetChisquare(54.05172);
   quadLineFit1093->SetNDF(2);
   quadLineFit1093->GetXaxis()->SetLabelFont(42);
   quadLineFit1093->GetXaxis()->SetTitleOffset(1);
   quadLineFit1093->GetXaxis()->SetTitleFont(42);
   quadLineFit1093->GetYaxis()->SetLabelFont(42);
   quadLineFit1093->GetYaxis()->SetTitleFont(42);
   quadLineFit1093->SetParameter(0,5.52787);
   quadLineFit1093->SetParError(0,0.03997963);
   quadLineFit1093->SetParLimits(0,0,0);
   quadLineFit1093->SetParameter(1,-0.1634697);
   quadLineFit1093->SetParError(1,0.002331659);
   quadLineFit1093->SetParLimits(1,0,0);
   quadLineFit1093->Draw("same");
   
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
