void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 15:08:55 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.09070568,1.491396e+07,1.405413);
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
   1.160349,
   0.8356702,
   0.669201,
   0.563078,
   0.5345347,
   0.4700408,
   0.4485559,
   0.4139607,
   0.3802403,
   0.3837332,
   0.3430464,
   0.3197199,
   0.3169099};
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
   0.02594619,
   0.01868615,
   0.01496379,
   0.01259081,
   0.01195256,
   0.01051043,
   0.01003001,
   0.009256443,
   0.008502433,
   0.008580535,
   0.007670752,
   0.007149154,
   0.007086321};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1160,Truth_fy1160,Truth_fex1160,Truth_fey1160);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1160 = new TH1F("Graph_Truth1160","",100,0,1.366686e+07);
   Graph_Truth1160->SetMinimum(0.2221764);
   Graph_Truth1160->SetMaximum(1.273942);
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
   TGaxis *gaxis = new TGaxis(0,1.273942,1.325685e+07,1.273942,0,344.5,510,"-");
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
