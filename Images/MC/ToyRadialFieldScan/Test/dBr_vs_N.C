void dBr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 17:36:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(307602.3,-0.1426176,2367200,1.283558);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1001[13] = {
   6.953127e-310,
   1945311,
   0,
   6.953127e-310,
   6.953127e-310,
   2.153399e-314,
   2.970794e-313,
   0,
   0,
   0,
   0,
   0,
   6.953127e-310};
   Double_t Fits_fy1001[13] = {
   0,
   1.037219,
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
   Double_t Fits_fex1001[13] = {
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
   Double_t Fits_fey1001[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1001,Fits_fy1001,Fits_fex1001,Fits_fey1001);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs;#deltaB_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1001 = new TH1F("Graph_Fits1001","",100,0,2139842);
   Graph_Fits1001->SetMinimum(0);
   Graph_Fits1001->SetMaximum(1.14094);
   Graph_Fits1001->SetDirectory(0);
   Graph_Fits1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1001->SetLineColor(ci);
   Graph_Fits1001->GetXaxis()->SetTitle("CTAGs");
   Graph_Fits1001->GetXaxis()->SetRange(25,101);
   Graph_Fits1001->GetXaxis()->CenterTitle(true);
   Graph_Fits1001->GetXaxis()->SetLabelFont(42);
   Graph_Fits1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1001->GetXaxis()->SetTitleFont(42);
   Graph_Fits1001->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Fits1001->GetYaxis()->CenterTitle(true);
   Graph_Fits1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1001->GetYaxis()->SetLabelFont(42);
   Graph_Fits1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1001->GetYaxis()->SetTitleFont(42);
   Graph_Fits1001->GetZaxis()->SetLabelFont(42);
   Graph_Fits1001->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1001);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(513562.1,1.14094,2161241,1.14094,14,345,510,"-");
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
