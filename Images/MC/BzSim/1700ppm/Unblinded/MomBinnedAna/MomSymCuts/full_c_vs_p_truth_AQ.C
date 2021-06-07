void full_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:16:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,-0.02703925,8.14,0.01888291);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1053[7] = {
   -0.01728423,
   -0.01000349,
   -0.00263237,
   2.347505e-05,
   0.003200777,
   0.005682965,
   0.006256332};
   Double_t Graph0_fex1053[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1053[7] = {
   0.002101325,
   0.00208045,
   0.002079866,
   0.002162672,
   0.002392049,
   0.002945939,
   0.004972884};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","",100,0.4,7.6);
   Graph_Graph01053->SetMinimum(-0.02244704);
   Graph_Graph01053->SetMaximum(0.01429069);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01053->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01053->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01053->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01053->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01053->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01053->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01053->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01053->GetXaxis()->SetRange(5,96);
   Graph_Graph01053->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTickLength(0);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01053->GetYaxis()->CenterTitle(true);
   Graph_Graph01053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01053->GetYaxis()->SetLabelFont(42);
   Graph_Graph01053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01053->GetYaxis()->SetTitleFont(42);
   Graph_Graph01053->GetZaxis()->SetLabelFont(42);
   Graph_Graph01053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01053);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.688,-0.02244704,7.312,-0.02244704,0.688,7.312,8,"");
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
