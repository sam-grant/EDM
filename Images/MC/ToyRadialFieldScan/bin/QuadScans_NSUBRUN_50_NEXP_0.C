void QuadScans_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:37 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1011[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1011[2] = {
   -1.657921,
   -1.30495};
   Double_t -30.000000 ppm_fex1011[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1011[2] = {
   0.02074029,
   0.02074029};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1011,-30.000000 ppm_fy1011,-30.000000 ppm_fex1011,-30.000000 ppm_fey1011);
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
   
   
   TF1 *quadLineFit1012 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1012->SetFillColor(19);
   quadLineFit1012->SetFillStyle(0);
   quadLineFit1012->SetLineWidth(2);
   quadLineFit1012->SetChisquare(4.893887e-20);
   quadLineFit1012->SetNDF(0);
   quadLineFit1012->GetXaxis()->SetLabelFont(42);
   quadLineFit1012->GetXaxis()->SetTitleOffset(1);
   quadLineFit1012->GetXaxis()->SetTitleFont(42);
   quadLineFit1012->GetYaxis()->SetLabelFont(42);
   quadLineFit1012->GetYaxis()->SetTitleFont(42);
   quadLineFit1012->SetParameter(0,-3.069804);
   quadLineFit1012->SetParError(0,0.1328027);
   quadLineFit1012->SetParLimits(0,0,0);
   quadLineFit1012->SetParameter(1,0.08824271);
   quadLineFit1012->SetParError(1,0.007332801);
   quadLineFit1012->SetParLimits(1,0,0);
   quadLineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1012);
   gre->Draw("ap");
   
   TF1 *quadLineFit1013 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1013->SetFillColor(19);
   quadLineFit1013->SetFillStyle(0);
   quadLineFit1013->SetLineWidth(2);
   quadLineFit1013->SetChisquare(4.893887e-20);
   quadLineFit1013->SetNDF(0);
   quadLineFit1013->GetXaxis()->SetLabelFont(42);
   quadLineFit1013->GetXaxis()->SetTitleOffset(1);
   quadLineFit1013->GetXaxis()->SetTitleFont(42);
   quadLineFit1013->GetYaxis()->SetLabelFont(42);
   quadLineFit1013->GetYaxis()->SetTitleFont(42);
   quadLineFit1013->SetParameter(0,-3.069804);
   quadLineFit1013->SetParError(0,0.1328027);
   quadLineFit1013->SetParLimits(0,0,0);
   quadLineFit1013->SetParameter(1,0.08824271);
   quadLineFit1013->SetParError(1,0.007332801);
   quadLineFit1013->SetParLimits(1,0,0);
   quadLineFit1013->Draw("same");
   
   Double_t -10.000000 ppm_fx1013[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1013[2] = {
   -0.1699959,
   -0.09554744};
   Double_t -10.000000 ppm_fex1013[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1013[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1013,-10.000000 ppm_fy1013,-10.000000 ppm_fex1013,-10.000000 ppm_fey1013);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1013 = new TH1F("Graph_mI10dO000000sPppm1013","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1013->SetMinimum(-0.2023291);
   Graph_mI10dO000000sPppm1013->SetMaximum(-0.06321424);
   Graph_mI10dO000000sPppm1013->SetDirectory(0);
   Graph_mI10dO000000sPppm1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1013->SetLineColor(ci);
   Graph_mI10dO000000sPppm1013->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1013->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1013->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1013->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1013->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1013->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1013->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1013);
   
   
   TF1 *quadLineFit1014 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1014->SetFillColor(19);
   quadLineFit1014->SetFillStyle(0);
   quadLineFit1014->SetLineColor(2);
   quadLineFit1014->SetLineWidth(2);
   quadLineFit1014->SetChisquare(4.060605e-22);
   quadLineFit1014->SetNDF(0);
   quadLineFit1014->GetXaxis()->SetLabelFont(42);
   quadLineFit1014->GetXaxis()->SetTitleOffset(1);
   quadLineFit1014->GetXaxis()->SetTitleFont(42);
   quadLineFit1014->GetYaxis()->SetLabelFont(42);
   quadLineFit1014->GetYaxis()->SetTitleFont(42);
   quadLineFit1014->SetParameter(0,-0.4677899);
   quadLineFit1014->SetParError(0,0.1328027);
   quadLineFit1014->SetParLimits(0,0,0);
   quadLineFit1014->SetParameter(1,0.01861213);
   quadLineFit1014->SetParError(1,0.007332801);
   quadLineFit1014->SetParLimits(1,0,0);
   quadLineFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1014);
   gre->Draw("p ");
   
   TF1 *quadLineFit1015 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1015->SetFillColor(19);
   quadLineFit1015->SetFillStyle(0);
   quadLineFit1015->SetLineColor(2);
   quadLineFit1015->SetLineWidth(2);
   quadLineFit1015->SetChisquare(4.060605e-22);
   quadLineFit1015->SetNDF(0);
   quadLineFit1015->GetXaxis()->SetLabelFont(42);
   quadLineFit1015->GetXaxis()->SetTitleOffset(1);
   quadLineFit1015->GetXaxis()->SetTitleFont(42);
   quadLineFit1015->GetYaxis()->SetLabelFont(42);
   quadLineFit1015->GetYaxis()->SetTitleFont(42);
   quadLineFit1015->SetParameter(0,-0.4677899);
   quadLineFit1015->SetParError(0,0.1328027);
   quadLineFit1015->SetParLimits(0,0,0);
   quadLineFit1015->SetParameter(1,0.01861213);
   quadLineFit1015->SetParError(1,0.007332801);
   quadLineFit1015->SetParLimits(1,0,0);
   quadLineFit1015->Draw("same");
   
   Double_t 10.000000 ppm_fx1015[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1015[2] = {
   1.347009,
   1.079439};
   Double_t 10.000000 ppm_fex1015[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1015[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,10.000000 ppm_fx1015,10.000000 ppm_fy1015,10.000000 ppm_fex1015,10.000000 ppm_fey1015);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1015 = new TH1F("Graph_10dO000000sPppm1015","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1015->SetMinimum(1.027794);
   Graph_10dO000000sPppm1015->SetMaximum(1.398654);
   Graph_10dO000000sPppm1015->SetDirectory(0);
   Graph_10dO000000sPppm1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1015->SetLineColor(ci);
   Graph_10dO000000sPppm1015->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1015->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1015->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1015->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1015->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1015->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1015->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1015);
   
   
   TF1 *quadLineFit1016 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1016->SetFillColor(19);
   quadLineFit1016->SetFillStyle(0);
   quadLineFit1016->SetLineColor(3);
   quadLineFit1016->SetLineWidth(2);
   quadLineFit1016->SetChisquare(9.588366e-23);
   quadLineFit1016->SetNDF(0);
   quadLineFit1016->GetXaxis()->SetLabelFont(42);
   quadLineFit1016->GetXaxis()->SetTitleOffset(1);
   quadLineFit1016->GetXaxis()->SetTitleFont(42);
   quadLineFit1016->GetYaxis()->SetLabelFont(42);
   quadLineFit1016->GetYaxis()->SetTitleFont(42);
   quadLineFit1016->SetParameter(0,2.417287);
   quadLineFit1016->SetParError(0,0.1328027);
   quadLineFit1016->SetParLimits(0,0,0);
   quadLineFit1016->SetParameter(1,-0.06689238);
   quadLineFit1016->SetParError(1,0.007332801);
   quadLineFit1016->SetParLimits(1,0,0);
   quadLineFit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1016);
   gre->Draw("p ");
   
   TF1 *quadLineFit1017 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1017->SetFillColor(19);
   quadLineFit1017->SetFillStyle(0);
   quadLineFit1017->SetLineColor(3);
   quadLineFit1017->SetLineWidth(2);
   quadLineFit1017->SetChisquare(9.588366e-23);
   quadLineFit1017->SetNDF(0);
   quadLineFit1017->GetXaxis()->SetLabelFont(42);
   quadLineFit1017->GetXaxis()->SetTitleOffset(1);
   quadLineFit1017->GetXaxis()->SetTitleFont(42);
   quadLineFit1017->GetYaxis()->SetLabelFont(42);
   quadLineFit1017->GetYaxis()->SetTitleFont(42);
   quadLineFit1017->SetParameter(0,2.417287);
   quadLineFit1017->SetParError(0,0.1328027);
   quadLineFit1017->SetParLimits(0,0,0);
   quadLineFit1017->SetParameter(1,-0.06689238);
   quadLineFit1017->SetParError(1,0.007332801);
   quadLineFit1017->SetParLimits(1,0,0);
   quadLineFit1017->Draw("same");
   
   Double_t 30.000000 ppm_fx1017[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1017[2] = {
   2.860657,
   2.292037};
   Double_t 30.000000 ppm_fex1017[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1017[2] = {
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(2,30.000000 ppm_fx1017,30.000000 ppm_fy1017,30.000000 ppm_fex1017,30.000000 ppm_fey1017);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1017 = new TH1F("Graph_30dO000000sPppm1017","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1017->SetMinimum(2.210287);
   Graph_30dO000000sPppm1017->SetMaximum(2.942408);
   Graph_30dO000000sPppm1017->SetDirectory(0);
   Graph_30dO000000sPppm1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1017->SetLineColor(ci);
   Graph_30dO000000sPppm1017->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1017->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1017->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1017->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1017->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1017->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1017->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1017);
   
   
   TF1 *quadLineFit1018 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1018->SetFillColor(19);
   quadLineFit1018->SetFillStyle(0);
   quadLineFit1018->SetLineColor(4);
   quadLineFit1018->SetLineWidth(2);
   quadLineFit1018->SetChisquare(5.389748e-18);
   quadLineFit1018->SetNDF(0);
   quadLineFit1018->GetXaxis()->SetLabelFont(42);
   quadLineFit1018->GetXaxis()->SetTitleOffset(1);
   quadLineFit1018->GetXaxis()->SetTitleFont(42);
   quadLineFit1018->GetYaxis()->SetLabelFont(42);
   quadLineFit1018->GetYaxis()->SetTitleFont(42);
   quadLineFit1018->SetParameter(0,5.135138);
   quadLineFit1018->SetParError(0,0.1328027);
   quadLineFit1018->SetParLimits(0,0,0);
   quadLineFit1018->SetParameter(1,-0.142155);
   quadLineFit1018->SetParError(1,0.007332801);
   quadLineFit1018->SetParLimits(1,0,0);
   quadLineFit1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1018);
   gre->Draw("p ");
   
   TF1 *quadLineFit1019 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1019->SetFillColor(19);
   quadLineFit1019->SetFillStyle(0);
   quadLineFit1019->SetLineColor(4);
   quadLineFit1019->SetLineWidth(2);
   quadLineFit1019->SetChisquare(5.389748e-18);
   quadLineFit1019->SetNDF(0);
   quadLineFit1019->GetXaxis()->SetLabelFont(42);
   quadLineFit1019->GetXaxis()->SetTitleOffset(1);
   quadLineFit1019->GetXaxis()->SetTitleFont(42);
   quadLineFit1019->GetYaxis()->SetLabelFont(42);
   quadLineFit1019->GetYaxis()->SetTitleFont(42);
   quadLineFit1019->SetParameter(0,5.135138);
   quadLineFit1019->SetParError(0,0.1328027);
   quadLineFit1019->SetParLimits(0,0,0);
   quadLineFit1019->SetParameter(1,-0.142155);
   quadLineFit1019->SetParError(1,0.007332801);
   quadLineFit1019->SetParLimits(1,0,0);
   quadLineFit1019->Draw("same");
   
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
