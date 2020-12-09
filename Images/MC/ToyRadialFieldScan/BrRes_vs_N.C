void BrRes_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1669544,-0.1130928,1.502589e+07,0.09398827);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[13] = {
   941716,
   1907064,
   2868345,
   3792445,
   4758726,
   5723857,
   6686373,
   7651067,
   8616015,
   9581050,
   1.054512e+07,
   1.151148e+07,
   1.247554e+07};
   Double_t Graph0_fy1107[13] = {
   -0.02856031,
   0.02379846,
   -0.03848948,
   -0.02127218,
   -0.009315304,
   -0.006019014,
   0.00590504,
   0.001140069,
   -0.02651535,
   -0.01006484,
   -0.008309476,
   -0.0002642139,
   0.01294646};
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
   0.05001899,
   0.0356763,
   0.02840596,
   0.02603914,
   0.02291564,
   0.02069117,
   0.01900771,
   0.01770612,
   0.01748646,
   0.01581339,
   0.01495956,
   0.01467574,
   0.01429642};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs / setting;Meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","",100,0,1.362893e+07);
   Graph_Graph01107->SetMinimum(-0.0923847);
   Graph_Graph01107->SetMaximum(0.07328016);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("CTAGs / setting");
   Graph_Graph01107->GetXaxis()->SetRange(1,98);
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("Meas #minus true #LTB_{r}^{Bkg}#GT [ppm]");
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
   TGaxis *gaxis = new TGaxis(0,0.07328016,1.335635e+07,0.07328016,0,344.5,510,"-");
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
