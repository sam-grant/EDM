void S12_AverageVerticalOffsetVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:35:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-2,3125,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1123[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1123[9] = {
   0.8682333,
   0.4333208,
   -0.2500834,
   -0.3987116,
   -0.099378,
   0.05049358,
   -0.008915863,
   0.05506315,
   0.1257652};
   Double_t Graph0_fex1123[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1123[9] = {
   0.05410054,
   0.0273461,
   0.02084781,
   0.01806892,
   0.0172999,
   0.01762642,
   0.01851189,
   0.02023977,
   0.02308216};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1123,Graph0_fy1123,Graph0_fex1123,Graph0_fey1123);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01123 = new TH1F("Graph_Graph01123","S12",100,425,2825);
   Graph_Graph01123->SetMinimum(-1.5);
   Graph_Graph01123->SetMaximum(2.5);
   Graph_Graph01123->SetDirectory(0);
   Graph_Graph01123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01123->SetLineColor(ci);
   Graph_Graph01123->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01123->GetXaxis()->CenterTitle(true);
   Graph_Graph01123->GetXaxis()->SetLabelFont(42);
   Graph_Graph01123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01123->GetXaxis()->SetTitleFont(42);
   Graph_Graph01123->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01123->GetYaxis()->CenterTitle(true);
   Graph_Graph01123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01123->GetYaxis()->SetLabelFont(42);
   Graph_Graph01123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01123->GetYaxis()->SetTitleFont(42);
   Graph_Graph01123->GetZaxis()->SetLabelFont(42);
   Graph_Graph01123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01123);
   
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
   
   Double_t Graph0_fx1124[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1124[9] = {
   0.8682333,
   0.4333208,
   -0.2500834,
   -0.3987116,
   -0.099378,
   0.05049358,
   -0.008915863,
   0.05506315,
   0.1257652};
   Double_t Graph0_fex1124[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1124[9] = {
   0.05410054,
   0.0273461,
   0.02084781,
   0.01806892,
   0.0172999,
   0.01762642,
   0.01851189,
   0.02023977,
   0.02308216};
   gre = new TGraphErrors(9,Graph0_fx1124,Graph0_fy1124,Graph0_fex1124,Graph0_fey1124);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph011231124 = new TH1F("Graph_Graph_Graph011231124","S12",100,425,2825);
   Graph_Graph_Graph011231124->SetMinimum(-1.5);
   Graph_Graph_Graph011231124->SetMaximum(2.5);
   Graph_Graph_Graph011231124->SetDirectory(0);
   Graph_Graph_Graph011231124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph011231124->SetLineColor(ci);
   Graph_Graph_Graph011231124->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph011231124->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph011231124->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph011231124->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph011231124->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph011231124->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph011231124->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph011231124->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph011231124->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph011231124->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph011231124->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph011231124->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph011231124->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph011231124->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph011231124->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph011231124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph011231124);
   
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
