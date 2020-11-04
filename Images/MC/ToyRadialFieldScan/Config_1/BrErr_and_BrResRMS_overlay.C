void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:48:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1987117,1.491396e+07,2.380472);
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
   2.016846,
   1.430339,
   1.165243,
   1.016463,
   0.9085944,
   0.8293636,
   0.7666414,
   0.7174822,
   0.675195,
   0.6410899,
   0.6108261,
   0.5849199,
   0.5623385};
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
   Graph_Fits1109->SetMinimum(0.4168878);
   Graph_Fits1109->SetMaximum(2.162296);
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
   1.969868,
   1.420016,
   1.132706,
   1.040915,
   0.916743,
   0.8286489,
   0.7611224,
   0.709425,
   0.7006048,
   0.6340945,
   0.5998107,
   0.5885215,
   0.5733274};
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
   0.0440476,
   0.03175252,
   0.02532808,
   0.02327556,
   0.020499,
   0.01852915,
   0.01701921,
   0.01586322,
   0.015666,
   0.01417878,
   0.01341217,
   0.01315974,
   0.01281999};
   gre = new TGraphErrors(13,Truth_fx1110,Truth_fy1110,Truth_fex1110,Truth_fey1110);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1110 = new TH1F("Graph_Truth1110","",100,0,1.366686e+07);
   Graph_Truth1110->SetMinimum(0.4151665);
   Graph_Truth1110->SetMaximum(2.159257);
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
   TGaxis *gaxis = new TGaxis(0,2.162296,1.325685e+07,2.162296,0,344.5,510,"-");
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
