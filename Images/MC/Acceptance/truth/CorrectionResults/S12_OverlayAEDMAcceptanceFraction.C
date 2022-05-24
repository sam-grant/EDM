void S12_OverlayAEDMAcceptanceFraction()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 18:45:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(811.7217,-0.18125,2678.365,1.13125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_gr_ratio_nominal_fx1004[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t S12_gr_ratio_nominal_fy1004[6] = {
   0.4193006,
   0.5442365,
   0.4298757,
   0.7355626,
   0.4331182,
   0.6463372};
   Double_t S12_gr_ratio_nominal_fex1004[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_gr_ratio_nominal_fey1004[6] = {
   0.1023333,
   0.103312,
   0.1070833,
   0.1206757,
   0.1710675,
   0.1926185};
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
   
   TH1F *Graph_S12_gr_ratio_nominal1004 = new TH1F("Graph_S12_gr_ratio_nominal1004","S12",100,998.3861,2491.701);
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
   1147.829,
   1397.245,
   1646.478,
   1895.594,
   2144.355,
   2392.258};
   Double_t S12_gr_ratio_shift_fy1005[6] = {
   0.2613445,
   0.4753199,
   0.5059661,
   0.6685033,
   0.2870432,
   0.5370601};
   Double_t S12_gr_ratio_shift_fex1005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_gr_ratio_shift_fey1005[6] = {
   0.1335901,
   0.134823,
   0.1418831,
   0.1567567,
   0.2263549,
   0.2539712};
   gre = new TGraphErrors(6,S12_gr_ratio_shift_fx1005,S12_gr_ratio_shift_fy1005,S12_gr_ratio_shift_fex1005,S12_gr_ratio_shift_fey1005);
   gre->SetName("S12_gr_ratio_shift");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_ratio_shift1005 = new TH1F("Graph_S12_gr_ratio_shift1005","",100,1023.386,2516.701);
   Graph_S12_gr_ratio_shift1005->SetMinimum(0.05461952);
   Graph_S12_gr_ratio_shift1005->SetMaximum(0.9017171);
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
