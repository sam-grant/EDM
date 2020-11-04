void QuadScans_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:44 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1081[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1081[3] = {
   -1.659931,
   -1.47775,
   -1.323235};
   Double_t -30.000000 ppm_fex1081[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1081[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1081,-30.000000 ppm_fy1081,-30.000000 ppm_fex1081,-30.000000 ppm_fey1081);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1081 = new TH1F("Graph_mI30dO000000sPppm1081","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1081->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1081->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1081->SetDirectory(0);
   Graph_mI30dO000000sPppm1081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1081->SetLineColor(ci);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1081->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1081->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1081->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1081->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1081);
   
   
   TF1 *quadLineFit1082 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1082->SetFillColor(19);
   quadLineFit1082->SetFillStyle(0);
   quadLineFit1082->SetLineWidth(2);
   quadLineFit1082->SetChisquare(1.320523);
   quadLineFit1082->SetNDF(1);
   quadLineFit1082->GetXaxis()->SetLabelFont(42);
   quadLineFit1082->GetXaxis()->SetTitleOffset(1);
   quadLineFit1082->GetXaxis()->SetTitleFont(42);
   quadLineFit1082->GetYaxis()->SetLabelFont(42);
   quadLineFit1082->GetYaxis()->SetTitleFont(42);
   quadLineFit1082->SetParameter(0,-3.002101);
   quadLineFit1082->SetParError(0,0.06280712);
   quadLineFit1082->SetParLimits(0,0,0);
   quadLineFit1082->SetParameter(1,0.08417383);
   quadLineFit1082->SetParError(1,0.003475013);
   quadLineFit1082->SetParLimits(1,0,0);
   quadLineFit1082->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1082);
   gre->Draw("ap");
   
   TF1 *quadLineFit1083 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1083->SetFillColor(19);
   quadLineFit1083->SetFillStyle(0);
   quadLineFit1083->SetLineWidth(2);
   quadLineFit1083->SetChisquare(1.320523);
   quadLineFit1083->SetNDF(1);
   quadLineFit1083->GetXaxis()->SetLabelFont(42);
   quadLineFit1083->GetXaxis()->SetTitleOffset(1);
   quadLineFit1083->GetXaxis()->SetTitleFont(42);
   quadLineFit1083->GetYaxis()->SetLabelFont(42);
   quadLineFit1083->GetYaxis()->SetTitleFont(42);
   quadLineFit1083->SetParameter(0,-3.002101);
   quadLineFit1083->SetParError(0,0.06280712);
   quadLineFit1083->SetParLimits(0,0,0);
   quadLineFit1083->SetParameter(1,0.08417383);
   quadLineFit1083->SetParError(1,0.003475013);
   quadLineFit1083->SetParLimits(1,0,0);
   quadLineFit1083->Draw("same");
   
   Double_t 30.000000 ppm_fx1083[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1083[3] = {
   2.851478,
   2.555884,
   2.279455};
   Double_t 30.000000 ppm_fex1083[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1083[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,30.000000 ppm_fx1083,30.000000 ppm_fy1083,30.000000 ppm_fex1083,30.000000 ppm_fey1083);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1083 = new TH1F("Graph_30dO000000sPppm1083","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1083->SetMinimum(2.210458);
   Graph_30dO000000sPppm1083->SetMaximum(2.920475);
   Graph_30dO000000sPppm1083->SetDirectory(0);
   Graph_30dO000000sPppm1083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1083->SetLineColor(ci);
   Graph_30dO000000sPppm1083->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1083->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1083->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1083->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1083->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1083->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1083->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1083);
   
   
   TF1 *quadLineFit1084 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1084->SetFillColor(19);
   quadLineFit1084->SetFillStyle(0);
   quadLineFit1084->SetLineColor(2);
   quadLineFit1084->SetLineWidth(2);
   quadLineFit1084->SetChisquare(0.6336396);
   quadLineFit1084->SetNDF(1);
   quadLineFit1084->GetXaxis()->SetLabelFont(42);
   quadLineFit1084->GetXaxis()->SetTitleOffset(1);
   quadLineFit1084->GetXaxis()->SetTitleFont(42);
   quadLineFit1084->GetYaxis()->SetLabelFont(42);
   quadLineFit1084->GetYaxis()->SetTitleFont(42);
   quadLineFit1084->SetParameter(0,5.136378);
   quadLineFit1084->SetParError(0,0.06280751);
   quadLineFit1084->SetParLimits(0,0,0);
   quadLineFit1084->SetParameter(1,-0.1430058);
   quadLineFit1084->SetParError(1,0.003475035);
   quadLineFit1084->SetParLimits(1,0,0);
   quadLineFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1084);
   gre->Draw("p ");
   
   TF1 *quadLineFit1085 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1085->SetFillColor(19);
   quadLineFit1085->SetFillStyle(0);
   quadLineFit1085->SetLineColor(2);
   quadLineFit1085->SetLineWidth(2);
   quadLineFit1085->SetChisquare(0.6336396);
   quadLineFit1085->SetNDF(1);
   quadLineFit1085->GetXaxis()->SetLabelFont(42);
   quadLineFit1085->GetXaxis()->SetTitleOffset(1);
   quadLineFit1085->GetXaxis()->SetTitleFont(42);
   quadLineFit1085->GetYaxis()->SetLabelFont(42);
   quadLineFit1085->GetYaxis()->SetTitleFont(42);
   quadLineFit1085->SetParameter(0,5.136378);
   quadLineFit1085->SetParError(0,0.06280751);
   quadLineFit1085->SetParLimits(0,0,0);
   quadLineFit1085->SetParameter(1,-0.1430058);
   quadLineFit1085->SetParError(1,0.003475035);
   quadLineFit1085->SetParLimits(1,0,0);
   quadLineFit1085->Draw("same");
   
   Double_t 0.000000 ppm_fx1085[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1085[3] = {
   0.5905295,
   0.5428356,
   0.4835476};
   Double_t 0.000000 ppm_fex1085[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1085[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,0.000000 ppm_fx1085,0.000000 ppm_fy1085,0.000000 ppm_fex1085,0.000000 ppm_fey1085);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1085 = new TH1F("Graph_0dO000000sPppm1085","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1085->SetMinimum(0.4610547);
   Graph_0dO000000sPppm1085->SetMaximum(0.6130224);
   Graph_0dO000000sPppm1085->SetDirectory(0);
   Graph_0dO000000sPppm1085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1085->SetLineColor(ci);
   Graph_0dO000000sPppm1085->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1085->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1085->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1085->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1085->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1085->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1085->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1085);
   
   
   TF1 *quadLineFit1086 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1086->SetFillColor(19);
   quadLineFit1086->SetFillStyle(0);
   quadLineFit1086->SetLineColor(3);
   quadLineFit1086->SetLineWidth(2);
   quadLineFit1086->SetChisquare(0.2319079);
   quadLineFit1086->SetNDF(1);
   quadLineFit1086->GetXaxis()->SetLabelFont(42);
   quadLineFit1086->GetXaxis()->SetTitleOffset(1);
   quadLineFit1086->GetXaxis()->SetTitleFont(42);
   quadLineFit1086->GetYaxis()->SetLabelFont(42);
   quadLineFit1086->GetYaxis()->SetTitleFont(42);
   quadLineFit1086->SetParameter(0,1.020389);
   quadLineFit1086->SetParError(0,0.06281);
   quadLineFit1086->SetParLimits(0,0,0);
   quadLineFit1086->SetParameter(1,-0.02674547);
   quadLineFit1086->SetParError(1,0.003475174);
   quadLineFit1086->SetParLimits(1,0,0);
   quadLineFit1086->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1086);
   gre->Draw("p ");
   
   TF1 *quadLineFit1087 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1087->SetFillColor(19);
   quadLineFit1087->SetFillStyle(0);
   quadLineFit1087->SetLineColor(3);
   quadLineFit1087->SetLineWidth(2);
   quadLineFit1087->SetChisquare(0.2319079);
   quadLineFit1087->SetNDF(1);
   quadLineFit1087->GetXaxis()->SetLabelFont(42);
   quadLineFit1087->GetXaxis()->SetTitleOffset(1);
   quadLineFit1087->GetXaxis()->SetTitleFont(42);
   quadLineFit1087->GetYaxis()->SetLabelFont(42);
   quadLineFit1087->GetYaxis()->SetTitleFont(42);
   quadLineFit1087->SetParameter(0,1.020389);
   quadLineFit1087->SetParError(0,0.06281);
   quadLineFit1087->SetParLimits(0,0,0);
   quadLineFit1087->SetParameter(1,-0.02674547);
   quadLineFit1087->SetParError(1,0.003475174);
   quadLineFit1087->SetParLimits(1,0,0);
   quadLineFit1087->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
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
