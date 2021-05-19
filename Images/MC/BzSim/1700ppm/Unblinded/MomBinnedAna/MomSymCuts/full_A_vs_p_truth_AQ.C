void full_A_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May 15 17:25:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,0.1997256,8.14,0.2443331);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1054[7] = {
   0.2101164,
   0.2214362,
   0.2257627,
   0.2267935,
   0.2268503,
   0.2327432,
   0.2288872};
   Double_t Graph0_fex1054[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1054[7] = {
   0.00295621,
   0.002927956,
   0.002929756,
   0.003048923,
   0.003373585,
   0.004155251,
   0.007012196};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];A_{Bz} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","",100,0.4,7.6);
   Graph_Graph01054->SetMinimum(0.2041863);
   Graph_Graph01054->SetMaximum(0.2398723);
   Graph_Graph01054->SetDirectory(0);
   Graph_Graph01054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01054->SetLineColor(ci);
   Graph_Graph01054->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01054->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01054->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01054->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01054->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01054->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01054->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01054->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01054->GetXaxis()->SetRange(5,96);
   Graph_Graph01054->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01054->GetXaxis()->CenterTitle(true);
   Graph_Graph01054->GetXaxis()->SetLabelFont(42);
   Graph_Graph01054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetXaxis()->SetTickLength(0);
   Graph_Graph01054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01054->GetXaxis()->SetTitleFont(42);
   Graph_Graph01054->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01054->GetYaxis()->CenterTitle(true);
   Graph_Graph01054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01054->GetYaxis()->SetLabelFont(42);
   Graph_Graph01054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01054->GetYaxis()->SetTitleFont(42);
   Graph_Graph01054->GetZaxis()->SetLabelFont(42);
   Graph_Graph01054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01054);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.688,0.2041863,7.312,0.2041863,0.688,7.312,8,"");
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
