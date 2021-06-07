void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:44 2021) by ROOT version 6.22/08
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
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948};
   Double_t S0_A_vs_p_fex1555[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_A_vs_p_fey1555[7] = {
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07};
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
   0.04456271,
   0.04365136,
   0.04269295,
   0.04033859,
   0.04426776,
   0.04475256,
   0.01852031};
   Double_t S12_A_vs_p_fex1556[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_A_vs_p_fey1556[7] = {
   0.007691137,
   0.007530745,
   0.007540869,
   0.007870274,
   0.008723516,
   0.01072682,
   0.01803019};
   gre = new TGraphErrors(7,S12_A_vs_p_fx1556,S12_A_vs_p_fy1556,S12_A_vs_p_fex1556,S12_A_vs_p_fey1556);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1556 = new TH1F("Graph_S12_A_vs_p1556","S12",100,0.4,7.6);
   Graph_S12_A_vs_p1556->SetMinimum(0.0004411004);
   Graph_S12_A_vs_p1556->SetMaximum(0.0609783);
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
   0.02748249,
   0.03189394,
   0.02628053,
   0.02559545,
   0.02216193,
   0.007602157,
   0.03445449};
   Double_t S18_A_vs_p_fex1557[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_A_vs_p_fey1557[7] = {
   0.007943033,
   0.007788705,
   0.007807787,
   0.008146575,
   0.009006938,
   0.01104138,
   0.01849529};
   gre = new TGraphErrors(7,S18_A_vs_p_fx1557,S18_A_vs_p_fy1557,S18_A_vs_p_fex1557,S18_A_vs_p_fey1557);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1557 = new TH1F("Graph_S18_A_vs_p1557","S18",100,0.4,7.6);
   Graph_S18_A_vs_p1557->SetMinimum(-0.009078125);
   Graph_S18_A_vs_p1557->SetMaximum(0.05858869);
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
