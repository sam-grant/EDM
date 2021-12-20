void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:39:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.06026037,1.502589e+07,0.7659241);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1210[13] = {
   941716,
   1907064,
   2868345,
   3792445,
   4758726,
   5723857,
   6686373,
   7651067,
   8616015,
   9581050,
   1.054512e+07,
   1.151148e+07,
   1.247554e+07};
   Double_t Fits_fy1210[13] = {
   0.6483135,
   0.4555505,
   0.370816,
   0.3226465,
   0.288084,
   0.2625235,
   0.242851,
   0.227126,
   0.213954,
   0.20292,
   0.1933895,
   0.1851355,
   0.177871};
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
   gre->SetTitle(";CTAGs / setting;#LT#deltaB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1210 = new TH1F("Graph_Fits1210","",100,0,1.362893e+07);
   Graph_Fits1210->SetMinimum(0.1308267);
   Graph_Fits1210->SetMaximum(0.6953578);
   Graph_Fits1210->SetDirectory(0);
   Graph_Fits1210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1210->SetLineColor(ci);
   Graph_Fits1210->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Fits1210->GetXaxis()->SetRange(1,98);
   Graph_Fits1210->GetXaxis()->CenterTitle(true);
   Graph_Fits1210->GetXaxis()->SetLabelFont(42);
   Graph_Fits1210->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1210->GetXaxis()->SetTitleFont(42);
   Graph_Fits1210->GetYaxis()->SetTitle("#LT#deltaB_{r}^{b}#GT [ppm]");
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
   TGaxis *gaxis = new TGaxis(0,0.6953578,1.335635e+07,0.6953578,0,344.5,510,"-");
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
