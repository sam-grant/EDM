void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 10 15:16:29 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.06318321,1.491396e+07,0.7497239);
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
   0.6353004,
   0.4510541,
   0.3683323,
   0.3209749,
   0.286927,
   0.2616491,
   0.2421535,
   0.2265601,
   0.2134792,
   0.202511,
   0.1930415,
   0.1848358,
   0.1776067};
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
   Graph_Fits1213->SetMinimum(0.1318373);
   Graph_Fits1213->SetMaximum(0.6810698);
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
   0.6391289,
   0.4451922,
   0.3649955,
   0.3089261,
   0.2898465,
   0.2694983,
   0.2454869,
   0.2327386,
   0.2060744,
   0.2028076,
   0.1963593,
   0.1893736,
   0.1776588};
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
   0.01429136,
   0.009954799,
   0.008161548,
   0.006907797,
   0.006481164,
   0.006026164,
   0.005489255,
   0.005204194,
   0.004607964,
   0.004534915,
   0.004390727,
   0.004234521,
   0.003972571};
   gre = new TGraphErrors(13,Truth_fx1214,Truth_fy1214,Truth_fex1214,Truth_fey1214);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1214 = new TH1F("Graph_Truth1214","",100,0,1.366686e+07);
   Graph_Truth1214->SetMinimum(0.1257128);
   Graph_Truth1214->SetMaximum(0.7013937);
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
   TGaxis *gaxis = new TGaxis(0,0.6810698,1.325685e+07,0.6810698,0,344.5,510,"-");
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
