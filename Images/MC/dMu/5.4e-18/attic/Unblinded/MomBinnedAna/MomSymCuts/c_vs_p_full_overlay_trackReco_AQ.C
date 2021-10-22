void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:31:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-0.7,8.5,0.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1552[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0_c_vs_p_fy1552[7] = {
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15};
   Double_t S0_c_vs_p_fex1552[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_fey1552[7] = {
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12};
   TGraphErrors *gre = new TGraphErrors(7,S0_c_vs_p_fx1552,S0_c_vs_p_fy1552,S0_c_vs_p_fex1552,S0_c_vs_p_fey1552);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1552 = new TH1F("Graph_S0_c_vs_p1552","",100,0.4,7.6);
   Graph_S0_c_vs_p1552->SetMinimum(-0.6);
   Graph_S0_c_vs_p1552->SetMaximum(0.2);
   Graph_S0_c_vs_p1552->SetDirectory(0);
   Graph_S0_c_vs_p1552->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1552->SetLineColor(ci);
   Graph_S0_c_vs_p1552->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0_c_vs_p1552->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0_c_vs_p1552->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S0_c_vs_p1552->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S0_c_vs_p1552->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S0_c_vs_p1552->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S0_c_vs_p1552->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S0_c_vs_p1552->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S0_c_vs_p1552->GetXaxis()->SetRange(1,100);
   Graph_S0_c_vs_p1552->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0_c_vs_p1552->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1552->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1552->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1552->GetXaxis()->SetTickLength(0);
   Graph_S0_c_vs_p1552->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1552->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1552->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1552->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1552->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1552->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1552->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1552->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1552->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1552->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1552->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1552->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1552);
   
   gre->Draw("0ap");
   
   Double_t S12_c_vs_p_fx1553[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S12_c_vs_p_fy1553[7] = {
   0.4350446,
   0.321869,
   0.2584353,
   0.2202585,
   0.2083222,
   0.2084778,
   0.2197563};
   Double_t S12_c_vs_p_fex1553[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_fey1553[7] = {
   0.01280167,
   0.01268668,
   0.0128199,
   0.01338119,
   0.01475499,
   0.01809064,
   0.03050556};
   gre = new TGraphErrors(7,S12_c_vs_p_fx1553,S12_c_vs_p_fy1553,S12_c_vs_p_fex1553,S12_c_vs_p_fey1553);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1553 = new TH1F("Graph_S12_c_vs_p1553","S12",100,0.4,7.6);
   Graph_S12_c_vs_p1553->SetMinimum(0.1633912);
   Graph_S12_c_vs_p1553->SetMaximum(0.4737058);
   Graph_S12_c_vs_p1553->SetDirectory(0);
   Graph_S12_c_vs_p1553->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1553->SetLineColor(ci);
   Graph_S12_c_vs_p1553->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S12_c_vs_p1553->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S12_c_vs_p1553->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S12_c_vs_p1553->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S12_c_vs_p1553->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S12_c_vs_p1553->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S12_c_vs_p1553->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S12_c_vs_p1553->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S12_c_vs_p1553->GetXaxis()->SetRange(1,100);
   Graph_S12_c_vs_p1553->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S12_c_vs_p1553->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1553->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1553->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1553->GetXaxis()->SetTickLength(0);
   Graph_S12_c_vs_p1553->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1553->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1553->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1553->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1553->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1553->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1553->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1553->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1553->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1553->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1553->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1553->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1553);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1554[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S18_c_vs_p_fy1554[7] = {
   0.1153568,
   0.1121095,
   0.09177767,
   0.07949541,
   0.06874951,
   0.002415362,
   -0.02769911};
   Double_t S18_c_vs_p_fex1554[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_fey1554[7] = {
   0.044278,
   0.04514575,
   0.04808305,
   0.05293745,
   0.0609283,
   0.0770256,
   0.1311966};
   gre = new TGraphErrors(7,S18_c_vs_p_fx1554,S18_c_vs_p_fy1554,S18_c_vs_p_fex1554,S18_c_vs_p_fey1554);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1554 = new TH1F("Graph_S18_c_vs_p1554","S18",100,0.4,7.6);
   Graph_S18_c_vs_p1554->SetMinimum(-0.1907487);
   Graph_S18_c_vs_p1554->SetMaximum(0.1914879);
   Graph_S18_c_vs_p1554->SetDirectory(0);
   Graph_S18_c_vs_p1554->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1554->SetLineColor(ci);
   Graph_S18_c_vs_p1554->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S18_c_vs_p1554->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S18_c_vs_p1554->GetXaxis()->SetBinLabel(23,"600-2800");
   Graph_S18_c_vs_p1554->GetXaxis()->SetBinLabel(37,"800-2600");
   Graph_S18_c_vs_p1554->GetXaxis()->SetBinLabel(51,"1000-2400");
   Graph_S18_c_vs_p1554->GetXaxis()->SetBinLabel(64,"1200-2200");
   Graph_S18_c_vs_p1554->GetXaxis()->SetBinLabel(78,"1400-2000");
   Graph_S18_c_vs_p1554->GetXaxis()->SetBinLabel(92,"1600-1800");
   Graph_S18_c_vs_p1554->GetXaxis()->SetRange(1,100);
   Graph_S18_c_vs_p1554->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S18_c_vs_p1554->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1554->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1554->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1554->GetXaxis()->SetTickLength(0);
   Graph_S18_c_vs_p1554->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1554->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1554->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1554->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1554->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1554->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1554->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1554->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1554->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1554->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1554->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1554->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1554);
   
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
