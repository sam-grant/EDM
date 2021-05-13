void c_vs_p_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:12:18 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-2.5,3650,2.5);
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
   -0.2088806,
   -0.2086338,
   -0.1778627,
   -0.05146076,
   -0.02143181,
   -0.0189026,
   -0.001147579,
   -0.009860763,
   -0.004891954,
   0.008545034,
   0.01314593,
   -0.0001241232,
   0.004296828,
   0.03233096,
   0.03823699};
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
   0.01274291,
   0.01274308,
   0.01270936,
   0.01250865,
   0.01235801,
   0.01239234,
   0.01261039,
   0.01305086,
   0.01376143,
   0.01483754,
   0.01638987,
   0.01867457,
   0.02224815,
   0.02836941,
   0.04426901};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1419,S0_c_vs_p_fy1419,S0_c_vs_p_fex1419,S0_c_vs_p_fey1419);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1419 = new TH1F("Graph_S0_c_vs_p1419","",100,-400,3200);
   Graph_S0_c_vs_p1419->SetMinimum(-2);
   Graph_S0_c_vs_p1419->SetMaximum(2);
   Graph_S0_c_vs_p1419->SetDirectory(0);
   Graph_S0_c_vs_p1419->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1419->SetLineColor(ci);
   Graph_S0_c_vs_p1419->GetXaxis()->SetTitle("p_{min} [MeV]");
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
   -0.4895603,
   -0.4894913,
   -0.4534306,
   -0.3212251,
   -0.2526047,
   -0.2110524,
   -0.175151,
   -0.1485909,
   -0.1256188,
   -0.1129989,
   -0.09829442,
   -0.1088469,
   -0.05729242,
   -0.08827937,
   -0.1219468};
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
   0.01292104,
   0.01292083,
   0.01288608,
   0.01269965,
   0.01258052,
   0.01264729,
   0.0129227,
   0.01345409,
   0.01431201,
   0.01561171,
   0.0174831,
   0.02019268,
   0.02411695,
   0.03038087,
   0.05053594};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1420,S12_c_vs_p_fy1420,S12_c_vs_p_fex1420,S12_c_vs_p_fey1420);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1420 = new TH1F("Graph_S12_c_vs_p1420","S12",100,-400,3200);
   Graph_S12_c_vs_p1420->SetMinimum(-0.549412);
   Graph_S12_c_vs_p1420->SetMaximum(0.01375512);
   Graph_S12_c_vs_p1420->SetDirectory(0);
   Graph_S12_c_vs_p1420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1420->SetLineColor(ci);
   Graph_S12_c_vs_p1420->GetXaxis()->SetTitle("p_{min} [MeV]");
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
   -0.4435917,
   -0.4430888,
   -0.4073765,
   -0.2757501,
   -0.225405,
   -0.1915685,
   -0.1607675,
   -0.1368239,
   -0.1186569,
   -0.1318435,
   -0.1255725,
   -0.08097161,
   -0.07696721,
   -0.08264166,
   0.002978536};
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
   0.013017,
   0.01301699,
   0.01298255,
   0.01280437,
   0.01270879,
   0.01281032,
   0.01312985,
   0.01370791,
   0.01463773,
   0.01600147,
   0.01799331,
   0.02080755,
   0.02464351,
   0.03127049,
   0.05166147};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1421,S18_c_vs_p_fy1421,S18_c_vs_p_fex1421,S18_c_vs_p_fey1421);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1421 = new TH1F("Graph_S18_c_vs_p1421","S18",100,-400,3200);
   Graph_S18_c_vs_p1421->SetMinimum(-0.5077335);
   Graph_S18_c_vs_p1421->SetMaximum(0.1057649);
   Graph_S18_c_vs_p1421->SetDirectory(0);
   Graph_S18_c_vs_p1421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1421->SetLineColor(ci);
   Graph_S18_c_vs_p1421->GetXaxis()->SetTitle("p_{min} [MeV]");
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
