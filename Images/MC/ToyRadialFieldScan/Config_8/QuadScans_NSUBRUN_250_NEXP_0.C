void QuadScans_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:58 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1127[2] = {
   16,
   18.3};
   Double_t -50.000000 ppm_fy1127[2] = {
   -3.172179,
   -2.754501};
   Double_t -50.000000 ppm_fex1127[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1127[2] = {
   0.009322777,
   0.009322777};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1127,-50.000000 ppm_fy1127,-50.000000 ppm_fex1127,-50.000000 ppm_fey1127);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1127 = new TH1F("Graph_mI50dO000000sPppm1127","",100,15.77,18.53);
   Graph_mI50dO000000sPppm1127->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1127->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1127->SetDirectory(0);
   Graph_mI50dO000000sPppm1127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1127->SetLineColor(ci);
   Graph_mI50dO000000sPppm1127->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1127->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1127->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1127->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1127->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1127->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1127->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1127->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1127->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1127->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1127->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1127->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1127->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1127->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1127->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1127);
   
   
   TF1 *quadLineFit1128 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1128->SetFillColor(19);
   quadLineFit1128->SetFillStyle(0);
   quadLineFit1128->SetLineWidth(2);
   quadLineFit1128->SetChisquare(4.971356e-19);
   quadLineFit1128->SetNDF(0);
   quadLineFit1128->GetXaxis()->SetLabelFont(42);
   quadLineFit1128->GetXaxis()->SetTitleOffset(1);
   quadLineFit1128->GetXaxis()->SetTitleFont(42);
   quadLineFit1128->GetYaxis()->SetLabelFont(42);
   quadLineFit1128->GetYaxis()->SetTitleFont(42);
   quadLineFit1128->SetParameter(0,-6.077765);
   quadLineFit1128->SetParError(0,0.09853052);
   quadLineFit1128->SetParLimits(0,0,0);
   quadLineFit1128->SetParameter(1,0.1815991);
   quadLineFit1128->SetParError(1,0.005732347);
   quadLineFit1128->SetParLimits(1,0,0);
   quadLineFit1128->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1128);
   gre->Draw("ap");
   
   TF1 *quadLineFit1129 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1129->SetFillColor(19);
   quadLineFit1129->SetFillStyle(0);
   quadLineFit1129->SetLineWidth(2);
   quadLineFit1129->SetChisquare(4.971356e-19);
   quadLineFit1129->SetNDF(0);
   quadLineFit1129->GetXaxis()->SetLabelFont(42);
   quadLineFit1129->GetXaxis()->SetTitleOffset(1);
   quadLineFit1129->GetXaxis()->SetTitleFont(42);
   quadLineFit1129->GetYaxis()->SetLabelFont(42);
   quadLineFit1129->GetYaxis()->SetTitleFont(42);
   quadLineFit1129->SetParameter(0,-6.077765);
   quadLineFit1129->SetParError(0,0.09853052);
   quadLineFit1129->SetParLimits(0,0,0);
   quadLineFit1129->SetParameter(1,0.1815991);
   quadLineFit1129->SetParError(1,0.005732347);
   quadLineFit1129->SetParLimits(1,0,0);
   quadLineFit1129->Draw("same");
   
   Double_t -25.000000 ppm_fx1129[2] = {
   16,
   18.3};
   Double_t -25.000000 ppm_fy1129[2] = {
   -1.262924,
   -1.109491};
   Double_t -25.000000 ppm_fex1129[2] = {
   0,
   0};
   Double_t -25.000000 ppm_fey1129[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,-25.000000 ppm_fx1129,-25.000000 ppm_fy1129,-25.000000 ppm_fex1129,-25.000000 ppm_fey1129);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1129 = new TH1F("Graph_mI25dO000000sPppm1129","Graph",100,15.77,18.53);
   Graph_mI25dO000000sPppm1129->SetMinimum(-1.289454);
   Graph_mI25dO000000sPppm1129->SetMaximum(-1.082961);
   Graph_mI25dO000000sPppm1129->SetDirectory(0);
   Graph_mI25dO000000sPppm1129->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1129->SetLineColor(ci);
   Graph_mI25dO000000sPppm1129->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1129->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1129->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1129->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1129->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1129->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1129->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1129);
   
   
   TF1 *quadLineFit1130 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1130->SetFillColor(19);
   quadLineFit1130->SetFillStyle(0);
   quadLineFit1130->SetLineColor(2);
   quadLineFit1130->SetLineWidth(2);
   quadLineFit1130->SetChisquare(4.896045e-22);
   quadLineFit1130->SetNDF(0);
   quadLineFit1130->GetXaxis()->SetLabelFont(42);
   quadLineFit1130->GetXaxis()->SetTitleOffset(1);
   quadLineFit1130->GetXaxis()->SetTitleFont(42);
   quadLineFit1130->GetYaxis()->SetLabelFont(42);
   quadLineFit1130->GetYaxis()->SetTitleFont(42);
   quadLineFit1130->SetParameter(0,-2.33028);
   quadLineFit1130->SetParError(0,0.09853052);
   quadLineFit1130->SetParLimits(0,0,0);
   quadLineFit1130->SetParameter(1,0.06670977);
   quadLineFit1130->SetParError(1,0.005732347);
   quadLineFit1130->SetParLimits(1,0,0);
   quadLineFit1130->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1130);
   gre->Draw("p ");
   
   TF1 *quadLineFit1131 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1131->SetFillColor(19);
   quadLineFit1131->SetFillStyle(0);
   quadLineFit1131->SetLineColor(2);
   quadLineFit1131->SetLineWidth(2);
   quadLineFit1131->SetChisquare(4.896045e-22);
   quadLineFit1131->SetNDF(0);
   quadLineFit1131->GetXaxis()->SetLabelFont(42);
   quadLineFit1131->GetXaxis()->SetTitleOffset(1);
   quadLineFit1131->GetXaxis()->SetTitleFont(42);
   quadLineFit1131->GetYaxis()->SetLabelFont(42);
   quadLineFit1131->GetYaxis()->SetTitleFont(42);
   quadLineFit1131->SetParameter(0,-2.33028);
   quadLineFit1131->SetParError(0,0.09853052);
   quadLineFit1131->SetParLimits(0,0,0);
   quadLineFit1131->SetParameter(1,0.06670977);
   quadLineFit1131->SetParError(1,0.005732347);
   quadLineFit1131->SetParLimits(1,0,0);
   quadLineFit1131->Draw("same");
   
   Double_t 0.000000 ppm_fx1131[2] = {
   16,
   18.3};
   Double_t 0.000000 ppm_fy1131[2] = {
   0.6178678,
   0.5129623};
   Double_t 0.000000 ppm_fex1131[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1131[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,0.000000 ppm_fx1131,0.000000 ppm_fy1131,0.000000 ppm_fex1131,0.000000 ppm_fey1131);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1131 = new TH1F("Graph_0dO000000sPppm1131","Graph",100,15.77,18.53);
   Graph_0dO000000sPppm1131->SetMinimum(0.4912844);
   Graph_0dO000000sPppm1131->SetMaximum(0.6395457);
   Graph_0dO000000sPppm1131->SetDirectory(0);
   Graph_0dO000000sPppm1131->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1131->SetLineColor(ci);
   Graph_0dO000000sPppm1131->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1131->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1131->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1131->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1131->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1131->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1131->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1131);
   
   
   TF1 *quadLineFit1132 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1132->SetFillColor(19);
   quadLineFit1132->SetFillStyle(0);
   quadLineFit1132->SetLineColor(3);
   quadLineFit1132->SetLineWidth(2);
   quadLineFit1132->SetChisquare(1.837591e-20);
   quadLineFit1132->SetNDF(0);
   quadLineFit1132->GetXaxis()->SetLabelFont(42);
   quadLineFit1132->GetXaxis()->SetTitleOffset(1);
   quadLineFit1132->GetXaxis()->SetTitleFont(42);
   quadLineFit1132->GetYaxis()->SetLabelFont(42);
   quadLineFit1132->GetYaxis()->SetTitleFont(42);
   quadLineFit1132->SetParameter(0,1.347646);
   quadLineFit1132->SetParError(0,0.09853052);
   quadLineFit1132->SetParLimits(0,0,0);
   quadLineFit1132->SetParameter(1,-0.04561111);
   quadLineFit1132->SetParError(1,0.005732347);
   quadLineFit1132->SetParLimits(1,0,0);
   quadLineFit1132->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1132);
   gre->Draw("p ");
   
   TF1 *quadLineFit1133 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1133->SetFillColor(19);
   quadLineFit1133->SetFillStyle(0);
   quadLineFit1133->SetLineColor(3);
   quadLineFit1133->SetLineWidth(2);
   quadLineFit1133->SetChisquare(1.837591e-20);
   quadLineFit1133->SetNDF(0);
   quadLineFit1133->GetXaxis()->SetLabelFont(42);
   quadLineFit1133->GetXaxis()->SetTitleOffset(1);
   quadLineFit1133->GetXaxis()->SetTitleFont(42);
   quadLineFit1133->GetYaxis()->SetLabelFont(42);
   quadLineFit1133->GetYaxis()->SetTitleFont(42);
   quadLineFit1133->SetParameter(0,1.347646);
   quadLineFit1133->SetParError(0,0.09853052);
   quadLineFit1133->SetParLimits(0,0,0);
   quadLineFit1133->SetParameter(1,-0.04561111);
   quadLineFit1133->SetParError(1,0.005732347);
   quadLineFit1133->SetParLimits(1,0,0);
   quadLineFit1133->Draw("same");
   
   Double_t 25.000000 ppm_fx1133[2] = {
   16,
   18.3};
   Double_t 25.000000 ppm_fy1133[2] = {
   2.486243,
   2.176262};
   Double_t 25.000000 ppm_fex1133[2] = {
   0,
   0};
   Double_t 25.000000 ppm_fey1133[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,25.000000 ppm_fx1133,25.000000 ppm_fy1133,25.000000 ppm_fex1133,25.000000 ppm_fey1133);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1133 = new TH1F("Graph_25dO000000sPppm1133","Graph",100,15.77,18.53);
   Graph_25dO000000sPppm1133->SetMinimum(2.134076);
   Graph_25dO000000sPppm1133->SetMaximum(2.528429);
   Graph_25dO000000sPppm1133->SetDirectory(0);
   Graph_25dO000000sPppm1133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1133->SetLineColor(ci);
   Graph_25dO000000sPppm1133->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1133->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1133->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1133->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1133->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1133->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1133->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1133);
   
   
   TF1 *quadLineFit1134 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1134->SetFillColor(19);
   quadLineFit1134->SetFillStyle(0);
   quadLineFit1134->SetLineColor(4);
   quadLineFit1134->SetLineWidth(2);
   quadLineFit1134->SetChisquare(4.302264e-17);
   quadLineFit1134->SetNDF(0);
   quadLineFit1134->GetXaxis()->SetLabelFont(42);
   quadLineFit1134->GetXaxis()->SetTitleOffset(1);
   quadLineFit1134->GetXaxis()->SetTitleFont(42);
   quadLineFit1134->GetYaxis()->SetLabelFont(42);
   quadLineFit1134->GetYaxis()->SetTitleFont(42);
   quadLineFit1134->SetParameter(0,4.642636);
   quadLineFit1134->SetParError(0,0.09853052);
   quadLineFit1134->SetParLimits(0,0,0);
   quadLineFit1134->SetParameter(1,-0.1347746);
   quadLineFit1134->SetParError(1,0.005732347);
   quadLineFit1134->SetParLimits(1,0,0);
   quadLineFit1134->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1134);
   gre->Draw("p ");
   
   TF1 *quadLineFit1135 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1135->SetFillColor(19);
   quadLineFit1135->SetFillStyle(0);
   quadLineFit1135->SetLineColor(4);
   quadLineFit1135->SetLineWidth(2);
   quadLineFit1135->SetChisquare(4.302264e-17);
   quadLineFit1135->SetNDF(0);
   quadLineFit1135->GetXaxis()->SetLabelFont(42);
   quadLineFit1135->GetXaxis()->SetTitleOffset(1);
   quadLineFit1135->GetXaxis()->SetTitleFont(42);
   quadLineFit1135->GetYaxis()->SetLabelFont(42);
   quadLineFit1135->GetYaxis()->SetTitleFont(42);
   quadLineFit1135->SetParameter(0,4.642636);
   quadLineFit1135->SetParError(0,0.09853052);
   quadLineFit1135->SetParLimits(0,0,0);
   quadLineFit1135->SetParameter(1,-0.1347746);
   quadLineFit1135->SetParError(1,0.005732347);
   quadLineFit1135->SetParLimits(1,0,0);
   quadLineFit1135->Draw("same");
   
   Double_t 50.000000 ppm_fx1135[2] = {
   16,
   18.3};
   Double_t 50.000000 ppm_fy1135[2] = {
   4.364937,
   3.813756};
   Double_t 50.000000 ppm_fex1135[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1135[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,50.000000 ppm_fx1135,50.000000 ppm_fy1135,50.000000 ppm_fex1135,50.000000 ppm_fey1135);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1135 = new TH1F("Graph_50dO000000sPppm1135","Graph",100,15.77,18.53);
   Graph_50dO000000sPppm1135->SetMinimum(3.747451);
   Graph_50dO000000sPppm1135->SetMaximum(4.431243);
   Graph_50dO000000sPppm1135->SetDirectory(0);
   Graph_50dO000000sPppm1135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1135->SetLineColor(ci);
   Graph_50dO000000sPppm1135->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1135->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1135->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1135->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1135->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1135->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1135->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1135);
   
   
   TF1 *quadLineFit1136 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1136->SetFillColor(19);
   quadLineFit1136->SetFillStyle(0);
   quadLineFit1136->SetLineColor(5);
   quadLineFit1136->SetLineWidth(2);
   quadLineFit1136->SetChisquare(5.307914e-20);
   quadLineFit1136->SetNDF(0);
   quadLineFit1136->GetXaxis()->SetLabelFont(42);
   quadLineFit1136->GetXaxis()->SetTitleOffset(1);
   quadLineFit1136->GetXaxis()->SetTitleFont(42);
   quadLineFit1136->GetYaxis()->SetLabelFont(42);
   quadLineFit1136->GetYaxis()->SetTitleFont(42);
   quadLineFit1136->SetParameter(0,8.19924);
   quadLineFit1136->SetParError(0,0.09853052);
   quadLineFit1136->SetParLimits(0,0,0);
   quadLineFit1136->SetParameter(1,-0.2396439);
   quadLineFit1136->SetParError(1,0.005732347);
   quadLineFit1136->SetParLimits(1,0,0);
   quadLineFit1136->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1136);
   gre->Draw("p ");
   
   TF1 *quadLineFit1137 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1137->SetFillColor(19);
   quadLineFit1137->SetFillStyle(0);
   quadLineFit1137->SetLineColor(5);
   quadLineFit1137->SetLineWidth(2);
   quadLineFit1137->SetChisquare(5.307914e-20);
   quadLineFit1137->SetNDF(0);
   quadLineFit1137->GetXaxis()->SetLabelFont(42);
   quadLineFit1137->GetXaxis()->SetTitleOffset(1);
   quadLineFit1137->GetXaxis()->SetTitleFont(42);
   quadLineFit1137->GetYaxis()->SetLabelFont(42);
   quadLineFit1137->GetYaxis()->SetTitleFont(42);
   quadLineFit1137->SetParameter(0,8.19924);
   quadLineFit1137->SetParError(0,0.09853052);
   quadLineFit1137->SetParLimits(0,0,0);
   quadLineFit1137->SetParameter(1,-0.2396439);
   quadLineFit1137->SetParError(1,0.005732347);
   quadLineFit1137->SetParLimits(1,0,0);
   quadLineFit1137->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("25.000000 ppm","   25 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-25.000000 ppm","  #minus25 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50 ppm","lpf");
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
