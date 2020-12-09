void QuadScans_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1041[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1041[2] = {
   -1.889211,
   -1.495381};
   Double_t -30.000000 ppm_fex1041[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1041[2] = {
   0.01208777,
   0.01208777};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1041,-30.000000 ppm_fy1041,-30.000000 ppm_fex1041,-30.000000 ppm_fey1041);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1041 = new TH1F("Graph_mI30dO000000sPppm1041","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1041->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1041->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1041->SetDirectory(0);
   Graph_mI30dO000000sPppm1041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1041->SetLineColor(ci);
   Graph_mI30dO000000sPppm1041->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
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
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(4.649391e-19);
   quadLineFit1042->SetNDF(0);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,-0.1169761);
   quadLineFit1042->SetParError(0,0.06891091);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,-24.81129);
   quadLineFit1042->SetParError(1,1.076966);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("ap");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(4.649391e-19);
   quadLineFit1043->SetNDF(0);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,-0.1169761);
   quadLineFit1043->SetParError(0,0.06891091);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,-24.81129);
   quadLineFit1043->SetParError(1,1.076966);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 30.000000 ppm_fx1043[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1043[2] = {
   3.258645,
   2.54178};
   Double_t 30.000000 ppm_fex1043[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1043[2] = {
   0.01208777,
   0.01208777};
   gre = new TGraphErrors(2,30.000000 ppm_fx1043,30.000000 ppm_fy1043,30.000000 ppm_fex1043,30.000000 ppm_fey1043);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_30dO000000sPppm1043 = new TH1F("Graph_30dO000000sPppm1043","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1043->SetMinimum(2.455588);
   Graph_30dO000000sPppm1043->SetMaximum(3.344837);
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
   quadLineFit1044->SetLineColor(2);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(6.392488e-18);
   quadLineFit1044->SetNDF(0);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,0.03275425);
   quadLineFit1044->SetParError(0,0.0689109);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,45.16247);
   quadLineFit1044->SetParError(1,1.076966);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(2);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(6.392488e-18);
   quadLineFit1045->SetNDF(0);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,0.03275425);
   quadLineFit1045->SetParError(0,0.0689109);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,45.16247);
   quadLineFit1045->SetParError(1,1.076966);
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
