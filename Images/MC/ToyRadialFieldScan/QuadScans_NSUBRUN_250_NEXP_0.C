void QuadScans_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct 14 22:34:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1109[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1109[2] = {
   -1.65978,
   -1.330211};
   Double_t -30.000000 ppm_fex1109[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1109[2] = {
   0.009322777,
   0.009322777};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1109,-30.000000 ppm_fy1109,-30.000000 ppm_fex1109,-30.000000 ppm_fey1109);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1109 = new TH1F("Graph_mI30dO000000sPppm1109","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1109->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1109->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1109->SetDirectory(0);
   Graph_mI30dO000000sPppm1109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1109->SetLineColor(ci);
   Graph_mI30dO000000sPppm1109->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1109->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1109->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1109->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1109->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1109->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1109->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1109->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1109->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1109->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1109->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1109->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1109->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1109->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1109->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1109);
   
   
   TF1 *quadLineFit1110 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1110->SetFillColor(19);
   quadLineFit1110->SetFillStyle(0);
   quadLineFit1110->SetLineWidth(2);
   quadLineFit1110->SetChisquare(1.435157e-19);
   quadLineFit1110->SetNDF(0);
   quadLineFit1110->GetXaxis()->SetLabelFont(42);
   quadLineFit1110->GetXaxis()->SetTitleOffset(1);
   quadLineFit1110->GetXaxis()->SetTitleFont(42);
   quadLineFit1110->GetYaxis()->SetLabelFont(42);
   quadLineFit1110->GetYaxis()->SetTitleFont(42);
   quadLineFit1110->SetParameter(0,-2.978055);
   quadLineFit1110->SetParError(0,0.0596949);
   quadLineFit1110->SetParLimits(0,0,0);
   quadLineFit1110->SetParameter(1,0.08239224);
   quadLineFit1110->SetParError(1,0.003296099);
   quadLineFit1110->SetParLimits(1,0,0);
   quadLineFit1110->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1110);
   gre->Draw("ap");
   
   TF1 *quadLineFit1111 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1111->SetFillColor(19);
   quadLineFit1111->SetFillStyle(0);
   quadLineFit1111->SetLineWidth(2);
   quadLineFit1111->SetChisquare(1.435157e-19);
   quadLineFit1111->SetNDF(0);
   quadLineFit1111->GetXaxis()->SetLabelFont(42);
   quadLineFit1111->GetXaxis()->SetTitleOffset(1);
   quadLineFit1111->GetXaxis()->SetTitleFont(42);
   quadLineFit1111->GetYaxis()->SetLabelFont(42);
   quadLineFit1111->GetYaxis()->SetTitleFont(42);
   quadLineFit1111->SetParameter(0,-2.978055);
   quadLineFit1111->SetParError(0,0.0596949);
   quadLineFit1111->SetParLimits(0,0,0);
   quadLineFit1111->SetParameter(1,0.08239224);
   quadLineFit1111->SetParError(1,0.003296099);
   quadLineFit1111->SetParLimits(1,0,0);
   quadLineFit1111->Draw("same");
   
   Double_t -10.000000 ppm_fx1111[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1111[2] = {
   -0.1483953,
   -0.1305703};
   Double_t -10.000000 ppm_fex1111[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1111[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1111,-10.000000 ppm_fy1111,-10.000000 ppm_fex1111,-10.000000 ppm_fey1111);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1111 = new TH1F("Graph_mI10dO000000sPppm1111","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1111->SetMinimum(-0.1613651);
   Graph_mI10dO000000sPppm1111->SetMaximum(-0.1176005);
   Graph_mI10dO000000sPppm1111->SetDirectory(0);
   Graph_mI10dO000000sPppm1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1111->SetLineColor(ci);
   Graph_mI10dO000000sPppm1111->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1111->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1111->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1111->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1111->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1111->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1111->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1111);
   
   
   TF1 *quadLineFit1112 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1112->SetFillColor(19);
   quadLineFit1112->SetFillStyle(0);
   quadLineFit1112->SetLineColor(2);
   quadLineFit1112->SetLineWidth(2);
   quadLineFit1112->SetChisquare(7.824105e-22);
   quadLineFit1112->SetNDF(0);
   quadLineFit1112->GetXaxis()->SetLabelFont(42);
   quadLineFit1112->GetXaxis()->SetTitleOffset(1);
   quadLineFit1112->GetXaxis()->SetTitleFont(42);
   quadLineFit1112->GetYaxis()->SetLabelFont(42);
   quadLineFit1112->GetYaxis()->SetTitleFont(42);
   quadLineFit1112->SetParameter(0,-0.219695);
   quadLineFit1112->SetParError(0,0.0596949);
   quadLineFit1112->SetParLimits(0,0,0);
   quadLineFit1112->SetParameter(1,0.004456234);
   quadLineFit1112->SetParError(1,0.003296099);
   quadLineFit1112->SetParLimits(1,0,0);
   quadLineFit1112->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1112);
   gre->Draw("p ");
   
   TF1 *quadLineFit1113 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1113->SetFillColor(19);
   quadLineFit1113->SetFillStyle(0);
   quadLineFit1113->SetLineColor(2);
   quadLineFit1113->SetLineWidth(2);
   quadLineFit1113->SetChisquare(7.824105e-22);
   quadLineFit1113->SetNDF(0);
   quadLineFit1113->GetXaxis()->SetLabelFont(42);
   quadLineFit1113->GetXaxis()->SetTitleOffset(1);
   quadLineFit1113->GetXaxis()->SetTitleFont(42);
   quadLineFit1113->GetYaxis()->SetLabelFont(42);
   quadLineFit1113->GetYaxis()->SetTitleFont(42);
   quadLineFit1113->SetParameter(0,-0.219695);
   quadLineFit1113->SetParError(0,0.0596949);
   quadLineFit1113->SetParLimits(0,0,0);
   quadLineFit1113->SetParameter(1,0.004456234);
   quadLineFit1113->SetParError(1,0.003296099);
   quadLineFit1113->SetParLimits(1,0,0);
   quadLineFit1113->Draw("same");
   
   Double_t 10.000000 ppm_fx1113[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1113[2] = {
   1.366925,
   1.074892};
   Double_t 10.000000 ppm_fex1113[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1113[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,10.000000 ppm_fx1113,10.000000 ppm_fy1113,10.000000 ppm_fex1113,10.000000 ppm_fey1113);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1113 = new TH1F("Graph_10dO000000sPppm1113","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1113->SetMinimum(1.034502);
   Graph_10dO000000sPppm1113->SetMaximum(1.407315);
   Graph_10dO000000sPppm1113->SetDirectory(0);
   Graph_10dO000000sPppm1113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1113->SetLineColor(ci);
   Graph_10dO000000sPppm1113->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1113->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1113->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1113->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1113->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1113->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1113->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1113);
   
   
   TF1 *quadLineFit1114 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1114->SetFillColor(19);
   quadLineFit1114->SetFillStyle(0);
   quadLineFit1114->SetLineColor(3);
   quadLineFit1114->SetLineWidth(2);
   quadLineFit1114->SetChisquare(5.058735e-20);
   quadLineFit1114->SetNDF(0);
   quadLineFit1114->GetXaxis()->SetLabelFont(42);
   quadLineFit1114->GetXaxis()->SetTitleOffset(1);
   quadLineFit1114->GetXaxis()->SetTitleFont(42);
   quadLineFit1114->GetYaxis()->SetLabelFont(42);
   quadLineFit1114->GetYaxis()->SetTitleFont(42);
   quadLineFit1114->SetParameter(0,2.535055);
   quadLineFit1114->SetParError(0,0.0596949);
   quadLineFit1114->SetParLimits(0,0,0);
   quadLineFit1114->SetParameter(1,-0.07300816);
   quadLineFit1114->SetParError(1,0.003296099);
   quadLineFit1114->SetParLimits(1,0,0);
   quadLineFit1114->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1114);
   gre->Draw("p ");
   
   TF1 *quadLineFit1115 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1115->SetFillColor(19);
   quadLineFit1115->SetFillStyle(0);
   quadLineFit1115->SetLineColor(3);
   quadLineFit1115->SetLineWidth(2);
   quadLineFit1115->SetChisquare(5.058735e-20);
   quadLineFit1115->SetNDF(0);
   quadLineFit1115->GetXaxis()->SetLabelFont(42);
   quadLineFit1115->GetXaxis()->SetTitleOffset(1);
   quadLineFit1115->GetXaxis()->SetTitleFont(42);
   quadLineFit1115->GetYaxis()->SetLabelFont(42);
   quadLineFit1115->GetYaxis()->SetTitleFont(42);
   quadLineFit1115->SetParameter(0,2.535055);
   quadLineFit1115->SetParError(0,0.0596949);
   quadLineFit1115->SetParLimits(0,0,0);
   quadLineFit1115->SetParameter(1,-0.07300816);
   quadLineFit1115->SetParError(1,0.003296099);
   quadLineFit1115->SetParLimits(1,0,0);
   quadLineFit1115->Draw("same");
   
   Double_t 30.000000 ppm_fx1115[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1115[2] = {
   2.85069,
   2.296537};
   Double_t 30.000000 ppm_fex1115[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1115[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,30.000000 ppm_fx1115,30.000000 ppm_fy1115,30.000000 ppm_fex1115,30.000000 ppm_fey1115);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1115 = new TH1F("Graph_30dO000000sPppm1115","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1115->SetMinimum(2.229934);
   Graph_30dO000000sPppm1115->SetMaximum(2.917293);
   Graph_30dO000000sPppm1115->SetDirectory(0);
   Graph_30dO000000sPppm1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1115->SetLineColor(ci);
   Graph_30dO000000sPppm1115->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1115->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1115->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1115->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1115->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1115->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1115->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1115);
   
   
   TF1 *quadLineFit1116 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1116->SetFillColor(19);
   quadLineFit1116->SetFillStyle(0);
   quadLineFit1116->SetLineColor(4);
   quadLineFit1116->SetLineWidth(2);
   quadLineFit1116->SetChisquare(5.002889e-20);
   quadLineFit1116->SetNDF(0);
   quadLineFit1116->GetXaxis()->SetLabelFont(42);
   quadLineFit1116->GetXaxis()->SetTitleOffset(1);
   quadLineFit1116->GetXaxis()->SetTitleFont(42);
   quadLineFit1116->GetYaxis()->SetLabelFont(42);
   quadLineFit1116->GetYaxis()->SetTitleFont(42);
   quadLineFit1116->SetParameter(0,5.067303);
   quadLineFit1116->SetParError(0,0.0596949);
   quadLineFit1116->SetParLimits(0,0,0);
   quadLineFit1116->SetParameter(1,-0.1385383);
   quadLineFit1116->SetParError(1,0.003296099);
   quadLineFit1116->SetParLimits(1,0,0);
   quadLineFit1116->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1116);
   gre->Draw("p ");
   
   TF1 *quadLineFit1117 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1117->SetFillColor(19);
   quadLineFit1117->SetFillStyle(0);
   quadLineFit1117->SetLineColor(4);
   quadLineFit1117->SetLineWidth(2);
   quadLineFit1117->SetChisquare(5.002889e-20);
   quadLineFit1117->SetNDF(0);
   quadLineFit1117->GetXaxis()->SetLabelFont(42);
   quadLineFit1117->GetXaxis()->SetTitleOffset(1);
   quadLineFit1117->GetXaxis()->SetTitleFont(42);
   quadLineFit1117->GetYaxis()->SetLabelFont(42);
   quadLineFit1117->GetYaxis()->SetTitleFont(42);
   quadLineFit1117->SetParameter(0,5.067303);
   quadLineFit1117->SetParError(0,0.0596949);
   quadLineFit1117->SetParLimits(0,0,0);
   quadLineFit1117->SetParameter(1,-0.1385383);
   quadLineFit1117->SetParError(1,0.003296099);
   quadLineFit1117->SetParLimits(1,0,0);
   quadLineFit1117->Draw("same");
   
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
