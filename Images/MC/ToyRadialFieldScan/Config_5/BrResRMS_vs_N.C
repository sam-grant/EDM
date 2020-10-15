void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1251348,1.491396e+07,1.633536);
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
   1.351907,
   0.9437784,
   0.8024199,
   0.6762387,
   0.6169996,
   0.5706042,
   0.5317687,
   0.4914297,
   0.4657211,
   0.4391265,
   0.4148475,
   0.3924248,
   0.3851472};
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
   0.03022955,
   0.02110353,
   0.01794265,
   0.01512116,
   0.01379653,
   0.0127591,
   0.01189071,
   0.0109887,
   0.01041384,
   0.009819167,
   0.009276273,
   0.008774886,
   0.008612154};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1342,Truth_fy1342,Truth_fex1342,Truth_fey1342);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1342 = new TH1F("Graph_Truth1342","",100,0,1.366686e+07);
   Graph_Truth1342->SetMinimum(0.275975);
   Graph_Truth1342->SetMaximum(1.482696);
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
   TGaxis *gaxis = new TGaxis(0,1.482696,1.325685e+07,1.482696,0,344.5,510,"-");
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
