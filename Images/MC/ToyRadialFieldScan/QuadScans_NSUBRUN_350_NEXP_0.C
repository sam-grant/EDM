void QuadScans_NSUBRUN_350_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 15:41:53 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.625,21.77143,2.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1131[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1131[2] = {
   -2.375,
   -1.9};
   Double_t -30.000000 ppm_fex1131[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1131[2] = {
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1131,-30.000000 ppm_fy1131,-30.000000 ppm_fex1131,-30.000000 ppm_fey1131);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1131 = new TH1F("Graph_mI30dO000000sPppm1131","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1131->SetMinimum(-3);
   Graph_mI30dO000000sPppm1131->SetMaximum(2);
   Graph_mI30dO000000sPppm1131->SetDirectory(0);
   Graph_mI30dO000000sPppm1131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1131->SetLineColor(ci);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1131->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1131->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1131->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1131->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1131);
   
   
   TF1 *quadLineFit1132 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1132->SetFillColor(19);
   quadLineFit1132->SetFillStyle(0);
   quadLineFit1132->SetLineWidth(2);
   quadLineFit1132->SetChisquare(9.803988e-22);
   quadLineFit1132->SetNDF(0);
   quadLineFit1132->GetXaxis()->SetLabelFont(42);
   quadLineFit1132->GetXaxis()->SetTitleOffset(1);
   quadLineFit1132->GetXaxis()->SetTitleFont(42);
   quadLineFit1132->GetYaxis()->SetLabelFont(42);
   quadLineFit1132->GetYaxis()->SetTitleFont(42);
   quadLineFit1132->SetParameter(0,-4.275);
   quadLineFit1132->SetParError(0,6.403124);
   quadLineFit1132->SetParLimits(0,0,0);
   quadLineFit1132->SetParameter(1,0.11875);
   quadLineFit1132->SetParError(1,0.3535534);
   quadLineFit1132->SetParLimits(1,0,0);
   quadLineFit1132->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1132);
   gre->Draw("ap");
   
   TF1 *quadLineFit1133 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1133->SetFillColor(19);
   quadLineFit1133->SetFillStyle(0);
   quadLineFit1133->SetLineWidth(2);
   quadLineFit1133->SetChisquare(9.803988e-22);
   quadLineFit1133->SetNDF(0);
   quadLineFit1133->GetXaxis()->SetLabelFont(42);
   quadLineFit1133->GetXaxis()->SetTitleOffset(1);
   quadLineFit1133->GetXaxis()->SetTitleFont(42);
   quadLineFit1133->GetYaxis()->SetLabelFont(42);
   quadLineFit1133->GetYaxis()->SetTitleFont(42);
   quadLineFit1133->SetParameter(0,-4.275);
   quadLineFit1133->SetParError(0,6.403124);
   quadLineFit1133->SetParLimits(0,0,0);
   quadLineFit1133->SetParameter(1,0.11875);
   quadLineFit1133->SetParError(1,0.3535534);
   quadLineFit1133->SetParLimits(1,0,0);
   quadLineFit1133->Draw("same");
   
   Double_t -10.000000 ppm_fx1133[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1133[2] = {
   -1.125,
   -0.9};
   Double_t -10.000000 ppm_fex1133[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1133[2] = {
   0,
   0};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1133,-10.000000 ppm_fy1133,-10.000000 ppm_fex1133,-10.000000 ppm_fey1133);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1133 = new TH1F("Graph_mI10dO000000sPppm1133","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1133->SetMinimum(-1.1475);
   Graph_mI10dO000000sPppm1133->SetMaximum(-0.8775);
   Graph_mI10dO000000sPppm1133->SetDirectory(0);
   Graph_mI10dO000000sPppm1133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1133->SetLineColor(ci);
   Graph_mI10dO000000sPppm1133->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1133->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1133->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1133->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1133->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1133->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1133->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1133);
   
   
   TF1 *quadLineFit1134 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1134->SetFillColor(19);
   quadLineFit1134->SetFillStyle(0);
   quadLineFit1134->SetLineColor(2);
   quadLineFit1134->SetLineWidth(2);
   quadLineFit1134->SetChisquare(1.272639e-24);
   quadLineFit1134->SetNDF(0);
   quadLineFit1134->GetXaxis()->SetLabelFont(42);
   quadLineFit1134->GetXaxis()->SetTitleOffset(1);
   quadLineFit1134->GetXaxis()->SetTitleFont(42);
   quadLineFit1134->GetYaxis()->SetLabelFont(42);
   quadLineFit1134->GetYaxis()->SetTitleFont(42);
   quadLineFit1134->SetParameter(0,-2.025);
   quadLineFit1134->SetParError(0,6.403124);
   quadLineFit1134->SetParLimits(0,0,0);
   quadLineFit1134->SetParameter(1,0.05625);
   quadLineFit1134->SetParError(1,0.3535534);
   quadLineFit1134->SetParLimits(1,0,0);
   quadLineFit1134->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1134);
   gre->Draw("p ");
   
   TF1 *quadLineFit1135 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1135->SetFillColor(19);
   quadLineFit1135->SetFillStyle(0);
   quadLineFit1135->SetLineColor(2);
   quadLineFit1135->SetLineWidth(2);
   quadLineFit1135->SetChisquare(1.272639e-24);
   quadLineFit1135->SetNDF(0);
   quadLineFit1135->GetXaxis()->SetLabelFont(42);
   quadLineFit1135->GetXaxis()->SetTitleOffset(1);
   quadLineFit1135->GetXaxis()->SetTitleFont(42);
   quadLineFit1135->GetYaxis()->SetLabelFont(42);
   quadLineFit1135->GetYaxis()->SetTitleFont(42);
   quadLineFit1135->SetParameter(0,-2.025);
   quadLineFit1135->SetParError(0,6.403124);
   quadLineFit1135->SetParLimits(0,0,0);
   quadLineFit1135->SetParameter(1,0.05625);
   quadLineFit1135->SetParError(1,0.3535534);
   quadLineFit1135->SetParLimits(1,0,0);
   quadLineFit1135->Draw("same");
   
   Double_t 10.000000 ppm_fx1135[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1135[2] = {
   0.125,
   0.1};
   Double_t 10.000000 ppm_fex1135[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1135[2] = {
   0,
   0};
   gre = new TGraphErrors(2,10.000000 ppm_fx1135,10.000000 ppm_fy1135,10.000000 ppm_fex1135,10.000000 ppm_fey1135);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1135 = new TH1F("Graph_10dO000000sPppm1135","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1135->SetMinimum(0.0975);
   Graph_10dO000000sPppm1135->SetMaximum(0.1275);
   Graph_10dO000000sPppm1135->SetDirectory(0);
   Graph_10dO000000sPppm1135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1135->SetLineColor(ci);
   Graph_10dO000000sPppm1135->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1135->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1135->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1135->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1135->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1135->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1135->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1135);
   
   
   TF1 *quadLineFit1136 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1136->SetFillColor(19);
   quadLineFit1136->SetFillStyle(0);
   quadLineFit1136->SetLineColor(3);
   quadLineFit1136->SetLineWidth(2);
   quadLineFit1136->SetChisquare(2.831271e-28);
   quadLineFit1136->SetNDF(0);
   quadLineFit1136->GetXaxis()->SetLabelFont(42);
   quadLineFit1136->GetXaxis()->SetTitleOffset(1);
   quadLineFit1136->GetXaxis()->SetTitleFont(42);
   quadLineFit1136->GetYaxis()->SetLabelFont(42);
   quadLineFit1136->GetYaxis()->SetTitleFont(42);
   quadLineFit1136->SetParameter(0,0.225);
   quadLineFit1136->SetParError(0,6.403124);
   quadLineFit1136->SetParLimits(0,0,0);
   quadLineFit1136->SetParameter(1,-0.00625);
   quadLineFit1136->SetParError(1,0.3535534);
   quadLineFit1136->SetParLimits(1,0,0);
   quadLineFit1136->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1136);
   gre->Draw("p ");
   
   TF1 *quadLineFit1137 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1137->SetFillColor(19);
   quadLineFit1137->SetFillStyle(0);
   quadLineFit1137->SetLineColor(3);
   quadLineFit1137->SetLineWidth(2);
   quadLineFit1137->SetChisquare(2.831271e-28);
   quadLineFit1137->SetNDF(0);
   quadLineFit1137->GetXaxis()->SetLabelFont(42);
   quadLineFit1137->GetXaxis()->SetTitleOffset(1);
   quadLineFit1137->GetXaxis()->SetTitleFont(42);
   quadLineFit1137->GetYaxis()->SetLabelFont(42);
   quadLineFit1137->GetYaxis()->SetTitleFont(42);
   quadLineFit1137->SetParameter(0,0.225);
   quadLineFit1137->SetParError(0,6.403124);
   quadLineFit1137->SetParLimits(0,0,0);
   quadLineFit1137->SetParameter(1,-0.00625);
   quadLineFit1137->SetParError(1,0.3535534);
   quadLineFit1137->SetParLimits(1,0,0);
   quadLineFit1137->Draw("same");
   
   Double_t 30.000000 ppm_fx1137[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1137[2] = {
   1.375,
   1.1};
   Double_t 30.000000 ppm_fex1137[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1137[2] = {
   0,
   0};
   gre = new TGraphErrors(2,30.000000 ppm_fx1137,30.000000 ppm_fy1137,30.000000 ppm_fex1137,30.000000 ppm_fey1137);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1137 = new TH1F("Graph_30dO000000sPppm1137","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1137->SetMinimum(1.0725);
   Graph_30dO000000sPppm1137->SetMaximum(1.4025);
   Graph_30dO000000sPppm1137->SetDirectory(0);
   Graph_30dO000000sPppm1137->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1137->SetLineColor(ci);
   Graph_30dO000000sPppm1137->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1137->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1137->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1137->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1137->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1137->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1137->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1137);
   
   
   TF1 *quadLineFit1138 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1138->SetFillColor(19);
   quadLineFit1138->SetFillStyle(0);
   quadLineFit1138->SetLineColor(4);
   quadLineFit1138->SetLineWidth(2);
   quadLineFit1138->SetChisquare(1.249575e-25);
   quadLineFit1138->SetNDF(0);
   quadLineFit1138->GetXaxis()->SetLabelFont(42);
   quadLineFit1138->GetXaxis()->SetTitleOffset(1);
   quadLineFit1138->GetXaxis()->SetTitleFont(42);
   quadLineFit1138->GetYaxis()->SetLabelFont(42);
   quadLineFit1138->GetYaxis()->SetTitleFont(42);
   quadLineFit1138->SetParameter(0,2.475);
   quadLineFit1138->SetParError(0,6.403124);
   quadLineFit1138->SetParLimits(0,0,0);
   quadLineFit1138->SetParameter(1,-0.06875);
   quadLineFit1138->SetParError(1,0.3535534);
   quadLineFit1138->SetParLimits(1,0,0);
   quadLineFit1138->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1138);
   gre->Draw("p ");
   
   TF1 *quadLineFit1139 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1139->SetFillColor(19);
   quadLineFit1139->SetFillStyle(0);
   quadLineFit1139->SetLineColor(4);
   quadLineFit1139->SetLineWidth(2);
   quadLineFit1139->SetChisquare(1.249575e-25);
   quadLineFit1139->SetNDF(0);
   quadLineFit1139->GetXaxis()->SetLabelFont(42);
   quadLineFit1139->GetXaxis()->SetTitleOffset(1);
   quadLineFit1139->GetXaxis()->SetTitleFont(42);
   quadLineFit1139->GetYaxis()->SetLabelFont(42);
   quadLineFit1139->GetYaxis()->SetTitleFont(42);
   quadLineFit1139->SetParameter(0,2.475);
   quadLineFit1139->SetParError(0,6.403124);
   quadLineFit1139->SetParLimits(0,0,0);
   quadLineFit1139->SetParameter(1,-0.06875);
   quadLineFit1139->SetParError(1,0.3535534);
   quadLineFit1139->SetParLimits(1,0,0);
   quadLineFit1139->Draw("same");
   
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
