void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:30 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.194874,1.491396e+07,2.32429);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1109[13] = {
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
   Double_t Fits_fy1109[13] = {
   1.969387,
   1.395012,
   1.141114,
   0.9935286,
   0.8888199,
   0.8106885,
   0.7504752,
   0.701181,
   0.6608622,
   0.6271947,
   0.5974116,
   0.5718792,
   0.5497767};
   Double_t Fits_fex1109[13] = {
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
   Double_t Fits_fey1109[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1109,Fits_fy1109,Fits_fex1109,Fits_fey1109);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1109 = new TH1F("Graph_Fits1109","",100,0,1.366686e+07);
   Graph_Fits1109->SetMinimum(0.4078156);
   Graph_Fits1109->SetMaximum(2.111348);
   Graph_Fits1109->SetDirectory(0);
   Graph_Fits1109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1109->SetLineColor(ci);
   Graph_Fits1109->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1109->GetXaxis()->SetRange(1,97);
   Graph_Fits1109->GetXaxis()->CenterTitle(true);
   Graph_Fits1109->GetXaxis()->SetLabelFont(42);
   Graph_Fits1109->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1109->GetXaxis()->SetTitleFont(42);
   Graph_Fits1109->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1109->GetYaxis()->CenterTitle(true);
   Graph_Fits1109->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1109->GetYaxis()->SetLabelFont(42);
   Graph_Fits1109->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1109->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1109->GetYaxis()->SetTitleFont(42);
   Graph_Fits1109->GetZaxis()->SetLabelFont(42);
   Graph_Fits1109->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1109);
   
   gre->Draw("ap");
   
   Double_t Truth_fx1110[13] = {
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
   Double_t Truth_fy1110[13] = {
   1.919062,
   1.375418,
   1.126039,
   1.03659,
   0.8765867,
   0.8014473,
   0.7435601,
   0.6842948,
   0.6977874,
   0.6357221,
   0.6000546,
   0.5630703,
   0.5640583};
   Double_t Truth_fex1110[13] = {
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
   Double_t Truth_fey1110[13] = {
   0.04291152,
   0.03075529,
   0.02517899,
   0.02317886,
   0.01960107,
   0.01792091,
   0.01662651,
   0.0153013,
   0.015603,
   0.01421518,
   0.01341763,
   0.01259063,
   0.01261273};
   gre = new TGraphErrors(13,Truth_fx1110,Truth_fy1110,Truth_fex1110,Truth_fey1110);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1110 = new TH1F("Graph_Truth1110","",100,0,1.366686e+07);
   Graph_Truth1110->SetMinimum(0.4093303);
   Graph_Truth1110->SetMaximum(2.103123);
   Graph_Truth1110->SetDirectory(0);
   Graph_Truth1110->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Truth1110->SetLineColor(ci);
   Graph_Truth1110->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1110->GetXaxis()->SetRange(1,97);
   Graph_Truth1110->GetXaxis()->CenterTitle(true);
   Graph_Truth1110->GetXaxis()->SetLabelFont(42);
   Graph_Truth1110->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1110->GetXaxis()->SetTitleFont(42);
   Graph_Truth1110->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1110->GetYaxis()->CenterTitle(true);
   Graph_Truth1110->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1110->GetYaxis()->SetLabelFont(42);
   Graph_Truth1110->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1110->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1110->GetYaxis()->SetTitleFont(42);
   Graph_Truth1110->GetZaxis()->SetLabelFont(42);
   Graph_Truth1110->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1110);
   
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
   TGaxis *gaxis = new TGaxis(0,2.111348,1.325685e+07,2.111348,0,344.5,510,"-");
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
