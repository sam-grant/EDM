void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.149769,1.502589e+07,1.911312);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1106[13] = {
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
   Double_t Fits_fy1106[13] = {
   1.617721,
   1.136122,
   0.9234602,
   0.8041546,
   0.7179949,
   0.6548887,
   0.6052799,
   0.5661832,
   0.5328522,
   0.5057185,
   0.4818175,
   0.4612885,
   0.4433595};
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
   gre->SetTitle(";CTAGs / setting;#LT#deltaB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1106 = new TH1F("Graph_Fits1106","",100,0,1.362893e+07);
   Graph_Fits1106->SetMinimum(0.3259233);
   Graph_Fits1106->SetMaximum(1.735157);
   Graph_Fits1106->SetDirectory(0);
   Graph_Fits1106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1106->SetLineColor(ci);
   Graph_Fits1106->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Fits1106->GetXaxis()->SetRange(1,98);
   Graph_Fits1106->GetXaxis()->CenterTitle(true);
   Graph_Fits1106->GetXaxis()->SetLabelFont(42);
   Graph_Fits1106->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1106->GetXaxis()->SetTitleFont(42);
   Graph_Fits1106->GetYaxis()->SetTitle("#LT#deltaB_{r}^{Bkg}#GT [ppm]");
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
   TGaxis *gaxis = new TGaxis(0,1.735157,1.335635e+07,1.735157,0,344.5,510,"-");
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
