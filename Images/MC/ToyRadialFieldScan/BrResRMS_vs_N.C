void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:39:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,0.05102428,1.502589e+07,0.7896895);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1212[13] = {
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
   Double_t Truth_fy1212[13] = {
   0.6519995,
   0.4502068,
   0.3679536,
   0.3101471,
   0.2906558,
   0.2704667,
   0.2461516,
   0.2336668,
   0.2069826,
   0.2034521,
   0.1964132,
   0.1899648,
   0.178118};
   Double_t Truth_fex1212[13] = {
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
   Double_t Truth_fey1212[13] = {
   0.01457915,
   0.01006693,
   0.008227692,
   0.006935099,
   0.00649926,
   0.00604782,
   0.005504116,
   0.005224949,
   0.004628271,
   0.004549328,
   0.004391933,
   0.004247743,
   0.00398284};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1212,Truth_fy1212,Truth_fex1212,Truth_fey1212);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1212 = new TH1F("Graph_Truth1212","",100,0,1.362893e+07);
   Graph_Truth1212->SetMinimum(0.1248908);
   Graph_Truth1212->SetMaximum(0.715823);
   Graph_Truth1212->SetDirectory(0);
   Graph_Truth1212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1212->SetLineColor(ci);
   Graph_Truth1212->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Truth1212->GetXaxis()->SetRange(1,98);
   Graph_Truth1212->GetXaxis()->CenterTitle(true);
   Graph_Truth1212->GetXaxis()->SetLabelFont(42);
   Graph_Truth1212->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1212->GetXaxis()->SetTitleFont(42);
   Graph_Truth1212->GetYaxis()->SetTitle("RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]");
   Graph_Truth1212->GetYaxis()->CenterTitle(true);
   Graph_Truth1212->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1212->GetYaxis()->SetLabelFont(42);
   Graph_Truth1212->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1212->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1212->GetYaxis()->SetTitleFont(42);
   Graph_Truth1212->GetZaxis()->SetLabelFont(42);
   Graph_Truth1212->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1212->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1212);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.715823,1.335635e+07,0.715823,0,344.5,510,"-");
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
