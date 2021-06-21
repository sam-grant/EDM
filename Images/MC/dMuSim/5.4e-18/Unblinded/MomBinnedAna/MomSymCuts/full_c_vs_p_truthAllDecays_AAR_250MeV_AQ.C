void full_c_vs_p_truthAllDecays_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 17 13:21:46 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.3250001,-0.01724221,7.325,0.04396664);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1057[6] = {
   -0.00147111,
   -0.003057453,
   0.002358023,
   0.00176107,
   0.0004720609,
   0.02056708};
   Double_t Graph0_fex1057[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1057[6] = {
   0.004027032,
   0.00398328,
   0.004004204,
   0.004367925,
   0.005538584,
   0.01319809};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","",100,0.5,6.5);
   Graph_Graph01057->SetMinimum(-0.01112132);
   Graph_Graph01057->SetMaximum(0.03784576);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01057->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01057->GetXaxis()->SetBinLabel(26,"650-2750");
   Graph_Graph01057->GetXaxis()->SetBinLabel(42,"900-2500");
   Graph_Graph01057->GetXaxis()->SetBinLabel(59,"1150-2250");
   Graph_Graph01057->GetXaxis()->SetBinLabel(76,"1400-2000");
   Graph_Graph01057->GetXaxis()->SetBinLabel(92,"1650-1750");
   Graph_Graph01057->GetXaxis()->SetRange(0,101);
   Graph_Graph01057->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTickLength(0);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.44,-0.01112132,6.56,-0.01112132,0.44,6.56,8,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(62);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
