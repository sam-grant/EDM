void dBrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 19:09:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1708357,0.1052719,1.537521e+07,1.773967);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1135[13] = {
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
   Double_t Truth_fy1135[13] = {
   1.463134,
   1.002027,
   0.8387772,
   0.7084825,
   0.6738408,
   0.5961561,
   0.5494551,
   0.5251006,
   0.4984132,
   0.4685346,
   0.4509823,
   0.4098687,
   0.3921566};
   Double_t Truth_fex1135[13] = {
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
   Double_t Truth_fey1135[13] = {
   0.03271667,
   0.02240601,
   0.01875563,
   0.01584215,
   0.01506754,
   0.01333046,
   0.01228619,
   0.01174161,
   0.01114486,
   0.01047675,
   0.01008427,
   0.009164943,
   0.008768887};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1135,Truth_fy1135,Truth_fex1135,Truth_fey1135);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Truth11331135 = new TH1F("Graph_Graph_Truth11331135","",100,0,1.366686e+07);
   Graph_Graph_Truth11331135->SetMinimum(0.2721414);
   Graph_Graph_Truth11331135->SetMaximum(1.607097);
   Graph_Graph_Truth11331135->SetDirectory(0);
   Graph_Graph_Truth11331135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Truth11331135->SetLineColor(ci);
   Graph_Graph_Truth11331135->GetXaxis()->SetTitle("CTAGs");
   Graph_Graph_Truth11331135->GetXaxis()->CenterTitle(true);
   Graph_Graph_Truth11331135->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Truth11331135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Truth11331135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Truth11331135->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Truth11331135->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Graph_Truth11331135->GetYaxis()->CenterTitle(true);
   Graph_Graph_Truth11331135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Truth11331135->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Truth11331135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Truth11331135->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Truth11331135->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Truth11331135->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Truth11331135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Truth11331135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Truth11331135);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.607097,1.366686e+07,1.607097,14,345,510,"-");
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
