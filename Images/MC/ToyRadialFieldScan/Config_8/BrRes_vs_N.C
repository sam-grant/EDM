void BrRes_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:03 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,-0.1458174,1.491396e+07,0.09271692);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1185[13] = {
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
   Double_t Graph0_fy1185[13] = {
   -0.00964004,
   -0.06096013,
   0.008066334,
   -0.04985613,
   0.002936902,
   0.004268224,
   0.0168744,
   0.001117146,
   0.02098286,
   0.0267511,
   0.002023576,
   0.01029931,
   0.02205434};
   Double_t Graph0_fex1185[13] = {
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
   Double_t Graph0_fey1185[13] = {
   0.06260123,
   0.04510157,
   0.03509878,
   0.03197023,
   0.02867004,
   0.02521601,
   0.02510936,
   0.02249995,
   0.02105318,
   0.02017307,
   0.01990776,
   0.01855205,
   0.01770659};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1185,Graph0_fy1185,Graph0_fex1185,Graph0_fey1185);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs;Meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01185 = new TH1F("Graph_Graph01185","",100,0,1.366686e+07);
   Graph_Graph01185->SetMinimum(-0.121964);
   Graph_Graph01185->SetMaximum(0.06886348);
   Graph_Graph01185->SetDirectory(0);
   Graph_Graph01185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01185->SetLineColor(ci);
   Graph_Graph01185->GetXaxis()->SetTitle("CTAGs");
   Graph_Graph01185->GetXaxis()->SetRange(1,97);
   Graph_Graph01185->GetXaxis()->CenterTitle(true);
   Graph_Graph01185->GetXaxis()->SetLabelFont(42);
   Graph_Graph01185->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01185->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01185->GetXaxis()->SetTitleFont(42);
   Graph_Graph01185->GetYaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   Graph_Graph01185->GetYaxis()->CenterTitle(true);
   Graph_Graph01185->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01185->GetYaxis()->SetLabelFont(42);
   Graph_Graph01185->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01185->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01185->GetYaxis()->SetTitleFont(42);
   Graph_Graph01185->GetZaxis()->SetLabelFont(42);
   Graph_Graph01185->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01185);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.06886348,1.325685e+07,0.06886348,0,344.5,510,"-");
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
