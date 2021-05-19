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
   
   Double_t S0S12S18_A_vs_p_fx1003[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0S12S18_A_vs_p_fy1003[7] = {
   0.155497,
   0.1716519,
   0.1667401,
   0.150605,
   0.1601717,
   0.1620023,
   0.1438126};
   Double_t S0S12S18_A_vs_p_fex1003[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_A_vs_p_fey1003[7] = {
   0.01036478,
   0.01026296,
   0.01035224,
   0.01079378,
   0.01190981,
   0.01460689,
   0.02460045};
   TGraphErrors *gre = new TGraphErrors(7,S0S12S18_A_vs_p_fx1003,S0S12S18_A_vs_p_fy1003,S0S12S18_A_vs_p_fex1003,S0S12S18_A_vs_p_fey1003);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1003 = new TH1F("Graph_S0S12S18_A_vs_p1003","",100,0.4,7.6);
   Graph_S0S12S18_A_vs_p1003->SetMinimum(0.1);
   Graph_S0S12S18_A_vs_p1003->SetMaximum(0.26);
   Graph_S0S12S18_A_vs_p1003->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1003->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetRange(5,96);
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetTickLength(0);
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1003->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1003);
   
   gre->Draw("ap");
   
   Double_t A_vs_p_fx1004[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t A_vs_p_fy1004[7] = {
   0.2140825,
   0.2251607,
   0.2286534,
   0.22941,
   0.2307389,
   0.2279221,
   0.2237744};
   Double_t A_vs_p_fex1004[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t A_vs_p_fey1004[7] = {
   0.002932102,
   0.002902146,
   0.002906424,
   0.003028431,
   0.003355899,
   0.004139548,
   0.006999139};
   gre = new TGraphErrors(7,A_vs_p_fx1004,A_vs_p_fy1004,A_vs_p_fex1004,A_vs_p_fey1004);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1004 = new TH1F("Graph_A_vs_p1004","",100,0.4,7.6);
   Graph_A_vs_p1004->SetMinimum(0.208856);
   Graph_A_vs_p1004->SetMaximum(0.2363893);
   Graph_A_vs_p1004->SetDirectory(0);
   Graph_A_vs_p1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1004->SetLineColor(ci);
   Graph_A_vs_p1004->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_A_vs_p1004->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_A_vs_p1004->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_A_vs_p1004->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_A_vs_p1004->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_A_vs_p1004->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_A_vs_p1004->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_A_vs_p1004->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_A_vs_p1004->GetXaxis()->SetRange(5,96);
   Graph_A_vs_p1004->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_A_vs_p1004->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1004->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1004->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1004->GetXaxis()->SetTickLength(0);
   Graph_A_vs_p1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1004->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1004->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1004->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1004->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1004->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1004->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1004->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1004->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1004->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1004->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1004);
   
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
