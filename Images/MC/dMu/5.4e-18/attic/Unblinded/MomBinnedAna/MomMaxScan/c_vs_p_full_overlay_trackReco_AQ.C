void c_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:31:02 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.7125,3550,0.4125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1564[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S0_c_vs_p_fy1564[12] = {
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15,
   -2.126864e-15};
   Double_t S0_c_vs_p_fex1564[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_fey1564[12] = {
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12,
   6.40382e-12};
   TGraphErrors *gre = new TGraphErrors(12,S0_c_vs_p_fx1564,S0_c_vs_p_fy1564,S0_c_vs_p_fex1564,S0_c_vs_p_fey1564);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1564 = new TH1F("Graph_S0_c_vs_p1564","",100,580,3220);
   Graph_S0_c_vs_p1564->SetMinimum(-0.6);
   Graph_S0_c_vs_p1564->SetMaximum(0.3);
   Graph_S0_c_vs_p1564->SetDirectory(0);
   Graph_S0_c_vs_p1564->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1564->SetLineColor(ci);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S0_c_vs_p1564->GetXaxis()->SetRange(1,100);
   Graph_S0_c_vs_p1564->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1564->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1564->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1564->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1564->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1564->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1564->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1564->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1564->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1564->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1564);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1565[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S12_c_vs_p_fy1565[12] = {
   0.3203131,
   0.321869,
   0.3247711,
   0.3293145,
   0.3367372,
   0.3512837,
   0.3686414,
   0.3894734,
   0.4187853,
   0.4625308,
   0.5462946,
   0.6627374};
   Double_t S12_c_vs_p_fex1565[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_fey1565[12] = {
   0.01262762,
   0.01268668,
   0.01286623,
   0.01314857,
   0.01361564,
   0.01434071,
   0.01541789,
   0.01698292,
   0.01928433,
   0.02281379,
   0.02893851,
   0.04321322};
   gre = new TGraphErrors(12,S12_c_vs_p_fx1565,S12_c_vs_p_fy1565,S12_c_vs_p_fex1565,S12_c_vs_p_fey1565);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1565 = new TH1F("Graph_S12_c_vs_p1565","S12",100,580,3220);
   Graph_S12_c_vs_p1565->SetMinimum(0.267859);
   Graph_S12_c_vs_p1565->SetMaximum(0.7457771);
   Graph_S12_c_vs_p1565->SetDirectory(0);
   Graph_S12_c_vs_p1565->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1565->SetLineColor(ci);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S12_c_vs_p1565->GetXaxis()->SetRange(1,100);
   Graph_S12_c_vs_p1565->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1565->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1565->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1565->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1565->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1565->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1565->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1565->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1565->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1565->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1565);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1566[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t S18_c_vs_p_fy1566[12] = {
   0.1093495,
   0.1121095,
   0.1000068,
   0.07434256,
   0.0513647,
   0.01534039,
   0.009246611,
   0.03416544,
   0.05137532,
   0.002602011,
   0.05980447,
   0.424863};
   Double_t S18_c_vs_p_fex1566[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_fey1566[12] = {
   0.04439783,
   0.04514575,
   0.04754965,
   0.05095452,
   0.05563813,
   0.06226879,
   0.07172823,
   0.08572472,
   0.10621,
   0.1375691,
   0.1901859,
   0.3234152};
   gre = new TGraphErrors(12,S18_c_vs_p_fx1566,S18_c_vs_p_fy1566,S18_c_vs_p_fex1566,S18_c_vs_p_fey1566);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1566 = new TH1F("Graph_S18_c_vs_p1566","S18",100,580,3220);
   Graph_S18_c_vs_p1566->SetMinimum(-0.2232916);
   Graph_S18_c_vs_p1566->SetMaximum(0.8366027);
   Graph_S18_c_vs_p1566->SetDirectory(0);
   Graph_S18_c_vs_p1566->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1566->SetLineColor(ci);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_S18_c_vs_p1566->GetXaxis()->SetRange(1,100);
   Graph_S18_c_vs_p1566->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1566->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1566->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1566->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1566->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1566->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1566->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1566->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1566->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1566->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1566);
   
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
