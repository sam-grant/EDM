void EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:23:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.15,-5.740556e-19,4.65,3.075536e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1023[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1023[4] = {
   1.886723e-18,
   1.021044e-18,
   1.835286e-18,
   1.54133e-18};
   Double_t _fex1023[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1023[4] = {
   3.295415e-19,
   2.808569e-19,
   2.333638e-19,
   1.718772e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10191023 = new TH1F("Graph_Graph_Graph10191023","",100,0.6,4.2);
   Graph_Graph_Graph10191023->SetMinimum(-2.090964e-19);
   Graph_Graph_Graph10191023->SetMaximum(2.710577e-18);
   Graph_Graph_Graph10191023->SetDirectory(0);
   Graph_Graph_Graph10191023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10191023->SetLineColor(ci);
   Graph_Graph_Graph10191023->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph_Graph10191023->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph_Graph10191023->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph_Graph10191023->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph_Graph10191023->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10191023->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10191023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10191023->GetXaxis()->SetLabelSize(0.055);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10191023->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10191023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10191023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10191023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10191023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10191023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10191023);
   
   gre->Draw("ap");
   
   TF1 *fit1023 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1023->SetFillColor(19);
   fit1023->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1023->SetLineColor(ci);
   fit1023->SetLineWidth(1);
   fit1023->GetXaxis()->SetLabelFont(42);
   fit1023->GetXaxis()->SetTitleOffset(1);
   fit1023->GetXaxis()->SetTitleFont(42);
   fit1023->GetYaxis()->SetLabelFont(42);
   fit1023->GetYaxis()->SetTitleFont(42);
   fit1023->SetParameter(0,1.592793e-18);
   fit1023->SetParError(0,8.974692e-20);
   fit1023->SetParLimits(0,0,0);
   fit1023->Draw("same");
   
   TF1 *minusSigma1024 = new TF1("minusSigma","pol0",0,5, TF1::EAddToList::kDefault);
   minusSigma1024->SetFillColor(19);
   minusSigma1024->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   minusSigma1024->SetLineColor(ci);
   minusSigma1024->SetLineWidth(2);
   minusSigma1024->SetLineStyle(2);
   minusSigma1024->GetXaxis()->SetLabelFont(42);
   minusSigma1024->GetXaxis()->SetTitleOffset(1);
   minusSigma1024->GetXaxis()->SetTitleFont(42);
   minusSigma1024->GetYaxis()->SetLabelFont(42);
   minusSigma1024->GetYaxis()->SetTitleFont(42);
   minusSigma1024->SetParameter(0,1.503047e-18);
   minusSigma1024->SetParError(0,0);
   minusSigma1024->SetParLimits(0,0,0);
   minusSigma1024->Draw("same");
   
   TF1 *plusSigma1025 = new TF1("plusSigma","pol0",0,5, TF1::EAddToList::kDefault);
   plusSigma1025->SetFillColor(19);
   plusSigma1025->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   plusSigma1025->SetLineColor(ci);
   plusSigma1025->SetLineWidth(2);
   plusSigma1025->SetLineStyle(2);
   plusSigma1025->GetXaxis()->SetLabelFont(42);
   plusSigma1025->GetXaxis()->SetTitleOffset(1);
   plusSigma1025->GetXaxis()->SetTitleFont(42);
   plusSigma1025->GetYaxis()->SetLabelFont(42);
   plusSigma1025->GetYaxis()->SetTitleFont(42);
   plusSigma1025->SetParameter(0,1.68254e-18);
   plusSigma1025->SetParError(0,0);
   plusSigma1025->SetParLimits(0,0,0);
   plusSigma1025->Draw("same");
   
   Double_t _fx1024[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1024[4] = {
   1.886723e-18,
   1.021044e-18,
   1.835286e-18,
   1.54133e-18};
   Double_t _fex1024[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1024[4] = {
   3.295415e-19,
   2.808569e-19,
   2.333638e-19,
   1.718772e-19};
   gre = new TGraphErrors(4,_fx1024,_fy1024,_fex1024,_fey1024);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph101910231024 = new TH1F("Graph_Graph_Graph_Graph101910231024","",100,0.6,4.2);
   Graph_Graph_Graph_Graph101910231024->SetMinimum(-2.090964e-19);
   Graph_Graph_Graph_Graph101910231024->SetMaximum(2.710577e-18);
   Graph_Graph_Graph_Graph101910231024->SetDirectory(0);
   Graph_Graph_Graph_Graph101910231024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph101910231024->SetLineColor(ci);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetLabelSize(0.055);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101910231024->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph_Graph101910231024->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph101910231024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph101910231024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101910231024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph101910231024->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph101910231024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101910231024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101910231024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph101910231024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph101910231024);
   
   gre->Draw("p ");
   
   Double_t _fx1025[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1025[4] = {
   7.186869e-19,
   1.447963e-18,
   2.016417e-18,
   1.681319e-18};
   Double_t _fex1025[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1025[4] = {
   3.711133e-19,
   3.186718e-19,
   2.660418e-19,
   1.976582e-19};
   gre = new TGraphErrors(4,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10201025 = new TH1F("Graph_Graph_Graph10201025","",100,0.7,4.3);
   Graph_Graph_Graph10201025->SetMinimum(1.54085e-19);
   Graph_Graph_Graph10201025->SetMaximum(2.475948e-18);
   Graph_Graph_Graph10201025->SetDirectory(0);
   Graph_Graph_Graph10201025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10201025->SetLineColor(ci);
   Graph_Graph_Graph10201025->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10201025->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10201025->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10201025->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10201025->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10201025->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10201025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10201025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10201025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10201025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10201025->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10201025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10201025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10201025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10201025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10201025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10201025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10201025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10201025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10201025);
   
   gre->Draw("p ");
   
   Double_t _fx1026[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1026[4] = {
   1.347393e-18,
   1.218553e-18,
   1.9355e-18,
   1.620732e-18};
   Double_t _fex1026[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1026[4] = {
   2.495574e-19,
   2.140003e-19,
   1.801192e-19,
   1.343063e-19};
   gre = new TGraphErrors(4,_fx1026,_fy1026,_fex1026,_fey1026);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10211026 = new TH1F("Graph_Graph_Graph10211026","",100,0.8,4.4);
   Graph_Graph_Graph10211026->SetMinimum(8.934464e-19);
   Graph_Graph_Graph10211026->SetMaximum(2.226726e-18);
   Graph_Graph_Graph10211026->SetDirectory(0);
   Graph_Graph_Graph10211026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10211026->SetLineColor(ci);
   Graph_Graph_Graph10211026->GetXaxis()->SetBinLabel(6,"Run-1a");
   Graph_Graph_Graph10211026->GetXaxis()->SetBinLabel(34,"Run-1b");
   Graph_Graph_Graph10211026->GetXaxis()->SetBinLabel(62,"Run-1c");
   Graph_Graph_Graph10211026->GetXaxis()->SetBinLabel(89,"Run-1d");
   Graph_Graph_Graph10211026->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10211026->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10211026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10211026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10211026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10211026->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10211026->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10211026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10211026->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10211026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10211026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10211026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10211026);
   
   
   TF1 *pol01027 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01027->SetFillColor(19);
   pol01027->SetFillStyle(0);
   pol01027->SetLineColor(2);
   pol01027->SetLineWidth(0);
   pol01027->SetChisquare(7.688619);
   pol01027->SetNDF(3);
   pol01027->GetXaxis()->SetLabelFont(42);
   pol01027->GetXaxis()->SetTitleOffset(1);
   pol01027->GetXaxis()->SetTitleFont(42);
   pol01027->GetYaxis()->SetLabelFont(42);
   pol01027->GetYaxis()->SetTitleFont(42);
   pol01027->SetParameter(0,1.592793e-18);
   pol01027->SetParError(0,8.974692e-20);
   pol01027->SetParLimits(0,0,0);
   pol01027->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01027);
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
   TText *pt_LaTex = pt->AddText("#delta#LTd_{#mu}^{BLIND}#GT = 8.97#times10^{#minus20} e#upointcm");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
