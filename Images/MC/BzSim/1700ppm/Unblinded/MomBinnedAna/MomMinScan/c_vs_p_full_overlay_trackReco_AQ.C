void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 14:54:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-535,-0.7125,3335,0.4125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1419[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S0_c_vs_p_fy1419[15] = {
   -0.2089065,
   -0.2086653,
   -0.1778863,
   -0.05144731,
   -0.02157014,
   -0.01883475,
   -0.0009787803,
   -0.009574951,
   -0.004621526,
   0.008566402,
   0.01300854,
   -0.0002691064,
   0.004199958,
   0.03217606,
   0.0382381};
   Double_t S0_c_vs_p_fex1419[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_c_vs_p_fey1419[15] = {
   0.01274493,
   0.01274509,
   0.01271139,
   0.01251091,
   0.01236057,
   0.01239484,
   0.01261289,
   0.0130534,
   0.01376415,
   0.01484044,
   0.0163929,
   0.01867681,
   0.02225121,
   0.02837403,
   0.04426901};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1419,S0_c_vs_p_fy1419,S0_c_vs_p_fex1419,S0_c_vs_p_fey1419);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1419 = new TH1F("Graph_S0_c_vs_p1419","",100,-400,3200);
   Graph_S0_c_vs_p1419->SetMinimum(-0.6);
   Graph_S0_c_vs_p1419->SetMaximum(0.3);
   Graph_S0_c_vs_p1419->SetDirectory(0);
   Graph_S0_c_vs_p1419->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1419->SetLineColor(ci);
   Graph_S0_c_vs_p1419->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_c_vs_p1419->GetXaxis()->SetRange(8,93);
   Graph_S0_c_vs_p1419->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1419->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1419->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1419->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1419->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1419->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1419->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1419->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1419->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1419->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1419->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1419->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1419->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1419->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1419->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1419);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1420[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S12_c_vs_p_fy1420[15] = {
   -0.4897335,
   -0.4896755,
   -0.4535458,
   -0.3214746,
   -0.252749,
   -0.2112085,
   -0.1752036,
   -0.1480557,
   -0.125068,
   -0.1127319,
   -0.09802468,
   -0.1088834,
   -0.05662179,
   -0.08672831,
   -0.1175135};
   Double_t S12_c_vs_p_fex1420[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_c_vs_p_fey1420[15] = {
   0.01292298,
   0.01292279,
   0.01288807,
   0.01270164,
   0.01258242,
   0.01264954,
   0.01292505,
   0.01345657,
   0.01431465,
   0.0156146,
   0.01748752,
   0.02019625,
   0.0241239,
   0.03039452,
   0.05059701};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1420,S12_c_vs_p_fy1420,S12_c_vs_p_fex1420,S12_c_vs_p_fey1420);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1420 = new TH1F("Graph_S12_c_vs_p1420","S12",100,-400,3200);
   Graph_S12_c_vs_p1420->SetMinimum(-0.5496723);
   Graph_S12_c_vs_p1420->SetMaximum(0.01451796);
   Graph_S12_c_vs_p1420->SetDirectory(0);
   Graph_S12_c_vs_p1420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1420->SetLineColor(ci);
   Graph_S12_c_vs_p1420->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_c_vs_p1420->GetXaxis()->SetRange(8,93);
   Graph_S12_c_vs_p1420->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1420->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1420->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1420->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1420->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1420->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1420->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1420->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1420->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1420->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1420->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1420->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1420->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1420->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1420->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1420);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1421[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S18_c_vs_p_fy1421[15] = {
   -0.4436953,
   -0.4431831,
   -0.4074854,
   -0.2757687,
   -0.2253608,
   -0.1915224,
   -0.160811,
   -0.1367795,
   -0.1184662,
   -0.1321767,
   -0.1254624,
   -0.08128786,
   -0.07659118,
   -0.08296317,
   0.002848353};
   Double_t S18_c_vs_p_fex1421[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_c_vs_p_fey1421[15] = {
   0.01301885,
   0.01301883,
   0.01298441,
   0.01280627,
   0.01271089,
   0.01281267,
   0.01313276,
   0.0137113,
   0.01464133,
   0.01600485,
   0.01799662,
   0.02080969,
   0.02464798,
   0.03127457,
   0.05166636};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1421,S18_c_vs_p_fy1421,S18_c_vs_p_fex1421,S18_c_vs_p_fey1421);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1421 = new TH1F("Graph_S18_c_vs_p1421","S18",100,-400,3200);
   Graph_S18_c_vs_p1421->SetMinimum(-0.5078371);
   Graph_S18_c_vs_p1421->SetMaximum(0.1056376);
   Graph_S18_c_vs_p1421->SetDirectory(0);
   Graph_S18_c_vs_p1421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1421->SetLineColor(ci);
   Graph_S18_c_vs_p1421->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_c_vs_p1421->GetXaxis()->SetRange(8,93);
   Graph_S18_c_vs_p1421->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1421->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1421->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1421->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1421->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1421->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1421->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1421->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1421->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1421->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1421->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1421->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1421->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1421->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1421->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1421);
   
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
