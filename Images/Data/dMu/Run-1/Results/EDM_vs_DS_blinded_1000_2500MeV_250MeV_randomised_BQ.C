void EDM_vs_DS_blinded_1000_2500MeV_250MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 13 17:27:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-0.006875037,-8.25e-19,5.011875,2.425e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1[6] = {
   0,
   1,
   2,
   3,
   4,
   5};
   Double_t _fy1[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraph *graph = new TGraph(6,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(0);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,5.5);
   Graph_Graph1->SetMinimum(-5e-19);
   Graph_Graph1->SetMaximum(2.1e-18);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetBinLabel(19,"Run-1a");
   Graph_Graph1->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph1->GetXaxis()->SetBinLabel(55,"Run-1c");
   Graph_Graph1->GetXaxis()->SetBinLabel(73,"Run-1d");
   Graph_Graph1->GetXaxis()->SetRange(10,82);
   Graph_Graph1->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.055);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetXaxis()->SetTickLength(0);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   
   Double_t _fx1005[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1005[4] = {
   1.269418e-18,
   7.383555e-19,
   1.539857e-18,
   1.030352e-18};
   Double_t _fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1005[4] = {
   3.409858e-19,
   2.802039e-19,
   2.618114e-19,
   2.180771e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10011005 = new TH1F("Graph_Graph_Graph10011005","",100,0.6,4.2);
   Graph_Graph_Graph10011005->SetMinimum(3.237999e-19);
   Graph_Graph_Graph10011005->SetMaximum(1.93602e-18);
   Graph_Graph_Graph10011005->SetDirectory(0);
   Graph_Graph_Graph10011005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011005->SetLineColor(ci);
   Graph_Graph_Graph10011005->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph_Graph10011005->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph_Graph10011005->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph_Graph10011005->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph_Graph10011005->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10011005->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10011005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10011005->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10011005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10011005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10011005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10011005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011005);
   
   gre->Draw("p ");
   
   TF1 *fit1005 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1005->SetFillColor(19);
   fit1005->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1005->SetLineColor(ci);
   fit1005->SetLineWidth(1);
   fit1005->GetXaxis()->SetLabelFont(42);
   fit1005->GetXaxis()->SetTitleOffset(1);
   fit1005->GetXaxis()->SetTitleFont(42);
   fit1005->GetYaxis()->SetLabelFont(42);
   fit1005->GetYaxis()->SetTitleFont(42);
   fit1005->SetParameter(0,1.052687e-18);
   fit1005->SetParError(0,1.044073e-19);
   fit1005->SetParLimits(0,0,0);
   fit1005->Draw("same");
   
   TF1 *minusSigma1006 = new TF1("minusSigma","pol0",0,5, TF1::EAddToList::kDefault);
   minusSigma1006->SetFillColor(19);
   minusSigma1006->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   minusSigma1006->SetLineColor(ci);
   minusSigma1006->SetLineWidth(2);
   minusSigma1006->SetLineStyle(2);
   minusSigma1006->GetXaxis()->SetLabelFont(42);
   minusSigma1006->GetXaxis()->SetTitleOffset(1);
   minusSigma1006->GetXaxis()->SetTitleFont(42);
   minusSigma1006->GetYaxis()->SetLabelFont(42);
   minusSigma1006->GetYaxis()->SetTitleFont(42);
   minusSigma1006->SetParameter(0,9.482795e-19);
   minusSigma1006->SetParError(0,0);
   minusSigma1006->SetParLimits(0,0,0);
   minusSigma1006->Draw("same");
   
   TF1 *plusSigma1007 = new TF1("plusSigma","pol0",0,5, TF1::EAddToList::kDefault);
   plusSigma1007->SetFillColor(19);
   plusSigma1007->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   plusSigma1007->SetLineColor(ci);
   plusSigma1007->SetLineWidth(2);
   plusSigma1007->SetLineStyle(2);
   plusSigma1007->GetXaxis()->SetLabelFont(42);
   plusSigma1007->GetXaxis()->SetTitleOffset(1);
   plusSigma1007->GetXaxis()->SetTitleFont(42);
   plusSigma1007->GetYaxis()->SetLabelFont(42);
   plusSigma1007->GetYaxis()->SetTitleFont(42);
   plusSigma1007->SetParameter(0,1.157094e-18);
   plusSigma1007->SetParError(0,0);
   plusSigma1007->SetParLimits(0,0,0);
   plusSigma1007->Draw("same");
   
   Double_t _fx1006[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1006[4] = {
   1.269418e-18,
   7.383555e-19,
   1.539857e-18,
   1.030352e-18};
   Double_t _fex1006[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1006[4] = {
   3.409858e-19,
   2.802039e-19,
   2.618114e-19,
   2.180771e-19};
   gre = new TGraphErrors(4,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph100110051006 = new TH1F("Graph_Graph_Graph_Graph100110051006","",100,0.6,4.2);
   Graph_Graph_Graph_Graph100110051006->SetMinimum(3.237999e-19);
   Graph_Graph_Graph_Graph100110051006->SetMaximum(1.93602e-18);
   Graph_Graph_Graph_Graph100110051006->SetDirectory(0);
   Graph_Graph_Graph_Graph100110051006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph100110051006->SetLineColor(ci);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph100110051006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph100110051006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110051006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110051006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph100110051006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100110051006);
   
   gre->Draw("p ");
   
   Double_t _fx1007[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1007[4] = {
   1.315543e-19,
   7.336035e-19,
   1.382242e-18,
   9.616653e-19};
   Double_t _fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1007[4] = {
   3.902626e-19,
   3.367118e-19,
   2.967604e-19,
   2.6409e-19};
   gre = new TGraphErrors(4,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10021007 = new TH1F("Graph_Graph_Graph10021007","",100,0.7,4.3);
   Graph_Graph_Graph10021007->SetMinimum(-4.524794e-19);
   Graph_Graph_Graph10021007->SetMaximum(1.872774e-18);
   Graph_Graph_Graph10021007->SetDirectory(0);
   Graph_Graph_Graph10021007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10021007->SetLineColor(ci);
   Graph_Graph_Graph10021007->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10021007->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10021007->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10021007->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10021007->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10021007->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10021007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10021007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10021007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021007->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10021007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10021007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10021007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10021007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10021007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10021007);
   
   gre->Draw("p ");
   
   Double_t _fx1008[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1008[4] = {
   8.339392e-19,
   7.604678e-19,
   1.510485e-18,
   1.011276e-18};
   Double_t _fex1008[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1008[4] = {
   2.565616e-19,
   2.186361e-19,
   2.062106e-19,
   1.764818e-19};
   gre = new TGraphErrors(4,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10031008 = new TH1F("Graph_Graph_Graph10031008","",100,0.8,4.4);
   Graph_Graph_Graph10031008->SetMinimum(4.243452e-19);
   Graph_Graph_Graph10031008->SetMaximum(1.834182e-18);
   Graph_Graph_Graph10031008->SetDirectory(0);
   Graph_Graph_Graph10031008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10031008->SetLineColor(ci);
   Graph_Graph_Graph10031008->GetXaxis()->SetBinLabel(6,"Run-1a");
   Graph_Graph_Graph10031008->GetXaxis()->SetBinLabel(34,"Run-1b");
   Graph_Graph_Graph10031008->GetXaxis()->SetBinLabel(62,"Run-1c");
   Graph_Graph_Graph10031008->GetXaxis()->SetBinLabel(89,"Run-1d");
   Graph_Graph_Graph10031008->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10031008->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10031008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10031008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10031008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031008->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10031008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10031008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10031008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10031008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10031008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10031008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10031008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10031008);
   
   
   TF1 *pol01009 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01009->SetFillColor(19);
   pol01009->SetFillStyle(0);
   pol01009->SetLineColor(2);
   pol01009->SetLineWidth(0);
   pol01009->SetChisquare(7.497019);
   pol01009->SetNDF(3);
   pol01009->GetXaxis()->SetLabelFont(42);
   pol01009->GetXaxis()->SetTitleOffset(1);
   pol01009->GetXaxis()->SetTitleFont(42);
   pol01009->GetYaxis()->SetLabelFont(42);
   pol01009->GetYaxis()->SetTitleFont(42);
   pol01009->SetParameter(0,1.052687e-18);
   pol01009->SetParError(0,1.044073e-19);
   pol01009->SetParLimits(0,0,0);
   pol01009->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01009);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.66,0.18,0.85,0.38,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(22);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Station 12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Station 18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Combined","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.135,0.79,0.4,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LTd_{#mu}^{BLIND}#GT = (1.05#pm0.10)#times10^{-18} e#upointcm");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
