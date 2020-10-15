void QuadScans_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:49:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1121[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1121[3] = {
   -1.64511,
   -1.478908,
   -1.32369};
   Double_t -30.000000 ppm_fex1121[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1121[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1121,-30.000000 ppm_fy1121,-30.000000 ppm_fex1121,-30.000000 ppm_fey1121);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1121 = new TH1F("Graph_mI30dO000000sPppm1121","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1121->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1121->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1121->SetDirectory(0);
   Graph_mI30dO000000sPppm1121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1121->SetLineColor(ci);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1121->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1121->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1121->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1121->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1121);
   
   
   TF1 *quadLineFit1122 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1122->SetFillColor(19);
   quadLineFit1122->SetFillStyle(0);
   quadLineFit1122->SetLineWidth(2);
   quadLineFit1122->SetChisquare(0.2545564);
   quadLineFit1122->SetNDF(1);
   quadLineFit1122->GetXaxis()->SetLabelFont(42);
   quadLineFit1122->GetXaxis()->SetTitleOffset(1);
   quadLineFit1122->GetXaxis()->SetTitleFont(42);
   quadLineFit1122->GetYaxis()->SetLabelFont(42);
   quadLineFit1122->GetYaxis()->SetTitleFont(42);
   quadLineFit1122->SetParameter(0,-2.928961);
   quadLineFit1122->SetParError(0,0.05679617);
   quadLineFit1122->SetParLimits(0,0,0);
   quadLineFit1122->SetParameter(1,0.08035511);
   quadLineFit1122->SetParError(1,0.003142438);
   quadLineFit1122->SetParLimits(1,0,0);
   quadLineFit1122->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1122);
   gre->Draw("ap");
   
   TF1 *quadLineFit1123 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1123->SetFillColor(19);
   quadLineFit1123->SetFillStyle(0);
   quadLineFit1123->SetLineWidth(2);
   quadLineFit1123->SetChisquare(0.2545564);
   quadLineFit1123->SetNDF(1);
   quadLineFit1123->GetXaxis()->SetLabelFont(42);
   quadLineFit1123->GetXaxis()->SetTitleOffset(1);
   quadLineFit1123->GetXaxis()->SetTitleFont(42);
   quadLineFit1123->GetYaxis()->SetLabelFont(42);
   quadLineFit1123->GetYaxis()->SetTitleFont(42);
   quadLineFit1123->SetParameter(0,-2.928961);
   quadLineFit1123->SetParError(0,0.05679617);
   quadLineFit1123->SetParLimits(0,0,0);
   quadLineFit1123->SetParameter(1,0.08035511);
   quadLineFit1123->SetParError(1,0.003142438);
   quadLineFit1123->SetParLimits(1,0,0);
   quadLineFit1123->Draw("same");
   
   Double_t -10.000000 ppm_fx1123[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1123[3] = {
   -0.1362577,
   -0.1453757,
   -0.1199809};
   Double_t -10.000000 ppm_fex1123[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1123[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1123,-10.000000 ppm_fy1123,-10.000000 ppm_fex1123,-10.000000 ppm_fey1123);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1123 = new TH1F("Graph_mI10dO000000sPppm1123","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1123->SetMinimum(-0.158581);
   Graph_mI10dO000000sPppm1123->SetMaximum(-0.1067756);
   Graph_mI10dO000000sPppm1123->SetDirectory(0);
   Graph_mI10dO000000sPppm1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1123->SetLineColor(ci);
   Graph_mI10dO000000sPppm1123->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1123->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1123->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1123->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1123->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1123->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1123->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1123);
   
   
   TF1 *quadLineFit1124 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1124->SetFillColor(19);
   quadLineFit1124->SetFillStyle(0);
   quadLineFit1124->SetLineColor(2);
   quadLineFit1124->SetLineWidth(2);
   quadLineFit1124->SetChisquare(2.512967);
   quadLineFit1124->SetNDF(1);
   quadLineFit1124->GetXaxis()->SetLabelFont(42);
   quadLineFit1124->GetXaxis()->SetTitleOffset(1);
   quadLineFit1124->GetXaxis()->SetTitleFont(42);
   quadLineFit1124->GetYaxis()->SetLabelFont(42);
   quadLineFit1124->GetYaxis()->SetTitleFont(42);
   quadLineFit1124->SetParameter(0,-0.207117);
   quadLineFit1124->SetParError(0,0.05679627);
   quadLineFit1124->SetParLimits(0,0,0);
   quadLineFit1124->SetParameter(1,0.0040692);
   quadLineFit1124->SetParError(1,0.003142443);
   quadLineFit1124->SetParLimits(1,0,0);
   quadLineFit1124->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1124);
   gre->Draw("p ");
   
   TF1 *quadLineFit1125 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1125->SetFillColor(19);
   quadLineFit1125->SetFillStyle(0);
   quadLineFit1125->SetLineColor(2);
   quadLineFit1125->SetLineWidth(2);
   quadLineFit1125->SetChisquare(2.512967);
   quadLineFit1125->SetNDF(1);
   quadLineFit1125->GetXaxis()->SetLabelFont(42);
   quadLineFit1125->GetXaxis()->SetTitleOffset(1);
   quadLineFit1125->GetXaxis()->SetTitleFont(42);
   quadLineFit1125->GetYaxis()->SetLabelFont(42);
   quadLineFit1125->GetYaxis()->SetTitleFont(42);
   quadLineFit1125->SetParameter(0,-0.207117);
   quadLineFit1125->SetParError(0,0.05679627);
   quadLineFit1125->SetParLimits(0,0,0);
   quadLineFit1125->SetParameter(1,0.0040692);
   quadLineFit1125->SetParError(1,0.003142443);
   quadLineFit1125->SetParLimits(1,0,0);
   quadLineFit1125->Draw("same");
   
   Double_t 10.000000 ppm_fx1125[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1125[3] = {
   1.331306,
   1.197638,
   1.090006};
   Double_t 10.000000 ppm_fex1125[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1125[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,10.000000 ppm_fx1125,10.000000 ppm_fy1125,10.000000 ppm_fex1125,10.000000 ppm_fey1125);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1125 = new TH1F("Graph_10dO000000sPppm1125","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1125->SetMinimum(1.05521);
   Graph_10dO000000sPppm1125->SetMaximum(1.366102);
   Graph_10dO000000sPppm1125->SetDirectory(0);
   Graph_10dO000000sPppm1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1125->SetLineColor(ci);
   Graph_10dO000000sPppm1125->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1125->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1125->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1125->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1125->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1125->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1125->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1125);
   
   
   TF1 *quadLineFit1126 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1126->SetFillColor(19);
   quadLineFit1126->SetFillStyle(0);
   quadLineFit1126->SetLineColor(3);
   quadLineFit1126->SetLineWidth(2);
   quadLineFit1126->SetChisquare(1.43012);
   quadLineFit1126->SetNDF(1);
   quadLineFit1126->GetXaxis()->SetLabelFont(42);
   quadLineFit1126->GetXaxis()->SetTitleOffset(1);
   quadLineFit1126->GetXaxis()->SetTitleFont(42);
   quadLineFit1126->GetYaxis()->SetLabelFont(42);
   quadLineFit1126->GetYaxis()->SetTitleFont(42);
   quadLineFit1126->SetParameter(0,2.292168);
   quadLineFit1126->SetParError(0,0.05679475);
   quadLineFit1126->SetParLimits(0,0,0);
   quadLineFit1126->SetParameter(1,-0.06032509);
   quadLineFit1126->SetParError(1,0.003142358);
   quadLineFit1126->SetParLimits(1,0,0);
   quadLineFit1126->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1126);
   gre->Draw("p ");
   
   TF1 *quadLineFit1127 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1127->SetFillColor(19);
   quadLineFit1127->SetFillStyle(0);
   quadLineFit1127->SetLineColor(3);
   quadLineFit1127->SetLineWidth(2);
   quadLineFit1127->SetChisquare(1.43012);
   quadLineFit1127->SetNDF(1);
   quadLineFit1127->GetXaxis()->SetLabelFont(42);
   quadLineFit1127->GetXaxis()->SetTitleOffset(1);
   quadLineFit1127->GetXaxis()->SetTitleFont(42);
   quadLineFit1127->GetYaxis()->SetLabelFont(42);
   quadLineFit1127->GetYaxis()->SetTitleFont(42);
   quadLineFit1127->SetParameter(0,2.292168);
   quadLineFit1127->SetParError(0,0.05679475);
   quadLineFit1127->SetParLimits(0,0,0);
   quadLineFit1127->SetParameter(1,-0.06032509);
   quadLineFit1127->SetParError(1,0.003142358);
   quadLineFit1127->SetParLimits(1,0,0);
   quadLineFit1127->Draw("same");
   
   Double_t 30.000000 ppm_fx1127[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1127[3] = {
   2.857063,
   2.534401,
   2.292689};
   Double_t 30.000000 ppm_fex1127[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1127[3] = {
   0.008888156,
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(3,30.000000 ppm_fx1127,30.000000 ppm_fy1127,30.000000 ppm_fex1127,30.000000 ppm_fey1127);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1127 = new TH1F("Graph_30dO000000sPppm1127","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1127->SetMinimum(2.225586);
   Graph_30dO000000sPppm1127->SetMaximum(2.924166);
   Graph_30dO000000sPppm1127->SetDirectory(0);
   Graph_30dO000000sPppm1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1127->SetLineColor(ci);
   Graph_30dO000000sPppm1127->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1127->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1127->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1127->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1127->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1127->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1127->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1127);
   
   
   TF1 *quadLineFit1128 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1128->SetFillColor(19);
   quadLineFit1128->SetFillStyle(0);
   quadLineFit1128->SetLineColor(4);
   quadLineFit1128->SetLineWidth(2);
   quadLineFit1128->SetChisquare(13.82441);
   quadLineFit1128->SetNDF(1);
   quadLineFit1128->GetXaxis()->SetLabelFont(42);
   quadLineFit1128->GetXaxis()->SetTitleOffset(1);
   quadLineFit1128->GetXaxis()->SetTitleFont(42);
   quadLineFit1128->GetYaxis()->SetLabelFont(42);
   quadLineFit1128->GetYaxis()->SetTitleFont(42);
   quadLineFit1128->SetParameter(0,5.101065);
   quadLineFit1128->SetParError(0,0.05679613);
   quadLineFit1128->SetParLimits(0,0,0);
   quadLineFit1128->SetParameter(1,-0.1410934);
   quadLineFit1128->SetParError(1,0.003142435);
   quadLineFit1128->SetParLimits(1,0,0);
   quadLineFit1128->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1128);
   gre->Draw("p ");
   
   TF1 *quadLineFit1129 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1129->SetFillColor(19);
   quadLineFit1129->SetFillStyle(0);
   quadLineFit1129->SetLineColor(4);
   quadLineFit1129->SetLineWidth(2);
   quadLineFit1129->SetChisquare(13.82441);
   quadLineFit1129->SetNDF(1);
   quadLineFit1129->GetXaxis()->SetLabelFont(42);
   quadLineFit1129->GetXaxis()->SetTitleOffset(1);
   quadLineFit1129->GetXaxis()->SetTitleFont(42);
   quadLineFit1129->GetYaxis()->SetLabelFont(42);
   quadLineFit1129->GetYaxis()->SetTitleFont(42);
   quadLineFit1129->SetParameter(0,5.101065);
   quadLineFit1129->SetParError(0,0.05679613);
   quadLineFit1129->SetParLimits(0,0,0);
   quadLineFit1129->SetParameter(1,-0.1410934);
   quadLineFit1129->SetParError(1,0.003142435);
   quadLineFit1129->SetParLimits(1,0,0);
   quadLineFit1129->Draw("same");
   
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
