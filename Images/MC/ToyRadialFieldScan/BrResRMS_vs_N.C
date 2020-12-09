void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.1482024,1.502589e+07,1.910889);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1108[13] = {
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
   Double_t Truth_fy1108[13] = {
   1.581739,
   1.128184,
   0.8982753,
   0.8234299,
   0.7246563,
   0.6543121,
   0.6010765,
   0.5599168,
   0.5529705,
   0.5000632,
   0.4730629,
   0.4640878,
   0.4520926};
   Double_t Truth_fex1108[13] = {
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
   Double_t Truth_fey1108[13] = {
   0.03536877,
   0.02522695,
   0.02008605,
   0.01841245,
   0.01620381,
   0.01463086,
   0.01344048,
   0.01252012,
   0.0123648,
   0.01118175,
   0.01057801,
   0.01037732,
   0.0101091};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1108,Truth_fy1108,Truth_fex1108,Truth_fey1108);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1108 = new TH1F("Graph_Truth1108","",100,0,1.362893e+07);
   Graph_Truth1108->SetMinimum(0.3244711);
   Graph_Truth1108->SetMaximum(1.73462);
   Graph_Truth1108->SetDirectory(0);
   Graph_Truth1108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1108->SetLineColor(ci);
   Graph_Truth1108->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Truth1108->GetXaxis()->SetRange(1,98);
   Graph_Truth1108->GetXaxis()->CenterTitle(true);
   Graph_Truth1108->GetXaxis()->SetLabelFont(42);
   Graph_Truth1108->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1108->GetXaxis()->SetTitleFont(42);
   Graph_Truth1108->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   Graph_Truth1108->GetYaxis()->CenterTitle(true);
   Graph_Truth1108->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1108->GetYaxis()->SetLabelFont(42);
   Graph_Truth1108->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1108->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1108->GetYaxis()->SetTitleFont(42);
   Graph_Truth1108->GetZaxis()->SetLabelFont(42);
   Graph_Truth1108->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1108);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.73462,1.335635e+07,1.73462,0,344.5,510,"-");
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
