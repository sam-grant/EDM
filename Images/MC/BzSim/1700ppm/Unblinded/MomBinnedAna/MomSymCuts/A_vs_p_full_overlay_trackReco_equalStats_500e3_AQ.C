void A_vs_p_full_overlay_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,-0.0375,8.14,0.3375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1394[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0_A_vs_p_fy1394[7] = {
   0.1405962,
   0.1677103,
   0.1767447,
   0.1610089,
   0.1652161,
   0.1945255,
   0.2219702};
   Double_t S0_A_vs_p_fex1394[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_A_vs_p_fey1394[7] = {
   0.01796348,
   0.0177831,
   0.01792393,
   0.0187127,
   0.02068865,
   0.02541915,
   0.04267536};
   TGraphErrors *gre = new TGraphErrors(7,S0_A_vs_p_fx1394,S0_A_vs_p_fy1394,S0_A_vs_p_fex1394,S0_A_vs_p_fey1394);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1394 = new TH1F("Graph_S0_A_vs_p1394","",100,0.4,7.6);
   Graph_S0_A_vs_p1394->SetMinimum(0);
   Graph_S0_A_vs_p1394->SetMaximum(0.3);
   Graph_S0_A_vs_p1394->SetDirectory(0);
   Graph_S0_A_vs_p1394->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1394->SetLineColor(ci);
   Graph_S0_A_vs_p1394->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0_A_vs_p1394->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0_A_vs_p1394->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0_A_vs_p1394->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0_A_vs_p1394->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0_A_vs_p1394->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0_A_vs_p1394->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0_A_vs_p1394->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0_A_vs_p1394->GetXaxis()->SetRange(5,96);
   Graph_S0_A_vs_p1394->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0_A_vs_p1394->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1394->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1394->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1394->GetXaxis()->SetTickLength(0);
   Graph_S0_A_vs_p1394->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1394->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1394->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_A_vs_p1394->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1394->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1394->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1394->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1394->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1394->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1394->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1394->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1394->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1394);
   
   gre->Draw("0ap");
   
   Double_t S12_A_vs_p_fx1395[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S12_A_vs_p_fy1395[7] = {
   0.108831,
   0.1383584,
   0.1772648,
   0.1645746,
   0.1668306,
   0.1544899,
   0.08895902};
   Double_t S12_A_vs_p_fex1395[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_A_vs_p_fey1395[7] = {
   0.01819618,
   0.01802221,
   0.01817765,
   0.01893679,
   0.02086613,
   0.02553467,
   0.04286078};
   gre = new TGraphErrors(7,S12_A_vs_p_fx1395,S12_A_vs_p_fy1395,S12_A_vs_p_fex1395,S12_A_vs_p_fey1395);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1395 = new TH1F("Graph_S12_A_vs_p1395","S12",100,0.4,7.6);
   Graph_S12_A_vs_p1395->SetMinimum(0.03116381);
   Graph_S12_A_vs_p1395->SetMaximum(0.2103769);
   Graph_S12_A_vs_p1395->SetDirectory(0);
   Graph_S12_A_vs_p1395->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1395->SetLineColor(ci);
   Graph_S12_A_vs_p1395->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S12_A_vs_p1395->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S12_A_vs_p1395->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S12_A_vs_p1395->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S12_A_vs_p1395->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S12_A_vs_p1395->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S12_A_vs_p1395->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S12_A_vs_p1395->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S12_A_vs_p1395->GetXaxis()->SetRange(1,100);
   Graph_S12_A_vs_p1395->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S12_A_vs_p1395->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1395->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1395->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1395->GetXaxis()->SetTickLength(0);
   Graph_S12_A_vs_p1395->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1395->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1395->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_A_vs_p1395->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1395->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1395->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1395->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1395->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1395->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1395->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1395->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1395->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1395);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1396[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S18_A_vs_p_fy1396[7] = {
   0.1093535,
   0.1283125,
   0.1552065,
   0.1469272,
   0.1561383,
   0.1745153,
   0.2151973};
   Double_t S18_A_vs_p_fex1396[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_A_vs_p_fey1396[7] = {
   0.01832472,
   0.01815665,
   0.0183444,
   0.0191429,
   0.02107697,
   0.02579233,
   0.04338138};
   gre = new TGraphErrors(7,S18_A_vs_p_fx1396,S18_A_vs_p_fy1396,S18_A_vs_p_fex1396,S18_A_vs_p_fey1396);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1396 = new TH1F("Graph_S18_A_vs_p1396","S18",100,0.4,7.6);
   Graph_S18_A_vs_p1396->SetMinimum(0.07427376);
   Graph_S18_A_vs_p1396->SetMaximum(0.2753337);
   Graph_S18_A_vs_p1396->SetDirectory(0);
   Graph_S18_A_vs_p1396->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1396->SetLineColor(ci);
   Graph_S18_A_vs_p1396->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S18_A_vs_p1396->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S18_A_vs_p1396->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S18_A_vs_p1396->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S18_A_vs_p1396->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S18_A_vs_p1396->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S18_A_vs_p1396->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S18_A_vs_p1396->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S18_A_vs_p1396->GetXaxis()->SetRange(1,100);
   Graph_S18_A_vs_p1396->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S18_A_vs_p1396->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1396->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1396->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1396->GetXaxis()->SetTickLength(0);
   Graph_S18_A_vs_p1396->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1396->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1396->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_A_vs_p1396->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1396->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1396->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1396->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1396->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1396->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1396->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1396->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1396->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1396);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_A_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_A_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_A_vs_p","S18","lpf");
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
   TGaxis *gaxis = new TGaxis(0.688,0,7.312,0,0.688,7.312,8,"");
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
