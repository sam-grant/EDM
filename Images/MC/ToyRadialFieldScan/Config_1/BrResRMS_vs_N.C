void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:48:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1971552,1.491396e+07,2.377268);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1108[13] = {
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
   Double_t Truth_fy1108[13] = {
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
   Double_t Truth_fex1108[13] = {
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
   Double_t Truth_fey1108[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1108,Truth_fy1108,Truth_fex1108,Truth_fey1108);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1108 = new TH1F("Graph_Truth1108","",100,0,1.366686e+07);
   Graph_Truth1108->SetMinimum(0.4151665);
   Graph_Truth1108->SetMaximum(2.159257);
   Graph_Truth1108->SetDirectory(0);
   Graph_Truth1108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1108->SetLineColor(ci);
   Graph_Truth1108->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1108->GetXaxis()->SetRange(1,97);
   Graph_Truth1108->GetXaxis()->CenterTitle(true);
   Graph_Truth1108->GetXaxis()->SetLabelFont(42);
   Graph_Truth1108->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1108->GetXaxis()->SetTitleFont(42);
   Graph_Truth1108->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1108->GetYaxis()->CenterTitle(true);
   Graph_Truth1108->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1108->GetYaxis()->SetLabelFont(42);
   Graph_Truth1108->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1108->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1108->GetYaxis()->SetTitleFont(42);
   Graph_Truth1108->GetZaxis()->SetLabelFont(42);
   Graph_Truth1108->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1108);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,2.159257,1.325685e+07,2.159257,0,344.5,510,"-");
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
