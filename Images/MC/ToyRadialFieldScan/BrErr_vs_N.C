void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.1599812,1.502589e+07,1.858034);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1002[13] = {
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
   Double_t Fits_fy1002[13] = {
   1.575025,
   1.13535,
   0.926365,
   0.80422,
   0.71767,
   0.653965,
   0.60566,
   0.565575,
   0.53338,
   0.50554,
   0.481985,
   0.46124,
   0.44299};
   Double_t Fits_fex1002[13] = {
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
   Double_t Fits_fey1002[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1002,Fits_fy1002,Fits_fex1002,Fits_fey1002);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs / setting;#LT#deltaB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1002 = new TH1F("Graph_Fits1002","",100,0,1.362893e+07);
   Graph_Fits1002->SetMinimum(0.3297865);
   Graph_Fits1002->SetMaximum(1.688229);
   Graph_Fits1002->SetDirectory(0);
   Graph_Fits1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1002->SetLineColor(ci);
   Graph_Fits1002->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Fits1002->GetXaxis()->SetRange(1,98);
   Graph_Fits1002->GetXaxis()->CenterTitle(true);
   Graph_Fits1002->GetXaxis()->SetLabelFont(42);
   Graph_Fits1002->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1002->GetXaxis()->SetTitleFont(42);
   Graph_Fits1002->GetYaxis()->SetTitle("#LT#deltaB_{r}^{b}#GT [ppm]");
   Graph_Fits1002->GetYaxis()->CenterTitle(true);
   Graph_Fits1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1002->GetYaxis()->SetLabelFont(42);
   Graph_Fits1002->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1002->GetYaxis()->SetTitleFont(42);
   Graph_Fits1002->GetZaxis()->SetLabelFont(42);
   Graph_Fits1002->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1002);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.688229,1.335635e+07,1.688229,0,344.5,510,"-");
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
