void BrRes_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:40:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,-0.09514773,1.491396e+07,0.05461474);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1341[13] = {
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
   Double_t Graph0_fy1341[13] = {
   -0.04336613,
   -0.02172747,
   -0.0006575497,
   0.008577051,
   0.009407008,
   0.01831994,
   0.004547006,
   0.003670314,
   0.003842692,
   -0.003706215,
   0.007003021,
   -0.007756857,
   0.00518161};
   Double_t Graph0_fex1341[13] = {
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
   Double_t Graph0_fey1341[13] = {
   0.02682119,
   0.01873865,
   0.01593732,
   0.0134307,
   0.01225633,
   0.01133439,
   0.01056463,
   0.009764554,
   0.009254546,
   0.00872051,
   0.00823722,
   0.007796449,
   0.007653688};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1341,Graph0_fy1341,Graph0_fex1341,Graph0_fey1341);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs;Meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01341 = new TH1F("Graph_Graph01341","",100,0,1.366686e+07);
   Graph_Graph01341->SetMinimum(-0.08017148);
   Graph_Graph01341->SetMaximum(0.03963849);
   Graph_Graph01341->SetDirectory(0);
   Graph_Graph01341->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01341->SetLineColor(ci);
   Graph_Graph01341->GetXaxis()->SetTitle("CTAGs");
   Graph_Graph01341->GetXaxis()->SetRange(1,97);
   Graph_Graph01341->GetXaxis()->CenterTitle(true);
   Graph_Graph01341->GetXaxis()->SetLabelFont(42);
   Graph_Graph01341->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01341->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01341->GetXaxis()->SetTitleFont(42);
   Graph_Graph01341->GetYaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   Graph_Graph01341->GetYaxis()->CenterTitle(true);
   Graph_Graph01341->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01341->GetYaxis()->SetLabelFont(42);
   Graph_Graph01341->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01341->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01341->GetYaxis()->SetTitleFont(42);
   Graph_Graph01341->GetZaxis()->SetLabelFont(42);
   Graph_Graph01341->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01341->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01341);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.03963849,1.325685e+07,0.03963849,0,344.5,510,"-");
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
