void AEDM_vs_DS_blinded_750-2500MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 09:29:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-8.916826e-20,4.75,2.604239e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1014[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1014[4] = {
   1.827281e-18,
   9.47735e-19,
   1.882578e-18,
   1.577647e-18};
   Double_t _fex1014[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1014[4] = {
   3.384116e-19,
   2.840234e-19,
   2.459991e-19,
   1.829707e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1014,_fy1014,_fex1014,_fey1014);
   gre->SetName("");
   gre->SetTitle(";;d_{#mu}^{BLIND} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10101014 = new TH1F("Graph_Graph_Graph10101014","",100,0.7,4.3);
   Graph_Graph_Graph10101014->SetMinimum(1.801724e-19);
   Graph_Graph_Graph10101014->SetMaximum(2.334898e-18);
   Graph_Graph_Graph10101014->SetDirectory(0);
   Graph_Graph_Graph10101014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10101014->SetLineColor(ci);
   Graph_Graph_Graph10101014->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10101014->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10101014->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10101014->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10101014->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10101014->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10101014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10101014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10101014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10101014->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10101014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10101014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10101014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10101014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10101014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10101014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10101014);
   
   gre->Draw("ap");
   
   TF1 *fit1014 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1014->SetFillColor(19);
   fit1014->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1014->SetLineColor(ci);
   fit1014->SetLineWidth(1);
   fit1014->GetXaxis()->SetLabelFont(42);
   fit1014->GetXaxis()->SetTitleOffset(1);
   fit1014->GetXaxis()->SetTitleFont(42);
   fit1014->GetYaxis()->SetLabelFont(42);
   fit1014->GetYaxis()->SetTitleFont(42);
   fit1014->SetParameter(0,1.520336e-18);
   fit1014->SetParError(0,9.295179e-20);
   fit1014->SetParLimits(0,0,0);
   fit1014->Draw("same");
   
   TF1 *shift_-11015 = new TF1("shift_-1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_-11015->SetFillColor(19);
   shift_-11015->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_-11015->SetLineColor(ci);
   shift_-11015->SetLineWidth(2);
   shift_-11015->SetLineStyle(2);
   shift_-11015->GetXaxis()->SetLabelFont(42);
   shift_-11015->GetXaxis()->SetTitleOffset(1);
   shift_-11015->GetXaxis()->SetTitleFont(42);
   shift_-11015->GetYaxis()->SetLabelFont(42);
   shift_-11015->GetYaxis()->SetTitleFont(42);
   shift_-11015->SetParameter(0,1.427384e-18);
   shift_-11015->SetParError(0,0);
   shift_-11015->SetParLimits(0,0,0);
   shift_-11015->Draw("same");
   
   TF1 *shift_11016 = new TF1("shift_1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_11016->SetFillColor(19);
   shift_11016->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_11016->SetLineColor(ci);
   shift_11016->SetLineWidth(2);
   shift_11016->SetLineStyle(2);
   shift_11016->GetXaxis()->SetLabelFont(42);
   shift_11016->GetXaxis()->SetTitleOffset(1);
   shift_11016->GetXaxis()->SetTitleFont(42);
   shift_11016->GetYaxis()->SetLabelFont(42);
   shift_11016->GetYaxis()->SetTitleFont(42);
   shift_11016->SetParameter(0,1.613287e-18);
   shift_11016->SetParError(0,0);
   shift_11016->SetParLimits(0,0,0);
   shift_11016->Draw("same");
   
   Double_t _fx1015[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1015[4] = {
   1.827281e-18,
   9.47735e-19,
   1.882578e-18,
   1.577647e-18};
   Double_t _fex1015[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1015[4] = {
   3.384116e-19,
   2.840234e-19,
   2.459991e-19,
   1.829707e-19};
   gre = new TGraphErrors(4,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle(";;d_{#mu}^{BLIND} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph101010141015 = new TH1F("Graph_Graph_Graph_Graph101010141015","",100,0.7,4.3);
   Graph_Graph_Graph_Graph101010141015->SetMinimum(1.801724e-19);
   Graph_Graph_Graph_Graph101010141015->SetMaximum(2.334898e-18);
   Graph_Graph_Graph_Graph101010141015->SetDirectory(0);
   Graph_Graph_Graph_Graph101010141015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph101010141015->SetLineColor(ci);
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph101010141015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101010141015->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph_Graph101010141015->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph101010141015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph101010141015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101010141015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph101010141015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph101010141015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101010141015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101010141015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph101010141015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph101010141015);
   
   gre->Draw("p ");
   
   Double_t _fx1016[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1016[4] = {
   6.946782e-19,
   1.298066e-18,
   1.902853e-18,
   1.576122e-18};
   Double_t _fex1016[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1016[4] = {
   3.430038e-19,
   2.987401e-19,
   2.575352e-19,
   1.954153e-19};
   gre = new TGraphErrors(4,_fx1016,_fy1016,_fex1016,_fey1016);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10111016 = new TH1F("Graph_Graph_Graph10111016","S18",100,0.7,4.3);
   Graph_Graph_Graph10111016->SetMinimum(1.70803e-19);
   Graph_Graph_Graph10111016->SetMaximum(2.341259e-18);
   Graph_Graph_Graph10111016->SetDirectory(0);
   Graph_Graph_Graph10111016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10111016->SetLineColor(ci);
   Graph_Graph_Graph10111016->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10111016->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10111016->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10111016->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10111016->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10111016->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10111016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10111016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10111016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10111016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10111016->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10111016->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10111016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10111016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10111016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10111016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10111016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10111016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10111016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10111016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10111016);
   
   gre->Draw("p ");
   
   Double_t _fx1017[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1017[4] = {
   1.288997e-18,
   1.114292e-18,
   1.891631e-18,
   1.576285e-18};
   Double_t _fex1017[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1017[4] = {
   2.440544e-19,
   2.096977e-19,
   1.887232e-19,
   1.441378e-19};
   gre = new TGraphErrors(4,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10121017 = new TH1F("Graph_Graph_Graph10121017","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10121017->SetMinimum(7.870182e-19);
   Graph_Graph_Graph10121017->SetMaximum(2.19793e-18);
   Graph_Graph_Graph10121017->SetDirectory(0);
   Graph_Graph_Graph10121017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10121017->SetLineColor(ci);
   Graph_Graph_Graph10121017->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10121017->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10121017->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10121017->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10121017->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10121017->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10121017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10121017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10121017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10121017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10121017->GetYaxis()->SetTitle("d_{#mu}^{BLIND} [e#upointcm]");
   Graph_Graph_Graph10121017->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10121017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10121017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10121017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10121017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10121017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10121017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10121017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10121017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10121017);
   
   
   TF1 *pol01018 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01018->SetFillColor(19);
   pol01018->SetFillStyle(0);
   pol01018->SetLineColor(2);
   pol01018->SetLineWidth(0);
   pol01018->SetChisquare(8.669242);
   pol01018->SetNDF(3);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,1.520336e-18);
   pol01018->SetParError(0,9.295179e-20);
   pol01018->SetParLimits(0,0,0);
   pol01018->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01018);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.91,0.8,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","S12 & S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
