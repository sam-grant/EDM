void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1250263,1.491396e+07,1.486484);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1184[13] = {
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
   Double_t Fits_fy1184[13] = {
   1.259574,
   0.8937608,
   0.7300034,
   0.6361136,
   0.5686469,
   0.5190411,
   0.4805292,
   0.448927,
   0.4230966,
   0.4013924,
   0.3826288,
   0.3663741,
   0.3519358};
   Double_t Fits_fex1184[13] = {
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
   Double_t Fits_fey1184[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1184,Fits_fy1184,Fits_fex1184,Fits_fey1184);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1184 = new TH1F("Graph_Fits1184","",100,0,1.366686e+07);
   Graph_Fits1184->SetMinimum(0.261172);
   Graph_Fits1184->SetMaximum(1.350338);
   Graph_Fits1184->SetDirectory(0);
   Graph_Fits1184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1184->SetLineColor(ci);
   Graph_Fits1184->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1184->GetXaxis()->SetRange(1,97);
   Graph_Fits1184->GetXaxis()->CenterTitle(true);
   Graph_Fits1184->GetXaxis()->SetLabelFont(42);
   Graph_Fits1184->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1184->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1184->GetXaxis()->SetTitleFont(42);
   Graph_Fits1184->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1184->GetYaxis()->CenterTitle(true);
   Graph_Fits1184->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1184->GetYaxis()->SetLabelFont(42);
   Graph_Fits1184->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1184->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1184->GetYaxis()->SetTitleFont(42);
   Graph_Fits1184->GetZaxis()->SetLabelFont(42);
   Graph_Fits1184->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1184);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.350338,1.325685e+07,1.350338,0,344.5,510,"-");
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
