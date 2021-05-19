void A_vs_p_sym_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May 15 17:54:51 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,0.08,8.14,0.28);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_A_vs_p_fx1009[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0S12S18_A_vs_p_fy1009[7] = {
   0.1192611,
   0.1445906,
   0.1694112,
   0.1574511,
   0.1627759,
   0.1746773,
   0.1757224};
   Double_t S0S12S18_A_vs_p_fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_A_vs_p_fey1009[7] = {
   0.01048501,
   0.01038448,
   0.01047749,
   0.01092924,
   0.01205381,
   0.01477185,
   0.0248201};
   TGraphErrors *gre = new TGraphErrors(7,S0S12S18_A_vs_p_fx1009,S0S12S18_A_vs_p_fy1009,S0S12S18_A_vs_p_fex1009,S0S12S18_A_vs_p_fey1009);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1009 = new TH1F("Graph_S0S12S18_A_vs_p1009","",100,0.4,7.6);
   Graph_S0S12S18_A_vs_p1009->SetMinimum(0.1);
   Graph_S0S12S18_A_vs_p1009->SetMaximum(0.26);
   Graph_S0S12S18_A_vs_p1009->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1009->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetRange(5,96);
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetTickLength(0);
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1009->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1009->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_A_vs_p1009->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1009->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1009->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1009->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1009->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1009->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1009->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1009);
   
   gre->Draw("ap");
   
   Double_t A_vs_p_fx1010[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t A_vs_p_fy1010[7] = {
   0.2101164,
   0.2214362,
   0.2257627,
   0.2267935,
   0.2268503,
   0.2327432,
   0.2288872};
   Double_t A_vs_p_fex1010[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t A_vs_p_fey1010[7] = {
   0.00295621,
   0.002927956,
   0.002929756,
   0.003048923,
   0.003373585,
   0.004155251,
   0.007012196};
   gre = new TGraphErrors(7,A_vs_p_fx1010,A_vs_p_fy1010,A_vs_p_fex1010,A_vs_p_fey1010);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];A_{Bz} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1010 = new TH1F("Graph_A_vs_p1010","",100,0.4,7.6);
   Graph_A_vs_p1010->SetMinimum(0.2041863);
   Graph_A_vs_p1010->SetMaximum(0.2398723);
   Graph_A_vs_p1010->SetDirectory(0);
   Graph_A_vs_p1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1010->SetLineColor(ci);
   Graph_A_vs_p1010->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_A_vs_p1010->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_A_vs_p1010->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_A_vs_p1010->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_A_vs_p1010->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_A_vs_p1010->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_A_vs_p1010->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_A_vs_p1010->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_A_vs_p1010->GetXaxis()->SetRange(5,96);
   Graph_A_vs_p1010->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_A_vs_p1010->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1010->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1010->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1010->GetXaxis()->SetTickLength(0);
   Graph_A_vs_p1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1010->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1010->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_A_vs_p1010->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1010->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1010->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1010->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1010->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1010->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1010->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1010->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1010);
   
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
