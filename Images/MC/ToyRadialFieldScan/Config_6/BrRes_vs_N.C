void BrRes_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,-0.03976607,1.491396e+07,0.04449616);
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
   0.001005327,
   -0.005086874,
   0.003772412,
   0.009582339,
   -0.007472306,
   0.01963265,
   0.003401708,
   -0.001558203,
   -0.0007149142,
   0.00853664,
   -0.001198252,
   0.002142012,
   -0.001877648};
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
   0.0267277,
   0.01949645,
   0.01556696,
   0.01367097,
   0.01137735,
   0.01081981,
   0.0103964,
   0.00970499,
   0.009062488,
   0.008556133,
   0.008291981,
   0.007784339,
   0.007568832};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1341,Graph0_fy1341,Graph0_fex1341,Graph0_fey1341);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs;Meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01341 = new TH1F("Graph_Graph01341","",100,0,1.366686e+07);
   Graph_Graph01341->SetMinimum(-0.03133985);
   Graph_Graph01341->SetMaximum(0.03606993);
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
   TGaxis *gaxis = new TGaxis(0,0.03606993,1.325685e+07,0.03606993,0,344.5,510,"-");
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
