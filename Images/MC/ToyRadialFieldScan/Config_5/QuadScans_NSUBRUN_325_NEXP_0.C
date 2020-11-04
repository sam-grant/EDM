void QuadScans_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1097[2] = {
   16,
   18.3};
   Double_t -30.000000 ppm_fy1097[2] = {
   -1.646165,
   -1.457775};
   Double_t -30.000000 ppm_fex1097[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1097[2] = {
   0.008174905,
   0.008174905};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1097,-30.000000 ppm_fy1097,-30.000000 ppm_fex1097,-30.000000 ppm_fey1097);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1097 = new TH1F("Graph_mI30dO000000sPppm1097","",100,15.77,18.53);
   Graph_mI30dO000000sPppm1097->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1097->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1097->SetDirectory(0);
   Graph_mI30dO000000sPppm1097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1097->SetLineColor(ci);
   Graph_mI30dO000000sPppm1097->GetXaxis()->SetTitle("QHV [kV]");
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
   
   
   TF1 *quadLineFit1098 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1098->SetFillColor(19);
   quadLineFit1098->SetFillStyle(0);
   quadLineFit1098->SetLineWidth(2);
   quadLineFit1098->SetChisquare(6.515752e-20);
   quadLineFit1098->SetNDF(0);
   quadLineFit1098->GetXaxis()->SetLabelFont(42);
   quadLineFit1098->GetXaxis()->SetTitleOffset(1);
   quadLineFit1098->GetXaxis()->SetTitleFont(42);
   quadLineFit1098->GetYaxis()->SetLabelFont(42);
   quadLineFit1098->GetYaxis()->SetTitleFont(42);
   quadLineFit1098->SetParameter(0,-2.956702);
   quadLineFit1098->SetParError(0,0.0863989);
   quadLineFit1098->SetParLimits(0,0,0);
   quadLineFit1098->SetParameter(1,0.08190858);
   quadLineFit1098->SetParError(1,0.005026548);
   quadLineFit1098->SetParLimits(1,0,0);
   quadLineFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1098);
   gre->Draw("ap");
   
   TF1 *quadLineFit1099 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1099->SetFillColor(19);
   quadLineFit1099->SetFillStyle(0);
   quadLineFit1099->SetLineWidth(2);
   quadLineFit1099->SetChisquare(6.515752e-20);
   quadLineFit1099->SetNDF(0);
   quadLineFit1099->GetXaxis()->SetLabelFont(42);
   quadLineFit1099->GetXaxis()->SetTitleOffset(1);
   quadLineFit1099->GetXaxis()->SetTitleFont(42);
   quadLineFit1099->GetYaxis()->SetLabelFont(42);
   quadLineFit1099->GetYaxis()->SetTitleFont(42);
   quadLineFit1099->SetParameter(0,-2.956702);
   quadLineFit1099->SetParError(0,0.0863989);
   quadLineFit1099->SetParLimits(0,0,0);
   quadLineFit1099->SetParameter(1,0.08190858);
   quadLineFit1099->SetParError(1,0.005026548);
   quadLineFit1099->SetParLimits(1,0,0);
   quadLineFit1099->Draw("same");
   
   Double_t 30.000000 ppm_fx1099[2] = {
   16,
   18.3};
   Double_t 30.000000 ppm_fy1099[2] = {
   2.853875,
   2.498583};
   Double_t 30.000000 ppm_fex1099[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1099[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,30.000000 ppm_fx1099,30.000000 ppm_fy1099,30.000000 ppm_fex1099,30.000000 ppm_fey1099);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1099 = new TH1F("Graph_30dO000000sPppm1099","Graph",100,15.77,18.53);
   Graph_30dO000000sPppm1099->SetMinimum(2.453244);
   Graph_30dO000000sPppm1099->SetMaximum(2.899214);
   Graph_30dO000000sPppm1099->SetDirectory(0);
   Graph_30dO000000sPppm1099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1099->SetLineColor(ci);
   Graph_30dO000000sPppm1099->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1099->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1099->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1099->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1099->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1099->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1099->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1099);
   
   
   TF1 *quadLineFit1100 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1100->SetFillColor(19);
   quadLineFit1100->SetFillStyle(0);
   quadLineFit1100->SetLineColor(2);
   quadLineFit1100->SetLineWidth(2);
   quadLineFit1100->SetChisquare(5.995661e-17);
   quadLineFit1100->SetNDF(0);
   quadLineFit1100->GetXaxis()->SetLabelFont(42);
   quadLineFit1100->GetXaxis()->SetTitleOffset(1);
   quadLineFit1100->GetXaxis()->SetTitleFont(42);
   quadLineFit1100->GetYaxis()->SetLabelFont(42);
   quadLineFit1100->GetYaxis()->SetTitleFont(42);
   quadLineFit1100->SetParameter(0,5.325468);
   quadLineFit1100->SetParError(0,0.08639889);
   quadLineFit1100->SetParLimits(0,0,0);
   quadLineFit1100->SetParameter(1,-0.1544746);
   quadLineFit1100->SetParError(1,0.005026548);
   quadLineFit1100->SetParLimits(1,0,0);
   quadLineFit1100->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1100);
   gre->Draw("p ");
   
   TF1 *quadLineFit1101 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1101->SetFillColor(19);
   quadLineFit1101->SetFillStyle(0);
   quadLineFit1101->SetLineColor(2);
   quadLineFit1101->SetLineWidth(2);
   quadLineFit1101->SetChisquare(5.995661e-17);
   quadLineFit1101->SetNDF(0);
   quadLineFit1101->GetXaxis()->SetLabelFont(42);
   quadLineFit1101->GetXaxis()->SetTitleOffset(1);
   quadLineFit1101->GetXaxis()->SetTitleFont(42);
   quadLineFit1101->GetYaxis()->SetLabelFont(42);
   quadLineFit1101->GetYaxis()->SetTitleFont(42);
   quadLineFit1101->SetParameter(0,5.325468);
   quadLineFit1101->SetParError(0,0.08639889);
   quadLineFit1101->SetParLimits(0,0,0);
   quadLineFit1101->SetParameter(1,-0.1544746);
   quadLineFit1101->SetParError(1,0.005026548);
   quadLineFit1101->SetParLimits(1,0,0);
   quadLineFit1101->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
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
