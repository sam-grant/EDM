void Ag2_vs_DS_blinded_750-2750MeV_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec 10 11:08:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.15,-319.581,4.65,285.1201);
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
   -85.94099,
   -41.95388,
   10.0158,
   38.04938};
   Double_t _fex1023[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1023[4] = {
   101.3857,
   86.03649,
   72.50422,
   52.99358};
   TGraphErrors *gre = new TGraphErrors(4,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle(";;B_{z}/B_{y} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10191023 = new TH1F("Graph_Graph_Graph10191023","",100,0.6,4.2);
   Graph_Graph_Graph10191023->SetMinimum(-259.1109);
   Graph_Graph_Graph10191023->SetMaximum(224.65);
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
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10191023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10191023->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
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
   fit1023->SetParameter(0,-17.09815);
   fit1023->SetParError(0,27.63581);
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
   minusSigma1024->SetParameter(0,-44.73396);
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
   plusSigma1025->SetParameter(0,10.53766);
   plusSigma1025->SetParError(0,0);
   plusSigma1025->SetParLimits(0,0,0);
   plusSigma1025->Draw("same");
   
   Double_t _fx1024[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1024[4] = {
   -85.94099,
   -41.95388,
   10.0158,
   38.04938};
   Double_t _fex1024[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1024[4] = {
   101.3857,
   86.03649,
   72.50422,
   52.99358};
   gre = new TGraphErrors(4,_fx1024,_fy1024,_fex1024,_fey1024);
   gre->SetName("");
   gre->SetTitle(";;B_{z}/B_{y} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph101910231024 = new TH1F("Graph_Graph_Graph_Graph101910231024","",100,0.6,4.2);
   Graph_Graph_Graph_Graph101910231024->SetMinimum(-259.1109);
   Graph_Graph_Graph_Graph101910231024->SetMaximum(224.65);
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
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph101910231024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph101910231024->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
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
   43.041,
   -104.6833,
   -71.10955,
   -14.98567};
   Double_t _fex1025[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1025[4] = {
   121.0727,
   102.9518,
   88.3575,
   63.26051};
   gre = new TGraphErrors(4,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10201025 = new TH1F("Graph_Graph_Graph10201025","S18",100,0.7,4.3);
   Graph_Graph_Graph10201025->SetMinimum(-244.8099);
   Graph_Graph_Graph10201025->SetMaximum(201.2885);
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
   Graph_Graph_Graph10201025->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
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
   -27.47183,
   -75.22617,
   -18.4696,
   8.274618};
   Double_t _fex1026[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1026[4] = {
   78.2063,
   66.45087,
   56.20049,
   40.73058};
   gre = new TGraphErrors(4,_fx1026,_fy1026,_fex1026,_fey1026);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10211026 = new TH1F("Graph_Graph_Graph10211026","S12S18",100,0.8,4.4);
   Graph_Graph_Graph10211026->SetMinimum(-160.9182);
   Graph_Graph_Graph10211026->SetMaximum(69.97561);
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
   Graph_Graph_Graph10211026->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
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
   pol01027->SetChisquare(1.171437);
   pol01027->SetNDF(3);
   pol01027->GetXaxis()->SetLabelFont(42);
   pol01027->GetXaxis()->SetTitleOffset(1);
   pol01027->GetXaxis()->SetTitleFont(42);
   pol01027->GetYaxis()->SetLabelFont(42);
   pol01027->GetYaxis()->SetTitleFont(42);
   pol01027->SetParameter(0,-17.09815);
   pol01027->SetParError(0,27.63581);
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
