void QuadScans_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1011[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1011[3] = {
   -1.635278,
   -1.477114,
   -1.307099};
   Double_t -30.000000 ppm_fex1011[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1011[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1011,-30.000000 ppm_fy1011,-30.000000 ppm_fex1011,-30.000000 ppm_fey1011);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1011 = new TH1F("Graph_mI30dO000000sPppm1011","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1011->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1011->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1011->SetDirectory(0);
   Graph_mI30dO000000sPppm1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1011->SetLineColor(ci);
   Graph_mI30dO000000sPppm1011->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1011->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1011->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1011->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1011->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1011->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1011->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1011->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1011->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1011->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1011->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1011->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1011->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1011->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1011);
   
   
   TF1 *quadLineFit1012 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1012->SetFillColor(19);
   quadLineFit1012->SetFillStyle(0);
   quadLineFit1012->SetLineWidth(2);
   quadLineFit1012->SetChisquare(0.05441999);
   quadLineFit1012->SetNDF(1);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,-2.949971);
   quadLineFit1012->SetParError(0,0.1325341);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,0.08204483);
   quadLineFit1012->SetParError(1,0.007332894);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("ap");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->SetChisquare(0.05441999);
   quadLineFit1013->SetNDF(1);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,-2.949971);
   quadLineFit1013->SetParError(0,0.1325341);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,0.08204483);
   quadLineFit1013->SetParError(1,0.007332894);
   quadLineFit1013->SetParLimits(1,0,0);
   quadLineFit1013->Draw("same");
   
   Double_t 30.000000 ppm_fx1013[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1013[3] = {
   2.864408,
   2.550305,
   2.259605};
   Double_t 30.000000 ppm_fex1013[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1013[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,30.000000 ppm_fx1013,30.000000 ppm_fy1013,30.000000 ppm_fex1013,30.000000 ppm_fey1013);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1013 = new TH1F("Graph_30dO000000sPppm1013","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1013->SetMinimum(2.174237);
   Graph_30dO000000sPppm1013->SetMaximum(2.949777);
   Graph_30dO000000sPppm1013->SetDirectory(0);
   Graph_30dO000000sPppm1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1013->SetLineColor(ci);
   Graph_30dO000000sPppm1013->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1013->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1013->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1013->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1013->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1013->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1013->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1013);
   
   
   TF1 *quadLineFit1014 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1014->SetFillColor(19);
   quadLineFit1014->SetFillStyle(0);
   quadLineFit1014->SetLineColor(2);
   quadLineFit1014->SetLineWidth(2);
   quadLineFit1014->SetChisquare(0.2122345);
   quadLineFit1014->SetNDF(1);
   quadLineFit1014->GetXaxis()->SetLabelFont(42);
   quadLineFit1014->GetXaxis()->SetTitleOffset(1);
   quadLineFit1014->GetXaxis()->SetTitleFont(42);
   quadLineFit1014->GetYaxis()->SetLabelFont(42);
   quadLineFit1014->GetYaxis()->SetTitleFont(42);
   quadLineFit1014->SetParameter(0,5.279719);
   quadLineFit1014->SetParError(0,0.132538);
   quadLineFit1014->SetParLimits(0,0,0);
   quadLineFit1014->SetParameter(1,-0.1512007);
   quadLineFit1014->SetParError(1,0.007333111);
   quadLineFit1014->SetParLimits(1,0,0);
   quadLineFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1014);
   gre->Draw("p ");
   
   TF1 *quadLineFit1015 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1015->SetFillColor(19);
   quadLineFit1015->SetFillStyle(0);
   quadLineFit1015->SetLineColor(2);
   quadLineFit1015->SetLineWidth(2);
   quadLineFit1015->SetChisquare(0.2122345);
   quadLineFit1015->SetNDF(1);
   quadLineFit1015->GetXaxis()->SetLabelFont(42);
   quadLineFit1015->GetXaxis()->SetTitleOffset(1);
   quadLineFit1015->GetXaxis()->SetTitleFont(42);
   quadLineFit1015->GetYaxis()->SetLabelFont(42);
   quadLineFit1015->GetYaxis()->SetTitleFont(42);
   quadLineFit1015->SetParameter(0,5.279719);
   quadLineFit1015->SetParError(0,0.132538);
   quadLineFit1015->SetParLimits(0,0,0);
   quadLineFit1015->SetParameter(1,-0.1512007);
   quadLineFit1015->SetParError(1,0.007333111);
   quadLineFit1015->SetParLimits(1,0,0);
   quadLineFit1015->Draw("same");
   
   Double_t 0.000000 ppm_fx1015[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1015[3] = {
   0.6356809,
   0.6059981,
   0.5152013};
   Double_t 0.000000 ppm_fex1015[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1015[3] = {
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(3,0.000000 ppm_fx1015,0.000000 ppm_fy1015,0.000000 ppm_fex1015,0.000000 ppm_fey1015);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1015 = new TH1F("Graph_0dO000000sPppm1015","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1015->SetMinimum(0.478265);
   Graph_0dO000000sPppm1015->SetMaximum(0.6726172);
   Graph_0dO000000sPppm1015->SetDirectory(0);
   Graph_0dO000000sPppm1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1015->SetLineColor(ci);
   Graph_0dO000000sPppm1015->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1015->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1015->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1015->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1015->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1015->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1015->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1015);
   
   
   TF1 *quadLineFit1016 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1016->SetFillColor(19);
   quadLineFit1016->SetFillStyle(0);
   quadLineFit1016->SetLineColor(3);
   quadLineFit1016->SetLineWidth(2);
   quadLineFit1016->SetChisquare(1.447104);
   quadLineFit1016->SetNDF(1);
   quadLineFit1016->GetXaxis()->SetLabelFont(42);
   quadLineFit1016->GetXaxis()->SetTitleOffset(1);
   quadLineFit1016->GetXaxis()->SetTitleFont(42);
   quadLineFit1016->GetYaxis()->SetLabelFont(42);
   quadLineFit1016->GetYaxis()->SetTitleFont(42);
   quadLineFit1016->SetParameter(0,1.127785);
   quadLineFit1016->SetParError(0,0.1325316);
   quadLineFit1016->SetParLimits(0,0,0);
   quadLineFit1016->SetParameter(1,-0.0301199);
   quadLineFit1016->SetParError(1,0.00733275);
   quadLineFit1016->SetParLimits(1,0,0);
   quadLineFit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1016);
   gre->Draw("p ");
   
   TF1 *quadLineFit1017 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1017->SetFillColor(19);
   quadLineFit1017->SetFillStyle(0);
   quadLineFit1017->SetLineColor(3);
   quadLineFit1017->SetLineWidth(2);
   quadLineFit1017->SetChisquare(1.447104);
   quadLineFit1017->SetNDF(1);
   quadLineFit1017->GetXaxis()->SetLabelFont(42);
   quadLineFit1017->GetXaxis()->SetTitleOffset(1);
   quadLineFit1017->GetXaxis()->SetTitleFont(42);
   quadLineFit1017->GetYaxis()->SetLabelFont(42);
   quadLineFit1017->GetYaxis()->SetTitleFont(42);
   quadLineFit1017->SetParameter(0,1.127785);
   quadLineFit1017->SetParError(0,0.1325316);
   quadLineFit1017->SetParLimits(0,0,0);
   quadLineFit1017->SetParameter(1,-0.0301199);
   quadLineFit1017->SetParError(1,0.00733275);
   quadLineFit1017->SetParLimits(1,0,0);
   quadLineFit1017->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
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
