void A_vs_p_sym_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:25:20 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,0.040625,8.14,0.384375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1015[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t A_vs_p_fy1015[7] = {
   0.2793197,
   0.2982568,
   0.2804828,
   0.2631329,
   0.2694044,
   0.2733515,
   0.2202988};
   Double_t A_vs_p_fex1015[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t A_vs_p_fey1015[7] = {
   0.04094062,
   0.03838303,
   0.03559774,
   0.03327469,
   0.03156516,
   0.03045716,
   0.029857};
   TGraphErrors *gre = new TGraphErrors(7,A_vs_p_fx1015,A_vs_p_fy1015,A_vs_p_fex1015,A_vs_p_fey1015);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1015 = new TH1F("Graph_A_vs_p1015","",100,0.4,7.6);
   Graph_A_vs_p1015->SetMinimum(0.075);
   Graph_A_vs_p1015->SetMaximum(0.35);
   Graph_A_vs_p1015->SetDirectory(0);
   Graph_A_vs_p1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1015->SetLineColor(ci);
   Graph_A_vs_p1015->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_A_vs_p1015->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_A_vs_p1015->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_A_vs_p1015->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_A_vs_p1015->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_A_vs_p1015->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_A_vs_p1015->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_A_vs_p1015->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_A_vs_p1015->GetXaxis()->SetRange(5,96);
   Graph_A_vs_p1015->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_A_vs_p1015->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1015->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1015->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1015->GetXaxis()->SetTickLength(0);
   Graph_A_vs_p1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1015->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1015->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1015->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1015->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1015->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1015->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1015->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1015->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1015->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1015->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1015);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1016[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0S12S18_A_vs_p_fy1016[7] = {
   0.1440092,
   0.1285613,
   0.154334,
   0.1351045,
   0.1400188,
   0.1534003,
   0.1389333};
   Double_t S0S12S18_A_vs_p_fex1016[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_A_vs_p_fey1016[7] = {
   0.04028113,
   0.03745867,
   0.03414609,
   0.03134227,
   0.02928097,
   0.02786846,
   0.02714007};
   gre = new TGraphErrors(7,S0S12S18_A_vs_p_fx1016,S0S12S18_A_vs_p_fy1016,S0S12S18_A_vs_p_fex1016,S0S12S18_A_vs_p_fey1016);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1016 = new TH1F("Graph_S0S12S18_A_vs_p1016","S0S12S18",100,0.4,7.6);
   Graph_S0S12S18_A_vs_p1016->SetMinimum(0.08136484);
   Graph_S0S12S18_A_vs_p1016->SetMaximum(0.1982179);
   Graph_S0S12S18_A_vs_p1016->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1016->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetRange(5,96);
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetTickLength(0);
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1016->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1016->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1016->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1016->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1016->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1016->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1016->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1016->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1016->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1016->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1016);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_A_vs_p","Reco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
