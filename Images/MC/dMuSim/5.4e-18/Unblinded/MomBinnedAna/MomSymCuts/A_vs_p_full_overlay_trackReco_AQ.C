void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.0375,8.5,0.3375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1555[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0_A_vs_p_fy1555[7] = {
   0.1559975,
   0.1797219,
   0.182307,
   0.1661796,
   0.1610492,
   0.1334498,
   0.1236307};
   Double_t S0_A_vs_p_fex1555[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_A_vs_p_fey1555[7] = {
   0.01774602,
   0.01756633,
   0.01770852,
   0.0184756,
   0.02044804,
   0.02515727,
   0.0425354};
   TGraphErrors *gre = new TGraphErrors(7,S0_A_vs_p_fx1555,S0_A_vs_p_fy1555,S0_A_vs_p_fex1555,S0_A_vs_p_fey1555);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1555 = new TH1F("Graph_S0_A_vs_p1555","",100,0.4,7.6);
   Graph_S0_A_vs_p1555->SetMinimum(0);
   Graph_S0_A_vs_p1555->SetMaximum(0.3);
   Graph_S0_A_vs_p1555->SetDirectory(0);
   Graph_S0_A_vs_p1555->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1555->SetLineColor(ci);
   Graph_S0_A_vs_p1555->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0_A_vs_p1555->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0_A_vs_p1555->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0_A_vs_p1555->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0_A_vs_p1555->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0_A_vs_p1555->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0_A_vs_p1555->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0_A_vs_p1555->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0_A_vs_p1555->GetXaxis()->SetRange(1,100);
   Graph_S0_A_vs_p1555->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0_A_vs_p1555->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1555->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1555->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1555->GetXaxis()->SetTickLength(0);
   Graph_S0_A_vs_p1555->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1555->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1555->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1555->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1555->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1555->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1555->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1555->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1555->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1555->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1555->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1555->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1555);
   
   gre->Draw("0ap");
   
   Double_t S12_A_vs_p_fx1556[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S12_A_vs_p_fy1556[7] = {
   0.1800418,
   0.1903633,
   0.1690531,
   0.1328435,
   0.1484612,
   0.1823079,
   0.1614487};
   Double_t S12_A_vs_p_fex1556[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_A_vs_p_fey1556[7] = {
   0.01797224,
   0.01779058,
   0.01795022,
   0.01870565,
   0.0206167,
   0.02524201,
   0.04250828};
   gre = new TGraphErrors(7,S12_A_vs_p_fx1556,S12_A_vs_p_fy1556,S12_A_vs_p_fex1556,S12_A_vs_p_fey1556);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1556 = new TH1F("Graph_S12_A_vs_p1556","S12",100,0.4,7.6);
   Graph_S12_A_vs_p1556->SetMinimum(0.1047363);
   Graph_S12_A_vs_p1556->SetMaximum(0.2175555);
   Graph_S12_A_vs_p1556->SetDirectory(0);
   Graph_S12_A_vs_p1556->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1556->SetLineColor(ci);
   Graph_S12_A_vs_p1556->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S12_A_vs_p1556->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S12_A_vs_p1556->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S12_A_vs_p1556->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S12_A_vs_p1556->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S12_A_vs_p1556->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S12_A_vs_p1556->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S12_A_vs_p1556->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S12_A_vs_p1556->GetXaxis()->SetRange(1,100);
   Graph_S12_A_vs_p1556->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S12_A_vs_p1556->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1556->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1556->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1556->GetXaxis()->SetTickLength(0);
   Graph_S12_A_vs_p1556->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1556->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1556->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1556->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1556->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1556->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1556->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1556->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1556->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1556->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1556->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1556->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1556);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1557[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S18_A_vs_p_fy1557[7] = {
   0.1304178,
   0.1449177,
   0.1485739,
   0.1527221,
   0.1720499,
   0.1710054,
   0.1485899};
   Double_t S18_A_vs_p_fex1557[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_A_vs_p_fey1557[7] = {
   0.01814153,
   0.01797383,
   0.01813623,
   0.0189073,
   0.0208186,
   0.02549089,
   0.04272397};
   gre = new TGraphErrors(7,S18_A_vs_p_fx1557,S18_A_vs_p_fy1557,S18_A_vs_p_fex1557,S18_A_vs_p_fey1557);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1557 = new TH1F("Graph_S18_A_vs_p1557","S18",100,0.4,7.6);
   Graph_S18_A_vs_p1557->SetMinimum(0.09680293);
   Graph_S18_A_vs_p1557->SetMaximum(0.2055594);
   Graph_S18_A_vs_p1557->SetDirectory(0);
   Graph_S18_A_vs_p1557->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1557->SetLineColor(ci);
   Graph_S18_A_vs_p1557->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S18_A_vs_p1557->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S18_A_vs_p1557->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S18_A_vs_p1557->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S18_A_vs_p1557->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S18_A_vs_p1557->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S18_A_vs_p1557->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S18_A_vs_p1557->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S18_A_vs_p1557->GetXaxis()->SetRange(1,100);
   Graph_S18_A_vs_p1557->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S18_A_vs_p1557->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1557->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1557->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1557->GetXaxis()->SetTickLength(0);
   Graph_S18_A_vs_p1557->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1557->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1557->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1557->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1557->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1557->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1557->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1557->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1557->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1557->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1557->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1557->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1557);
   
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
   TGaxis *gaxis = new TGaxis(0.4,0,7.6,0,0.4,7.6,8,"");
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
