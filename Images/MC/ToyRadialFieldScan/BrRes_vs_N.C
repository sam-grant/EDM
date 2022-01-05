void BrRes_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1672340,-0.06492056,1.505105e+07,0.04960278);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[13] = {
   2522568,
   5027864,
   7576235,
   1.011936e+07,
   1.266924e+07,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fy1107[13] = {
   -0.006141667,
   0.008708333,
   -0.01045,
   -0.01466667,
   -0.009258333,
   -0.04583333,
   -0.04583333,
   -0.04583333,
   -0.04583333,
   -0.04583333,
   -0.04583333,
   -0.04583333,
   -0.04583333};
   Double_t Graph0_fex1107[13] = {
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
   Double_t Graph0_fey1107[13] = {
   0.03181844,
   0.02180722,
   0.01771825,
   0.01585075,
   0.0138249,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs / setting;Meas #minus true #LTB_{r}^{b}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","",100,0,1.393616e+07);
   Graph_Graph01107->SetMinimum(-0.05346822);
   Graph_Graph01107->SetMaximum(0.03815045);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Graph01107->GetXaxis()->SetRange(1,96);
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("Meas #minus true #LTB_{r}^{b}#GT [ppm]");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.03815045,1.337872e+07,0.03815045,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs / setting");

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
