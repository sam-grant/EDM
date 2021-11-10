void Ag2_vs_DS_unblinded_825-2375MeV_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:31:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-329.6142,4.75,580.1096);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1023[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1023[4] = {
   265.5316,
   -48.65089,
   190.8468,
   18.37393};
   Double_t _fex1023[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1023[4] = {
   149.0704,
   126.6606,
   104.7216,
   76.14105};
   TGraphErrors *gre = new TGraphErrors(4,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle(";;#Omega_{c} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10191023 = new TH1F("Graph_Graph_Graph10191023","",100,0.7,4.3);
   Graph_Graph_Graph10191023->SetMinimum(-238.6418);
   Graph_Graph_Graph10191023->SetMaximum(489.1372);
   Graph_Graph_Graph10191023->SetDirectory(0);
   Graph_Graph_Graph10191023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10191023->SetLineColor(ci);
   Graph_Graph_Graph10191023->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10191023->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10191023->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10191023->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10191023->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10191023->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10191023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
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
   fit1023->SetParameter(0,47.18255);
   fit1023->SetParError(0,37.59562);
   fit1023->SetParLimits(0,0,0);
   fit1023->Draw("same");
   
   TF1 *shift_-11024 = new TF1("shift_-1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_-11024->SetFillColor(19);
   shift_-11024->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_-11024->SetLineColor(ci);
   shift_-11024->SetLineWidth(2);
   shift_-11024->SetLineStyle(2);
   shift_-11024->GetXaxis()->SetLabelFont(42);
   shift_-11024->GetXaxis()->SetTitleOffset(1);
   shift_-11024->GetXaxis()->SetTitleFont(42);
   shift_-11024->GetYaxis()->SetLabelFont(42);
   shift_-11024->GetYaxis()->SetTitleFont(42);
   shift_-11024->SetParameter(0,9.586931);
   shift_-11024->SetParError(0,0);
   shift_-11024->SetParLimits(0,0,0);
   shift_-11024->Draw("same");
   
   TF1 *shift_11025 = new TF1("shift_1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_11025->SetFillColor(19);
   shift_11025->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_11025->SetLineColor(ci);
   shift_11025->SetLineWidth(2);
   shift_11025->SetLineStyle(2);
   shift_11025->GetXaxis()->SetLabelFont(42);
   shift_11025->GetXaxis()->SetTitleOffset(1);
   shift_11025->GetXaxis()->SetTitleFont(42);
   shift_11025->GetYaxis()->SetLabelFont(42);
   shift_11025->GetYaxis()->SetTitleFont(42);
   shift_11025->SetParameter(0,84.77816);
   shift_11025->SetParError(0,0);
   shift_11025->SetParLimits(0,0,0);
   shift_11025->Draw("same");
   
   Double_t _fx1024[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1024[4] = {
   265.5316,
   -48.65089,
   190.8468,
   18.37393};
   Double_t _fex1024[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1024[4] = {
   149.0704,
   126.6606,
   104.7216,
   76.14105};
   gre = new TGraphErrors(4,_fx1024,_fy1024,_fex1024,_fey1024);
   gre->SetName("");
   gre->SetTitle(";;#Omega_{c} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph101910231024 = new TH1F("Graph_Graph_Graph_Graph101910231024","",100,0.7,4.3);
   Graph_Graph_Graph_Graph101910231024->SetMinimum(-238.6418);
   Graph_Graph_Graph_Graph101910231024->SetMaximum(489.1372);
   Graph_Graph_Graph_Graph101910231024->SetDirectory(0);
   Graph_Graph_Graph_Graph101910231024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph101910231024->SetLineColor(ci);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101910231024->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
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
   126.5923,
   88.14375,
   -39.97545,
   -22.34016};
   Double_t _fex1025[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1025[4] = {
   154.447,
   132.3471,
   109.3438,
   80.66541};
   gre = new TGraphErrors(4,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10201025 = new TH1F("Graph_Graph_Graph10201025","S18",100,0.7,4.3);
   Graph_Graph_Graph10201025->SetMinimum(-192.3551);
   Graph_Graph_Graph10201025->SetMaximum(324.0753);
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
   Graph_Graph_Graph10201025->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
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
   1,
   2,
   3,
   4};
   Double_t _fy1026[4] = {
   199.3444,
   17.9591,
   81.51136,
   -0.8772606};
   Double_t _fex1026[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1026[4] = {
   107.3346,
   91.51392,
   75.70901,
   55.31459};
   gre = new TGraphErrors(4,_fx1026,_fy1026,_fex1026,_fey1026);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10211026 = new TH1F("Graph_Graph_Graph10211026","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10211026->SetMinimum(-111.5782);
   Graph_Graph_Graph10211026->SetMaximum(344.7024);
   Graph_Graph_Graph10211026->SetDirectory(0);
   Graph_Graph_Graph10211026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10211026->SetLineColor(ci);
   Graph_Graph_Graph10211026->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10211026->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10211026->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10211026->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10211026->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10211026->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10211026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10211026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10211026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10211026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10211026->GetYaxis()->SetTitle("#Omega_{c} [ppm]");
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
   
   
   TF1 *pol01027 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01027->SetFillColor(19);
   pol01027->SetFillStyle(0);
   pol01027->SetLineColor(2);
   pol01027->SetLineWidth(0);
   pol01027->SetChisquare(3.072167);
   pol01027->SetNDF(3);
   pol01027->GetXaxis()->SetLabelFont(42);
   pol01027->GetXaxis()->SetTitleOffset(1);
   pol01027->GetXaxis()->SetTitleFont(42);
   pol01027->GetYaxis()->SetLabelFont(42);
   pol01027->GetYaxis()->SetTitleFont(42);
   pol01027->SetParameter(0,47.18255);
   pol01027->SetParError(0,37.59562);
   pol01027->SetParLimits(0,0,0);
   pol01027->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01027);
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
