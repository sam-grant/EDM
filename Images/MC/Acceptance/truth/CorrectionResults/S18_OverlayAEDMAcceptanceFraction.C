#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_OverlayAEDMAcceptanceFraction()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Aug 19 14:49:51 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(812.8874,-0.18125,2673.389,1.13125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_gr_ratio_nominal_fx1007[6] = {
   1122.971,
   1370.982,
   1619.781,
   1866.687,
   2115.067,
   2363.305};
   Double_t S18_gr_ratio_nominal_fy1007[6] = {
   0.3635315,
   0.4589906,
   0.5199009,
   0.581996,
   0.4153759,
   0.6779638};
   Double_t S18_gr_ratio_nominal_fex1007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_gr_ratio_nominal_fey1007[6] = {
   0.06287879,
   0.06188527,
   0.06444331,
   0.07301619,
   0.08972558,
   0.1193973};
   TGraphErrors *gre = new TGraphErrors(6,S18_gr_ratio_nominal_fx1007,S18_gr_ratio_nominal_fy1007,S18_gr_ratio_nominal_fex1007,S18_gr_ratio_nominal_fey1007);
   gre->SetName("S18_gr_ratio_nominal");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_ratio_nominal1007 = new TH1F("Graph_S18_gr_ratio_nominal1007","S18",100,998.9375,2487.338);
   Graph_S18_gr_ratio_nominal1007->SetMinimum(-0.05);
   Graph_S18_gr_ratio_nominal1007->SetMaximum(1);
   Graph_S18_gr_ratio_nominal1007->SetDirectory(0);
   Graph_S18_gr_ratio_nominal1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_ratio_nominal1007->SetLineColor(ci);
   Graph_S18_gr_ratio_nominal1007->GetXaxis()->SetTitle("Decay vertex momentum (nominal) [MeV]");
   Graph_S18_gr_ratio_nominal1007->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_ratio_nominal1007->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_nominal1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ratio_nominal1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_ratio_nominal1007->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_ratio_nominal1007->GetYaxis()->SetTitle("A_{EDM} acceptance fraction / 250 MeV");
   Graph_S18_gr_ratio_nominal1007->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_ratio_nominal1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_ratio_nominal1007->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_nominal1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ratio_nominal1007->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_gr_ratio_nominal1007->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_ratio_nominal1007->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_nominal1007->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_ratio_nominal1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_ratio_nominal1007);
   
   gre->Draw("ap");
   
   Double_t S18_gr_ratio_shift_fx1008[6] = {
   1147.971,
   1395.982,
   1644.781,
   1891.687,
   2140.067,
   2388.305};
   Double_t S18_gr_ratio_shift_fy1008[6] = {
   0.3635315,
   0.4589906,
   0.5199009,
   0.581996,
   0.4153759,
   0.6779638};
   Double_t S18_gr_ratio_shift_fex1008[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_gr_ratio_shift_fey1008[6] = {
   0.06287879,
   0.06188527,
   0.06444331,
   0.07301619,
   0.08972558,
   0.1193973};
   gre = new TGraphErrors(6,S18_gr_ratio_shift_fx1008,S18_gr_ratio_shift_fy1008,S18_gr_ratio_shift_fex1008,S18_gr_ratio_shift_fey1008);
   gre->SetName("S18_gr_ratio_shift");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_ratio_shift1008 = new TH1F("Graph_S18_gr_ratio_shift1008","",100,1023.938,2512.338);
   Graph_S18_gr_ratio_shift1008->SetMinimum(0.2509818);
   Graph_S18_gr_ratio_shift1008->SetMaximum(0.847032);
   Graph_S18_gr_ratio_shift1008->SetDirectory(0);
   Graph_S18_gr_ratio_shift1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_gr_ratio_shift1008->SetLineColor(ci);
   Graph_S18_gr_ratio_shift1008->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_shift1008->GetXaxis()->SetTitleOffset(1);
   Graph_S18_gr_ratio_shift1008->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_ratio_shift1008->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_shift1008->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_ratio_shift1008->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_ratio_shift1008->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_ratio_shift1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_ratio_shift1008);
   
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
   TLegendEntry *entry=leg->AddEntry("S18_gr_ratio_nominal","Truth vertices (nominal)","lpf");
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
   entry=leg->AddEntry("S18_gr_ratio_shift","Truth vertices (#minus1 mm)","lpf");
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
