void BrErr_and_BrResRMS_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:11 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.114588,1.491396e+07,1.358069);
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
   1.150822,
   0.8169922,
   0.6676658,
   0.5815981,
   0.5195897,
   0.4745251,
   0.4390741,
   0.4105187,
   0.386772,
   0.3670913,
   0.3500655,
   0.3349021,
   0.3218349};
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
   Graph_Fits1213->SetMinimum(0.2389361);
   Graph_Fits1213->SetMaximum(1.233721);
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
   1.115035,
   0.8231751,
   0.656463,
   0.5847554,
   0.5216524,
   0.4783061,
   0.4480747,
   0.3821968,
   0.3750647,
   0.3631704,
   0.3474001,
   0.3297062,
   0.3171986};
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
   0.02493295,
   0.01840676,
   0.01467896,
   0.01307553,
   0.0116645,
   0.01069525,
   0.01001926,
   0.008546181,
   0.008386701,
   0.008120737,
   0.007768102,
   0.007372455,
   0.007092777};
   gre = new TGraphErrors(13,Truth_fx1214,Truth_fy1214,Truth_fex1214,Truth_fey1214);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Truth1214 = new TH1F("Graph_Truth1214","",100,0,1.366686e+07);
   Graph_Truth1214->SetMinimum(0.2271196);
   Graph_Truth1214->SetMaximum(1.222955);
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
   TGaxis *gaxis = new TGaxis(0,1.233721,1.325685e+07,1.233721,0,344.5,510,"-");
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
