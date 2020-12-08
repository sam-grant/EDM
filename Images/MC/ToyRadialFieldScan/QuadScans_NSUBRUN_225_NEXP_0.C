void QuadScans_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:04 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1097[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -30.000000 ppm_fy1097[3] = {
   -1.881682,
   -1.658534,
   -1.471114};
   Double_t -30.000000 ppm_fex1097[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1097[3] = {
   0.009850923,
   0.009850923,
   0.009850923};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1097,-30.000000 ppm_fy1097,-30.000000 ppm_fex1097,-30.000000 ppm_fey1097);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1097 = new TH1F("Graph_mI30dO000000sPppm1097","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1097->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1097->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1097->SetDirectory(0);
   Graph_mI30dO000000sPppm1097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1097->SetLineColor(ci);
   Graph_mI30dO000000sPppm1097->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30dO000000sPppm1097->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1097->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1097->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1097->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1097->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1097->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1097->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1097->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1097->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1097->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1097->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1097->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1097->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1097->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1097);
   
   
   TF1 *quadLineFit1098 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1098->SetFillColor(19);
   quadLineFit1098->SetFillStyle(0);
   quadLineFit1098->SetLineWidth(2);
   quadLineFit1098->SetChisquare(0.4154537);
   quadLineFit1098->SetNDF(1);
   quadLineFit1098->GetXaxis()->SetLabelFont(42);
   quadLineFit1098->GetXaxis()->SetTitleOffset(1);
   quadLineFit1098->GetXaxis()->SetTitleFont(42);
   quadLineFit1098->GetYaxis()->SetLabelFont(42);
   quadLineFit1098->GetYaxis()->SetTitleFont(42);
   quadLineFit1098->SetParameter(0,-0.03929752);
   quadLineFit1098->SetParError(0,0.05558293);
   quadLineFit1098->SetParLimits(0,0,0);
   quadLineFit1098->SetParameter(1,-25.82506);
   quadLineFit1098->SetParError(1,0.8753955);
   quadLineFit1098->SetParLimits(1,0,0);
   quadLineFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1098);
   gre->Draw("ap");
   
   TF1 *quadLineFit1099 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1099->SetFillColor(19);
   quadLineFit1099->SetFillStyle(0);
   quadLineFit1099->SetLineWidth(2);
   quadLineFit1099->SetChisquare(0.4154537);
   quadLineFit1099->SetNDF(1);
   quadLineFit1099->GetXaxis()->SetLabelFont(42);
   quadLineFit1099->GetXaxis()->SetTitleOffset(1);
   quadLineFit1099->GetXaxis()->SetTitleFont(42);
   quadLineFit1099->GetYaxis()->SetLabelFont(42);
   quadLineFit1099->GetYaxis()->SetTitleFont(42);
   quadLineFit1099->SetParameter(0,-0.03929752);
   quadLineFit1099->SetParError(0,0.05558293);
   quadLineFit1099->SetParLimits(0,0,0);
   quadLineFit1099->SetParameter(1,-25.82506);
   quadLineFit1099->SetParError(1,0.8753955);
   quadLineFit1099->SetParLimits(1,0,0);
   quadLineFit1099->Draw("same");
   
   Double_t -10.000000 ppm_fx1099[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -10.000000 ppm_fy1099[3] = {
   -0.1802187,
   -0.1429533,
   -0.114298};
   Double_t -10.000000 ppm_fex1099[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1099[3] = {
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1099,-10.000000 ppm_fy1099,-10.000000 ppm_fex1099,-10.000000 ppm_fey1099);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1099 = new TH1F("Graph_mI10dO000000sPppm1099","Graph",100,0.05396825,0.07301587);
   Graph_mI10dO000000sPppm1099->SetMinimum(-0.1986318);
   Graph_mI10dO000000sPppm1099->SetMaximum(-0.09588479);
   Graph_mI10dO000000sPppm1099->SetDirectory(0);
   Graph_mI10dO000000sPppm1099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1099->SetLineColor(ci);
   Graph_mI10dO000000sPppm1099->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1099->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1099->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1099->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1099->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1099->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1099->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1099);
   
   
   TF1 *quadLineFit1100 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1100->SetFillColor(19);
   quadLineFit1100->SetFillStyle(0);
   quadLineFit1100->SetLineColor(2);
   quadLineFit1100->SetLineWidth(2);
   quadLineFit1100->SetChisquare(0.0002338412);
   quadLineFit1100->SetNDF(1);
   quadLineFit1100->GetXaxis()->SetLabelFont(42);
   quadLineFit1100->GetXaxis()->SetTitleOffset(1);
   quadLineFit1100->GetXaxis()->SetTitleFont(42);
   quadLineFit1100->GetYaxis()->SetLabelFont(42);
   quadLineFit1100->GetYaxis()->SetTitleFont(42);
   quadLineFit1100->SetParameter(0,0.1165471);
   quadLineFit1100->SetParError(0,0.05558294);
   quadLineFit1100->SetParLimits(0,0,0);
   quadLineFit1100->SetParameter(1,-4.153969);
   quadLineFit1100->SetParError(1,0.8753957);
   quadLineFit1100->SetParLimits(1,0,0);
   quadLineFit1100->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1100);
   gre->Draw("p ");
   
   TF1 *quadLineFit1101 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1101->SetFillColor(19);
   quadLineFit1101->SetFillStyle(0);
   quadLineFit1101->SetLineColor(2);
   quadLineFit1101->SetLineWidth(2);
   quadLineFit1101->SetChisquare(0.0002338412);
   quadLineFit1101->SetNDF(1);
   quadLineFit1101->GetXaxis()->SetLabelFont(42);
   quadLineFit1101->GetXaxis()->SetTitleOffset(1);
   quadLineFit1101->GetXaxis()->SetTitleFont(42);
   quadLineFit1101->GetYaxis()->SetLabelFont(42);
   quadLineFit1101->GetYaxis()->SetTitleFont(42);
   quadLineFit1101->SetParameter(0,0.1165471);
   quadLineFit1101->SetParError(0,0.05558294);
   quadLineFit1101->SetParLimits(0,0,0);
   quadLineFit1101->SetParameter(1,-4.153969);
   quadLineFit1101->SetParError(1,0.8753957);
   quadLineFit1101->SetParLimits(1,0,0);
   quadLineFit1101->Draw("same");
   
   Double_t 10.000000 ppm_fx1101[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 10.000000 ppm_fy1101[3] = {
   1.550758,
   1.361288,
   1.20285};
   Double_t 10.000000 ppm_fex1101[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1101[3] = {
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(3,10.000000 ppm_fx1101,10.000000 ppm_fy1101,10.000000 ppm_fex1101,10.000000 ppm_fey1101);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_10dO000000sPppm1101 = new TH1F("Graph_10dO000000sPppm1101","Graph",100,0.05396825,0.07301587);
   Graph_10dO000000sPppm1101->SetMinimum(1.156239);
   Graph_10dO000000sPppm1101->SetMaximum(1.59737);
   Graph_10dO000000sPppm1101->SetDirectory(0);
   Graph_10dO000000sPppm1101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1101->SetLineColor(ci);
   Graph_10dO000000sPppm1101->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1101->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1101->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1101->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1101->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1101->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1101->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1101);
   
   
   TF1 *quadLineFit1102 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1102->SetFillColor(19);
   quadLineFit1102->SetFillStyle(0);
   quadLineFit1102->SetLineColor(3);
   quadLineFit1102->SetLineWidth(2);
   quadLineFit1102->SetChisquare(0.2650733);
   quadLineFit1102->SetNDF(1);
   quadLineFit1102->GetXaxis()->SetLabelFont(42);
   quadLineFit1102->GetXaxis()->SetTitleOffset(1);
   quadLineFit1102->GetXaxis()->SetTitleFont(42);
   quadLineFit1102->GetYaxis()->SetLabelFont(42);
   quadLineFit1102->GetYaxis()->SetTitleFont(42);
   quadLineFit1102->SetParameter(0,-0.01069623);
   quadLineFit1102->SetParError(0,0.05558296);
   quadLineFit1102->SetParLimits(0,0,0);
   quadLineFit1102->SetParameter(1,21.88566);
   quadLineFit1102->SetParError(1,0.875396);
   quadLineFit1102->SetParLimits(1,0,0);
   quadLineFit1102->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1102);
   gre->Draw("p ");
   
   TF1 *quadLineFit1103 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1103->SetFillColor(19);
   quadLineFit1103->SetFillStyle(0);
   quadLineFit1103->SetLineColor(3);
   quadLineFit1103->SetLineWidth(2);
   quadLineFit1103->SetChisquare(0.2650733);
   quadLineFit1103->SetNDF(1);
   quadLineFit1103->GetXaxis()->SetLabelFont(42);
   quadLineFit1103->GetXaxis()->SetTitleOffset(1);
   quadLineFit1103->GetXaxis()->SetTitleFont(42);
   quadLineFit1103->GetYaxis()->SetLabelFont(42);
   quadLineFit1103->GetYaxis()->SetTitleFont(42);
   quadLineFit1103->SetParameter(0,-0.01069623);
   quadLineFit1103->SetParError(0,0.05558296);
   quadLineFit1103->SetParLimits(0,0,0);
   quadLineFit1103->SetParameter(1,21.88566);
   quadLineFit1103->SetParError(1,0.875396);
   quadLineFit1103->SetParLimits(1,0,0);
   quadLineFit1103->Draw("same");
   
   Double_t 30.000000 ppm_fx1103[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 30.000000 ppm_fy1103[3] = {
   3.272471,
   2.870013,
   2.553187};
   Double_t 30.000000 ppm_fex1103[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1103[3] = {
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(3,30.000000 ppm_fx1103,30.000000 ppm_fy1103,30.000000 ppm_fex1103,30.000000 ppm_fey1103);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_30dO000000sPppm1103 = new TH1F("Graph_30dO000000sPppm1103","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1103->SetMinimum(2.469438);
   Graph_30dO000000sPppm1103->SetMaximum(3.356221);
   Graph_30dO000000sPppm1103->SetDirectory(0);
   Graph_30dO000000sPppm1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1103->SetLineColor(ci);
   Graph_30dO000000sPppm1103->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1103->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1103->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1103->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1103->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1103->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1103->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1103);
   
   
   TF1 *quadLineFit1104 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1104->SetFillColor(19);
   quadLineFit1104->SetFillStyle(0);
   quadLineFit1104->SetLineColor(4);
   quadLineFit1104->SetLineWidth(2);
   quadLineFit1104->SetChisquare(0.03128465);
   quadLineFit1104->SetNDF(1);
   quadLineFit1104->GetXaxis()->SetLabelFont(42);
   quadLineFit1104->GetXaxis()->SetTitleOffset(1);
   quadLineFit1104->GetXaxis()->SetTitleFont(42);
   quadLineFit1104->GetYaxis()->SetLabelFont(42);
   quadLineFit1104->GetYaxis()->SetTitleFont(42);
   quadLineFit1104->SetParameter(0,0.03711207);
   quadLineFit1104->SetParError(0,0.0555836);
   quadLineFit1104->SetParLimits(0,0,0);
   quadLineFit1104->SetParameter(1,45.30372);
   quadLineFit1104->SetParError(1,0.8754062);
   quadLineFit1104->SetParLimits(1,0,0);
   quadLineFit1104->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1104);
   gre->Draw("p ");
   
   TF1 *quadLineFit1105 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1105->SetFillColor(19);
   quadLineFit1105->SetFillStyle(0);
   quadLineFit1105->SetLineColor(4);
   quadLineFit1105->SetLineWidth(2);
   quadLineFit1105->SetChisquare(0.03128465);
   quadLineFit1105->SetNDF(1);
   quadLineFit1105->GetXaxis()->SetLabelFont(42);
   quadLineFit1105->GetXaxis()->SetTitleOffset(1);
   quadLineFit1105->GetXaxis()->SetTitleFont(42);
   quadLineFit1105->GetYaxis()->SetLabelFont(42);
   quadLineFit1105->GetYaxis()->SetTitleFont(42);
   quadLineFit1105->SetParameter(0,0.03711207);
   quadLineFit1105->SetParError(0,0.0555836);
   quadLineFit1105->SetParLimits(0,0,0);
   quadLineFit1105->SetParameter(1,45.30372);
   quadLineFit1105->SetParError(1,0.8754062);
   quadLineFit1105->SetParLimits(1,0,0);
   quadLineFit1105->Draw("same");
   
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
