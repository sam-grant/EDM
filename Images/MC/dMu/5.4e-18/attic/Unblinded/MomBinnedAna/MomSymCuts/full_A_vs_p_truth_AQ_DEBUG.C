void full_A_vs_p_truth_AQ_DEBUG()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 07:41:21 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,0.2054131,8.14,0.2398319);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1059[7] = {
   0.2140816,
   0.22516,
   0.2286542,
   0.2294105,
   0.2307395,
   0.2279218,
   0.223766};
   Double_t Graph0_fex1059[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1059[7] = {
   0.002932102,
   0.002902146,
   0.002906424,
   0.00302843,
   0.003355899,
   0.004139548,
   0.006999138};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","",100,0.4,7.6);
   Graph_Graph01059->SetMinimum(0.2088549);
   Graph_Graph01059->SetMaximum(0.23639);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_Graph01059->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01059->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01059->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01059->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01059->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01059->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01059->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01059->GetXaxis()->SetRange(5,96);
   Graph_Graph01059->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTickLength(0);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.688,0.2088549,7.312,0.2088549,0.688,7.312,8,"");
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
