void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:52:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.17952,1.491396e+07,2.868572);
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
   2.367458,
   1.654133,
   1.353742,
   1.163148,
   1.052814,
   0.9502699,
   0.9073745,
   0.8202903,
   0.7811699,
   0.7396181,
   0.7037328,
   0.6988314,
   0.642052};
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
   0.05293798,
   0.03698753,
   0.03027059,
   0.02600878,
   0.02354163,
   0.02124868,
   0.02028951,
   0.01834225,
   0.01746749,
   0.01653836,
   0.01573594,
   0.01562635,
   0.01435672};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1160,Truth_fy1160,Truth_fex1160,Truth_fey1160);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1160 = new TH1F("Graph_Truth1160","",100,0,1.366686e+07);
   Graph_Truth1160->SetMinimum(0.4484252);
   Graph_Truth1160->SetMaximum(2.599666);
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
   TGaxis *gaxis = new TGaxis(0,2.599666,1.325685e+07,2.599666,0,344.5,510,"-");
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
