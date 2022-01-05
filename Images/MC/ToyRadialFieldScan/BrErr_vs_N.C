void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1672340,-0.1357856,1.505105e+07,1.22207);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1106[13] = {
   2522568,
   5027864,
   7576235,
   1.011936e+07,
   1.266924e+07,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Fits_fy1106[13] = {
   0.9875315,
   0.6982605,
   0.569158,
   0.4919425,
   0.439626,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
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
   gre->SetTitle(";CTAGs / setting;#LT#deltaB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1106 = new TH1F("Graph_Fits1106","",100,0,1.393616e+07);
   Graph_Fits1106->SetMinimum(0);
   Graph_Fits1106->SetMaximum(1.086285);
   Graph_Fits1106->SetDirectory(0);
   Graph_Fits1106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1106->SetLineColor(ci);
   Graph_Fits1106->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Fits1106->GetXaxis()->SetRange(1,96);
   Graph_Fits1106->GetXaxis()->CenterTitle(true);
   Graph_Fits1106->GetXaxis()->SetLabelFont(42);
   Graph_Fits1106->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1106->GetXaxis()->SetTitleFont(42);
   Graph_Fits1106->GetYaxis()->SetTitle("#LT#deltaB_{r}^{b}#GT [ppm]");
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
   TGaxis *gaxis = new TGaxis(0,1.086285,1.337872e+07,1.086285,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs / setting");

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
