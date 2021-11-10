void Ag2_vs_DS_blinded_750-2500MeV_125MeV_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 14:12:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.25,-24.30854,4.75,20.86826);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1041[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1041[4] = {
   -8.257397,
   -1.434652,
   1.626103,
   4.291564};
   Double_t _fex1041[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1041[4] = {
   7.688975,
   6.556004,
   5.385475,
   3.926219};
   TGraphErrors *gre = new TGraphErrors(4,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle(";;B_{z}/B_{y} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10371041 = new TH1F("Graph_Graph_Graph10371041","",100,0.7,4.3);
   Graph_Graph_Graph10371041->SetMinimum(-19.79086);
   Graph_Graph_Graph10371041->SetMaximum(16.35058);
   Graph_Graph_Graph10371041->SetDirectory(0);
   Graph_Graph_Graph10371041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10371041->SetLineColor(ci);
   Graph_Graph_Graph10371041->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10371041->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10371041->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10371041->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10371041->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10371041->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10371041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10371041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10371041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10371041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph10371041->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10371041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10371041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10371041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10371041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10371041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10371041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10371041);
   
   gre->Draw("ap");
   
   TF1 *fit1041 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1041->SetFillColor(19);
   fit1041->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1041->SetLineColor(ci);
   fit1041->SetLineWidth(1);
   fit1041->GetXaxis()->SetLabelFont(42);
   fit1041->GetXaxis()->SetTitleOffset(1);
   fit1041->GetXaxis()->SetTitleFont(42);
   fit1041->GetYaxis()->SetLabelFont(42);
   fit1041->GetYaxis()->SetTitleFont(42);
   fit1041->SetParameter(0,0.2141227);
   fit1041->SetParError(0,1.950303);
   fit1041->SetParLimits(0,0,0);
   fit1041->Draw("same");
   
   TF1 *shift_-11042 = new TF1("shift_-1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_-11042->SetFillColor(19);
   shift_-11042->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_-11042->SetLineColor(ci);
   shift_-11042->SetLineWidth(2);
   shift_-11042->SetLineStyle(2);
   shift_-11042->GetXaxis()->SetLabelFont(42);
   shift_-11042->GetXaxis()->SetTitleOffset(1);
   shift_-11042->GetXaxis()->SetTitleFont(42);
   shift_-11042->GetYaxis()->SetLabelFont(42);
   shift_-11042->GetYaxis()->SetTitleFont(42);
   shift_-11042->SetParameter(0,-1.73618);
   shift_-11042->SetParError(0,0);
   shift_-11042->SetParLimits(0,0,0);
   shift_-11042->Draw("same");
   
   TF1 *shift_11043 = new TF1("shift_1","pol0",0,5, TF1::EAddToList::kDefault);
   shift_11043->SetFillColor(19);
   shift_11043->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   shift_11043->SetLineColor(ci);
   shift_11043->SetLineWidth(2);
   shift_11043->SetLineStyle(2);
   shift_11043->GetXaxis()->SetLabelFont(42);
   shift_11043->GetXaxis()->SetTitleOffset(1);
   shift_11043->GetXaxis()->SetTitleFont(42);
   shift_11043->GetYaxis()->SetLabelFont(42);
   shift_11043->GetYaxis()->SetTitleFont(42);
   shift_11043->SetParameter(0,2.164425);
   shift_11043->SetParError(0,0);
   shift_11043->SetParLimits(0,0,0);
   shift_11043->Draw("same");
   
   Double_t _fx1042[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1042[4] = {
   -8.257397,
   -1.434652,
   1.626103,
   4.291564};
   Double_t _fex1042[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1042[4] = {
   7.688975,
   6.556004,
   5.385475,
   3.926219};
   gre = new TGraphErrors(4,_fx1042,_fy1042,_fex1042,_fey1042);
   gre->SetName("");
   gre->SetTitle(";;B_{z}/B_{y} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph103710411042 = new TH1F("Graph_Graph_Graph_Graph103710411042","",100,0.7,4.3);
   Graph_Graph_Graph_Graph103710411042->SetMinimum(-19.79086);
   Graph_Graph_Graph_Graph103710411042->SetMaximum(16.35058);
   Graph_Graph_Graph_Graph103710411042->SetDirectory(0);
   Graph_Graph_Graph_Graph103710411042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph103710411042->SetLineColor(ci);
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph103710411042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph103710411042->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph_Graph103710411042->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph103710411042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph103710411042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph103710411042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph103710411042->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph_Graph103710411042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph103710411042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph103710411042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph103710411042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph103710411042);
   
   gre->Draw("p ");
   
   Double_t _fx1043[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1043[4] = {
   4.242835,
   -8.753616,
   -0.5099149,
   0.5924174};
   Double_t _fex1043[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1043[4] = {
   8.071828,
   6.905183,
   5.711307,
   4.20998};
   gre = new TGraphErrors(4,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10381043 = new TH1F("Graph_Graph_Graph10381043","S18",100,0.7,4.3);
   Graph_Graph_Graph10381043->SetMinimum(-18.45614);
   Graph_Graph_Graph10381043->SetMaximum(15.11201);
   Graph_Graph_Graph10381043->SetDirectory(0);
   Graph_Graph_Graph10381043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10381043->SetLineColor(ci);
   Graph_Graph_Graph10381043->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10381043->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10381043->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10381043->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10381043->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10381043->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10381043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10381043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10381043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10381043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10381043->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph10381043->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10381043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10381043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10381043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10381043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10381043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10381043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10381043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10381043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10381043);
   
   gre->Draw("p ");
   
   Double_t _fx1044[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1044[4] = {
   -2.391843,
   -4.879411,
   0.5742524,
   2.571443};
   Double_t _fex1044[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1044[4] = {
   5.567861,
   4.754753,
   3.918439,
   2.871423};
   gre = new TGraphErrors(4,_fx1044,_fy1044,_fex1044,_fey1044);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10391044 = new TH1F("Graph_Graph_Graph10391044","S12S18",100,0.7,4.3);
   Graph_Graph_Graph10391044->SetMinimum(-11.14187);
   Graph_Graph_Graph10391044->SetMaximum(6.950568);
   Graph_Graph_Graph10391044->SetDirectory(0);
   Graph_Graph_Graph10391044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10391044->SetLineColor(ci);
   Graph_Graph_Graph10391044->GetXaxis()->SetBinLabel(9,"Run-1a");
   Graph_Graph_Graph10391044->GetXaxis()->SetBinLabel(37,"Run-1b");
   Graph_Graph_Graph10391044->GetXaxis()->SetBinLabel(64,"Run-1c");
   Graph_Graph_Graph10391044->GetXaxis()->SetBinLabel(92,"Run-1d");
   Graph_Graph_Graph10391044->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10391044->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10391044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10391044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10391044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10391044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10391044->GetYaxis()->SetTitle("B_{z}/B_{y} [ppm]");
   Graph_Graph_Graph10391044->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10391044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10391044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10391044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10391044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10391044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10391044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10391044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10391044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10391044);
   
   
   TF1 *pol01045 = new TF1("pol0","pol0",0.7,4.3, TF1::EAddToList::kNo);
   pol01045->SetFillColor(19);
   pol01045->SetFillStyle(0);
   pol01045->SetLineColor(2);
   pol01045->SetLineWidth(0);
   pol01045->SetChisquare(2.049057);
   pol01045->SetNDF(3);
   pol01045->GetXaxis()->SetLabelFont(42);
   pol01045->GetXaxis()->SetTitleOffset(1);
   pol01045->GetXaxis()->SetTitleFont(42);
   pol01045->GetYaxis()->SetLabelFont(42);
   pol01045->GetYaxis()->SetTitleFont(42);
   pol01045->SetParameter(0,0.2141227);
   pol01045->SetParError(0,1.950303);
   pol01045->SetParLimits(0,0,0);
   pol01045->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01045);
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
