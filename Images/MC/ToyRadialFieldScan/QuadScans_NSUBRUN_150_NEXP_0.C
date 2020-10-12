void QuadScans_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 12:24:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1051[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1051[2] = {
   -1.659194,
   -1.319947};
   Double_t -30.000000 ppm_fex1051[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1051[2] = {
   0.0120478,
   0.0120478};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1051,-30.000000 ppm_fy1051,-30.000000 ppm_fex1051,-30.000000 ppm_fey1051);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1051 = new TH1F("Graph_mI30dO000000sPppm1051","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1051->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1051->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1051->SetDirectory(0);
   Graph_mI30dO000000sPppm1051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1051->SetLineColor(ci);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1051->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1051->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1051);
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(2.262922e-18);
   quadLineFit1052->SetNDF(0);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,-3.016185);
   quadLineFit1052->SetParError(0,0.07714354);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,0.08481193);
   quadLineFit1052->SetParError(1,0.004259539);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("ap");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(2.262922e-18);
   quadLineFit1053->SetNDF(0);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,-3.016185);
   quadLineFit1053->SetParError(0,0.07714354);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,0.08481193);
   quadLineFit1053->SetParError(1,0.004259539);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
   Double_t -10.000000 ppm_fx1053[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1053[2] = {
   -0.1394564,
   -0.142577};
   Double_t -10.000000 ppm_fex1053[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1053[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1053,-10.000000 ppm_fy1053,-10.000000 ppm_fex1053,-10.000000 ppm_fey1053);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1053 = new TH1F("Graph_mI10dO000000sPppm1053","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1053->SetMinimum(-0.1573464);
   Graph_mI10dO000000sPppm1053->SetMaximum(-0.1246869);
   Graph_mI10dO000000sPppm1053->SetDirectory(0);
   Graph_mI10dO000000sPppm1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1053->SetLineColor(ci);
   Graph_mI10dO000000sPppm1053->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1053->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1053->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1053->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1053->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1053->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1053->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1053);
   
   
   TF1 *quadLineFit1054 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1054->SetFillColor(19);
   quadLineFit1054->SetFillStyle(0);
   quadLineFit1054->SetLineColor(2);
   quadLineFit1054->SetLineWidth(2);
   quadLineFit1054->SetChisquare(6.1776e-21);
   quadLineFit1054->SetNDF(0);
   quadLineFit1054->GetXaxis()->SetLabelFont(42);
   quadLineFit1054->GetXaxis()->SetTitleOffset(1);
   quadLineFit1054->GetXaxis()->SetTitleFont(42);
   quadLineFit1054->GetYaxis()->SetLabelFont(42);
   quadLineFit1054->GetYaxis()->SetTitleFont(42);
   quadLineFit1054->SetParameter(0,-0.1269739);
   quadLineFit1054->SetParError(0,0.07714354);
   quadLineFit1054->SetParLimits(0,0,0);
   quadLineFit1054->SetParameter(1,-0.0007801516);
   quadLineFit1054->SetParError(1,0.004259539);
   quadLineFit1054->SetParLimits(1,0,0);
   quadLineFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1054);
   gre->Draw("p ");
   
   TF1 *quadLineFit1055 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1055->SetFillColor(19);
   quadLineFit1055->SetFillStyle(0);
   quadLineFit1055->SetLineColor(2);
   quadLineFit1055->SetLineWidth(2);
   quadLineFit1055->SetChisquare(6.1776e-21);
   quadLineFit1055->SetNDF(0);
   quadLineFit1055->GetXaxis()->SetLabelFont(42);
   quadLineFit1055->GetXaxis()->SetTitleOffset(1);
   quadLineFit1055->GetXaxis()->SetTitleFont(42);
   quadLineFit1055->GetYaxis()->SetLabelFont(42);
   quadLineFit1055->GetYaxis()->SetTitleFont(42);
   quadLineFit1055->SetParameter(0,-0.1269739);
   quadLineFit1055->SetParError(0,0.07714354);
   quadLineFit1055->SetParLimits(0,0,0);
   quadLineFit1055->SetParameter(1,-0.0007801516);
   quadLineFit1055->SetParError(1,0.004259539);
   quadLineFit1055->SetParLimits(1,0,0);
   quadLineFit1055->Draw("same");
   
   Double_t 10.000000 ppm_fx1055[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1055[2] = {
   1.364098,
   1.080547};
   Double_t 10.000000 ppm_fex1055[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1055[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,10.000000 ppm_fx1055,10.000000 ppm_fy1055,10.000000 ppm_fex1055,10.000000 ppm_fey1055);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1055 = new TH1F("Graph_10dO000000sPppm1055","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1055->SetMinimum(1.037734);
   Graph_10dO000000sPppm1055->SetMaximum(1.40691);
   Graph_10dO000000sPppm1055->SetDirectory(0);
   Graph_10dO000000sPppm1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1055->SetLineColor(ci);
   Graph_10dO000000sPppm1055->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1055->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1055->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1055->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1055->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1055->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1055->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1055);
   
   
   TF1 *quadLineFit1056 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1056->SetFillColor(19);
   quadLineFit1056->SetFillStyle(0);
   quadLineFit1056->SetLineColor(3);
   quadLineFit1056->SetLineWidth(2);
   quadLineFit1056->SetChisquare(1.680804e-21);
   quadLineFit1056->SetNDF(0);
   quadLineFit1056->GetXaxis()->SetLabelFont(42);
   quadLineFit1056->GetXaxis()->SetTitleOffset(1);
   quadLineFit1056->GetXaxis()->SetTitleFont(42);
   quadLineFit1056->GetYaxis()->SetLabelFont(42);
   quadLineFit1056->GetYaxis()->SetTitleFont(42);
   quadLineFit1056->SetParameter(0,2.498303);
   quadLineFit1056->SetParError(0,0.07714354);
   quadLineFit1056->SetParLimits(0,0,0);
   quadLineFit1056->SetParameter(1,-0.07088783);
   quadLineFit1056->SetParError(1,0.004259539);
   quadLineFit1056->SetParLimits(1,0,0);
   quadLineFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1056);
   gre->Draw("p ");
   
   TF1 *quadLineFit1057 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1057->SetFillColor(19);
   quadLineFit1057->SetFillStyle(0);
   quadLineFit1057->SetLineColor(3);
   quadLineFit1057->SetLineWidth(2);
   quadLineFit1057->SetChisquare(1.680804e-21);
   quadLineFit1057->SetNDF(0);
   quadLineFit1057->GetXaxis()->SetLabelFont(42);
   quadLineFit1057->GetXaxis()->SetTitleOffset(1);
   quadLineFit1057->GetXaxis()->SetTitleFont(42);
   quadLineFit1057->GetYaxis()->SetLabelFont(42);
   quadLineFit1057->GetYaxis()->SetTitleFont(42);
   quadLineFit1057->SetParameter(0,2.498303);
   quadLineFit1057->SetParError(0,0.07714354);
   quadLineFit1057->SetParLimits(0,0,0);
   quadLineFit1057->SetParameter(1,-0.07088783);
   quadLineFit1057->SetParError(1,0.004259539);
   quadLineFit1057->SetParLimits(1,0,0);
   quadLineFit1057->Draw("same");
   
   Double_t 30.000000 ppm_fx1057[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1057[2] = {
   2.849411,
   2.295966};
   Double_t 30.000000 ppm_fex1057[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1057[2] = {
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(2,30.000000 ppm_fx1057,30.000000 ppm_fy1057,30.000000 ppm_fex1057,30.000000 ppm_fey1057);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1057 = new TH1F("Graph_30dO000000sPppm1057","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1057->SetMinimum(2.226164);
   Graph_30dO000000sPppm1057->SetMaximum(2.919213);
   Graph_30dO000000sPppm1057->SetDirectory(0);
   Graph_30dO000000sPppm1057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1057->SetLineColor(ci);
   Graph_30dO000000sPppm1057->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1057->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1057->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1057->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1057->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1057->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1057->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1057);
   
   
   TF1 *quadLineFit1058 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1058->SetFillColor(19);
   quadLineFit1058->SetFillStyle(0);
   quadLineFit1058->SetLineColor(4);
   quadLineFit1058->SetLineWidth(2);
   quadLineFit1058->SetChisquare(5.07869e-22);
   quadLineFit1058->SetNDF(0);
   quadLineFit1058->GetXaxis()->SetLabelFont(42);
   quadLineFit1058->GetXaxis()->SetTitleOffset(1);
   quadLineFit1058->GetXaxis()->SetTitleFont(42);
   quadLineFit1058->GetYaxis()->SetLabelFont(42);
   quadLineFit1058->GetYaxis()->SetTitleFont(42);
   quadLineFit1058->SetParameter(0,5.063192);
   quadLineFit1058->SetParError(0,0.07714354);
   quadLineFit1058->SetParLimits(0,0,0);
   quadLineFit1058->SetParameter(1,-0.1383613);
   quadLineFit1058->SetParError(1,0.004259539);
   quadLineFit1058->SetParLimits(1,0,0);
   quadLineFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1058);
   gre->Draw("p ");
   
   TF1 *quadLineFit1059 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1059->SetFillColor(19);
   quadLineFit1059->SetFillStyle(0);
   quadLineFit1059->SetLineColor(4);
   quadLineFit1059->SetLineWidth(2);
   quadLineFit1059->SetChisquare(5.07869e-22);
   quadLineFit1059->SetNDF(0);
   quadLineFit1059->GetXaxis()->SetLabelFont(42);
   quadLineFit1059->GetXaxis()->SetTitleOffset(1);
   quadLineFit1059->GetXaxis()->SetTitleFont(42);
   quadLineFit1059->GetYaxis()->SetLabelFont(42);
   quadLineFit1059->GetYaxis()->SetTitleFont(42);
   quadLineFit1059->SetParameter(0,5.063192);
   quadLineFit1059->SetParError(0,0.07714354);
   quadLineFit1059->SetParLimits(0,0,0);
   quadLineFit1059->SetParameter(1,-0.1383613);
   quadLineFit1059->SetParError(1,0.004259539);
   quadLineFit1059->SetParLimits(1,0,0);
   quadLineFit1059->Draw("same");
   
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
