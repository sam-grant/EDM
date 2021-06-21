void full_c_vs_p_truthAllDecays_WORLD_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 18 13:17:33 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5900001,-0.0007068245,8.59,0.001480882);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1065[7] = {
   0.0001905485,
   0.0001115684,
   0.0001238954,
   6.453878e-05,
   -0.0001005629,
   0.0001487814,
   0.0005765708};
   Double_t Graph0_fex1065[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1065[7] = {
   0.0001519427,
   0.0001643686,
   0.0001809978,
   0.0002046487,
   0.0002416439,
   0.0003116765,
   0.0005396931};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];c [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","",100,0.4,7.6);
   Graph_Graph01065->SetMinimum(-0.0004880538);
   Graph_Graph01065->SetMaximum(0.001262111);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01065->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01065->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01065->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01065->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01065->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01065->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01065->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01065->GetXaxis()->SetRange(0,101);
   Graph_Graph01065->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01065->GetXaxis()->CenterTitle(true);
   Graph_Graph01065->GetXaxis()->SetLabelFont(42);
   Graph_Graph01065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetXaxis()->SetTickLength(0);
   Graph_Graph01065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01065->GetXaxis()->SetTitleFont(42);
   Graph_Graph01065->GetYaxis()->SetTitle("c [rad]");
   Graph_Graph01065->GetYaxis()->CenterTitle(true);
   Graph_Graph01065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01065->GetYaxis()->SetLabelFont(42);
   Graph_Graph01065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01065->GetYaxis()->SetTitleFont(42);
   Graph_Graph01065->GetZaxis()->SetLabelFont(42);
   Graph_Graph01065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01065);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.328,-0.0004880538,7.672,-0.0004880538,0.328,7.672,8,"");
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
