void QuadScans_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.226923,0.0663141,7.516812);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1129[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1129[3] = {
   -3.16204,
   -2.810798,
   -2.589185};
   Double_t -50.000000 ppm_fex1129[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1129[3] = {
   0.009850923,
   0.009850923,
   0.009850923};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1129,-50.000000 ppm_fy1129,-50.000000 ppm_fex1129,-50.000000 ppm_fey1129);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1129 = new TH1F("Graph_mI50dO000000sPppm1129","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1129->SetMinimum(-3.95255);
   Graph_mI50dO000000sPppm1129->SetMaximum(6.242439);
   Graph_mI50dO000000sPppm1129->SetDirectory(0);
   Graph_mI50dO000000sPppm1129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1129->SetLineColor(ci);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_mI50dO000000sPppm1129->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1129->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1129->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1129->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1129->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1129->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1129);
   
   
   TF1 *quadLineFit1130 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1130->SetFillColor(19);
   quadLineFit1130->SetFillStyle(0);
   quadLineFit1130->SetLineWidth(2);
   quadLineFit1130->SetChisquare(0.07716323);
   quadLineFit1130->SetNDF(1);
   quadLineFit1130->GetXaxis()->SetLabelFont(42);
   quadLineFit1130->GetXaxis()->SetTitleOffset(1);
   quadLineFit1130->GetXaxis()->SetTitleFont(42);
   quadLineFit1130->GetYaxis()->SetLabelFont(42);
   quadLineFit1130->GetYaxis()->SetTitleFont(42);
   quadLineFit1130->SetParameter(0,0.02580212);
   quadLineFit1130->SetParError(0,0.06971412);
   quadLineFit1130->SetParLimits(0,0,0);
   quadLineFit1130->SetParameter(1,-51.01896);
   quadLineFit1130->SetParError(1,1.230941);
   quadLineFit1130->SetParLimits(1,0,0);
   quadLineFit1130->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1130);
   gre->Draw("ap");
   
   TF1 *quadLineFit1131 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1131->SetFillColor(19);
   quadLineFit1131->SetFillStyle(0);
   quadLineFit1131->SetLineWidth(2);
   quadLineFit1131->SetChisquare(0.07716323);
   quadLineFit1131->SetNDF(1);
   quadLineFit1131->GetXaxis()->SetLabelFont(42);
   quadLineFit1131->GetXaxis()->SetTitleOffset(1);
   quadLineFit1131->GetXaxis()->SetTitleFont(42);
   quadLineFit1131->GetYaxis()->SetLabelFont(42);
   quadLineFit1131->GetYaxis()->SetTitleFont(42);
   quadLineFit1131->SetParameter(0,0.02580212);
   quadLineFit1131->SetParError(0,0.06971412);
   quadLineFit1131->SetParLimits(0,0,0);
   quadLineFit1131->SetParameter(1,-51.01896);
   quadLineFit1131->SetParError(1,1.230941);
   quadLineFit1131->SetParLimits(1,0,0);
   quadLineFit1131->Draw("same");
   
   Double_t -30.000000 ppm_fx1131[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1131[4] = {
   -1.899684,
   -1.658719,
   -1.444612,
   -1.363637};
   Double_t -30.000000 ppm_fex1131[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1131[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1131,-30.000000 ppm_fy1131,-30.000000 ppm_fex1131,-30.000000 ppm_fey1131);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1131 = new TH1F("Graph_mI30dO000000sPppm1131","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1131->SetMinimum(-1.965109);
   Graph_mI30dO000000sPppm1131->SetMaximum(-1.298211);
   Graph_mI30dO000000sPppm1131->SetDirectory(0);
   Graph_mI30dO000000sPppm1131->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1131->SetLineColor(ci);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1131->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1131->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1131->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1131->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1131);
   
   
   TF1 *quadLineFit1132 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1132->SetFillColor(19);
   quadLineFit1132->SetFillStyle(0);
   quadLineFit1132->SetLineColor(2);
   quadLineFit1132->SetLineWidth(2);
   quadLineFit1132->SetChisquare(6.878507);
   quadLineFit1132->SetNDF(2);
   quadLineFit1132->GetXaxis()->SetLabelFont(42);
   quadLineFit1132->GetXaxis()->SetTitleOffset(1);
   quadLineFit1132->GetXaxis()->SetTitleFont(42);
   quadLineFit1132->GetYaxis()->SetLabelFont(42);
   quadLineFit1132->GetYaxis()->SetTitleFont(42);
   quadLineFit1132->SetParameter(0,0.04713747);
   quadLineFit1132->SetParError(0,0.03919653);
   quadLineFit1132->SetParLimits(0,0,0);
   quadLineFit1132->SetParameter(1,-27.22642);
   quadLineFit1132->SetParError(1,0.6460357);
   quadLineFit1132->SetParLimits(1,0,0);
   quadLineFit1132->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1132);
   gre->Draw("p ");
   
   TF1 *quadLineFit1133 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1133->SetFillColor(19);
   quadLineFit1133->SetFillStyle(0);
   quadLineFit1133->SetLineColor(2);
   quadLineFit1133->SetLineWidth(2);
   quadLineFit1133->SetChisquare(6.878507);
   quadLineFit1133->SetNDF(2);
   quadLineFit1133->GetXaxis()->SetLabelFont(42);
   quadLineFit1133->GetXaxis()->SetTitleOffset(1);
   quadLineFit1133->GetXaxis()->SetTitleFont(42);
   quadLineFit1133->GetYaxis()->SetLabelFont(42);
   quadLineFit1133->GetYaxis()->SetTitleFont(42);
   quadLineFit1133->SetParameter(0,0.04713747);
   quadLineFit1133->SetParError(0,0.03919653);
   quadLineFit1133->SetParLimits(0,0,0);
   quadLineFit1133->SetParameter(1,-27.22642);
   quadLineFit1133->SetParError(1,0.6460357);
   quadLineFit1133->SetParLimits(1,0,0);
   quadLineFit1133->Draw("same");
   
   Double_t -10.000000 ppm_fx1133[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1133[4] = {
   -0.168469,
   -0.140252,
   -0.1262571,
   -0.1173364};
   Double_t -10.000000 ppm_fex1133[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1133[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1133,-10.000000 ppm_fy1133,-10.000000 ppm_fex1133,-10.000000 ppm_fey1133);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1133 = new TH1F("Graph_mI10dO000000sPppm1133","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1133->SetMinimum(-0.1854033);
   Graph_mI10dO000000sPppm1133->SetMaximum(-0.100402);
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
   
   
   TF1 *quadLineFit1134 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1134->SetFillColor(19);
   quadLineFit1134->SetFillStyle(0);
   quadLineFit1134->SetLineColor(3);
   quadLineFit1134->SetLineWidth(2);
   quadLineFit1134->SetChisquare(0.2114298);
   quadLineFit1134->SetNDF(2);
   quadLineFit1134->GetXaxis()->SetLabelFont(42);
   quadLineFit1134->GetXaxis()->SetTitleOffset(1);
   quadLineFit1134->GetXaxis()->SetTitleFont(42);
   quadLineFit1134->GetYaxis()->SetLabelFont(42);
   quadLineFit1134->GetYaxis()->SetTitleFont(42);
   quadLineFit1134->SetParameter(0,0.01368035);
   quadLineFit1134->SetParError(0,0.03919977);
   quadLineFit1134->SetParLimits(0,0,0);
   quadLineFit1134->SetParameter(1,-2.521267);
   quadLineFit1134->SetParError(1,0.646089);
   quadLineFit1134->SetParLimits(1,0,0);
   quadLineFit1134->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1134);
   gre->Draw("p ");
   
   TF1 *quadLineFit1135 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1135->SetFillColor(19);
   quadLineFit1135->SetFillStyle(0);
   quadLineFit1135->SetLineColor(3);
   quadLineFit1135->SetLineWidth(2);
   quadLineFit1135->SetChisquare(0.2114298);
   quadLineFit1135->SetNDF(2);
   quadLineFit1135->GetXaxis()->SetLabelFont(42);
   quadLineFit1135->GetXaxis()->SetTitleOffset(1);
   quadLineFit1135->GetXaxis()->SetTitleFont(42);
   quadLineFit1135->GetYaxis()->SetLabelFont(42);
   quadLineFit1135->GetYaxis()->SetTitleFont(42);
   quadLineFit1135->SetParameter(0,0.01368035);
   quadLineFit1135->SetParError(0,0.03919977);
   quadLineFit1135->SetParLimits(0,0,0);
   quadLineFit1135->SetParameter(1,-2.521267);
   quadLineFit1135->SetParError(1,0.646089);
   quadLineFit1135->SetParLimits(1,0,0);
   quadLineFit1135->Draw("same");
   
   Double_t 10.000000 ppm_fx1135[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1135[3] = {
   1.553009,
   1.348453,
   1.114869};
   Double_t 10.000000 ppm_fex1135[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1135[3] = {
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(3,10.000000 ppm_fx1135,10.000000 ppm_fy1135,10.000000 ppm_fex1135,10.000000 ppm_fey1135);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1135 = new TH1F("Graph_10dO000000sPppm1135","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1135->SetMinimum(1.059234);
   Graph_10dO000000sPppm1135->SetMaximum(1.608644);
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
   
   
   TF1 *quadLineFit1136 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1136->SetFillColor(19);
   quadLineFit1136->SetFillStyle(0);
   quadLineFit1136->SetLineColor(4);
   quadLineFit1136->SetLineWidth(2);
   quadLineFit1136->SetChisquare(0.736992);
   quadLineFit1136->SetNDF(1);
   quadLineFit1136->GetXaxis()->SetLabelFont(42);
   quadLineFit1136->GetXaxis()->SetTitleOffset(1);
   quadLineFit1136->GetXaxis()->SetTitleFont(42);
   quadLineFit1136->GetYaxis()->SetLabelFont(42);
   quadLineFit1136->GetYaxis()->SetTitleFont(42);
   quadLineFit1136->SetParameter(0,-0.001456651);
   quadLineFit1136->SetParError(0,0.04297149);
   quadLineFit1136->SetParLimits(0,0,0);
   quadLineFit1136->SetParameter(1,21.7088);
   quadLineFit1136->SetParError(1,0.6899204);
   quadLineFit1136->SetParLimits(1,0,0);
   quadLineFit1136->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1136);
   gre->Draw("p ");
   
   TF1 *quadLineFit1137 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1137->SetFillColor(19);
   quadLineFit1137->SetFillStyle(0);
   quadLineFit1137->SetLineColor(4);
   quadLineFit1137->SetLineWidth(2);
   quadLineFit1137->SetChisquare(0.736992);
   quadLineFit1137->SetNDF(1);
   quadLineFit1137->GetXaxis()->SetLabelFont(42);
   quadLineFit1137->GetXaxis()->SetTitleOffset(1);
   quadLineFit1137->GetXaxis()->SetTitleFont(42);
   quadLineFit1137->GetYaxis()->SetLabelFont(42);
   quadLineFit1137->GetYaxis()->SetTitleFont(42);
   quadLineFit1137->SetParameter(0,-0.001456651);
   quadLineFit1137->SetParError(0,0.04297149);
   quadLineFit1137->SetParLimits(0,0,0);
   quadLineFit1137->SetParameter(1,21.7088);
   quadLineFit1137->SetParError(1,0.6899204);
   quadLineFit1137->SetParLimits(1,0,0);
   quadLineFit1137->Draw("same");
   
   Double_t 30.000000 ppm_fx1137[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1137[4] = {
   3.276704,
   2.856724,
   2.549415,
   2.344314};
   Double_t 30.000000 ppm_fex1137[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1137[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(4,30.000000 ppm_fx1137,30.000000 ppm_fy1137,30.000000 ppm_fex1137,30.000000 ppm_fey1137);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1137 = new TH1F("Graph_30dO000000sPppm1137","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1137->SetMinimum(2.239253);
   Graph_30dO000000sPppm1137->SetMaximum(3.381765);
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
   
   
   TF1 *quadLineFit1138 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1138->SetFillColor(19);
   quadLineFit1138->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1138->SetLineColor(ci);
   quadLineFit1138->SetLineWidth(2);
   quadLineFit1138->SetChisquare(0.9139732);
   quadLineFit1138->SetNDF(2);
   quadLineFit1138->GetXaxis()->SetLabelFont(42);
   quadLineFit1138->GetXaxis()->SetTitleOffset(1);
   quadLineFit1138->GetXaxis()->SetTitleFont(42);
   quadLineFit1138->GetYaxis()->SetLabelFont(42);
   quadLineFit1138->GetYaxis()->SetTitleFont(42);
   quadLineFit1138->SetParameter(0,-0.01607436);
   quadLineFit1138->SetParError(0,0.03919589);
   quadLineFit1138->SetParLimits(0,0,0);
   quadLineFit1138->SetParameter(1,46.06733);
   quadLineFit1138->SetParError(1,0.6460241);
   quadLineFit1138->SetParLimits(1,0,0);
   quadLineFit1138->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1138);
   gre->Draw("p ");
   
   TF1 *quadLineFit1139 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1139->SetFillColor(19);
   quadLineFit1139->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1139->SetLineColor(ci);
   quadLineFit1139->SetLineWidth(2);
   quadLineFit1139->SetChisquare(0.9139732);
   quadLineFit1139->SetNDF(2);
   quadLineFit1139->GetXaxis()->SetLabelFont(42);
   quadLineFit1139->GetXaxis()->SetTitleOffset(1);
   quadLineFit1139->GetXaxis()->SetTitleFont(42);
   quadLineFit1139->GetYaxis()->SetLabelFont(42);
   quadLineFit1139->GetYaxis()->SetTitleFont(42);
   quadLineFit1139->SetParameter(0,-0.01607436);
   quadLineFit1139->SetParError(0,0.03919589);
   quadLineFit1139->SetParLimits(0,0,0);
   quadLineFit1139->SetParameter(1,46.06733);
   quadLineFit1139->SetParError(1,0.6460241);
   quadLineFit1139->SetParLimits(1,0,0);
   quadLineFit1139->Draw("same");
   
   Double_t 50.000000 ppm_fx1139[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1139[4] = {
   4.993951,
   4.384882,
   3.868714,
   3.584653};
   Double_t 50.000000 ppm_fex1139[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1139[4] = {
   0.009850923,
   0.009850923,
   0.009850923,
   0.009850923};
   gre = new TGraphErrors(4,50.000000 ppm_fx1139,50.000000 ppm_fy1139,50.000000 ppm_fex1139,50.000000 ppm_fey1139);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1139 = new TH1F("Graph_50dO000000sPppm1139","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1139->SetMinimum(3.431902);
   Graph_50dO000000sPppm1139->SetMaximum(5.146702);
   Graph_50dO000000sPppm1139->SetDirectory(0);
   Graph_50dO000000sPppm1139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1139->SetLineColor(ci);
   Graph_50dO000000sPppm1139->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1139->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1139->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1139->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1139->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1139->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1139->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1139);
   
   
   TF1 *quadLineFit1140 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1140->SetFillColor(19);
   quadLineFit1140->SetFillStyle(0);
   quadLineFit1140->SetLineColor(6);
   quadLineFit1140->SetLineWidth(2);
   quadLineFit1140->SetChisquare(4.272001);
   quadLineFit1140->SetNDF(2);
   quadLineFit1140->GetXaxis()->SetLabelFont(42);
   quadLineFit1140->GetXaxis()->SetTitleOffset(1);
   quadLineFit1140->GetXaxis()->SetTitleFont(42);
   quadLineFit1140->GetYaxis()->SetLabelFont(42);
   quadLineFit1140->GetYaxis()->SetTitleFont(42);
   quadLineFit1140->SetParameter(0,-0.02962557);
   quadLineFit1140->SetParError(0,0.0391994);
   quadLineFit1140->SetParLimits(0,0,0);
   quadLineFit1140->SetParameter(1,70.40317);
   quadLineFit1140->SetParError(1,0.6460829);
   quadLineFit1140->SetParLimits(1,0,0);
   quadLineFit1140->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1140);
   gre->Draw("p ");
   
   TF1 *quadLineFit1141 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1141->SetFillColor(19);
   quadLineFit1141->SetFillStyle(0);
   quadLineFit1141->SetLineColor(6);
   quadLineFit1141->SetLineWidth(2);
   quadLineFit1141->SetChisquare(4.272001);
   quadLineFit1141->SetNDF(2);
   quadLineFit1141->GetXaxis()->SetLabelFont(42);
   quadLineFit1141->GetXaxis()->SetTitleOffset(1);
   quadLineFit1141->GetXaxis()->SetTitleFont(42);
   quadLineFit1141->GetYaxis()->SetLabelFont(42);
   quadLineFit1141->GetYaxis()->SetTitleFont(42);
   quadLineFit1141->SetParameter(0,-0.02962557);
   quadLineFit1141->SetParError(0,0.0391994);
   quadLineFit1141->SetParLimits(0,0,0);
   quadLineFit1141->SetParameter(1,70.40317);
   quadLineFit1141->SetParError(1,0.6460829);
   quadLineFit1141->SetParLimits(1,0,0);
   quadLineFit1141->Draw("same");
   
   TLegend *leg = new TLegend(0.87,0.4,0.99,0.6,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{a}#GT [ppm]","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
