void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:59 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1400001,-0.0375,8.14,0.3375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1420[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0_A_vs_p_fy1420[7] = {
   0.1559975,
   0.1797219,
   0.182307,
   0.1661796,
   0.1610492,
   0.1334498,
   0.1236307};
   Double_t S0_A_vs_p_fex1420[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_A_vs_p_fey1420[7] = {
   0.01774602,
   0.01756633,
   0.01770852,
   0.0184756,
   0.02044804,
   0.02515727,
   0.0425354};
   TGraphErrors *gre = new TGraphErrors(7,S0_A_vs_p_fx1420,S0_A_vs_p_fy1420,S0_A_vs_p_fex1420,S0_A_vs_p_fey1420);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1420 = new TH1F("Graph_S0_A_vs_p1420","",100,0.4,7.6);
   Graph_S0_A_vs_p1420->SetMinimum(0);
   Graph_S0_A_vs_p1420->SetMaximum(0.3);
   Graph_S0_A_vs_p1420->SetDirectory(0);
   Graph_S0_A_vs_p1420->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1420->SetLineColor(ci);
   Graph_S0_A_vs_p1420->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0_A_vs_p1420->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0_A_vs_p1420->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0_A_vs_p1420->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0_A_vs_p1420->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0_A_vs_p1420->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0_A_vs_p1420->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0_A_vs_p1420->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0_A_vs_p1420->GetXaxis()->SetRange(5,96);
   Graph_S0_A_vs_p1420->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0_A_vs_p1420->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1420->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1420->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1420->GetXaxis()->SetTickLength(0);
   Graph_S0_A_vs_p1420->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1420->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1420->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1420->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1420->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1420->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1420->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1420->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1420->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1420->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1420->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1420->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1420);
   
   gre->Draw("0ap");
   
   Double_t S12_A_vs_p_fx1421[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S12_A_vs_p_fy1421[7] = {
   0.1800418,
   0.1903633,
   0.1690531,
   0.1328435,
   0.1484612,
   0.1823079,
   0.1614487};
   Double_t S12_A_vs_p_fex1421[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_A_vs_p_fey1421[7] = {
   0.01797224,
   0.01779058,
   0.01795022,
   0.01870565,
   0.0206167,
   0.02524201,
   0.04250828};
   gre = new TGraphErrors(7,S12_A_vs_p_fx1421,S12_A_vs_p_fy1421,S12_A_vs_p_fex1421,S12_A_vs_p_fey1421);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1421 = new TH1F("Graph_S12_A_vs_p1421","S12",100,0.4,7.6);
   Graph_S12_A_vs_p1421->SetMinimum(0.1047363);
   Graph_S12_A_vs_p1421->SetMaximum(0.2175555);
   Graph_S12_A_vs_p1421->SetDirectory(0);
   Graph_S12_A_vs_p1421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1421->SetLineColor(ci);
   Graph_S12_A_vs_p1421->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S12_A_vs_p1421->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S12_A_vs_p1421->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S12_A_vs_p1421->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S12_A_vs_p1421->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S12_A_vs_p1421->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S12_A_vs_p1421->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S12_A_vs_p1421->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S12_A_vs_p1421->GetXaxis()->SetRange(5,96);
   Graph_S12_A_vs_p1421->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S12_A_vs_p1421->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1421->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1421->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1421->GetXaxis()->SetTickLength(0);
   Graph_S12_A_vs_p1421->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1421->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1421->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1421->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1421->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1421->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1421->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1421->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1421->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1421->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1421->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1421->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1421);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1422[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S18_A_vs_p_fy1422[7] = {
   0.1304178,
   0.1449177,
   0.1485739,
   0.1527221,
   0.1720499,
   0.1710054,
   0.1485899};
   Double_t S18_A_vs_p_fex1422[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_A_vs_p_fey1422[7] = {
   0.01814153,
   0.01797383,
   0.01813623,
   0.0189073,
   0.0208186,
   0.02549089,
   0.04272397};
   gre = new TGraphErrors(7,S18_A_vs_p_fx1422,S18_A_vs_p_fy1422,S18_A_vs_p_fex1422,S18_A_vs_p_fey1422);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1422 = new TH1F("Graph_S18_A_vs_p1422","S18",100,0.4,7.6);
   Graph_S18_A_vs_p1422->SetMinimum(0.09680293);
   Graph_S18_A_vs_p1422->SetMaximum(0.2055594);
   Graph_S18_A_vs_p1422->SetDirectory(0);
   Graph_S18_A_vs_p1422->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1422->SetLineColor(ci);
   Graph_S18_A_vs_p1422->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S18_A_vs_p1422->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S18_A_vs_p1422->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S18_A_vs_p1422->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S18_A_vs_p1422->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S18_A_vs_p1422->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S18_A_vs_p1422->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S18_A_vs_p1422->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S18_A_vs_p1422->GetXaxis()->SetRange(5,96);
   Graph_S18_A_vs_p1422->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S18_A_vs_p1422->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1422->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1422->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1422->GetXaxis()->SetTickLength(0);
   Graph_S18_A_vs_p1422->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1422->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1422->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1422->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1422->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1422->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1422->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1422->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1422->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1422->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1422->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1422->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1422);
   
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
