void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:13 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.3096073,1.491396e+07,3.705);
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
   3.139101,
   2.226136,
   1.814474,
   1.582608,
   1.414593,
   1.29121,
   1.19363,
   1.117065,
   1.051435,
   0.9982014,
   0.9511188,
   0.9107416,
   0.8755062};
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
   Graph_Fits1109->SetMinimum(0.6491466);
   Graph_Fits1109->SetMaximum(3.365461);
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
   3.032404,
   2.20794,
   1.762241,
   1.62132,
   1.420706,
   1.283215,
   1.185288,
   1.10749,
   1.092929,
   0.983381,
   0.9336697,
   0.9181751,
   0.8946652};
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
   0.06784053,
   0.04937103,
   0.03940491,
   0.03625383,
   0.03176795,
   0.02869355,
   0.02650385,
   0.02476424,
   0.02443863,
   0.02198907,
   0.02087749,
   0.02053102,
   0.02000532};
   gre = new TGraphErrors(13,Truth_fx1110,Truth_fy1110,Truth_fex1110,Truth_fey1110);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1110 = new TH1F("Graph_Truth1110","",100,0,1.366686e+07);
   Graph_Truth1110->SetMinimum(0.6521015);
   Graph_Truth1110->SetMaximum(3.322803);
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
   TGaxis *gaxis = new TGaxis(0,3.365461,1.325685e+07,3.365461,0,344.5,510,"-");
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
