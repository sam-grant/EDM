void A_vs_p_full_overlay_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.5,-0.0375,3.5,0.3375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1265[3] = {
   1,
   2,
   3};
   Double_t S0_A_vs_p_fy1265[3] = {
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11};
   Double_t S0_A_vs_p_fex1265[3] = {
   0,
   0,
   0};
   Double_t S0_A_vs_p_fey1265[3] = {
   9.056369e-12,
   9.056369e-12,
   9.056369e-12};
   TGraphErrors *gre = new TGraphErrors(3,S0_A_vs_p_fx1265,S0_A_vs_p_fy1265,S0_A_vs_p_fex1265,S0_A_vs_p_fey1265);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1265 = new TH1F("Graph_S0_A_vs_p1265","",100,0.8,3.2);
   Graph_S0_A_vs_p1265->SetMinimum(0);
   Graph_S0_A_vs_p1265->SetMaximum(0.3);
   Graph_S0_A_vs_p1265->SetDirectory(0);
   Graph_S0_A_vs_p1265->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1265->SetLineColor(ci);
   Graph_S0_A_vs_p1265->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0_A_vs_p1265->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0_A_vs_p1265->GetXaxis()->SetBinLabel(50,"900-2500");
   Graph_S0_A_vs_p1265->GetXaxis()->SetBinLabel(92,"1400-2000");
   Graph_S0_A_vs_p1265->GetXaxis()->SetRange(1,100);
   Graph_S0_A_vs_p1265->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0_A_vs_p1265->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1265->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1265->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1265->GetXaxis()->SetTickLength(0);
   Graph_S0_A_vs_p1265->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1265->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1265->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1265->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1265->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1265->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1265->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1265->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1265->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1265->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1265->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1265->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1265);
   
   gre->Draw("0ap");
   
   Double_t S12_A_vs_p_fx1266[3] = {
   1,
   2,
   3};
   Double_t S12_A_vs_p_fy1266[3] = {
   0.1815746,
   0.1444762,
   0.1840817};
   Double_t S12_A_vs_p_fex1266[3] = {
   0,
   0,
   0};
   Double_t S12_A_vs_p_fey1266[3] = {
   0.01802286,
   0.01831291,
   0.02542022};
   gre = new TGraphErrors(3,S12_A_vs_p_fx1266,S12_A_vs_p_fy1266,S12_A_vs_p_fex1266,S12_A_vs_p_fey1266);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1266 = new TH1F("Graph_S12_A_vs_p1266","S12",100,0.8,3.2);
   Graph_S12_A_vs_p1266->SetMinimum(0.1178295);
   Graph_S12_A_vs_p1266->SetMaximum(0.2178358);
   Graph_S12_A_vs_p1266->SetDirectory(0);
   Graph_S12_A_vs_p1266->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1266->SetLineColor(ci);
   Graph_S12_A_vs_p1266->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S12_A_vs_p1266->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S12_A_vs_p1266->GetXaxis()->SetBinLabel(50,"900-2500");
   Graph_S12_A_vs_p1266->GetXaxis()->SetBinLabel(92,"1400-2000");
   Graph_S12_A_vs_p1266->GetXaxis()->SetRange(1,100);
   Graph_S12_A_vs_p1266->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S12_A_vs_p1266->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1266->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1266->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1266->GetXaxis()->SetTickLength(0);
   Graph_S12_A_vs_p1266->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1266->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1266->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1266->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1266->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1266->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1266->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1266->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1266->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1266->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1266->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1266->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1266);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1267[3] = {
   1,
   2,
   3};
   Double_t S18_A_vs_p_fy1267[3] = {
   0.2156253,
   0.1782858,
   0.2079405};
   Double_t S18_A_vs_p_fex1267[3] = {
   0,
   0,
   0};
   Double_t S18_A_vs_p_fey1267[3] = {
   0.06141324,
   0.07036352,
   0.1083475};
   gre = new TGraphErrors(3,S18_A_vs_p_fx1267,S18_A_vs_p_fy1267,S18_A_vs_p_fex1267,S18_A_vs_p_fey1267);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1267 = new TH1F("Graph_S18_A_vs_p1267","S18",100,0.8,3.2);
   Graph_S18_A_vs_p1267->SetMinimum(0.07792358);
   Graph_S18_A_vs_p1267->SetMaximum(0.3379575);
   Graph_S18_A_vs_p1267->SetDirectory(0);
   Graph_S18_A_vs_p1267->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1267->SetLineColor(ci);
   Graph_S18_A_vs_p1267->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S18_A_vs_p1267->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S18_A_vs_p1267->GetXaxis()->SetBinLabel(50,"900-2500");
   Graph_S18_A_vs_p1267->GetXaxis()->SetBinLabel(92,"1400-2000");
   Graph_S18_A_vs_p1267->GetXaxis()->SetRange(1,100);
   Graph_S18_A_vs_p1267->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S18_A_vs_p1267->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1267->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1267->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1267->GetXaxis()->SetTickLength(0);
   Graph_S18_A_vs_p1267->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1267->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1267->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1267->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1267->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1267->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1267->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1267->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1267->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1267->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1267->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1267->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1267);
   
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
   TGaxis *gaxis = new TGaxis(0.8,0,3.2,0,0.8,3.2,8,"");
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
