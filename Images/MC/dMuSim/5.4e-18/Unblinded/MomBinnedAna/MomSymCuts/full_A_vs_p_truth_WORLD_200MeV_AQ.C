void full_A_vs_p_truth_WORLD_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 22 13:59:18 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,0.2125615,8.14,0.2385469);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1067[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1067[7] = {
   0.2272728,
   0.2282345,
   0.2288007,
   0.2295133,
   0.2308587,
   0.2278948,
   0.2238941};
   Double_t Graph0_fex1067[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1067[7] = {
   0.00306682,
   0.002922847,
   0.002907986,
   0.003029837,
   0.00335729,
   0.004141116,
   0.00700166};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1067,Graph0_fy1067,Graph0_fex1067,Graph0_fey1067);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p_{min} #minus p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01067 = new TH1F("Graph_Graph01067","",100,0.4,7.6);
   Graph_Graph01067->SetMinimum(0.21516);
   Graph_Graph01067->SetMaximum(0.2359483);
   Graph_Graph01067->SetDirectory(0);
   Graph_Graph01067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01067->SetLineColor(ci);
   Graph_Graph01067->GetXaxis()->SetTitle("e^{+}_{LAB} p_{min} #minus p_{max} [MeV]");
   Graph_Graph01067->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_Graph01067->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_Graph01067->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_Graph01067->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_Graph01067->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_Graph01067->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_Graph01067->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_Graph01067->GetXaxis()->SetRange(5,96);
   Graph_Graph01067->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01067->GetXaxis()->CenterTitle(true);
   Graph_Graph01067->GetXaxis()->SetLabelFont(42);
   Graph_Graph01067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetXaxis()->SetTickLength(0);
   Graph_Graph01067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01067->GetXaxis()->SetTitleFont(42);
   Graph_Graph01067->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01067->GetYaxis()->CenterTitle(true);
   Graph_Graph01067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01067->GetYaxis()->SetLabelFont(42);
   Graph_Graph01067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01067->GetYaxis()->SetTitleFont(42);
   Graph_Graph01067->GetZaxis()->SetLabelFont(42);
   Graph_Graph01067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01067);
   
   gre->Draw("0ap");
   TGaxis *gaxis = new TGaxis(0.688,0.21516,7.312,0.21516,0.688,7.312,8,"");
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
