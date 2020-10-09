void dBrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 09:35:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1708357,0.151432,1.537521e+07,2.075183);
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
   1.716088,
   1.285421,
   1.024064,
   0.8595439,
   0.8149934,
   0.7315355,
   0.6402964,
   0.6119374,
   0.5927982,
   0.5634603,
   0.5265757,
   0.523179,
   0.482854};
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
   0.0384692,
   0.02874289,
   0.02289876,
   0.01921999,
   0.01822381,
   0.01635763,
   0.01431746,
   0.01368334,
   0.01325537,
   0.01259936,
   0.01177459,
   0.01169864,
   0.01079694};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1135,Truth_fy1135,Truth_fex1135,Truth_fey1135);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Truth11331135 = new TH1F("Graph_Graph_Truth11331135","",100,0,1.366686e+07);
   Graph_Graph_Truth11331135->SetMinimum(0.3438071);
   Graph_Graph_Truth11331135->SetMaximum(1.882808);
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
   TGaxis *gaxis = new TGaxis(0,1.882808,1.366686e+07,1.882808,14,345,510,"-");
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
