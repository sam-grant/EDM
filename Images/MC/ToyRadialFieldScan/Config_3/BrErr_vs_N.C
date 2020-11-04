void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:16 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1955969,1.491396e+07,2.321437);
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
   1.967131,
   1.396295,
   1.139736,
   0.9936932,
   0.8882133,
   0.8106756,
   0.7498061,
   0.7015141,
   0.6606512,
   0.6269988,
   0.5975677,
   0.5721514,
   0.5499036};
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
   Graph_Fits1106->SetMinimum(0.4081809);
   Graph_Fits1106->SetMaximum(2.108853);
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
   TGaxis *gaxis = new TGaxis(0,2.108853,1.325685e+07,2.108853,0,344.5,510,"-");
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
