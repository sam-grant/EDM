#ifdef __CLING__
#pragma cling optimize(0)
#endif
void AEDMAcceptanceUncOverlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Aug 19 14:49:52 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(813.1393,-0.2,2673.21,0.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_diff_fx1016[6] = {
   1123.151,
   1371.543,
   1620.692,
   1868.015,
   2116.554,
   2363.198};
   Double_t S0_diff_fy1016[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_diff_fex1016[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_diff_fey1016[6] = {
   inf,
   inf,
   inf,
   inf,
   inf,
   inf};
   TGraphErrors *gre = new TGraphErrors(6,S0_diff_fx1016,S0_diff_fy1016,S0_diff_fex1016,S0_diff_fey1016);
   gre->SetName("S0_diff");
   gre->SetTitle(";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_diff1016 = new TH1F("Graph_S0_diff1016","",100,999.1464,2487.203);
   Graph_S0_diff1016->SetMinimum(-0.15);
   Graph_S0_diff1016->SetMaximum(0.25);
   Graph_S0_diff1016->SetDirectory(0);
   Graph_S0_diff1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0_diff1016->SetLineColor(ci);
   Graph_S0_diff1016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_diff1016->GetXaxis()->SetRange(1,100);
   Graph_S0_diff1016->GetXaxis()->CenterTitle(true);
   Graph_S0_diff1016->GetXaxis()->SetLabelFont(42);
   Graph_S0_diff1016->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_diff1016->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_diff1016->GetXaxis()->SetTitleFont(42);
   Graph_S0_diff1016->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   Graph_S0_diff1016->GetYaxis()->CenterTitle(true);
   Graph_S0_diff1016->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_diff1016->GetYaxis()->SetLabelFont(42);
   Graph_S0_diff1016->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_diff1016->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0_diff1016->GetYaxis()->SetTitleFont(42);
   Graph_S0_diff1016->GetZaxis()->SetLabelFont(42);
   Graph_S0_diff1016->GetZaxis()->SetTitleOffset(1);
   Graph_S0_diff1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_diff1016);
   
   gre->Draw("apl");
   
   Double_t S12_diff_fx1017[6] = {
   1123.136,
   1371.18,
   1620.234,
   1867.049,
   2114.925,
   2362.629};
   Double_t S12_diff_fy1017[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_diff_fex1017[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_diff_fey1017[6] = {
   0.003635864,
   0.003547432,
   0.003672787,
   0.00411945,
   0.005050991,
   0.006684059};
   gre = new TGraphErrors(6,S12_diff_fx1017,S12_diff_fy1017,S12_diff_fex1017,S12_diff_fey1017);
   gre->SetName("S12_diff");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_diff1017 = new TH1F("Graph_S12_diff1017","S12",100,999.1862,2486.578);
   Graph_S12_diff1017->SetMinimum(-0.00802087);
   Graph_S12_diff1017->SetMaximum(0.00802087);
   Graph_S12_diff1017->SetDirectory(0);
   Graph_S12_diff1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_diff1017->SetLineColor(ci);
   Graph_S12_diff1017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_diff1017->GetXaxis()->CenterTitle(true);
   Graph_S12_diff1017->GetXaxis()->SetLabelFont(42);
   Graph_S12_diff1017->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_diff1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_diff1017->GetXaxis()->SetTitleFont(42);
   Graph_S12_diff1017->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction / 250 MeV");
   Graph_S12_diff1017->GetYaxis()->CenterTitle(true);
   Graph_S12_diff1017->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_diff1017->GetYaxis()->SetLabelFont(42);
   Graph_S12_diff1017->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_diff1017->GetYaxis()->SetTitleOffset(1.25);
   Graph_S12_diff1017->GetYaxis()->SetTitleFont(42);
   Graph_S12_diff1017->GetZaxis()->SetLabelFont(42);
   Graph_S12_diff1017->GetZaxis()->SetTitleOffset(1);
   Graph_S12_diff1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_diff1017);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_diff","#plus1 mm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_diff","#minus1 mm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
