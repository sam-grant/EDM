void AEDM_vs_DS_unblinded_1025-2125MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:14:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-2.547613e-18,4.75,1.409558e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1032[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1032[4] = {
   -1.294589e-18,
   2.868214e-19,
   -1.666278e-19,
   -9.441195e-19};
   Double_t _fex1032[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1032[4] = {
   5.715379e-19,
   4.846799e-19,
   3.985146e-19,
   2.948383e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1032,_fy1032,_fex1032,_fey1032);
   gre->SetName("");
   gre->SetTitle(";;#Omega_{s} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10281032 = new TH1F("Graph_Graph_Graph10281032","",100,0.7,4.3);
   Graph_Graph_Graph10281032->SetMinimum(-2.151896e-18);
   Graph_Graph_Graph10281032->SetMaximum(1.013841e-18);
   Graph_Graph_Graph10281032->SetDirectory(0);
   Graph_Graph_Graph10281032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10281032->SetLineColor(ci);
   Graph_Graph_Graph10281032->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10281032->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10281032->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10281032->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10281032->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10281032->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10281032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10281032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10281032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10281032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10281032->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
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
   fit1032->SetParameter(0,-4.501864e-19);
   fit1032->SetParError(0,1.442328e-19);
   fit1032->SetParLimits(0,0,0);
   fit1032->Draw("same");
   
   TF1 *shift_-11033 = new TF1("shift_-1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_-11033->SetFillColor(19);
   shift_-11033->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_-11033->SetLineColor(ci);
   shift_-11033->SetLineWidth(2);
   shift_-11033->SetLineStyle(2);
   shift_-11033->GetXaxis()->SetLabelFont(42);
   shift_-11033->GetXaxis()->SetTitleOffset(1);
   shift_-11033->GetXaxis()->SetTitleFont(42);
   shift_-11033->GetYaxis()->SetLabelFont(42);
   shift_-11033->GetYaxis()->SetTitleFont(42);
   shift_-11033->SetParameter(0,-5.944191e-19);
   shift_-11033->SetParError(0,0);
   shift_-11033->SetParLimits(0,0,0);
   shift_-11033->Draw("same");
   
   TF1 *shift_11034 = new TF1("shift_1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_11034->SetFillColor(19);
   shift_11034->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_11034->SetLineColor(ci);
   shift_11034->SetLineWidth(2);
   shift_11034->SetLineStyle(2);
   shift_11034->GetXaxis()->SetLabelFont(42);
   shift_11034->GetXaxis()->SetTitleOffset(1);
   shift_11034->GetXaxis()->SetTitleFont(42);
   shift_11034->GetYaxis()->SetLabelFont(42);
   shift_11034->GetYaxis()->SetTitleFont(42);
   shift_11034->SetParameter(0,-3.059536e-19);
   shift_11034->SetParError(0,0);
   shift_11034->SetParLimits(0,0,0);
   shift_11034->Draw("same");
   
   Double_t _fx1033[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1033[4] = {
   -1.294589e-18,
   2.868214e-19,
   -1.666278e-19,
   -9.441195e-19};
   Double_t _fex1033[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1033[4] = {
   5.715379e-19,
   4.846799e-19,
   3.985146e-19,
   2.948383e-19};
   gre = new TGraphErrors(4,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle(";;#Omega_{s} [e#upointcm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph102810321033 = new TH1F("Graph_Graph_Graph_Graph102810321033","",100,0.7,4.3);
   Graph_Graph_Graph_Graph102810321033->SetMinimum(-2.151896e-18);
   Graph_Graph_Graph_Graph102810321033->SetMaximum(1.013841e-18);
   Graph_Graph_Graph_Graph102810321033->SetDirectory(0);
   Graph_Graph_Graph_Graph102810321033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph102810321033->SetLineColor(ci);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph102810321033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph102810321033->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
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
   -1.007183e-18,
   -1.128177e-19,
   -4.654345e-19,
   -9.158884e-20};
   Double_t _fex1034[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1034[4] = {
   5.912875e-19,
   5.035021e-19,
   4.174555e-19,
   3.081264e-19};
   gre = new TGraphErrors(4,_fx1034,_fy1034,_fex1034,_fey1034);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10291034 = new TH1F("Graph_Graph_Graph10291034","S18",100,0.7,4.3);
   Graph_Graph_Graph10291034->SetMinimum(-1.797386e-18);
   Graph_Graph_Graph10291034->SetMaximum(5.895998e-19);
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
   Graph_Graph_Graph10291034->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
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
   1,
   2,
   3,
   4};
   Double_t _fy1035[4] = {
   -1.158348e-18,
   1.009261e-19,
   -3.089853e-19,
   -5.436553e-19};
   Double_t _fex1035[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1035[4] = {
   4.124512e-19,
   3.491851e-19,
   2.884759e-19,
   2.133296e-19};
   gre = new TGraphErrors(4,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10301035 = new TH1F("Graph_Graph_Graph10301035","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10301035->SetMinimum(-1.772891e-18);
   Graph_Graph_Graph10301035->SetMaximum(6.522023e-19);
   Graph_Graph_Graph10301035->SetDirectory(0);
   Graph_Graph_Graph10301035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10301035->SetLineColor(ci);
   Graph_Graph_Graph10301035->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10301035->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10301035->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10301035->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10301035->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10301035->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10301035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10301035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10301035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10301035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10301035->GetYaxis()->SetTitle("#Omega_{s} [e#upointcm]");
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
   
   
   TF1 *pol01036 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01036->SetFillColor(19);
   pol01036->SetFillStyle(0);
   pol01036->SetLineColor(2);
   pol01036->SetLineWidth(0);
   pol01036->SetChisquare(5.870475);
   pol01036->SetNDF(3);
   pol01036->GetXaxis()->SetLabelFont(42);
   pol01036->GetXaxis()->SetTitleOffset(1);
   pol01036->GetXaxis()->SetTitleFont(42);
   pol01036->GetYaxis()->SetLabelFont(42);
   pol01036->GetYaxis()->SetTitleFont(42);
   pol01036->SetParameter(0,-4.501864e-19);
   pol01036->SetParError(0,1.442328e-19);
   pol01036->SetParLimits(0,0,0);
   pol01036->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01036);
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
