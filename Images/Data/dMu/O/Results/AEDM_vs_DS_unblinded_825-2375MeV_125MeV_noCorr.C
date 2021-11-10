void AEDM_vs_DS_unblinded_825-2375MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-1.554335e-19,4.75,8.707024e-20);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1068[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1068[4] = {
   -6.973487e-20,
   1.039266e-20,
   -1.267588e-20,
   -5.698449e-20};
   Double_t _fex1068[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1068[4] = {
   4.09655e-20,
   3.495147e-20,
   2.875656e-20,
   2.103436e-20};
   TGraphErrors *gre = new TGraphErrors(4,_fx1068,_fy1068,_fex1068,_fey1068);
   gre->SetName("");
   gre->SetTitle(";;#Omega_{s} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10641068 = new TH1F("Graph_Graph_Graph10641068","",100,0.7,4.3);
   Graph_Graph_Graph10641068->SetMinimum(-1.311831e-19);
   Graph_Graph_Graph10641068->SetMaximum(6.281987e-20);
   Graph_Graph_Graph10641068->SetDirectory(0);
   Graph_Graph_Graph10641068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10641068->SetLineColor(ci);
   Graph_Graph_Graph10641068->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10641068->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10641068->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10641068->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10641068->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10641068->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10641068->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10641068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10641068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10641068->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10641068->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph_Graph10641068->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10641068->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10641068->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10641068->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10641068->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10641068->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10641068->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10641068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10641068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10641068);
   
   gre->Draw("ap");
   
   TF1 *fit1068 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1068->SetFillColor(19);
   fit1068->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1068->SetLineColor(ci);
   fit1068->SetLineWidth(1);
   fit1068->GetXaxis()->SetLabelFont(42);
   fit1068->GetXaxis()->SetTitleOffset(1);
   fit1068->GetXaxis()->SetTitleFont(42);
   fit1068->GetYaxis()->SetLabelFont(42);
   fit1068->GetYaxis()->SetTitleFont(42);
   fit1068->SetParameter(0,-3.279159e-20);
   fit1068->SetParError(0,1.03935e-20);
   fit1068->SetParLimits(0,0,0);
   fit1068->Draw("same");
   
   TF1 *shift_-11069 = new TF1("shift_-1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_-11069->SetFillColor(19);
   shift_-11069->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_-11069->SetLineColor(ci);
   shift_-11069->SetLineWidth(2);
   shift_-11069->SetLineStyle(2);
   shift_-11069->GetXaxis()->SetLabelFont(42);
   shift_-11069->GetXaxis()->SetTitleOffset(1);
   shift_-11069->GetXaxis()->SetTitleFont(42);
   shift_-11069->GetYaxis()->SetLabelFont(42);
   shift_-11069->GetYaxis()->SetTitleFont(42);
   shift_-11069->SetParameter(0,-4.318509e-20);
   shift_-11069->SetParError(0,0);
   shift_-11069->SetParLimits(0,0,0);
   shift_-11069->Draw("same");
   
   TF1 *shift_11070 = new TF1("shift_1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_11070->SetFillColor(19);
   shift_11070->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_11070->SetLineColor(ci);
   shift_11070->SetLineWidth(2);
   shift_11070->SetLineStyle(2);
   shift_11070->GetXaxis()->SetLabelFont(42);
   shift_11070->GetXaxis()->SetTitleOffset(1);
   shift_11070->GetXaxis()->SetTitleFont(42);
   shift_11070->GetYaxis()->SetLabelFont(42);
   shift_11070->GetYaxis()->SetTitleFont(42);
   shift_11070->SetParameter(0,-2.239808e-20);
   shift_11070->SetParError(0,0);
   shift_11070->SetParLimits(0,0,0);
   shift_11070->Draw("same");
   
   Double_t _fx1069[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1069[4] = {
   -6.973487e-20,
   1.039266e-20,
   -1.267588e-20,
   -5.698449e-20};
   Double_t _fex1069[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1069[4] = {
   4.09655e-20,
   3.495147e-20,
   2.875656e-20,
   2.103436e-20};
   gre = new TGraphErrors(4,_fx1069,_fy1069,_fex1069,_fey1069);
   gre->SetName("");
   gre->SetTitle(";;#Omega_{s} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph106410681069 = new TH1F("Graph_Graph_Graph_Graph106410681069","",100,0.7,4.3);
   Graph_Graph_Graph_Graph106410681069->SetMinimum(-1.311831e-19);
   Graph_Graph_Graph_Graph106410681069->SetMaximum(6.281987e-20);
   Graph_Graph_Graph_Graph106410681069->SetDirectory(0);
   Graph_Graph_Graph_Graph106410681069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph106410681069->SetLineColor(ci);
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph106410681069->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph106410681069->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph_Graph_Graph106410681069->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph106410681069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph106410681069->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph106410681069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph106410681069->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph106410681069->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph106410681069->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph106410681069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph106410681069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph106410681069);
   
   gre->Draw("p ");
   
   Double_t _fx1070[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1070[4] = {
   -4.15045e-20,
   -1.35433e-20,
   -2.671922e-20,
   -3.222819e-20};
   Double_t _fex1070[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1070[4] = {
   4.280922e-20,
   3.65801e-20,
   3.031465e-20,
   2.239893e-20};
   gre = new TGraphErrors(4,_fx1070,_fy1070,_fex1070,_fey1070);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10651070 = new TH1F("Graph_Graph_Graph10651070","S18",100,0.7,4.3);
   Graph_Graph_Graph10651070->SetMinimum(-9.504877e-20);
   Graph_Graph_Graph10651070->SetMaximum(3.377186e-20);
   Graph_Graph_Graph10651070->SetDirectory(0);
   Graph_Graph_Graph10651070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10651070->SetLineColor(ci);
   Graph_Graph_Graph10651070->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10651070->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10651070->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10651070->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10651070->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10651070->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10651070->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10651070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10651070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10651070->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10651070->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph_Graph10651070->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10651070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10651070->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10651070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10651070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10651070->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10651070->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10651070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10651070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10651070);
   
   gre->Draw("p ");
   
   Double_t _fx1071[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1071[4] = {
   -5.620191e-20,
   -7.550608e-22,
   -1.949086e-20,
   -4.548781e-20};
   Double_t _fex1071[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1071[4] = {
   2.960144e-20,
   2.527233e-20,
   2.086425e-20,
   1.533387e-20};
   gre = new TGraphErrors(4,_fx1071,_fy1071,_fex1071,_fey1071);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10661071 = new TH1F("Graph_Graph_Graph10661071","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10661071->SetMinimum(-9.683542e-20);
   Graph_Graph_Graph10661071->SetMaximum(3.554934e-20);
   Graph_Graph_Graph10661071->SetDirectory(0);
   Graph_Graph_Graph10661071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10661071->SetLineColor(ci);
   Graph_Graph_Graph10661071->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10661071->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10661071->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10661071->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10661071->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10661071->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10661071->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10661071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10661071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10661071->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10661071->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
   Graph_Graph_Graph10661071->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10661071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10661071->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10661071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10661071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10661071->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10661071->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10661071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10661071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10661071);
   
   
   TF1 *pol01072 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01072->SetFillColor(19);
   pol01072->SetFillStyle(0);
   pol01072->SetLineColor(2);
   pol01072->SetLineWidth(0);
   pol01072->SetChisquare(3.324339);
   pol01072->SetNDF(3);
   pol01072->GetXaxis()->SetLabelFont(42);
   pol01072->GetXaxis()->SetTitleOffset(1);
   pol01072->GetXaxis()->SetTitleFont(42);
   pol01072->GetYaxis()->SetLabelFont(42);
   pol01072->GetYaxis()->SetTitleFont(42);
   pol01072->SetParameter(0,-3.279159e-20);
   pol01072->SetParError(0,1.03935e-20);
   pol01072->SetParLimits(0,0,0);
   pol01072->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01072);
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
