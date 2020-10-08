void QuadScans_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.625,21.77143,2.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1061[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1061[2] = {
   -1.865958,
   -1.511134};
   Double_t -30.000000 ppm_fex1061[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1061[2] = {
   0.01115179,
   0.01115179};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1061,-30.000000 ppm_fy1061,-30.000000 ppm_fex1061,-30.000000 ppm_fey1061);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1061 = new TH1F("Graph_mI30dO000000sPppm1061","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1061->SetMinimum(-3);
   Graph_mI30dO000000sPppm1061->SetMaximum(2);
   Graph_mI30dO000000sPppm1061->SetDirectory(0);
   Graph_mI30dO000000sPppm1061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1061->SetLineColor(ci);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1061->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1061->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1061->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1061->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1061->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1061->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1061);
   
   
   TF1 *quadLineFit1062 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1062->SetFillColor(19);
   quadLineFit1062->SetFillStyle(0);
   quadLineFit1062->SetLineWidth(2);
   quadLineFit1062->SetChisquare(2.220892e-18);
   quadLineFit1062->SetNDF(0);
   quadLineFit1062->GetXaxis()->SetLabelFont(42);
   quadLineFit1062->GetXaxis()->SetTitleOffset(1);
   quadLineFit1062->GetXaxis()->SetTitleFont(42);
   quadLineFit1062->GetYaxis()->SetLabelFont(42);
   quadLineFit1062->GetYaxis()->SetTitleFont(42);
   quadLineFit1062->SetParameter(0,-3.28525);
   quadLineFit1062->SetParError(0,0.07140628);
   quadLineFit1062->SetParLimits(0,0,0);
   quadLineFit1062->SetParameter(1,0.08870578);
   quadLineFit1062->SetParError(1,0.003942752);
   quadLineFit1062->SetParLimits(1,0,0);
   quadLineFit1062->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1062);
   gre->Draw("ap");
   
   TF1 *quadLineFit1063 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1063->SetFillColor(19);
   quadLineFit1063->SetFillStyle(0);
   quadLineFit1063->SetLineWidth(2);
   quadLineFit1063->SetChisquare(2.220892e-18);
   quadLineFit1063->SetNDF(0);
   quadLineFit1063->GetXaxis()->SetLabelFont(42);
   quadLineFit1063->GetXaxis()->SetTitleOffset(1);
   quadLineFit1063->GetXaxis()->SetTitleFont(42);
   quadLineFit1063->GetYaxis()->SetLabelFont(42);
   quadLineFit1063->GetYaxis()->SetTitleFont(42);
   quadLineFit1063->SetParameter(0,-3.28525);
   quadLineFit1063->SetParError(0,0.07140628);
   quadLineFit1063->SetParLimits(0,0,0);
   quadLineFit1063->SetParameter(1,0.08870578);
   quadLineFit1063->SetParError(1,0.003942752);
   quadLineFit1063->SetParLimits(1,0,0);
   quadLineFit1063->Draw("same");
   
   Double_t -10.000000 ppm_fx1063[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1063[2] = {
   -0.6157007,
   -0.4931574};
   Double_t -10.000000 ppm_fex1063[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1063[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1063,-10.000000 ppm_fy1063,-10.000000 ppm_fex1063,-10.000000 ppm_fey1063);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1063 = new TH1F("Graph_mI10dO000000sPppm1063","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1063->SetMinimum(-0.6413372);
   Graph_mI10dO000000sPppm1063->SetMaximum(-0.4675209);
   Graph_mI10dO000000sPppm1063->SetDirectory(0);
   Graph_mI10dO000000sPppm1063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1063->SetLineColor(ci);
   Graph_mI10dO000000sPppm1063->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1063->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1063->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1063->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1063->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1063->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1063->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1063);
   
   
   TF1 *quadLineFit1064 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1064->SetFillColor(19);
   quadLineFit1064->SetFillStyle(0);
   quadLineFit1064->SetLineColor(2);
   quadLineFit1064->SetLineWidth(2);
   quadLineFit1064->SetChisquare(2.153349e-20);
   quadLineFit1064->SetNDF(0);
   quadLineFit1064->GetXaxis()->SetLabelFont(42);
   quadLineFit1064->GetXaxis()->SetTitleOffset(1);
   quadLineFit1064->GetXaxis()->SetTitleFont(42);
   quadLineFit1064->GetYaxis()->SetLabelFont(42);
   quadLineFit1064->GetYaxis()->SetTitleFont(42);
   quadLineFit1064->SetParameter(0,-1.105874);
   quadLineFit1064->SetParError(0,0.07140628);
   quadLineFit1064->SetParLimits(0,0,0);
   quadLineFit1064->SetParameter(1,0.03063584);
   quadLineFit1064->SetParError(1,0.003942753);
   quadLineFit1064->SetParLimits(1,0,0);
   quadLineFit1064->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1064);
   gre->Draw("p ");
   
   TF1 *quadLineFit1065 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1065->SetFillColor(19);
   quadLineFit1065->SetFillStyle(0);
   quadLineFit1065->SetLineColor(2);
   quadLineFit1065->SetLineWidth(2);
   quadLineFit1065->SetChisquare(2.153349e-20);
   quadLineFit1065->SetNDF(0);
   quadLineFit1065->GetXaxis()->SetLabelFont(42);
   quadLineFit1065->GetXaxis()->SetTitleOffset(1);
   quadLineFit1065->GetXaxis()->SetTitleFont(42);
   quadLineFit1065->GetYaxis()->SetLabelFont(42);
   quadLineFit1065->GetYaxis()->SetTitleFont(42);
   quadLineFit1065->SetParameter(0,-1.105874);
   quadLineFit1065->SetParError(0,0.07140628);
   quadLineFit1065->SetParLimits(0,0,0);
   quadLineFit1065->SetParameter(1,0.03063584);
   quadLineFit1065->SetParError(1,0.003942753);
   quadLineFit1065->SetParLimits(1,0,0);
   quadLineFit1065->Draw("same");
   
   Double_t 10.000000 ppm_fx1065[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1065[2] = {
   0.6452051,
   0.4991904};
   Double_t 10.000000 ppm_fex1065[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1065[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,10.000000 ppm_fx1065,10.000000 ppm_fy1065,10.000000 ppm_fex1065,10.000000 ppm_fey1065);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1065 = new TH1F("Graph_10dO000000sPppm1065","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1065->SetMinimum(0.4712068);
   Graph_10dO000000sPppm1065->SetMaximum(0.6731887);
   Graph_10dO000000sPppm1065->SetDirectory(0);
   Graph_10dO000000sPppm1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1065->SetLineColor(ci);
   Graph_10dO000000sPppm1065->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1065->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1065->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1065->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1065->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1065->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1065->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1065);
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineColor(3);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(2.252462e-21);
   quadLineFit1066->SetNDF(0);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,1.229264);
   quadLineFit1066->SetParError(0,0.07140628);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,-0.03650367);
   quadLineFit1066->SetParError(1,0.003942752);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("p ");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineColor(3);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(2.252462e-21);
   quadLineFit1067->SetNDF(0);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,1.229264);
   quadLineFit1067->SetParError(0,0.07140628);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,-0.03650367);
   quadLineFit1067->SetParError(1,0.003942752);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
   Double_t 30.000000 ppm_fx1067[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1067[2] = {
   1.872541,
   1.506548};
   Double_t 30.000000 ppm_fex1067[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1067[2] = {
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(2,30.000000 ppm_fx1067,30.000000 ppm_fy1067,30.000000 ppm_fex1067,30.000000 ppm_fey1067);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1067 = new TH1F("Graph_30dO000000sPppm1067","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1067->SetMinimum(1.456566);
   Graph_30dO000000sPppm1067->SetMaximum(1.922523);
   Graph_30dO000000sPppm1067->SetDirectory(0);
   Graph_30dO000000sPppm1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1067->SetLineColor(ci);
   Graph_30dO000000sPppm1067->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1067->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1067->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1067->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1067->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1067->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1067->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1067);
   
   
   TF1 *quadLineFit1068 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1068->SetFillColor(19);
   quadLineFit1068->SetFillStyle(0);
   quadLineFit1068->SetLineColor(4);
   quadLineFit1068->SetLineWidth(2);
   quadLineFit1068->SetChisquare(1.879688e-18);
   quadLineFit1068->SetNDF(0);
   quadLineFit1068->GetXaxis()->SetLabelFont(42);
   quadLineFit1068->GetXaxis()->SetTitleOffset(1);
   quadLineFit1068->GetXaxis()->SetTitleFont(42);
   quadLineFit1068->GetYaxis()->SetLabelFont(42);
   quadLineFit1068->GetYaxis()->SetTitleFont(42);
   quadLineFit1068->SetParameter(0,3.336514);
   quadLineFit1068->SetParError(0,0.07140628);
   quadLineFit1068->SetParLimits(0,0,0);
   quadLineFit1068->SetParameter(1,-0.09149832);
   quadLineFit1068->SetParError(1,0.003942752);
   quadLineFit1068->SetParLimits(1,0,0);
   quadLineFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1068);
   gre->Draw("p ");
   
   TF1 *quadLineFit1069 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1069->SetFillColor(19);
   quadLineFit1069->SetFillStyle(0);
   quadLineFit1069->SetLineColor(4);
   quadLineFit1069->SetLineWidth(2);
   quadLineFit1069->SetChisquare(1.879688e-18);
   quadLineFit1069->SetNDF(0);
   quadLineFit1069->GetXaxis()->SetLabelFont(42);
   quadLineFit1069->GetXaxis()->SetTitleOffset(1);
   quadLineFit1069->GetXaxis()->SetTitleFont(42);
   quadLineFit1069->GetYaxis()->SetLabelFont(42);
   quadLineFit1069->GetYaxis()->SetTitleFont(42);
   quadLineFit1069->SetParameter(0,3.336514);
   quadLineFit1069->SetParError(0,0.07140628);
   quadLineFit1069->SetParLimits(0,0,0);
   quadLineFit1069->SetParameter(1,-0.09149832);
   quadLineFit1069->SetParError(1,0.003942752);
   quadLineFit1069->SetParLimits(1,0,0);
   quadLineFit1069->Draw("same");
   
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
