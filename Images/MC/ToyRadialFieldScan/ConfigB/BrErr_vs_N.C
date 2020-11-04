void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:53 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.09030283,1.491396e+07,1.069086);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1210[13] = {
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
   Double_t Fits_fy1210[13] = {
   0.9059557,
   0.6431939,
   0.5257387,
   0.4579681,
   0.4091778,
   0.3736247,
   0.345741,
   0.3232651,
   0.3045966,
   0.2890592,
   0.2756381,
   0.2637348,
   0.2534334};
   Double_t Fits_fex1210[13] = {
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
   Double_t Fits_fey1210[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1210,Fits_fy1210,Fits_fex1210,Fits_fey1210);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1210 = new TH1F("Graph_Fits1210","",100,0,1.366686e+07);
   Graph_Fits1210->SetMinimum(0.1881812);
   Graph_Fits1210->SetMaximum(0.9712079);
   Graph_Fits1210->SetDirectory(0);
   Graph_Fits1210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1210->SetLineColor(ci);
   Graph_Fits1210->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1210->GetXaxis()->SetRange(1,97);
   Graph_Fits1210->GetXaxis()->CenterTitle(true);
   Graph_Fits1210->GetXaxis()->SetLabelFont(42);
   Graph_Fits1210->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1210->GetXaxis()->SetTitleFont(42);
   Graph_Fits1210->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1210->GetYaxis()->CenterTitle(true);
   Graph_Fits1210->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1210->GetYaxis()->SetLabelFont(42);
   Graph_Fits1210->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1210->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1210->GetYaxis()->SetTitleFont(42);
   Graph_Fits1210->GetZaxis()->SetLabelFont(42);
   Graph_Fits1210->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1210->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1210);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.9712079,1.325685e+07,0.9712079,0,344.5,510,"-");
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
