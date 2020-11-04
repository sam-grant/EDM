void QuadScans_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:18:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.91429,-3.25,19.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1013[2] = {
   14,
   18};
   Double_t -30.000000 ppm_fy1013[2] = {
   -1.895722,
   -1.467562};
   Double_t -30.000000 ppm_fex1013[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1013[2] = {
   0.02074029,
   0.02074029};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1013,-30.000000 ppm_fy1013,-30.000000 ppm_fex1013,-30.000000 ppm_fey1013);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1013 = new TH1F("Graph_mI30dO000000sPppm1013","",100,13.6,18.4);
   Graph_mI30dO000000sPppm1013->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1013->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1013->SetDirectory(0);
   Graph_mI30dO000000sPppm1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1013->SetLineColor(ci);
   Graph_mI30dO000000sPppm1013->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1013->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1013->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1013->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1013->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1013->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1013->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1013->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1013->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1013->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1013->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1013->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1013->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1013);
   
   
   TF1 *quadLineFit1014 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1014->SetFillColor(19);
   quadLineFit1014->SetFillStyle(0);
   quadLineFit1014->SetLineWidth(2);
   quadLineFit1014->SetChisquare(6.177673e-20);
   quadLineFit1014->SetNDF(0);
   quadLineFit1014->GetXaxis()->SetLabelFont(42);
   quadLineFit1014->GetXaxis()->SetTitleOffset(1);
   quadLineFit1014->GetXaxis()->SetTitleFont(42);
   quadLineFit1014->GetYaxis()->SetLabelFont(42);
   quadLineFit1014->GetYaxis()->SetTitleFont(42);
   quadLineFit1014->SetParameter(0,-3.394284);
   quadLineFit1014->SetParError(0,0.1182379);
   quadLineFit1014->SetParLimits(0,0,0);
   quadLineFit1014->SetParameter(1,0.1070402);
   quadLineFit1014->SetParError(1,0.007332801);
   quadLineFit1014->SetParLimits(1,0,0);
   quadLineFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1014);
   gre->Draw("ap");
   
   TF1 *quadLineFit1015 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1015->SetFillColor(19);
   quadLineFit1015->SetFillStyle(0);
   quadLineFit1015->SetLineWidth(2);
   quadLineFit1015->SetChisquare(6.177673e-20);
   quadLineFit1015->SetNDF(0);
   quadLineFit1015->GetXaxis()->SetLabelFont(42);
   quadLineFit1015->GetXaxis()->SetTitleOffset(1);
   quadLineFit1015->GetXaxis()->SetTitleFont(42);
   quadLineFit1015->GetYaxis()->SetLabelFont(42);
   quadLineFit1015->GetYaxis()->SetTitleFont(42);
   quadLineFit1015->SetParameter(0,-3.394284);
   quadLineFit1015->SetParError(0,0.1182379);
   quadLineFit1015->SetParLimits(0,0,0);
   quadLineFit1015->SetParameter(1,0.1070402);
   quadLineFit1015->SetParError(1,0.007332801);
   quadLineFit1015->SetParLimits(1,0,0);
   quadLineFit1015->Draw("same");
   
   Double_t -10.000000 ppm_fx1015[2] = {
   14,
   18};
   Double_t -10.000000 ppm_fy1015[2] = {
   -0.1699839,
   -0.1501499};
   Double_t -10.000000 ppm_fex1015[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1015[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1015,-10.000000 ppm_fy1015,-10.000000 ppm_fex1015,-10.000000 ppm_fey1015);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1015 = new TH1F("Graph_mI10dO000000sPppm1015","Graph",100,13.6,18.4);
   Graph_mI10dO000000sPppm1015->SetMinimum(-0.1968556);
   Graph_mI10dO000000sPppm1015->SetMaximum(-0.1232781);
   Graph_mI10dO000000sPppm1015->SetDirectory(0);
   Graph_mI10dO000000sPppm1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1015->SetLineColor(ci);
   Graph_mI10dO000000sPppm1015->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1015->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1015->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1015->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1015->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1015->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1015->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1015);
   
   
   TF1 *quadLineFit1016 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1016->SetFillColor(19);
   quadLineFit1016->SetFillStyle(0);
   quadLineFit1016->SetLineColor(2);
   quadLineFit1016->SetLineWidth(2);
   quadLineFit1016->SetChisquare(1.191907e-22);
   quadLineFit1016->SetNDF(0);
   quadLineFit1016->GetXaxis()->SetLabelFont(42);
   quadLineFit1016->GetXaxis()->SetTitleOffset(1);
   quadLineFit1016->GetXaxis()->SetTitleFont(42);
   quadLineFit1016->GetYaxis()->SetLabelFont(42);
   quadLineFit1016->GetYaxis()->SetTitleFont(42);
   quadLineFit1016->SetParameter(0,-0.2394027);
   quadLineFit1016->SetParError(0,0.1182379);
   quadLineFit1016->SetParLimits(0,0,0);
   quadLineFit1016->SetParameter(1,0.00495849);
   quadLineFit1016->SetParError(1,0.007332801);
   quadLineFit1016->SetParLimits(1,0,0);
   quadLineFit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1016);
   gre->Draw("p ");
   
   TF1 *quadLineFit1017 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1017->SetFillColor(19);
   quadLineFit1017->SetFillStyle(0);
   quadLineFit1017->SetLineColor(2);
   quadLineFit1017->SetLineWidth(2);
   quadLineFit1017->SetChisquare(1.191907e-22);
   quadLineFit1017->SetNDF(0);
   quadLineFit1017->GetXaxis()->SetLabelFont(42);
   quadLineFit1017->GetXaxis()->SetTitleOffset(1);
   quadLineFit1017->GetXaxis()->SetTitleFont(42);
   quadLineFit1017->GetYaxis()->SetLabelFont(42);
   quadLineFit1017->GetYaxis()->SetTitleFont(42);
   quadLineFit1017->SetParameter(0,-0.2394027);
   quadLineFit1017->SetParError(0,0.1182379);
   quadLineFit1017->SetParLimits(0,0,0);
   quadLineFit1017->SetParameter(1,0.00495849);
   quadLineFit1017->SetParError(1,0.007332801);
   quadLineFit1017->SetParLimits(1,0,0);
   quadLineFit1017->Draw("same");
   
   Double_t 10.000000 ppm_fx1017[2] = {
   14,
   18};
   Double_t 10.000000 ppm_fy1017[2] = {
   1.556421,
   1.256547};
   Double_t 10.000000 ppm_fex1017[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1017[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,10.000000 ppm_fx1017,10.000000 ppm_fy1017,10.000000 ppm_fex1017,10.000000 ppm_fey1017);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1017 = new TH1F("Graph_10dO000000sPppm1017","Graph",100,13.6,18.4);
   Graph_10dO000000sPppm1017->SetMinimum(1.201671);
   Graph_10dO000000sPppm1017->SetMaximum(1.611297);
   Graph_10dO000000sPppm1017->SetDirectory(0);
   Graph_10dO000000sPppm1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1017->SetLineColor(ci);
   Graph_10dO000000sPppm1017->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1017->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1017->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1017->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1017->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1017->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1017->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1017);
   
   
   TF1 *quadLineFit1018 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1018->SetFillColor(19);
   quadLineFit1018->SetFillStyle(0);
   quadLineFit1018->SetLineColor(3);
   quadLineFit1018->SetLineWidth(2);
   quadLineFit1018->SetChisquare(1.256037e-21);
   quadLineFit1018->SetNDF(0);
   quadLineFit1018->GetXaxis()->SetLabelFont(42);
   quadLineFit1018->GetXaxis()->SetTitleOffset(1);
   quadLineFit1018->GetXaxis()->SetTitleFont(42);
   quadLineFit1018->GetYaxis()->SetLabelFont(42);
   quadLineFit1018->GetYaxis()->SetTitleFont(42);
   quadLineFit1018->SetParameter(0,2.605982);
   quadLineFit1018->SetParError(0,0.1182379);
   quadLineFit1018->SetParLimits(0,0,0);
   quadLineFit1018->SetParameter(1,-0.07496861);
   quadLineFit1018->SetParError(1,0.007332801);
   quadLineFit1018->SetParLimits(1,0,0);
   quadLineFit1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1018);
   gre->Draw("p ");
   
   TF1 *quadLineFit1019 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1019->SetFillColor(19);
   quadLineFit1019->SetFillStyle(0);
   quadLineFit1019->SetLineColor(3);
   quadLineFit1019->SetLineWidth(2);
   quadLineFit1019->SetChisquare(1.256037e-21);
   quadLineFit1019->SetNDF(0);
   quadLineFit1019->GetXaxis()->SetLabelFont(42);
   quadLineFit1019->GetXaxis()->SetTitleOffset(1);
   quadLineFit1019->GetXaxis()->SetTitleFont(42);
   quadLineFit1019->GetYaxis()->SetLabelFont(42);
   quadLineFit1019->GetYaxis()->SetTitleFont(42);
   quadLineFit1019->SetParameter(0,2.605982);
   quadLineFit1019->SetParError(0,0.1182379);
   quadLineFit1019->SetParLimits(0,0,0);
   quadLineFit1019->SetParameter(1,-0.07496861);
   quadLineFit1019->SetParError(1,0.007332801);
   quadLineFit1019->SetParLimits(1,0,0);
   quadLineFit1019->Draw("same");
   
   Double_t 30.000000 ppm_fx1019[2] = {
   14,
   18};
   Double_t 30.000000 ppm_fy1019[2] = {
   3.296447,
   2.538848};
   Double_t 30.000000 ppm_fex1019[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1019[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,30.000000 ppm_fx1019,30.000000 ppm_fy1019,30.000000 ppm_fex1019,30.000000 ppm_fey1019);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1019 = new TH1F("Graph_30dO000000sPppm1019","Graph",100,13.6,18.4);
   Graph_30dO000000sPppm1019->SetMinimum(2.4382);
   Graph_30dO000000sPppm1019->SetMaximum(3.397095);
   Graph_30dO000000sPppm1019->SetDirectory(0);
   Graph_30dO000000sPppm1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1019->SetLineColor(ci);
   Graph_30dO000000sPppm1019->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1019->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1019->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1019->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1019->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1019->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1019->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1019);
   
   
   TF1 *quadLineFit1020 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1020->SetFillColor(19);
   quadLineFit1020->SetFillStyle(0);
   quadLineFit1020->SetLineColor(4);
   quadLineFit1020->SetLineWidth(2);
   quadLineFit1020->SetChisquare(1.098171e-20);
   quadLineFit1020->SetNDF(0);
   quadLineFit1020->GetXaxis()->SetLabelFont(42);
   quadLineFit1020->GetXaxis()->SetTitleOffset(1);
   quadLineFit1020->GetXaxis()->SetTitleFont(42);
   quadLineFit1020->GetYaxis()->SetLabelFont(42);
   quadLineFit1020->GetYaxis()->SetTitleFont(42);
   quadLineFit1020->SetParameter(0,5.948041);
   quadLineFit1020->SetParError(0,0.1182379);
   quadLineFit1020->SetParLimits(0,0,0);
   quadLineFit1020->SetParameter(1,-0.1893996);
   quadLineFit1020->SetParError(1,0.007332801);
   quadLineFit1020->SetParLimits(1,0,0);
   quadLineFit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1020);
   gre->Draw("p ");
   
   TF1 *quadLineFit1021 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1021->SetFillColor(19);
   quadLineFit1021->SetFillStyle(0);
   quadLineFit1021->SetLineColor(4);
   quadLineFit1021->SetLineWidth(2);
   quadLineFit1021->SetChisquare(1.098171e-20);
   quadLineFit1021->SetNDF(0);
   quadLineFit1021->GetXaxis()->SetLabelFont(42);
   quadLineFit1021->GetXaxis()->SetTitleOffset(1);
   quadLineFit1021->GetXaxis()->SetTitleFont(42);
   quadLineFit1021->GetYaxis()->SetLabelFont(42);
   quadLineFit1021->GetYaxis()->SetTitleFont(42);
   quadLineFit1021->SetParameter(0,5.948041);
   quadLineFit1021->SetParError(0,0.1182379);
   quadLineFit1021->SetParLimits(0,0,0);
   quadLineFit1021->SetParameter(1,-0.1893996);
   quadLineFit1021->SetParError(1,0.007332801);
   quadLineFit1021->SetParLimits(1,0,0);
   quadLineFit1021->Draw("same");
   
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
