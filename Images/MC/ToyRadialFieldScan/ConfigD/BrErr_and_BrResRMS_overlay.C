void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:29 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.08032886,1.491396e+07,0.9566837);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1161[13] = {
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
   Double_t Fits_fy1161[13] = {
   0.8106246,
   0.5741618,
   0.4697326,
   0.4087361,
   0.3654852,
   0.3337183,
   0.3086184,
   0.2885293,
   0.2718936,
   0.2578533,
   0.2460176,
   0.2354307,
   0.226388};
   Double_t Fits_fex1161[13] = {
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
   Double_t Fits_fey1161[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1161,Fits_fy1161,Fits_fex1161,Fits_fey1161);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1161 = new TH1F("Graph_Fits1161","",100,0,1.366686e+07);
   Graph_Fits1161->SetMinimum(0.1679644);
   Graph_Fits1161->SetMaximum(0.8690482);
   Graph_Fits1161->SetDirectory(0);
   Graph_Fits1161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1161->SetLineColor(ci);
   Graph_Fits1161->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1161->GetXaxis()->SetRange(1,97);
   Graph_Fits1161->GetXaxis()->CenterTitle(true);
   Graph_Fits1161->GetXaxis()->SetLabelFont(42);
   Graph_Fits1161->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1161->GetXaxis()->SetTitleFont(42);
   Graph_Fits1161->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1161->GetYaxis()->CenterTitle(true);
   Graph_Fits1161->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1161->GetYaxis()->SetLabelFont(42);
   Graph_Fits1161->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1161->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1161->GetYaxis()->SetTitleFont(42);
   Graph_Fits1161->GetZaxis()->SetLabelFont(42);
   Graph_Fits1161->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1161);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1162[13] = {
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
   Double_t Truth_fy1162[13] = {
   0.8165493,
   0.6022147,
   0.4690878,
   0.4121784,
   0.3592752,
   0.3325308,
   0.3199686,
   0.2967646,
   0.2825243,
   0.2668063,
   0.2469231,
   0.2342505,
   0.2250062};
   Double_t Truth_fex1162[13] = {
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
   Double_t Truth_fey1162[13] = {
   0.0182586,
   0.01346593,
   0.01048912,
   0.00921659,
   0.008033637,
   0.007435614,
   0.007154715,
   0.006635858,
   0.006317435,
   0.005965969,
   0.005521368,
   0.005238001,
   0.005031292};
   gre = new TGraphErrors(13,Truth_fx1162,Truth_fy1162,Truth_fex1162,Truth_fey1162);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1162 = new TH1F("Graph_Truth1162","",100,0,1.366686e+07);
   Graph_Truth1162->SetMinimum(0.1584916);
   Graph_Truth1162->SetMaximum(0.8962912);
   Graph_Truth1162->SetDirectory(0);
   Graph_Truth1162->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1162->SetLineColor(ci);
   Graph_Truth1162->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1162->GetXaxis()->SetRange(1,97);
   Graph_Truth1162->GetXaxis()->CenterTitle(true);
   Graph_Truth1162->GetXaxis()->SetLabelFont(42);
   Graph_Truth1162->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1162->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1162->GetXaxis()->SetTitleFont(42);
   Graph_Truth1162->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1162->GetYaxis()->CenterTitle(true);
   Graph_Truth1162->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1162->GetYaxis()->SetLabelFont(42);
   Graph_Truth1162->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1162->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1162->GetYaxis()->SetTitleFont(42);
   Graph_Truth1162->GetZaxis()->SetLabelFont(42);
   Graph_Truth1162->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1162->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1162);
   
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
   TGaxis *gaxis = new TGaxis(0,0.8690482,1.325685e+07,0.8690482,0,344.5,510,"-");
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
