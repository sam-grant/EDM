void Br_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,6.719145,1.491396e+07,9.282866);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1339[13] = {
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
   Double_t Graph0_fy1339[13] = {
   8.001005,
   7.994913,
   8.003772,
   8.009582,
   7.992528,
   8.019633,
   8.003402,
   7.998442,
   7.999285,
   8.008537,
   7.998802,
   8.002142,
   7.998122};
   Double_t Graph0_fex1339[13] = {
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
   Double_t Graph0_fey1339[13] = {
   0.8545738,
   0.6055653,
   0.4956871,
   0.4314923,
   0.3855759,
   0.352073,
   0.3257178,
   0.3044787,
   0.2869549,
   0.2721233,
   0.2596345,
   0.2484698,
   0.2386633};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1339,Graph0_fy1339,Graph0_fex1339,Graph0_fey1339);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs;B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01339 = new TH1F("Graph_Graph01339","",100,0,1.366686e+07);
   Graph_Graph01339->SetMinimum(6.975517);
   Graph_Graph01339->SetMaximum(9.026494);
   Graph_Graph01339->SetDirectory(0);
   Graph_Graph01339->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01339->SetLineColor(ci);
   Graph_Graph01339->GetXaxis()->SetTitle("CTAGs");
   Graph_Graph01339->GetXaxis()->SetRange(1,97);
   Graph_Graph01339->GetXaxis()->CenterTitle(true);
   Graph_Graph01339->GetXaxis()->SetLabelFont(42);
   Graph_Graph01339->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01339->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01339->GetXaxis()->SetTitleFont(42);
   Graph_Graph01339->GetYaxis()->SetTitle("B_{r} [ppm]");
   Graph_Graph01339->GetYaxis()->CenterTitle(true);
   Graph_Graph01339->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01339->GetYaxis()->SetLabelFont(42);
   Graph_Graph01339->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01339->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01339->GetYaxis()->SetTitleFont(42);
   Graph_Graph01339->GetZaxis()->SetLabelFont(42);
   Graph_Graph01339->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01339->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01339);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,9.026494,1.325685e+07,9.026494,0,344.5,510,"-");
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
