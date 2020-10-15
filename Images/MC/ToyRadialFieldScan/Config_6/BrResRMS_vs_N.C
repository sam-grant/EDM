void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.07646854,1.491396e+07,1.02163);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1342[13] = {
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
   Double_t Truth_fy1342[13] = {
   0.845204,
   0.6165319,
   0.4922705,
   0.432314,
   0.3597834,
   0.3421523,
   0.328763,
   0.3068987,
   0.286581,
   0.2705687,
   0.2622155,
   0.2461624,
   0.2393475};
   Double_t Truth_fex1342[13] = {
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
   Double_t Truth_fey1342[13] = {
   0.01889933,
   0.01378607,
   0.0110075,
   0.009666836,
   0.008045002,
   0.007650758,
   0.007351365,
   0.006862464,
   0.006408147,
   0.006050099,
   0.005863316,
   0.005504359,
   0.005351972};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1342,Truth_fy1342,Truth_fex1342,Truth_fey1342);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1342 = new TH1F("Graph_Truth1342","",100,0,1.366686e+07);
   Graph_Truth1342->SetMinimum(0.1709847);
   Graph_Truth1342->SetMaximum(0.9271141);
   Graph_Truth1342->SetDirectory(0);
   Graph_Truth1342->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1342->SetLineColor(ci);
   Graph_Truth1342->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1342->GetXaxis()->SetRange(1,97);
   Graph_Truth1342->GetXaxis()->CenterTitle(true);
   Graph_Truth1342->GetXaxis()->SetLabelFont(42);
   Graph_Truth1342->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1342->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1342->GetXaxis()->SetTitleFont(42);
   Graph_Truth1342->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1342->GetYaxis()->CenterTitle(true);
   Graph_Truth1342->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1342->GetYaxis()->SetLabelFont(42);
   Graph_Truth1342->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1342->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1342->GetYaxis()->SetTitleFont(42);
   Graph_Truth1342->GetZaxis()->SetLabelFont(42);
   Graph_Truth1342->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1342->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1342);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.9271141,1.325685e+07,0.9271141,0,344.5,510,"-");
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
