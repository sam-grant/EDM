void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1452642,1.491396e+07,1.996937);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1134[13] = {
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
   Double_t Truth_fy1134[13] = {
   1.651398,
   1.186842,
   1.006846,
   0.8380857,
   0.737456,
   0.6992095,
   0.6355653,
   0.5939829,
   0.5804319,
   0.5300688,
   0.5049872,
   0.4925044,
   0.4642575};
   Double_t Truth_fex1134[13] = {
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
   Double_t Truth_fey1134[13] = {
   0.03692639,
   0.0265386,
   0.02251377,
   0.01874017,
   0.01649002,
   0.0156348,
   0.01421167,
   0.01328186,
   0.01297885,
   0.0118527,
   0.01129186,
   0.01101273,
   0.01038111};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1134,Truth_fy1134,Truth_fex1134,Truth_fey1134);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1134 = new TH1F("Graph_Truth1134","",100,0,1.366686e+07);
   Graph_Truth1134->SetMinimum(0.3304315);
   Graph_Truth1134->SetMaximum(1.81177);
   Graph_Truth1134->SetDirectory(0);
   Graph_Truth1134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1134->SetLineColor(ci);
   Graph_Truth1134->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1134->GetXaxis()->SetRange(1,97);
   Graph_Truth1134->GetXaxis()->CenterTitle(true);
   Graph_Truth1134->GetXaxis()->SetLabelFont(42);
   Graph_Truth1134->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1134->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1134->GetXaxis()->SetTitleFont(42);
   Graph_Truth1134->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1134->GetYaxis()->CenterTitle(true);
   Graph_Truth1134->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1134->GetYaxis()->SetLabelFont(42);
   Graph_Truth1134->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1134->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1134->GetYaxis()->SetTitleFont(42);
   Graph_Truth1134->GetZaxis()->SetLabelFont(42);
   Graph_Truth1134->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1134);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.81177,1.325685e+07,1.81177,0,344.5,510,"-");
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
