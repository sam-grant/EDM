void BrErr_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:13 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.1079346,1.502589e+07,1.382726);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Fits_fx1158[13] = {
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
   Double_t Fits_fy1158[13] = {
   1.170261,
   0.822558,
   0.6698278,
   0.582033,
   0.5192,
   0.4734244,
   0.4386862,
   0.4093963,
   0.3859974,
   0.3659528,
   0.3484768,
   0.3338671,
   0.3203998};
   Double_t Fits_fex1158[13] = {
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
   Double_t Fits_fey1158[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Fits_fx1158,Fits_fy1158,Fits_fex1158,Fits_fey1158);
   gre->SetName("Fits");
   gre->SetTitle(";CTAGs / setting;#LT#deltaB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Fits1158 = new TH1F("Graph_Fits1158","",100,0,1.362893e+07);
   Graph_Fits1158->SetMinimum(0.2354137);
   Graph_Fits1158->SetMaximum(1.255247);
   Graph_Fits1158->SetDirectory(0);
   Graph_Fits1158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Fits1158->SetLineColor(ci);
   Graph_Fits1158->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Fits1158->GetXaxis()->SetRange(1,98);
   Graph_Fits1158->GetXaxis()->CenterTitle(true);
   Graph_Fits1158->GetXaxis()->SetLabelFont(42);
   Graph_Fits1158->GetXaxis()->SetTitleSize(0.04);
   Graph_Fits1158->GetXaxis()->SetTitleOffset(1.1);
   Graph_Fits1158->GetXaxis()->SetTitleFont(42);
   Graph_Fits1158->GetYaxis()->SetTitle("#LT#deltaB_{r}^{Bkg}#GT [ppm]");
   Graph_Fits1158->GetYaxis()->CenterTitle(true);
   Graph_Fits1158->GetYaxis()->SetNdivisions(4000510);
   Graph_Fits1158->GetYaxis()->SetLabelFont(42);
   Graph_Fits1158->GetYaxis()->SetTitleSize(0.04);
   Graph_Fits1158->GetYaxis()->SetTitleOffset(1.1);
   Graph_Fits1158->GetYaxis()->SetTitleFont(42);
   Graph_Fits1158->GetZaxis()->SetLabelFont(42);
   Graph_Fits1158->GetZaxis()->SetTitleOffset(1);
   Graph_Fits1158->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Fits1158);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.255247,1.335635e+07,1.255247,0,344.5,510,"-");
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
