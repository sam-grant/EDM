void dBrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 17:36:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-267480.3,-0.1375,2407322,1.2375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1005[13] = {
   6.953127e-310,
   1945311,
   0,
   6.953127e-310,
   6.953127e-310,
   2.153399e-314,
   2.970794e-313,
   0,
   0,
   0,
   0,
   0,
   6.953127e-310};
   Double_t Truth_fy1005[13] = {
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
   Double_t Truth_fex1005[13] = {
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
   Double_t Truth_fey1005[13] = {
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
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1005,Truth_fy1005,Truth_fex1005,Truth_fey1005);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Truth10031005 = new TH1F("Graph_Graph_Truth10031005","",100,0,2139842);
   Graph_Graph_Truth10031005->SetMinimum(0);
   Graph_Graph_Truth10031005->SetMaximum(1.1);
   Graph_Graph_Truth10031005->SetDirectory(0);
   Graph_Graph_Truth10031005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Truth10031005->SetLineColor(ci);
   Graph_Graph_Truth10031005->GetXaxis()->SetTitle("CTAGs");
   Graph_Graph_Truth10031005->GetXaxis()->CenterTitle(true);
   Graph_Graph_Truth10031005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Truth10031005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Truth10031005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Truth10031005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Truth10031005->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Graph_Truth10031005->GetYaxis()->CenterTitle(true);
   Graph_Graph_Truth10031005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Truth10031005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Truth10031005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Truth10031005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Truth10031005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Truth10031005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Truth10031005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Truth10031005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Truth10031005);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,1.1,2139842,1.1,14,345,510,"-");
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
