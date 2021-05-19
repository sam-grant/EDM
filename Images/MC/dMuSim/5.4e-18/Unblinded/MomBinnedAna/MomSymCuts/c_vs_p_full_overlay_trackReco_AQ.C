void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:59 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,-0.7,8.14,0.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1417[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0_c_vs_p_fy1417[7] = {
   -0.144152,
   -0.03270321,
   -0.006789075,
   -0.01473974,
   -0.01292076,
   -0.01215282,
   0.01738169};
   Double_t S0_c_vs_p_fex1417[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_fey1417[7] = {
   0.01261269,
   0.01249701,
   0.01260451,
   0.01315365,
   0.01454671,
   0.01789588,
   0.0302226};
   TGraphErrors *gre = new TGraphErrors(7,S0_c_vs_p_fx1417,S0_c_vs_p_fy1417,S0_c_vs_p_fex1417,S0_c_vs_p_fey1417);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1417 = new TH1F("Graph_S0_c_vs_p1417","",100,0.4,7.6);
   Graph_S0_c_vs_p1417->SetMinimum(-0.6);
   Graph_S0_c_vs_p1417->SetMaximum(0.2);
   Graph_S0_c_vs_p1417->SetDirectory(0);
   Graph_S0_c_vs_p1417->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1417->SetLineColor(ci);
   Graph_S0_c_vs_p1417->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0_c_vs_p1417->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0_c_vs_p1417->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0_c_vs_p1417->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0_c_vs_p1417->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0_c_vs_p1417->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0_c_vs_p1417->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0_c_vs_p1417->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0_c_vs_p1417->GetXaxis()->SetRange(5,96);
   Graph_S0_c_vs_p1417->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0_c_vs_p1417->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1417->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1417->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1417->GetXaxis()->SetTickLength(0);
   Graph_S0_c_vs_p1417->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1417->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1417->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1417->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1417->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1417->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1417->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1417->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1417->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1417->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1417->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1417->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1417);
   
   gre->Draw("0ap");
   
   Double_t S12_c_vs_p_fx1418[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S12_c_vs_p_fy1418[7] = {
   -0.4338368,
   -0.320372,
   -0.2571086,
   -0.218759,
   -0.2069245,
   -0.2069129,
   -0.2177872};
   Double_t S12_c_vs_p_fex1418[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_fey1418[7] = {
   0.01276649,
   0.01264423,
   0.01276628,
   0.01331291,
   0.01466556,
   0.01796477,
   0.03027792};
   gre = new TGraphErrors(7,S12_c_vs_p_fx1418,S12_c_vs_p_fy1418,S12_c_vs_p_fex1418,S12_c_vs_p_fey1418);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1418 = new TH1F("Graph_S12_c_vs_p1418","S12",100,0.4,7.6);
   Graph_S12_c_vs_p1418->SetMinimum(-0.4725127);
   Graph_S12_c_vs_p1418->SetMaximum(-0.1615999);
   Graph_S12_c_vs_p1418->SetDirectory(0);
   Graph_S12_c_vs_p1418->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1418->SetLineColor(ci);
   Graph_S12_c_vs_p1418->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S12_c_vs_p1418->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S12_c_vs_p1418->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S12_c_vs_p1418->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S12_c_vs_p1418->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S12_c_vs_p1418->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S12_c_vs_p1418->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S12_c_vs_p1418->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S12_c_vs_p1418->GetXaxis()->SetRange(5,96);
   Graph_S12_c_vs_p1418->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S12_c_vs_p1418->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1418->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1418->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1418->GetXaxis()->SetTickLength(0);
   Graph_S12_c_vs_p1418->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1418->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1418->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1418->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1418->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1418->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1418->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1418->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1418->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1418->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1418->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1418->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1418);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1419[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S18_c_vs_p_fy1419[7] = {
   -0.3302453,
   -0.1978858,
   -0.1740733,
   -0.1638248,
   -0.137073,
   -0.1532693,
   -0.1338152};
   Double_t S18_c_vs_p_fex1419[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_fey1419[7] = {
   0.0128797,
   0.01276951,
   0.01289212,
   0.01344553,
   0.01479935,
   0.0181304,
   0.03039637};
   gre = new TGraphErrors(7,S18_c_vs_p_fx1419,S18_c_vs_p_fy1419,S18_c_vs_p_fex1419,S18_c_vs_p_fey1419);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1419 = new TH1F("Graph_S18_c_vs_p1419","S18",100,0.4,7.6);
   Graph_S18_c_vs_p1419->SetMinimum(-0.3670956);
   Graph_S18_c_vs_p1419->SetMaximum(-0.07944821);
   Graph_S18_c_vs_p1419->SetDirectory(0);
   Graph_S18_c_vs_p1419->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1419->SetLineColor(ci);
   Graph_S18_c_vs_p1419->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S18_c_vs_p1419->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S18_c_vs_p1419->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S18_c_vs_p1419->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S18_c_vs_p1419->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S18_c_vs_p1419->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S18_c_vs_p1419->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S18_c_vs_p1419->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S18_c_vs_p1419->GetXaxis()->SetRange(5,96);
   Graph_S18_c_vs_p1419->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S18_c_vs_p1419->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1419->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1419->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1419->GetXaxis()->SetTickLength(0);
   Graph_S18_c_vs_p1419->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1419->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1419->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1419->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1419->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1419->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1419->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1419->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1419->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1419->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1419->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1419->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1419);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TGaxis *gaxis = new TGaxis(0.688,-0.6,7.312,-0.6,0.688,7.312,8,"");
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
