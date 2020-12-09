void QuadScans_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1057[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1057[2] = {
   -1.886646,
   -1.464212};
   Double_t -30.000000 ppm_fex1057[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1057[2] = {
   0.01045368,
   0.01045368};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1057,-30.000000 ppm_fy1057,-30.000000 ppm_fex1057,-30.000000 ppm_fey1057);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1057 = new TH1F("Graph_mI30dO000000sPppm1057","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1057->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1057->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1057->SetDirectory(0);
   Graph_mI30dO000000sPppm1057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1057->SetLineColor(ci);
   Graph_mI30dO000000sPppm1057->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30dO000000sPppm1057->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1057->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1057->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1057->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1057->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1057->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1057->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1057->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1057->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1057->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1057->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1057->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1057->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1057->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1057);
   
   
   TF1 *quadLineFit1058 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1058->SetFillColor(19);
   quadLineFit1058->SetFillStyle(0);
   quadLineFit1058->SetLineWidth(2);
   quadLineFit1058->SetChisquare(3.462454e-19);
   quadLineFit1058->SetNDF(0);
   quadLineFit1058->GetXaxis()->SetLabelFont(42);
   quadLineFit1058->GetXaxis()->SetTitleOffset(1);
   quadLineFit1058->GetXaxis()->SetTitleFont(42);
   quadLineFit1058->GetYaxis()->SetLabelFont(42);
   quadLineFit1058->GetYaxis()->SetTitleFont(42);
   quadLineFit1058->SetParameter(0,0.01430486);
   quadLineFit1058->SetParError(0,0.05959513);
   quadLineFit1058->SetParLimits(0,0,0);
   quadLineFit1058->SetParameter(1,-26.61331);
   quadLineFit1058->SetParError(1,0.9313751);
   quadLineFit1058->SetParLimits(1,0,0);
   quadLineFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1058);
   gre->Draw("ap");
   
   TF1 *quadLineFit1059 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1059->SetFillColor(19);
   quadLineFit1059->SetFillStyle(0);
   quadLineFit1059->SetLineWidth(2);
   quadLineFit1059->SetChisquare(3.462454e-19);
   quadLineFit1059->SetNDF(0);
   quadLineFit1059->GetXaxis()->SetLabelFont(42);
   quadLineFit1059->GetXaxis()->SetTitleOffset(1);
   quadLineFit1059->GetXaxis()->SetTitleFont(42);
   quadLineFit1059->GetYaxis()->SetLabelFont(42);
   quadLineFit1059->GetYaxis()->SetTitleFont(42);
   quadLineFit1059->SetParameter(0,0.01430486);
   quadLineFit1059->SetParError(0,0.05959513);
   quadLineFit1059->SetParLimits(0,0,0);
   quadLineFit1059->SetParameter(1,-26.61331);
   quadLineFit1059->SetParError(1,0.9313751);
   quadLineFit1059->SetParLimits(1,0,0);
   quadLineFit1059->Draw("same");
   
   Double_t 30.000000 ppm_fx1059[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1059[2] = {
   3.267821,
   2.545303};
   Double_t 30.000000 ppm_fex1059[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1059[2] = {
   0.01045368,
   0.01045368};
   gre = new TGraphErrors(2,30.000000 ppm_fx1059,30.000000 ppm_fy1059,30.000000 ppm_fex1059,30.000000 ppm_fey1059);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_30dO000000sPppm1059 = new TH1F("Graph_30dO000000sPppm1059","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1059->SetMinimum(2.460506);
   Graph_30dO000000sPppm1059->SetMaximum(3.352617);
   Graph_30dO000000sPppm1059->SetDirectory(0);
   Graph_30dO000000sPppm1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1059->SetLineColor(ci);
   Graph_30dO000000sPppm1059->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1059->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1059->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1059->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1059->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1059->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1059->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1059);
   
   
   TF1 *quadLineFit1060 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1060->SetFillColor(19);
   quadLineFit1060->SetFillStyle(0);
   quadLineFit1060->SetLineColor(2);
   quadLineFit1060->SetLineWidth(2);
   quadLineFit1060->SetChisquare(4.356914e-19);
   quadLineFit1060->SetNDF(0);
   quadLineFit1060->GetXaxis()->SetLabelFont(42);
   quadLineFit1060->GetXaxis()->SetTitleOffset(1);
   quadLineFit1060->GetXaxis()->SetTitleFont(42);
   quadLineFit1060->GetYaxis()->SetLabelFont(42);
   quadLineFit1060->GetYaxis()->SetTitleFont(42);
   quadLineFit1060->SetParameter(0,0.01648769);
   quadLineFit1060->SetParError(0,0.05959513);
   quadLineFit1060->SetParLimits(0,0,0);
   quadLineFit1060->SetParameter(1,45.51867);
   quadLineFit1060->SetParError(1,0.9313751);
   quadLineFit1060->SetParLimits(1,0,0);
   quadLineFit1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1060);
   gre->Draw("p ");
   
   TF1 *quadLineFit1061 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1061->SetFillColor(19);
   quadLineFit1061->SetFillStyle(0);
   quadLineFit1061->SetLineColor(2);
   quadLineFit1061->SetLineWidth(2);
   quadLineFit1061->SetChisquare(4.356914e-19);
   quadLineFit1061->SetNDF(0);
   quadLineFit1061->GetXaxis()->SetLabelFont(42);
   quadLineFit1061->GetXaxis()->SetTitleOffset(1);
   quadLineFit1061->GetXaxis()->SetTitleFont(42);
   quadLineFit1061->GetYaxis()->SetLabelFont(42);
   quadLineFit1061->GetYaxis()->SetTitleFont(42);
   quadLineFit1061->SetParameter(0,0.01648769);
   quadLineFit1061->SetParError(0,0.05959513);
   quadLineFit1061->SetParLimits(0,0,0);
   quadLineFit1061->SetParameter(1,45.51867);
   quadLineFit1061->SetParError(1,0.9313751);
   quadLineFit1061->SetParLimits(1,0,0);
   quadLineFit1061->Draw("same");
   
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
