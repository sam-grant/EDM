void S18_AverageVerticalOffsetVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:35:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-2,3125,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1061[9] = {
   0.7594506,
   0.2218674,
   -0.5054562,
   -0.4278169,
   -0.2096653,
   -0.08179908,
   -0.004145025,
   -0.04413198,
   -0.02933107};
   Double_t Graph0_fex1061[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1061[9] = {
   0.06995651,
   0.0365529,
   0.02801744,
   0.02464511,
   0.02382969,
   0.02465138,
   0.02647902,
   0.02898175,
   0.03256678};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S18",100,425,2825);
   Graph_Graph01061->SetMinimum(-1.5);
   Graph_Graph01061->SetMaximum(2.5);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   TLine *line = new TLine(425,0,2825,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1062[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1062[9] = {
   0.7594506,
   0.2218674,
   -0.5054562,
   -0.4278169,
   -0.2096653,
   -0.08179908,
   -0.004145025,
   -0.04413198,
   -0.02933107};
   Double_t Graph0_fex1062[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1062[9] = {
   0.06995651,
   0.0365529,
   0.02801744,
   0.02464511,
   0.02382969,
   0.02465138,
   0.02647902,
   0.02898175,
   0.03256678};
   gre = new TGraphErrors(9,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010611062 = new TH1F("Graph_Graph_Graph010611062","S18",100,425,2825);
   Graph_Graph_Graph010611062->SetMinimum(-1.5);
   Graph_Graph_Graph010611062->SetMaximum(2.5);
   Graph_Graph_Graph010611062->SetDirectory(0);
   Graph_Graph_Graph010611062->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010611062->SetLineColor(ci);
   Graph_Graph_Graph010611062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010611062->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010611062->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010611062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010611062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010611062->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010611062->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010611062->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010611062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010611062->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010611062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010611062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010611062->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010611062->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010611062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010611062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010611062);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1a","lpf");
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
