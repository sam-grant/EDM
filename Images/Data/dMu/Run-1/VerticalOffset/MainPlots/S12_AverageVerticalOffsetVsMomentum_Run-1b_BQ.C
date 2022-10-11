#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12_AverageVerticalOffsetVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 10 15:15:50 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-2,3125,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1092[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1092[9] = {
   0.8761115,
   0.4365712,
   -0.2470373,
   -0.3937442,
   -0.09418236,
   0.05674318,
   -0.00523406,
   0.06002638,
   0.1295087};
   Double_t Graph0_fex1092[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1092[9] = {
   0.05618134,
   0.02840197,
   0.02165282,
   0.01876786,
   0.01797041,
   0.01831193,
   0.01923183,
   0.02102823,
   0.0239721};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1092,Graph0_fy1092,Graph0_fex1092,Graph0_fey1092);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01092 = new TH1F("Graph_Graph01092","S12",100,425,2825);
   Graph_Graph01092->SetMinimum(-1.5);
   Graph_Graph01092->SetMaximum(2.5);
   Graph_Graph01092->SetDirectory(0);
   Graph_Graph01092->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01092->SetLineColor(ci);
   Graph_Graph01092->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01092->GetXaxis()->CenterTitle(true);
   Graph_Graph01092->GetXaxis()->SetLabelFont(42);
   Graph_Graph01092->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01092->GetXaxis()->SetTitleFont(42);
   Graph_Graph01092->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01092->GetYaxis()->CenterTitle(true);
   Graph_Graph01092->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01092->GetYaxis()->SetLabelFont(42);
   Graph_Graph01092->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01092->GetYaxis()->SetTitleFont(42);
   Graph_Graph01092->GetZaxis()->SetLabelFont(42);
   Graph_Graph01092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01092);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   TLine *line = new TLine(425,0,2825,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1093[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1093[9] = {
   0.8761115,
   0.4365712,
   -0.2470373,
   -0.3937442,
   -0.09418236,
   0.05674318,
   -0.00523406,
   0.06002638,
   0.1295087};
   Double_t Graph0_fex1093[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1093[9] = {
   0.05618134,
   0.02840197,
   0.02165282,
   0.01876786,
   0.01797041,
   0.01831193,
   0.01923183,
   0.02102823,
   0.0239721};
   gre = new TGraphErrors(9,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010921093 = new TH1F("Graph_Graph_Graph010921093","S12",100,425,2825);
   Graph_Graph_Graph010921093->SetMinimum(-1.5);
   Graph_Graph_Graph010921093->SetMaximum(2.5);
   Graph_Graph_Graph010921093->SetDirectory(0);
   Graph_Graph_Graph010921093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010921093->SetLineColor(ci);
   Graph_Graph_Graph010921093->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010921093->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010921093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010921093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010921093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010921093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010921093->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010921093->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010921093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010921093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010921093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010921093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010921093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010921093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010921093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010921093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010921093);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
