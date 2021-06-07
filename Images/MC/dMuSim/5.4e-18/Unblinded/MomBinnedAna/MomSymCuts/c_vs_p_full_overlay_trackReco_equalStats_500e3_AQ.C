void c_vs_p_full_overlay_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.7,8.5,0.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1395[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0_c_vs_p_fy1395[7] = {
   -0.144152,
   -0.03270321,
   -0.006789075,
   -0.01473974,
   -0.01292076,
   -0.01215282,
   0.01738169};
   Double_t S0_c_vs_p_fex1395[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_fey1395[7] = {
   0.01261269,
   0.01249701,
   0.01260451,
   0.01315365,
   0.01454671,
   0.01789588,
   0.0302226};
   TGraphErrors *gre = new TGraphErrors(7,S0_c_vs_p_fx1395,S0_c_vs_p_fy1395,S0_c_vs_p_fex1395,S0_c_vs_p_fey1395);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1395 = new TH1F("Graph_S0_c_vs_p1395","",100,0.4,7.6);
   Graph_S0_c_vs_p1395->SetMinimum(-0.6);
   Graph_S0_c_vs_p1395->SetMaximum(0.2);
   Graph_S0_c_vs_p1395->SetDirectory(0);
   Graph_S0_c_vs_p1395->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1395->SetLineColor(ci);
   Graph_S0_c_vs_p1395->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0_c_vs_p1395->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0_c_vs_p1395->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0_c_vs_p1395->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0_c_vs_p1395->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0_c_vs_p1395->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0_c_vs_p1395->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0_c_vs_p1395->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0_c_vs_p1395->GetXaxis()->SetRange(1,100);
   Graph_S0_c_vs_p1395->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0_c_vs_p1395->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1395->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1395->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1395->GetXaxis()->SetTickLength(0);
   Graph_S0_c_vs_p1395->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1395->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1395->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1395->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1395->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1395->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1395->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1395->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1395->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1395->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1395->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1395->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1395);
   
   gre->Draw("0ap");
   
   Double_t S12_c_vs_p_fx1396[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S12_c_vs_p_fy1396[7] = {
   -0.4338368,
   -0.320372,
   -0.2571086,
   -0.218759,
   -0.2069245,
   -0.2069129,
   -0.2177872};
   Double_t S12_c_vs_p_fex1396[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_fey1396[7] = {
   0.01276649,
   0.01264423,
   0.01276628,
   0.01331291,
   0.01466556,
   0.01796477,
   0.03027792};
   gre = new TGraphErrors(7,S12_c_vs_p_fx1396,S12_c_vs_p_fy1396,S12_c_vs_p_fex1396,S12_c_vs_p_fey1396);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1396 = new TH1F("Graph_S12_c_vs_p1396","S12",100,0.4,7.6);
   Graph_S12_c_vs_p1396->SetMinimum(-0.4725127);
   Graph_S12_c_vs_p1396->SetMaximum(-0.1615999);
   Graph_S12_c_vs_p1396->SetDirectory(0);
   Graph_S12_c_vs_p1396->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1396->SetLineColor(ci);
   Graph_S12_c_vs_p1396->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S12_c_vs_p1396->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S12_c_vs_p1396->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S12_c_vs_p1396->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S12_c_vs_p1396->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S12_c_vs_p1396->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S12_c_vs_p1396->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S12_c_vs_p1396->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S12_c_vs_p1396->GetXaxis()->SetRange(1,100);
   Graph_S12_c_vs_p1396->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S12_c_vs_p1396->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1396->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1396->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1396->GetXaxis()->SetTickLength(0);
   Graph_S12_c_vs_p1396->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1396->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1396->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1396->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1396->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1396->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1396->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1396->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1396->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1396->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1396->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1396->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1396);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1397[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S18_c_vs_p_fy1397[7] = {
   -0.3302453,
   -0.1978858,
   -0.1740733,
   -0.1638248,
   -0.137073,
   -0.1532693,
   -0.1338152};
   Double_t S18_c_vs_p_fex1397[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_fey1397[7] = {
   0.0128797,
   0.01276951,
   0.01289212,
   0.01344553,
   0.01479935,
   0.0181304,
   0.03039637};
   gre = new TGraphErrors(7,S18_c_vs_p_fx1397,S18_c_vs_p_fy1397,S18_c_vs_p_fex1397,S18_c_vs_p_fey1397);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1397 = new TH1F("Graph_S18_c_vs_p1397","S18",100,0.4,7.6);
   Graph_S18_c_vs_p1397->SetMinimum(-0.3670956);
   Graph_S18_c_vs_p1397->SetMaximum(-0.07944821);
   Graph_S18_c_vs_p1397->SetDirectory(0);
   Graph_S18_c_vs_p1397->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1397->SetLineColor(ci);
   Graph_S18_c_vs_p1397->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S18_c_vs_p1397->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S18_c_vs_p1397->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S18_c_vs_p1397->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S18_c_vs_p1397->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S18_c_vs_p1397->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S18_c_vs_p1397->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S18_c_vs_p1397->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S18_c_vs_p1397->GetXaxis()->SetRange(1,100);
   Graph_S18_c_vs_p1397->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S18_c_vs_p1397->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1397->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1397->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1397->GetXaxis()->SetTickLength(0);
   Graph_S18_c_vs_p1397->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1397->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1397->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1397->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1397->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1397->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1397->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1397->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1397->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1397->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1397->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1397->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1397);
   
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
   TGaxis *gaxis = new TGaxis(0.4,-0.6,7.6,-0.6,0.4,7.6,8,"");
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
