void QuadScans_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 20:04:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1101[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1101[2] = {
   -1.663937,
   -1.331725};
   Double_t -30.000000 ppm_fex1101[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1101[2] = {
   0.008888156,
   0.008888156};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1101,-30.000000 ppm_fy1101,-30.000000 ppm_fex1101,-30.000000 ppm_fey1101);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1101 = new TH1F("Graph_mI30dO000000sPppm1101","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1101->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1101->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1101->SetDirectory(0);
   Graph_mI30dO000000sPppm1101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1101->SetLineColor(ci);
   Graph_mI30dO000000sPppm1101->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1101->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1101->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1101->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1101->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1101->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1101->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1101->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1101->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1101->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1101->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1101->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1101->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1101->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1101->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1101);
   
   
   TF1 *quadLineFit1102 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1102->SetFillColor(19);
   quadLineFit1102->SetFillStyle(0);
   quadLineFit1102->SetLineWidth(2);
   quadLineFit1102->SetChisquare(2.249524e-20);
   quadLineFit1102->SetNDF(0);
   quadLineFit1102->GetXaxis()->SetLabelFont(42);
   quadLineFit1102->GetXaxis()->SetTitleOffset(1);
   quadLineFit1102->GetXaxis()->SetTitleFont(42);
   quadLineFit1102->GetYaxis()->SetLabelFont(42);
   quadLineFit1102->GetYaxis()->SetTitleFont(42);
   quadLineFit1102->SetParameter(0,-2.992783);
   quadLineFit1102->SetParError(0,0.05691197);
   quadLineFit1102->SetParLimits(0,0,0);
   quadLineFit1102->SetParameter(1,0.08305289);
   quadLineFit1102->SetParError(1,0.003142438);
   quadLineFit1102->SetParLimits(1,0,0);
   quadLineFit1102->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1102);
   gre->Draw("ap");
   
   TF1 *quadLineFit1103 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1103->SetFillColor(19);
   quadLineFit1103->SetFillStyle(0);
   quadLineFit1103->SetLineWidth(2);
   quadLineFit1103->SetChisquare(2.249524e-20);
   quadLineFit1103->SetNDF(0);
   quadLineFit1103->GetXaxis()->SetLabelFont(42);
   quadLineFit1103->GetXaxis()->SetTitleOffset(1);
   quadLineFit1103->GetXaxis()->SetTitleFont(42);
   quadLineFit1103->GetYaxis()->SetLabelFont(42);
   quadLineFit1103->GetYaxis()->SetTitleFont(42);
   quadLineFit1103->SetParameter(0,-2.992783);
   quadLineFit1103->SetParError(0,0.05691197);
   quadLineFit1103->SetParLimits(0,0,0);
   quadLineFit1103->SetParameter(1,0.08305289);
   quadLineFit1103->SetParError(1,0.003142438);
   quadLineFit1103->SetParLimits(1,0,0);
   quadLineFit1103->Draw("same");
   
   Double_t -10.000000 ppm_fx1103[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1103[2] = {
   -0.1539779,
   -0.1210492};
   Double_t -10.000000 ppm_fex1103[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1103[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1103,-10.000000 ppm_fy1103,-10.000000 ppm_fex1103,-10.000000 ppm_fey1103);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1103 = new TH1F("Graph_mI10dO000000sPppm1103","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1103->SetMinimum(-0.1679366);
   Graph_mI10dO000000sPppm1103->SetMaximum(-0.1070905);
   Graph_mI10dO000000sPppm1103->SetDirectory(0);
   Graph_mI10dO000000sPppm1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1103->SetLineColor(ci);
   Graph_mI10dO000000sPppm1103->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1103->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1103->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1103->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1103->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1103->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1103->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1103);
   
   
   TF1 *quadLineFit1104 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1104->SetFillColor(19);
   quadLineFit1104->SetFillStyle(0);
   quadLineFit1104->SetLineColor(2);
   quadLineFit1104->SetLineWidth(2);
   quadLineFit1104->SetChisquare(1.598651e-21);
   quadLineFit1104->SetNDF(0);
   quadLineFit1104->GetXaxis()->SetLabelFont(42);
   quadLineFit1104->GetXaxis()->SetTitleOffset(1);
   quadLineFit1104->GetXaxis()->SetTitleFont(42);
   quadLineFit1104->GetYaxis()->SetLabelFont(42);
   quadLineFit1104->GetYaxis()->SetTitleFont(42);
   quadLineFit1104->SetParameter(0,-0.2856928);
   quadLineFit1104->SetParError(0,0.05691197);
   quadLineFit1104->SetParLimits(0,0,0);
   quadLineFit1104->SetParameter(1,0.00823218);
   quadLineFit1104->SetParError(1,0.003142438);
   quadLineFit1104->SetParLimits(1,0,0);
   quadLineFit1104->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1104);
   gre->Draw("p ");
   
   TF1 *quadLineFit1105 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1105->SetFillColor(19);
   quadLineFit1105->SetFillStyle(0);
   quadLineFit1105->SetLineColor(2);
   quadLineFit1105->SetLineWidth(2);
   quadLineFit1105->SetChisquare(1.598651e-21);
   quadLineFit1105->SetNDF(0);
   quadLineFit1105->GetXaxis()->SetLabelFont(42);
   quadLineFit1105->GetXaxis()->SetTitleOffset(1);
   quadLineFit1105->GetXaxis()->SetTitleFont(42);
   quadLineFit1105->GetYaxis()->SetLabelFont(42);
   quadLineFit1105->GetYaxis()->SetTitleFont(42);
   quadLineFit1105->SetParameter(0,-0.2856928);
   quadLineFit1105->SetParError(0,0.05691197);
   quadLineFit1105->SetParLimits(0,0,0);
   quadLineFit1105->SetParameter(1,0.00823218);
   quadLineFit1105->SetParError(1,0.003142438);
   quadLineFit1105->SetParLimits(1,0,0);
   quadLineFit1105->Draw("same");
   
   Double_t 10.000000 ppm_fx1105[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1105[2] = {
   1.35247,
   1.080629};
   Double_t 10.000000 ppm_fex1105[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1105[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,10.000000 ppm_fx1105,10.000000 ppm_fy1105,10.000000 ppm_fex1105,10.000000 ppm_fey1105);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1105 = new TH1F("Graph_10dO000000sPppm1105","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1105->SetMinimum(1.042779);
   Graph_10dO000000sPppm1105->SetMaximum(1.39032);
   Graph_10dO000000sPppm1105->SetDirectory(0);
   Graph_10dO000000sPppm1105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1105->SetLineColor(ci);
   Graph_10dO000000sPppm1105->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1105->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1105->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1105->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1105->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1105->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1105->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1105);
   
   
   TF1 *quadLineFit1106 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1106->SetFillColor(19);
   quadLineFit1106->SetFillStyle(0);
   quadLineFit1106->SetLineColor(3);
   quadLineFit1106->SetLineWidth(2);
   quadLineFit1106->SetChisquare(8.979867e-20);
   quadLineFit1106->SetNDF(0);
   quadLineFit1106->GetXaxis()->SetLabelFont(42);
   quadLineFit1106->GetXaxis()->SetTitleOffset(1);
   quadLineFit1106->GetXaxis()->SetTitleFont(42);
   quadLineFit1106->GetYaxis()->SetLabelFont(42);
   quadLineFit1106->GetYaxis()->SetTitleFont(42);
   quadLineFit1106->SetParameter(0,2.439835);
   quadLineFit1106->SetParError(0,0.05691197);
   quadLineFit1106->SetParLimits(0,0,0);
   quadLineFit1106->SetParameter(1,-0.06796031);
   quadLineFit1106->SetParError(1,0.003142438);
   quadLineFit1106->SetParLimits(1,0,0);
   quadLineFit1106->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1106);
   gre->Draw("p ");
   
   TF1 *quadLineFit1107 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1107->SetFillColor(19);
   quadLineFit1107->SetFillStyle(0);
   quadLineFit1107->SetLineColor(3);
   quadLineFit1107->SetLineWidth(2);
   quadLineFit1107->SetChisquare(8.979867e-20);
   quadLineFit1107->SetNDF(0);
   quadLineFit1107->GetXaxis()->SetLabelFont(42);
   quadLineFit1107->GetXaxis()->SetTitleOffset(1);
   quadLineFit1107->GetXaxis()->SetTitleFont(42);
   quadLineFit1107->GetYaxis()->SetLabelFont(42);
   quadLineFit1107->GetYaxis()->SetTitleFont(42);
   quadLineFit1107->SetParameter(0,2.439835);
   quadLineFit1107->SetParError(0,0.05691197);
   quadLineFit1107->SetParLimits(0,0,0);
   quadLineFit1107->SetParameter(1,-0.06796031);
   quadLineFit1107->SetParError(1,0.003142438);
   quadLineFit1107->SetParLimits(1,0,0);
   quadLineFit1107->Draw("same");
   
   Double_t 30.000000 ppm_fx1107[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1107[2] = {
   2.854929,
   2.279782};
   Double_t 30.000000 ppm_fex1107[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1107[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,30.000000 ppm_fx1107,30.000000 ppm_fy1107,30.000000 ppm_fex1107,30.000000 ppm_fey1107);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1107 = new TH1F("Graph_30dO000000sPppm1107","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1107->SetMinimum(2.211601);
   Graph_30dO000000sPppm1107->SetMaximum(2.923109);
   Graph_30dO000000sPppm1107->SetDirectory(0);
   Graph_30dO000000sPppm1107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1107->SetLineColor(ci);
   Graph_30dO000000sPppm1107->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1107->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1107->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1107->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1107->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1107->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1107->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1107);
   
   
   TF1 *quadLineFit1108 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1108->SetFillColor(19);
   quadLineFit1108->SetFillStyle(0);
   quadLineFit1108->SetLineColor(4);
   quadLineFit1108->SetLineWidth(2);
   quadLineFit1108->SetChisquare(3.038875e-19);
   quadLineFit1108->SetNDF(0);
   quadLineFit1108->GetXaxis()->SetLabelFont(42);
   quadLineFit1108->GetXaxis()->SetTitleOffset(1);
   quadLineFit1108->GetXaxis()->SetTitleFont(42);
   quadLineFit1108->GetYaxis()->SetLabelFont(42);
   quadLineFit1108->GetYaxis()->SetTitleFont(42);
   quadLineFit1108->SetParameter(0,5.155516);
   quadLineFit1108->SetParError(0,0.05691197);
   quadLineFit1108->SetParLimits(0,0,0);
   quadLineFit1108->SetParameter(1,-0.1437867);
   quadLineFit1108->SetParError(1,0.003142438);
   quadLineFit1108->SetParLimits(1,0,0);
   quadLineFit1108->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1108);
   gre->Draw("p ");
   
   TF1 *quadLineFit1109 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1109->SetFillColor(19);
   quadLineFit1109->SetFillStyle(0);
   quadLineFit1109->SetLineColor(4);
   quadLineFit1109->SetLineWidth(2);
   quadLineFit1109->SetChisquare(3.038875e-19);
   quadLineFit1109->SetNDF(0);
   quadLineFit1109->GetXaxis()->SetLabelFont(42);
   quadLineFit1109->GetXaxis()->SetTitleOffset(1);
   quadLineFit1109->GetXaxis()->SetTitleFont(42);
   quadLineFit1109->GetYaxis()->SetLabelFont(42);
   quadLineFit1109->GetYaxis()->SetTitleFont(42);
   quadLineFit1109->SetParameter(0,5.155516);
   quadLineFit1109->SetParError(0,0.05691197);
   quadLineFit1109->SetParLimits(0,0,0);
   quadLineFit1109->SetParameter(1,-0.1437867);
   quadLineFit1109->SetParError(1,0.003142438);
   quadLineFit1109->SetParLimits(1,0,0);
   quadLineFit1109->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   16 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","8.83e+199 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.96e+26 ppm","lpf");
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
