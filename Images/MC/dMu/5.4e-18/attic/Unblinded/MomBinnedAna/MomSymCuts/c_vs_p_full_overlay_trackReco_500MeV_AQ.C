void c_vs_p_full_overlay_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.5,-0.7,3.5,0.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1262[3] = {
   1,
   2,
   3};
   Double_t S0_c_vs_p_fy1262[3] = {
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15};
   Double_t S0_c_vs_p_fex1262[3] = {
   0,
   0,
   0};
   Double_t S0_c_vs_p_fey1262[3] = {
   6.40382e-12,
   6.40382e-12,
   6.40382e-12};
   TGraphErrors *gre = new TGraphErrors(3,S0_c_vs_p_fx1262,S0_c_vs_p_fy1262,S0_c_vs_p_fex1262,S0_c_vs_p_fey1262);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1262 = new TH1F("Graph_S0_c_vs_p1262","",100,0.8,3.2);
   Graph_S0_c_vs_p1262->SetMinimum(-0.6);
   Graph_S0_c_vs_p1262->SetMaximum(0.2);
   Graph_S0_c_vs_p1262->SetDirectory(0);
   Graph_S0_c_vs_p1262->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1262->SetLineColor(ci);
   Graph_S0_c_vs_p1262->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S0_c_vs_p1262->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S0_c_vs_p1262->GetXaxis()->SetBinLabel(50,"900-2500");
   Graph_S0_c_vs_p1262->GetXaxis()->SetBinLabel(92,"1400-2000");
   Graph_S0_c_vs_p1262->GetXaxis()->SetRange(1,100);
   Graph_S0_c_vs_p1262->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S0_c_vs_p1262->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1262->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1262->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1262->GetXaxis()->SetTickLength(0);
   Graph_S0_c_vs_p1262->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1262->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1262->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1262->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1262->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1262->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1262->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1262->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1262->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1262->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1262->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1262->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1262);
   
   gre->Draw("0ap");
   
   Double_t S12_c_vs_p_fx1263[3] = {
   1,
   2,
   3};
   Double_t S12_c_vs_p_fy1263[3] = {
   -0.4350446,
   -0.2355589,
   -0.2084779};
   Double_t S12_c_vs_p_fex1263[3] = {
   0,
   0,
   0};
   Double_t S12_c_vs_p_fey1263[3] = {
   0.01280167,
   0.0130271,
   0.01809064};
   gre = new TGraphErrors(3,S12_c_vs_p_fx1263,S12_c_vs_p_fy1263,S12_c_vs_p_fex1263,S12_c_vs_p_fey1263);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1263 = new TH1F("Graph_S12_c_vs_p1263","S12",100,0.8,3.2);
   Graph_S12_c_vs_p1263->SetMinimum(-0.4735921);
   Graph_S12_c_vs_p1263->SetMaximum(-0.1646413);
   Graph_S12_c_vs_p1263->SetDirectory(0);
   Graph_S12_c_vs_p1263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1263->SetLineColor(ci);
   Graph_S12_c_vs_p1263->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S12_c_vs_p1263->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S12_c_vs_p1263->GetXaxis()->SetBinLabel(50,"900-2500");
   Graph_S12_c_vs_p1263->GetXaxis()->SetBinLabel(92,"1400-2000");
   Graph_S12_c_vs_p1263->GetXaxis()->SetRange(1,100);
   Graph_S12_c_vs_p1263->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S12_c_vs_p1263->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1263->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1263->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1263->GetXaxis()->SetTickLength(0);
   Graph_S12_c_vs_p1263->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1263->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1263->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1263->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1263->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1263->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1263->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1263->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1263->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1263->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1263->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1263->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1263);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1264[3] = {
   1,
   2,
   3};
   Double_t S18_c_vs_p_fy1264[3] = {
   -0.1153583,
   -0.09879201,
   -0.00241991};
   Double_t S18_c_vs_p_fex1264[3] = {
   0,
   0,
   0};
   Double_t S18_c_vs_p_fey1264[3] = {
   0.044278,
   0.05024731,
   0.0770256};
   gre = new TGraphErrors(3,S18_c_vs_p_fx1264,S18_c_vs_p_fy1264,S18_c_vs_p_fex1264,S18_c_vs_p_fey1264);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1264 = new TH1F("Graph_S18_c_vs_p1264","S18",100,0.8,3.2);
   Graph_S18_c_vs_p1264->SetMinimum(-0.1830605);
   Graph_S18_c_vs_p1264->SetMaximum(0.09802989);
   Graph_S18_c_vs_p1264->SetDirectory(0);
   Graph_S18_c_vs_p1264->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1264->SetLineColor(ci);
   Graph_S18_c_vs_p1264->GetXaxis()->SetTitle("p_{min} #minus p_{max} [MeV]");
   Graph_S18_c_vs_p1264->GetXaxis()->SetBinLabel(9,"400-3000");
   Graph_S18_c_vs_p1264->GetXaxis()->SetBinLabel(50,"900-2500");
   Graph_S18_c_vs_p1264->GetXaxis()->SetBinLabel(92,"1400-2000");
   Graph_S18_c_vs_p1264->GetXaxis()->SetRange(1,100);
   Graph_S18_c_vs_p1264->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_S18_c_vs_p1264->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1264->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1264->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1264->GetXaxis()->SetTickLength(0);
   Graph_S18_c_vs_p1264->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1264->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1264->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1264->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1264->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1264->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1264->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1264->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1264->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1264->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1264->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1264->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1264);
   
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
   TGaxis *gaxis = new TGaxis(0.8,-0.6,3.2,-0.6,0.8,3.2,8,"");
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
