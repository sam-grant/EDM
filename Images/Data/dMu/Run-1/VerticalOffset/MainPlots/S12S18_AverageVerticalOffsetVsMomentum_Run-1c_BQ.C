void S12S18_AverageVerticalOffsetVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:35:20 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-2,3125,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1278[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1278[9] = {
   0.6124276,
   0.137425,
   -0.4747215,
   -0.4980413,
   -0.1876817,
   -0.06921778,
   -0.04532864,
   0.01980676,
   0.08823569};
   Double_t Graph0_fex1278[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1278[9] = {
   0.0413232,
   0.02122571,
   0.01620867,
   0.01421232,
   0.01370538,
   0.01409499,
   0.01499803,
   0.01653706,
   0.01894623};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1278,Graph0_fy1278,Graph0_fex1278,Graph0_fey1278);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01278 = new TH1F("Graph_Graph01278","S12S18",100,425,2825);
   Graph_Graph01278->SetMinimum(-1.5);
   Graph_Graph01278->SetMaximum(2.5);
   Graph_Graph01278->SetDirectory(0);
   Graph_Graph01278->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01278->SetLineColor(ci);
   Graph_Graph01278->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01278->GetXaxis()->CenterTitle(true);
   Graph_Graph01278->GetXaxis()->SetLabelFont(42);
   Graph_Graph01278->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01278->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01278->GetXaxis()->SetTitleFont(42);
   Graph_Graph01278->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01278->GetYaxis()->CenterTitle(true);
   Graph_Graph01278->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01278->GetYaxis()->SetLabelFont(42);
   Graph_Graph01278->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01278->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01278->GetYaxis()->SetTitleFont(42);
   Graph_Graph01278->GetZaxis()->SetLabelFont(42);
   Graph_Graph01278->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01278->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01278);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   TLine *line = new TLine(425,0,2825,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1279[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1279[9] = {
   0.6124276,
   0.137425,
   -0.4747215,
   -0.4980413,
   -0.1876817,
   -0.06921778,
   -0.04532864,
   0.01980676,
   0.08823569};
   Double_t Graph0_fex1279[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1279[9] = {
   0.0413232,
   0.02122571,
   0.01620867,
   0.01421232,
   0.01370538,
   0.01409499,
   0.01499803,
   0.01653706,
   0.01894623};
   gre = new TGraphErrors(9,Graph0_fx1279,Graph0_fy1279,Graph0_fex1279,Graph0_fey1279);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph012781279 = new TH1F("Graph_Graph_Graph012781279","S12S18",100,425,2825);
   Graph_Graph_Graph012781279->SetMinimum(-1.5);
   Graph_Graph_Graph012781279->SetMaximum(2.5);
   Graph_Graph_Graph012781279->SetDirectory(0);
   Graph_Graph_Graph012781279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph012781279->SetLineColor(ci);
   Graph_Graph_Graph012781279->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph012781279->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph012781279->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph012781279->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph012781279->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph012781279->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph012781279->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph012781279->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph012781279->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph012781279->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph012781279->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph012781279->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph012781279->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph012781279->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph012781279->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph012781279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph012781279);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1c","lpf");
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
