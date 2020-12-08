void QuadScans_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1133[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -30.000000 ppm_fy1133[3] = {
   -1.897505,
   -1.655337,
   -1.454546};
   Double_t -30.000000 ppm_fex1133[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1133[3] = {
   0.008522719,
   0.008522719,
   0.008522719};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1133,-30.000000 ppm_fy1133,-30.000000 ppm_fex1133,-30.000000 ppm_fey1133);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1133 = new TH1F("Graph_mI30dO000000sPppm1133","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1133->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1133->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1133->SetDirectory(0);
   Graph_mI30dO000000sPppm1133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1133->SetLineColor(ci);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30dO000000sPppm1133->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1133->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1133->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1133->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1133->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1133->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1133);
   
   
   TF1 *quadLineFit1134 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1134->SetFillColor(19);
   quadLineFit1134->SetFillStyle(0);
   quadLineFit1134->SetLineWidth(2);
   quadLineFit1134->SetChisquare(0.446941);
   quadLineFit1134->SetNDF(1);
   quadLineFit1134->GetXaxis()->SetLabelFont(42);
   quadLineFit1134->GetXaxis()->SetTitleOffset(1);
   quadLineFit1134->GetXaxis()->SetTitleFont(42);
   quadLineFit1134->GetYaxis()->SetLabelFont(42);
   quadLineFit1134->GetYaxis()->SetTitleFont(42);
   quadLineFit1134->SetParameter(0,0.09117269);
   quadLineFit1134->SetParError(0,0.04808838);
   quadLineFit1134->SetParLimits(0,0,0);
   quadLineFit1134->SetParameter(1,-27.86991);
   quadLineFit1134->SetParError(1,0.7573611);
   quadLineFit1134->SetParLimits(1,0,0);
   quadLineFit1134->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1134);
   gre->Draw("ap");
   
   TF1 *quadLineFit1135 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1135->SetFillColor(19);
   quadLineFit1135->SetFillStyle(0);
   quadLineFit1135->SetLineWidth(2);
   quadLineFit1135->SetChisquare(0.446941);
   quadLineFit1135->SetNDF(1);
   quadLineFit1135->GetXaxis()->SetLabelFont(42);
   quadLineFit1135->GetXaxis()->SetTitleOffset(1);
   quadLineFit1135->GetXaxis()->SetTitleFont(42);
   quadLineFit1135->GetYaxis()->SetLabelFont(42);
   quadLineFit1135->GetYaxis()->SetTitleFont(42);
   quadLineFit1135->SetParameter(0,0.09117269);
   quadLineFit1135->SetParError(0,0.04808838);
   quadLineFit1135->SetParLimits(0,0,0);
   quadLineFit1135->SetParameter(1,-27.86991);
   quadLineFit1135->SetParError(1,0.7573611);
   quadLineFit1135->SetParLimits(1,0,0);
   quadLineFit1135->Draw("same");
   
   Double_t -10.000000 ppm_fx1135[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t -10.000000 ppm_fy1135[3] = {
   -0.1842916,
   -0.1396758,
   -0.1516952};
   Double_t -10.000000 ppm_fex1135[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1135[3] = {
   0.008522719,
   0.008522719,
   0.008522719};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1135,-10.000000 ppm_fy1135,-10.000000 ppm_fex1135,-10.000000 ppm_fey1135);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1135 = new TH1F("Graph_mI10dO000000sPppm1135","Graph",100,0.05396825,0.07301587);
   Graph_mI10dO000000sPppm1135->SetMinimum(-0.1989804);
   Graph_mI10dO000000sPppm1135->SetMaximum(-0.1249869);
   Graph_mI10dO000000sPppm1135->SetDirectory(0);
   Graph_mI10dO000000sPppm1135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1135->SetLineColor(ci);
   Graph_mI10dO000000sPppm1135->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1135->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1135->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1135->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1135->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1135->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1135->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1135);
   
   
   TF1 *quadLineFit1136 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1136->SetFillColor(19);
   quadLineFit1136->SetFillStyle(0);
   quadLineFit1136->SetLineColor(2);
   quadLineFit1136->SetLineWidth(2);
   quadLineFit1136->SetChisquare(6.306044);
   quadLineFit1136->SetNDF(1);
   quadLineFit1136->GetXaxis()->SetLabelFont(42);
   quadLineFit1136->GetXaxis()->SetTitleOffset(1);
   quadLineFit1136->GetXaxis()->SetTitleFont(42);
   quadLineFit1136->GetYaxis()->SetLabelFont(42);
   quadLineFit1136->GetYaxis()->SetTitleFont(42);
   quadLineFit1136->SetParameter(0,-0.02017837);
   quadLineFit1136->SetParError(0,0.04808867);
   quadLineFit1136->SetParLimits(0,0,0);
   quadLineFit1136->SetParameter(1,-2.190829);
   quadLineFit1136->SetParError(1,0.7573657);
   quadLineFit1136->SetParLimits(1,0,0);
   quadLineFit1136->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1136);
   gre->Draw("p ");
   
   TF1 *quadLineFit1137 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1137->SetFillColor(19);
   quadLineFit1137->SetFillStyle(0);
   quadLineFit1137->SetLineColor(2);
   quadLineFit1137->SetLineWidth(2);
   quadLineFit1137->SetChisquare(6.306044);
   quadLineFit1137->SetNDF(1);
   quadLineFit1137->GetXaxis()->SetLabelFont(42);
   quadLineFit1137->GetXaxis()->SetTitleOffset(1);
   quadLineFit1137->GetXaxis()->SetTitleFont(42);
   quadLineFit1137->GetYaxis()->SetLabelFont(42);
   quadLineFit1137->GetYaxis()->SetTitleFont(42);
   quadLineFit1137->SetParameter(0,-0.02017837);
   quadLineFit1137->SetParError(0,0.04808867);
   quadLineFit1137->SetParLimits(0,0,0);
   quadLineFit1137->SetParameter(1,-2.190829);
   quadLineFit1137->SetParError(1,0.7573657);
   quadLineFit1137->SetParLimits(1,0,0);
   quadLineFit1137->Draw("same");
   
   Double_t 10.000000 ppm_fx1137[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 10.000000 ppm_fy1137[3] = {
   1.558672,
   1.340425,
   1.197604};
   Double_t 10.000000 ppm_fex1137[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1137[3] = {
   0.008522719,
   0.008522719,
   0.008522719};
   gre = new TGraphErrors(3,10.000000 ppm_fx1137,10.000000 ppm_fy1137,10.000000 ppm_fex1137,10.000000 ppm_fey1137);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_10dO000000sPppm1137 = new TH1F("Graph_10dO000000sPppm1137","Graph",100,0.05396825,0.07301587);
   Graph_10dO000000sPppm1137->SetMinimum(1.15127);
   Graph_10dO000000sPppm1137->SetMaximum(1.605006);
   Graph_10dO000000sPppm1137->SetDirectory(0);
   Graph_10dO000000sPppm1137->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1137->SetLineColor(ci);
   Graph_10dO000000sPppm1137->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1137->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1137->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1137->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1137->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1137->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1137->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1137);
   
   
   TF1 *quadLineFit1138 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1138->SetFillColor(19);
   quadLineFit1138->SetFillStyle(0);
   quadLineFit1138->SetLineColor(3);
   quadLineFit1138->SetLineWidth(2);
   quadLineFit1138->SetChisquare(2.094826);
   quadLineFit1138->SetNDF(1);
   quadLineFit1138->GetXaxis()->SetLabelFont(42);
   quadLineFit1138->GetXaxis()->SetTitleOffset(1);
   quadLineFit1138->GetXaxis()->SetTitleFont(42);
   quadLineFit1138->GetYaxis()->SetLabelFont(42);
   quadLineFit1138->GetYaxis()->SetTitleFont(42);
   quadLineFit1138->SetParameter(0,-0.07617961);
   quadLineFit1138->SetParError(0,0.04808404);
   quadLineFit1138->SetParLimits(0,0,0);
   quadLineFit1138->SetParameter(1,22.8264);
   quadLineFit1138->SetParError(1,0.7572936);
   quadLineFit1138->SetParLimits(1,0,0);
   quadLineFit1138->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1138);
   gre->Draw("p ");
   
   TF1 *quadLineFit1139 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1139->SetFillColor(19);
   quadLineFit1139->SetFillStyle(0);
   quadLineFit1139->SetLineColor(3);
   quadLineFit1139->SetLineWidth(2);
   quadLineFit1139->SetChisquare(2.094826);
   quadLineFit1139->SetNDF(1);
   quadLineFit1139->GetXaxis()->SetLabelFont(42);
   quadLineFit1139->GetXaxis()->SetTitleOffset(1);
   quadLineFit1139->GetXaxis()->SetTitleFont(42);
   quadLineFit1139->GetYaxis()->SetLabelFont(42);
   quadLineFit1139->GetYaxis()->SetTitleFont(42);
   quadLineFit1139->SetParameter(0,-0.07617961);
   quadLineFit1139->SetParError(0,0.04808404);
   quadLineFit1139->SetParLimits(0,0,0);
   quadLineFit1139->SetParameter(1,22.8264);
   quadLineFit1139->SetParError(1,0.7572936);
   quadLineFit1139->SetParLimits(1,0,0);
   quadLineFit1139->Draw("same");
   
   Double_t 30.000000 ppm_fx1139[3] = {
   0.07142857,
   0.0625,
   0.05555556};
   Double_t 30.000000 ppm_fy1139[3] = {
   3.278449,
   2.862732,
   2.538049};
   Double_t 30.000000 ppm_fex1139[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1139[3] = {
   0.008522719,
   0.008522719,
   0.008522719};
   gre = new TGraphErrors(3,30.000000 ppm_fx1139,30.000000 ppm_fy1139,30.000000 ppm_fex1139,30.000000 ppm_fey1139);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_30dO000000sPppm1139 = new TH1F("Graph_30dO000000sPppm1139","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1139->SetMinimum(2.453782);
   Graph_30dO000000sPppm1139->SetMaximum(3.362716);
   Graph_30dO000000sPppm1139->SetDirectory(0);
   Graph_30dO000000sPppm1139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1139->SetLineColor(ci);
   Graph_30dO000000sPppm1139->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1139->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1139->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1139->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1139->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1139->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1139->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1139);
   
   
   TF1 *quadLineFit1140 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1140->SetFillColor(19);
   quadLineFit1140->SetFillStyle(0);
   quadLineFit1140->SetLineColor(4);
   quadLineFit1140->SetLineWidth(2);
   quadLineFit1140->SetChisquare(0.005246506);
   quadLineFit1140->SetNDF(1);
   quadLineFit1140->GetXaxis()->SetLabelFont(42);
   quadLineFit1140->GetXaxis()->SetTitleOffset(1);
   quadLineFit1140->GetXaxis()->SetTitleFont(42);
   quadLineFit1140->GetYaxis()->SetLabelFont(42);
   quadLineFit1140->GetYaxis()->SetTitleFont(42);
   quadLineFit1140->SetParameter(0,-0.05284623);
   quadLineFit1140->SetParError(0,0.0480869);
   quadLineFit1140->SetParLimits(0,0,0);
   quadLineFit1140->SetParameter(1,46.64121);
   quadLineFit1140->SetParError(1,0.757338);
   quadLineFit1140->SetParLimits(1,0,0);
   quadLineFit1140->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1140);
   gre->Draw("p ");
   
   TF1 *quadLineFit1141 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1141->SetFillColor(19);
   quadLineFit1141->SetFillStyle(0);
   quadLineFit1141->SetLineColor(4);
   quadLineFit1141->SetLineWidth(2);
   quadLineFit1141->SetChisquare(0.005246506);
   quadLineFit1141->SetNDF(1);
   quadLineFit1141->GetXaxis()->SetLabelFont(42);
   quadLineFit1141->GetXaxis()->SetTitleOffset(1);
   quadLineFit1141->GetXaxis()->SetTitleFont(42);
   quadLineFit1141->GetYaxis()->SetLabelFont(42);
   quadLineFit1141->GetYaxis()->SetTitleFont(42);
   quadLineFit1141->SetParameter(0,-0.05284623);
   quadLineFit1141->SetParError(0,0.0480869);
   quadLineFit1141->SetParLimits(0,0,0);
   quadLineFit1141->SetParameter(1,46.64121);
   quadLineFit1141->SetParError(1,0.757338);
   quadLineFit1141->SetParLimits(1,0,0);
   quadLineFit1141->Draw("same");
   
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
