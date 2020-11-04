void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:21:34 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.06352652,1.491396e+07,0.7539699);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1213[13] = {
   980385,
   1945311,
   2907125,
   3831858,
   4797147,
   5761945,
   6724437,
   7689564,
   8654560,
   9619580,
   1.058317e+07,
   1.154995e+07,
   1.251354e+07};
   Double_t Fits_fy1213[13] = {
   0.638896,
   0.4536074,
   0.370433,
   0.322794,
   0.2885402,
   0.263116,
   0.2435249,
   0.2278333,
   0.2146691,
   0.2036511,
   0.1941269,
   0.1858747,
   0.1786004};
   Double_t Fits_fex1213[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Fits_fey1213[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1213,Fits_fy1213,Fits_fex1213,Fits_fey1213);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1213 = new TH1F("Graph_Fits1213","",100,0,1.366686e+07);
   Graph_Fits1213->SetMinimum(0.1325709);
   Graph_Fits1213->SetMaximum(0.6849256);
   Graph_Fits1213->SetDirectory(0);
   Graph_Fits1213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1213->SetLineColor(ci);
   Graph_Fits1213->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1213->GetXaxis()->SetRange(1,97);
   Graph_Fits1213->GetXaxis()->CenterTitle(true);
   Graph_Fits1213->GetXaxis()->SetLabelFont(42);
   Graph_Fits1213->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1213->GetXaxis()->SetTitleFont(42);
   Graph_Fits1213->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1213->GetYaxis()->CenterTitle(true);
   Graph_Fits1213->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1213->GetYaxis()->SetLabelFont(42);
   Graph_Fits1213->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1213->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1213->GetYaxis()->SetTitleFont(42);
   Graph_Fits1213->GetZaxis()->SetLabelFont(42);
   Graph_Fits1213->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1213);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1214[13] = {
   980385,
   1945311,
   2907125,
   3831858,
   4797147,
   5761945,
   6724437,
   7689564,
   8654560,
   9619580,
   1.058317e+07,
   1.154995e+07,
   1.251354e+07};
   Double_t Truth_fy1214[13] = {
   0.6448866,
   0.4471132,
   0.3685088,
   0.3114926,
   0.2918364,
   0.2725662,
   0.2457452,
   0.2336315,
   0.2077695,
   0.2044325,
   0.1974499,
   0.1915417,
   0.1777033};
   Double_t Truth_fex1214[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Truth_fey1214[13] = {
   0.0144201,
   0.009997756,
   0.008240106,
   0.006965187,
   0.006525661,
   0.006094766,
   0.005495029,
   0.00522416,
   0.004645866,
   0.00457125,
   0.004415114,
   0.004283004,
   0.003973567};
   gre = new TGraphErrors(13,Truth_fx1214,Truth_fy1214,Truth_fex1214,Truth_fey1214);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1214 = new TH1F("Graph_Truth1214","",100,0,1.366686e+07);
   Graph_Truth1214->SetMinimum(0.125172);
   Graph_Truth1214->SetMaximum(0.7078644);
   Graph_Truth1214->SetDirectory(0);
   Graph_Truth1214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1214->SetLineColor(ci);
   Graph_Truth1214->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1214->GetXaxis()->SetRange(1,97);
   Graph_Truth1214->GetXaxis()->CenterTitle(true);
   Graph_Truth1214->GetXaxis()->SetLabelFont(42);
   Graph_Truth1214->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1214->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1214->GetXaxis()->SetTitleFont(42);
   Graph_Truth1214->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1214->GetYaxis()->CenterTitle(true);
   Graph_Truth1214->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1214->GetYaxis()->SetLabelFont(42);
   Graph_Truth1214->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1214->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1214->GetYaxis()->SetTitleFont(42);
   Graph_Truth1214->GetZaxis()->SetLabelFont(42);
   Graph_Truth1214->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1214);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.7,0.65,0.89,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Fits","Fits","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Truth","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TGaxis *gaxis = new TGaxis(0,0.6849256,1.325685e+07,0.6849256,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
