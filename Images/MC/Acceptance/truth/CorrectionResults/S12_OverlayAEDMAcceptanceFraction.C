#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12_OverlayAEDMAcceptanceFraction()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Aug 19 14:49:51 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(813.2621,-0.18125,2672.502,1.13125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_gr_ratio_nominal_fx1004[6] = {
   1123.136,
   1371.18,
   1620.234,
   1867.049,
   2114.925,
   2362.629};
   Double_t S12_gr_ratio_nominal_fy1004[6] = {
   0.4739418,
   0.4966805,
   0.6231932,
   0.5706841,
   0.5992536,
   0.4334988};
   Double_t S12_gr_ratio_nominal_fex1004[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_gr_ratio_nominal_fey1004[6] = {
   0.06329412,
   0.06175467,
   0.06393688,
   0.07171252,
   0.08792904,
   0.1163579};
   TGraphErrors *gre = new TGraphErrors(6,S12_gr_ratio_nominal_fx1004,S12_gr_ratio_nominal_fy1004,S12_gr_ratio_nominal_fex1004,S12_gr_ratio_nominal_fey1004);
   gre->SetName("S12_gr_ratio_nominal");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_ratio_nominal1004 = new TH1F("Graph_S12_gr_ratio_nominal1004","S12",100,999.1862,2486.578);
   Graph_S12_gr_ratio_nominal1004->SetMinimum(-0.05);
   Graph_S12_gr_ratio_nominal1004->SetMaximum(1);
   Graph_S12_gr_ratio_nominal1004->SetDirectory(0);
   Graph_S12_gr_ratio_nominal1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_ratio_nominal1004->SetLineColor(ci);
   Graph_S12_gr_ratio_nominal1004->GetXaxis()->SetTitle("Decay vertex momentum (nominal) [MeV]");
   Graph_S12_gr_ratio_nominal1004->GetXaxis()->CenterTitle(true);
   Graph_S12_gr_ratio_nominal1004->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_ratio_nominal1004->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ratio_nominal1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_ratio_nominal1004->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_ratio_nominal1004->GetYaxis()->SetTitle("A_{EDM} acceptance fraction / 250 MeV");
   Graph_S12_gr_ratio_nominal1004->GetYaxis()->CenterTitle(true);
   Graph_S12_gr_ratio_nominal1004->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_gr_ratio_nominal1004->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_ratio_nominal1004->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ratio_nominal1004->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_gr_ratio_nominal1004->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_ratio_nominal1004->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_ratio_nominal1004->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_ratio_nominal1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_ratio_nominal1004);
   
   gre->Draw("ap");
   
   Double_t S12_gr_ratio_shift_fx1005[6] = {
   1148.136,
   1396.18,
   1645.234,
   1892.049,
   2139.925,
   2387.629};
   Double_t S12_gr_ratio_shift_fy1005[6] = {
   0.4739418,
   0.4966805,
   0.6231932,
   0.5706841,
   0.5992536,
   0.4334988};
   Double_t S12_gr_ratio_shift_fex1005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_gr_ratio_shift_fey1005[6] = {
   0.06329412,
   0.06175467,
   0.06393688,
   0.07171252,
   0.08792904,
   0.1163579};
   gre = new TGraphErrors(6,S12_gr_ratio_shift_fx1005,S12_gr_ratio_shift_fy1005,S12_gr_ratio_shift_fex1005,S12_gr_ratio_shift_fey1005);
   gre->SetName("S12_gr_ratio_shift");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_ratio_shift1005 = new TH1F("Graph_S12_gr_ratio_shift1005","",100,1024.186,2511.578);
   Graph_S12_gr_ratio_shift1005->SetMinimum(0.2801367);
   Graph_S12_gr_ratio_shift1005->SetMaximum(0.7241868);
   Graph_S12_gr_ratio_shift1005->SetDirectory(0);
   Graph_S12_gr_ratio_shift1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_gr_ratio_shift1005->SetLineColor(ci);
   Graph_S12_gr_ratio_shift1005->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_ratio_shift1005->GetXaxis()->SetTitleOffset(1);
   Graph_S12_gr_ratio_shift1005->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_ratio_shift1005->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_ratio_shift1005->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_ratio_shift1005->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_ratio_shift1005->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_ratio_shift1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_ratio_shift1005);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.11,0.79,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_gr_ratio_nominal","Truth vertices (nominal)","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12_gr_ratio_shift","Truth vertices (#plus1 mm)","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
