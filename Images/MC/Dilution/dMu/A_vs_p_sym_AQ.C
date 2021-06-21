void A_vs_p_sym_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 12:59:09 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,0.071875,8.14,0.353125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1004[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t A_vs_p_fy1004[7] = {
   0.2266854,
   0.2447706,
   0.2450584,
   0.2482115,
   0.2507051,
   0.2470586,
   0.2452593};
   Double_t A_vs_p_fex1004[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t A_vs_p_fey1004[7] = {
   0.00562501,
   0.005637498,
   0.005745234,
   0.006077321,
   0.006810337,
   0.008451544,
   0.01429854};
   TGraphErrors *gre = new TGraphErrors(7,A_vs_p_fx1004,A_vs_p_fy1004,A_vs_p_fex1004,A_vs_p_fey1004);
   gre->SetName("A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1004 = new TH1F("Graph_A_vs_p1004","",100,0.4,7.6);
   Graph_A_vs_p1004->SetMinimum(0.1);
   Graph_A_vs_p1004->SetMaximum(0.325);
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
   Graph_A_vs_p1004->GetYaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1004->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1004->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1004->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1004);
   
   gre->Draw("ap");
   
   Double_t S0S12S18_A_vs_p_fx1005[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0S12S18_A_vs_p_fy1005[7] = {
   -0.1877248,
   -0.1956978,
   -0.1759596,
   -0.1433048,
   -0.1558283,
   -0.1906751,
   -0.1681903};
   Double_t S0S12S18_A_vs_p_fex1005[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_A_vs_p_fey1005[7] = {
   0.01842329,
   0.01882209,
   0.02005162,
   0.02220521,
   0.02582545,
   0.03288433,
   0.05665139};
   gre = new TGraphErrors(7,S0S12S18_A_vs_p_fx1005,S0S12S18_A_vs_p_fy1005,S0S12S18_A_vs_p_fex1005,S0S12S18_A_vs_p_fey1005);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1005 = new TH1F("Graph_S0S12S18_A_vs_p1005","S0S12S18",100,0.4,7.6);
   Graph_S0S12S18_A_vs_p1005->SetMinimum(-0.236172);
   Graph_S0S12S18_A_vs_p1005->SetMaximum(-0.1002087);
   Graph_S0S12S18_A_vs_p1005->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1005->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetRange(5,96);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetTickLength(0);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1005->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_A_vs_p1005->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1005->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1005->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1005);
   
   gre->Draw("p ");
   
   Double_t A_vs_p_fx1006[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t A_vs_p_fy1006[7] = {
   0.2447533,
   0.2654801,
   0.2812546,
   0.2836558,
   0.2810623,
   0.3228736,
   0.367693};
   Double_t A_vs_p_fex1006[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t A_vs_p_fey1006[7] = {
   0.01056238,
   0.01086794,
   0.01141268,
   0.01239022,
   0.01418117,
   0.01790681,
   0.03065439};
   gre = new TGraphErrors(7,A_vs_p_fx1006,A_vs_p_fy1006,A_vs_p_fex1006,A_vs_p_fey1006);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p_{min} #minus p_{max} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1006 = new TH1F("Graph_A_vs_p1006","",100,0.4,7.6);
   Graph_A_vs_p1006->SetMinimum(0.2177752);
   Graph_A_vs_p1006->SetMaximum(0.4147631);
   Graph_A_vs_p1006->SetDirectory(0);
   Graph_A_vs_p1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1006->SetLineColor(ci);
   Graph_A_vs_p1006->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_A_vs_p1006->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_A_vs_p1006->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_A_vs_p1006->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_A_vs_p1006->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_A_vs_p1006->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_A_vs_p1006->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_A_vs_p1006->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_A_vs_p1006->GetXaxis()->SetRange(5,96);
   Graph_A_vs_p1006->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_A_vs_p1006->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1006->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1006->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1006->GetXaxis()->SetTickLength(0);
   Graph_A_vs_p1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1006->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1006->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1006->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1006->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1006->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1006->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1006->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1006->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1006->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1006);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.49,0.79,0.89,0.89,NULL,"brNDC");
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

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Truth (all decays)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
