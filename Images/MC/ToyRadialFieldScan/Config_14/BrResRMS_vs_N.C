void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:31:29 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.09410016,1.491396e+07,1.460004);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1160[13] = {
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
   Double_t Truth_fy1160[13] = {
   1.2054,
   0.8679069,
   0.6950215,
   0.58476,
   0.5550972,
   0.4881314,
   0.4658386,
   0.429896,
   0.3948682,
   0.3985022,
   0.3562418,
   0.3320268,
   0.32911};
   Double_t Truth_fex1160[13] = {
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
   Double_t Truth_fey1160[13] = {
   0.02695357,
   0.01940699,
   0.01554115,
   0.01307563,
   0.01241235,
   0.01091495,
   0.01041647,
   0.009612768,
   0.00882952,
   0.008910781,
   0.00796581,
   0.007424344,
   0.007359123};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1160,Truth_fy1160,Truth_fex1160,Truth_fey1160);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1160 = new TH1F("Graph_Truth1160","",100,0,1.366686e+07);
   Graph_Truth1160->SetMinimum(0.2306906);
   Graph_Truth1160->SetMaximum(1.323414);
   Graph_Truth1160->SetDirectory(0);
   Graph_Truth1160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1160->SetLineColor(ci);
   Graph_Truth1160->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1160->GetXaxis()->SetRange(1,97);
   Graph_Truth1160->GetXaxis()->CenterTitle(true);
   Graph_Truth1160->GetXaxis()->SetLabelFont(42);
   Graph_Truth1160->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1160->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1160->GetXaxis()->SetTitleFont(42);
   Graph_Truth1160->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1160->GetYaxis()->CenterTitle(true);
   Graph_Truth1160->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1160->GetYaxis()->SetLabelFont(42);
   Graph_Truth1160->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1160->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1160->GetYaxis()->SetTitleFont(42);
   Graph_Truth1160->GetZaxis()->SetLabelFont(42);
   Graph_Truth1160->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1160->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1160);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.323414,1.325685e+07,1.323414,0,344.5,510,"-");
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
