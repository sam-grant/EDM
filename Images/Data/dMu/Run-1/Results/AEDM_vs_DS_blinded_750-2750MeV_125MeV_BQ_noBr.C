void AEDM_vs_DS_blinded_750-2750MeV_125MeV_BQ_noBr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 17 16:31:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.15,7.110533e-19,4.65,2.604947e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1005[4] = {
   1.358958e-18,
   1.239558e-18,
   2.084906e-18,
   1.715702e-18};
   Double_t _fex1005[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1005[4] = {
   2.623169e-19,
   2.260772e-19,
   2.204344e-19,
   1.700435e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle(";;d_{#mu}^{BLIND} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10011005 = new TH1F("Graph_Graph_Graph10011005","",100,0.6,4.2);
   Graph_Graph_Graph10011005->SetMinimum(9.004427e-19);
   Graph_Graph_Graph10011005->SetMaximum(2.415558e-18);
   Graph_Graph_Graph10011005->SetDirectory(0);
   Graph_Graph_Graph10011005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
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
   
   gre->Draw("ap");
   
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
   fit1005->SetParameter(0,1.638377e-18);
   fit1005->SetParError(0,1.05844e-19);
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
   minusSigma1006->SetParameter(0,1.532533e-18);
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
   plusSigma1007->SetParameter(0,1.744221e-18);
   plusSigma1007->SetParError(0,0);
   plusSigma1007->SetParLimits(0,0,0);
   plusSigma1007->Draw("same");
   
   Double_t _fx1006[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1006[4] = {
   1.358958e-18,
   1.239558e-18,
   2.084906e-18,
   1.715702e-18};
   Double_t _fex1006[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1006[4] = {
   2.623169e-19,
   2.260772e-19,
   2.204344e-19,
   1.700435e-19};
   gre = new TGraphErrors(4,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle(";;d_{#mu}^{BLIND} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph100110051006 = new TH1F("Graph_Graph_Graph_Graph100110051006","",100,0.6,4.2);
   Graph_Graph_Graph_Graph100110051006->SetMinimum(9.004427e-19);
   Graph_Graph_Graph_Graph100110051006->SetMaximum(2.415558e-18);
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
   1.358958e-18,
   1.239558e-18,
   2.084906e-18,
   1.715702e-18};
   Double_t _fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1007[4] = {
   2.623169e-19,
   2.260772e-19,
   2.204344e-19,
   1.700435e-19};
   gre = new TGraphErrors(4,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10021007 = new TH1F("Graph_Graph_Graph10021007","S18",100,0.7,4.3);
   Graph_Graph_Graph10021007->SetMinimum(8.842954e-19);
   Graph_Graph_Graph10021007->SetMaximum(2.434526e-18);
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
   Graph_Graph_Graph10021007->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
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
   1.358958e-18,
   1.239558e-18,
   2.084906e-18,
   1.715702e-18};
   Double_t _fex1008[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1008[4] = {
   2.623169e-19,
   2.260772e-19,
   2.204344e-19,
   1.700435e-19};
   gre = new TGraphErrors(4,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10031008 = new TH1F("Graph_Graph_Graph10031008","S12S18",100,0.8,4.4);
   Graph_Graph_Graph10031008->SetMinimum(8.842954e-19);
   Graph_Graph_Graph10031008->SetMaximum(2.434526e-18);
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
   Graph_Graph_Graph10031008->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
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
   pol01009->SetChisquare(8.556789);
   pol01009->SetNDF(3);
   pol01009->GetXaxis()->SetLabelFont(42);
   pol01009->GetXaxis()->SetTitleOffset(1);
   pol01009->GetXaxis()->SetTitleFont(42);
   pol01009->GetYaxis()->SetLabelFont(42);
   pol01009->GetYaxis()->SetTitleFont(42);
   pol01009->SetParameter(0,1.638377e-18);
   pol01009->SetParError(0,1.05844e-19);
   pol01009->SetParLimits(0,0,0);
   pol01009->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01009);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.15,0.85,0.35,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
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
   
   TPaveText *pt = new TPaveText(0.15,0.79,0.4,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("#delta#LTd_{#mu}^{BLIND}#GT = 1.06#times10^{#minus19} e#upointcm");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
