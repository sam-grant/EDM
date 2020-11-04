void BrErr_vs_N()
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
   
   Double_t Fits_fx1106[13] = {
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
   Double_t Fits_fy1106[13] = {
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
   Double_t Fits_fex1106[13] = {
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
   Double_t Fits_fey1106[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1106,Fits_fy1106,Fits_fex1106,Fits_fey1106);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1106 = new TH1F("Graph_Fits1106","",100,0,1.366686e+07);
   Graph_Fits1106->SetMinimum(0.6491466);
   Graph_Fits1106->SetMaximum(3.365461);
   Graph_Fits1106->SetDirectory(0);
   Graph_Fits1106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1106->SetLineColor(ci);
   Graph_Fits1106->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1106->GetXaxis()->SetRange(1,97);
   Graph_Fits1106->GetXaxis()->CenterTitle(true);
   Graph_Fits1106->GetXaxis()->SetLabelFont(42);
   Graph_Fits1106->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1106->GetXaxis()->SetTitleFont(42);
   Graph_Fits1106->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1106->GetYaxis()->CenterTitle(true);
   Graph_Fits1106->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1106->GetYaxis()->SetLabelFont(42);
   Graph_Fits1106->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1106->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1106->GetYaxis()->SetTitleFont(42);
   Graph_Fits1106->GetZaxis()->SetLabelFont(42);
   Graph_Fits1106->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1106);
   
   gre->Draw("ap");
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
