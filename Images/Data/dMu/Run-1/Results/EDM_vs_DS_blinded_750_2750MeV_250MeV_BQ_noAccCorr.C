void EDM_vs_DS_blinded_750_2750MeV_250MeV_BQ_noAccCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 29 14:17:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.15,-3.382498e-19,4.65,1.557752e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1032[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1032[4] = {
   9.436212e-19,
   4.955304e-19,
   8.723419e-19,
   7.28002e-19};
   Double_t _fex1032[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1032[4] = {
   1.698121e-19,
   1.453676e-19,
   1.212886e-19,
   9.063059e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1032,_fy1032,_fex1032,_fey1032);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10281032 = new TH1F("Graph_Graph_Graph10281032","",100,0.6,4.2);
   Graph_Graph_Graph10281032->SetMinimum(-1.486496e-19);
   Graph_Graph_Graph10281032->SetMaximum(1.368151e-18);
   Graph_Graph_Graph10281032->SetDirectory(0);
   Graph_Graph_Graph10281032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10281032->SetLineColor(ci);
   Graph_Graph_Graph10281032->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph_Graph10281032->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph_Graph10281032->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph_Graph10281032->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph_Graph10281032->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10281032->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10281032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10281032->GetXaxis()->SetLabelSize(0.055);
   Graph_Graph_Graph10281032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10281032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10281032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10281032->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10281032->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10281032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10281032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10281032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10281032->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10281032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10281032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10281032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10281032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10281032);
   
   gre->Draw("ap");
   
   TF1 *fit1032 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1032->SetFillColor(19);
   fit1032->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1032->SetLineColor(ci);
   fit1032->SetLineWidth(1);
   fit1032->GetXaxis()->SetLabelFont(42);
   fit1032->GetXaxis()->SetTitleOffset(1);
   fit1032->GetXaxis()->SetTitleFont(42);
   fit1032->GetYaxis()->SetLabelFont(42);
   fit1032->GetYaxis()->SetTitleFont(42);
   fit1032->SetParameter(0,7.21532e-19);
   fit1032->SetParError(0,4.540518e-20);
   fit1032->SetParLimits(0,0,0);
   fit1032->Draw("same");
   
   TF1 *minusSigma1033 = new TF1("minusSigma","pol0",0,5, TF1::EAddToList::kDefault);
   minusSigma1033->SetFillColor(19);
   minusSigma1033->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   minusSigma1033->SetLineColor(ci);
   minusSigma1033->SetLineWidth(2);
   minusSigma1033->SetLineStyle(2);
   minusSigma1033->GetXaxis()->SetLabelFont(42);
   minusSigma1033->GetXaxis()->SetTitleOffset(1);
   minusSigma1033->GetXaxis()->SetTitleFont(42);
   minusSigma1033->GetYaxis()->SetLabelFont(42);
   minusSigma1033->GetYaxis()->SetTitleFont(42);
   minusSigma1033->SetParameter(0,6.761268e-19);
   minusSigma1033->SetParError(0,0);
   minusSigma1033->SetParLimits(0,0,0);
   minusSigma1033->Draw("same");
   
   TF1 *plusSigma1034 = new TF1("plusSigma","pol0",0,5, TF1::EAddToList::kDefault);
   plusSigma1034->SetFillColor(19);
   plusSigma1034->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   plusSigma1034->SetLineColor(ci);
   plusSigma1034->SetLineWidth(2);
   plusSigma1034->SetLineStyle(2);
   plusSigma1034->GetXaxis()->SetLabelFont(42);
   plusSigma1034->GetXaxis()->SetTitleOffset(1);
   plusSigma1034->GetXaxis()->SetTitleFont(42);
   plusSigma1034->GetYaxis()->SetLabelFont(42);
   plusSigma1034->GetYaxis()->SetTitleFont(42);
   plusSigma1034->SetParameter(0,7.669372e-19);
   plusSigma1034->SetParError(0,0);
   plusSigma1034->SetParLimits(0,0,0);
   plusSigma1034->Draw("same");
   
   Double_t _fx1033[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1033[4] = {
   9.436212e-19,
   4.955304e-19,
   8.723419e-19,
   7.28002e-19};
   Double_t _fex1033[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1033[4] = {
   1.698121e-19,
   1.453676e-19,
   1.212886e-19,
   9.063059e-20};
   gre = new TGraphErrors(4,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph102810321033 = new TH1F("Graph_Graph_Graph_Graph102810321033","",100,0.6,4.2);
   Graph_Graph_Graph_Graph102810321033->SetMinimum(-1.486496e-19);
   Graph_Graph_Graph_Graph102810321033->SetMaximum(1.368151e-18);
   Graph_Graph_Graph_Graph102810321033->SetDirectory(0);
   Graph_Graph_Graph_Graph102810321033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph102810321033->SetLineColor(ci);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetLabelSize(0.055);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph102810321033->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph_Graph102810321033->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph102810321033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph102810321033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph102810321033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph102810321033->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph102810321033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph102810321033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph102810321033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph102810321033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph102810321033);
   
   gre->Draw("p ");
   
   Double_t _fx1034[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1034[4] = {
   2.89737e-19,
   6.232289e-19,
   9.143324e-19,
   7.108965e-19};
   Double_t _fex1034[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1034[4] = {
   1.753546e-19,
   1.511935e-19,
   1.269996e-19,
   9.550751e-20};
   gre = new TGraphErrors(4,_fx1034,_fy1034,_fex1034,_fey1034);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10291034 = new TH1F("Graph_Graph_Graph10291034","",100,0.7,4.3);
   Graph_Graph_Graph10291034->SetMinimum(2.168738e-20);
   Graph_Graph_Graph10291034->SetMaximum(1.134027e-18);
   Graph_Graph_Graph10291034->SetDirectory(0);
   Graph_Graph_Graph10291034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10291034->SetLineColor(ci);
   Graph_Graph_Graph10291034->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10291034->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10291034->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10291034->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10291034->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10291034->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10291034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10291034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10291034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10291034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10291034->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10291034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10291034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10291034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10291034->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10291034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10291034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10291034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10291034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10291034);
   
   gre->Draw("p ");
   
   Double_t _fx1035[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1035[4] = {
   6.307462e-19,
   5.563522e-19,
   8.920816e-19,
   7.202239e-19};
   Double_t _fex1035[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1035[4] = {
   1.231968e-19,
   1.065278e-19,
   9.052786e-20,
   6.916737e-20};
   gre = new TGraphErrors(4,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10301035 = new TH1F("Graph_Graph_Graph10301035","",100,0.8,4.4);
   Graph_Graph_Graph10301035->SetMinimum(3.965459e-19);
   Graph_Graph_Graph10301035->SetMaximum(1.035888e-18);
   Graph_Graph_Graph10301035->SetDirectory(0);
   Graph_Graph_Graph10301035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10301035->SetLineColor(ci);
   Graph_Graph_Graph10301035->GetXaxis()->SetBinLabel(6,"Run-1a");
   Graph_Graph_Graph10301035->GetXaxis()->SetBinLabel(34,"Run-1b");
   Graph_Graph_Graph10301035->GetXaxis()->SetBinLabel(62,"Run-1c");
   Graph_Graph_Graph10301035->GetXaxis()->SetBinLabel(89,"Run-1d");
   Graph_Graph_Graph10301035->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10301035->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10301035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10301035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10301035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10301035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10301035->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10301035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10301035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10301035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10301035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10301035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10301035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10301035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10301035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10301035);
   
   
   TF1 *pol01036 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01036->SetFillColor(19);
   pol01036->SetFillStyle(0);
   pol01036->SetLineColor(2);
   pol01036->SetLineWidth(0);
   pol01036->SetChisquare(6.496952);
   pol01036->SetNDF(3);
   pol01036->GetXaxis()->SetLabelFont(42);
   pol01036->GetXaxis()->SetTitleOffset(1);
   pol01036->GetXaxis()->SetTitleFont(42);
   pol01036->GetYaxis()->SetLabelFont(42);
   pol01036->GetYaxis()->SetTitleFont(42);
   pol01036->SetParameter(0,7.21532e-19);
   pol01036->SetParError(0,4.540518e-20);
   pol01036->SetParLimits(0,0,0);
   pol01036->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01036);
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
   TText *pt_LaTex = pt->AddText("#delta#LTd_{#mu}^{BLIND}#GT = 4.54#times10^{#minus20} e#upointcm");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
