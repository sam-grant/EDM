void full_A_vs_p_truth_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,0.1538923,8.14,0.3731893);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1058[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1058[7] = {
   0.2793197,
   0.2982568,
   0.2804828,
   0.2631329,
   0.2694044,
   0.2733515,
   0.2202988};
   Double_t Graph0_fex1058[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1058[7] = {
   0.04094062,
   0.03838303,
   0.03559774,
   0.03327469,
   0.03156516,
   0.03045716,
   0.029857};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1058,Graph0_fy1058,Graph0_fex1058,Graph0_fey1058);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01058 = new TH1F("Graph_Graph01058","",100,0.4,7.6);
   Graph_Graph01058->SetMinimum(0.175822);
   Graph_Graph01058->SetMaximum(0.3512596);
   Graph_Graph01058->SetDirectory(0);
   Graph_Graph01058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01058->SetLineColor(ci);
   Graph_Graph01058->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01058->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01058->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01058->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01058->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01058->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01058->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01058->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01058->GetXaxis()->SetRange(5,96);
   Graph_Graph01058->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01058->GetXaxis()->CenterTitle(true);
   Graph_Graph01058->GetXaxis()->SetLabelFont(42);
   Graph_Graph01058->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetXaxis()->SetTickLength(0);
   Graph_Graph01058->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01058->GetXaxis()->SetTitleFont(42);
   Graph_Graph01058->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01058->GetYaxis()->CenterTitle(true);
   Graph_Graph01058->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01058->GetYaxis()->SetLabelFont(42);
   Graph_Graph01058->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01058->GetYaxis()->SetTitleFont(42);
   Graph_Graph01058->GetZaxis()->SetLabelFont(42);
   Graph_Graph01058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01058);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.688,0.175822,7.312,0.175822,0.688,7.312,8,"");
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
