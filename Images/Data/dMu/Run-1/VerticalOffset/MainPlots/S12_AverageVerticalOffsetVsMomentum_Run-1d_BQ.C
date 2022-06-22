void S12_AverageVerticalOffsetVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 19:00:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-2,3125,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1216[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1216[9] = {
   0.2719851,
   -0.06056539,
   -0.6277992,
   -0.6433578,
   -0.2577652,
   -0.08508077,
   -0.05613087,
   -0.006687415,
   0.1555378};
   Double_t Graph0_fex1216[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1216[9] = {
   0.0423229,
   0.02148298,
   0.01644734,
   0.01431138,
   0.01372965,
   0.01404224,
   0.01482817,
   0.01629055,
   0.01871529};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1216,Graph0_fy1216,Graph0_fex1216,Graph0_fey1216);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01216 = new TH1F("Graph_Graph01216","S12",100,425,2825);
   Graph_Graph01216->SetMinimum(-1.5);
   Graph_Graph01216->SetMaximum(2.5);
   Graph_Graph01216->SetDirectory(0);
   Graph_Graph01216->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01216->SetLineColor(ci);
   Graph_Graph01216->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01216->GetXaxis()->CenterTitle(true);
   Graph_Graph01216->GetXaxis()->SetLabelFont(42);
   Graph_Graph01216->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01216->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01216->GetXaxis()->SetTitleFont(42);
   Graph_Graph01216->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01216->GetYaxis()->CenterTitle(true);
   Graph_Graph01216->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01216->GetYaxis()->SetLabelFont(42);
   Graph_Graph01216->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01216->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01216->GetYaxis()->SetTitleFont(42);
   Graph_Graph01216->GetZaxis()->SetLabelFont(42);
   Graph_Graph01216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01216->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01216);
   
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
   
   Double_t Graph0_fx1217[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1217[9] = {
   0.2719851,
   -0.06056539,
   -0.6277992,
   -0.6433578,
   -0.2577652,
   -0.08508077,
   -0.05613087,
   -0.006687415,
   0.1555378};
   Double_t Graph0_fex1217[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1217[9] = {
   0.0423229,
   0.02148298,
   0.01644734,
   0.01431138,
   0.01372965,
   0.01404224,
   0.01482817,
   0.01629055,
   0.01871529};
   gre = new TGraphErrors(9,Graph0_fx1217,Graph0_fy1217,Graph0_fex1217,Graph0_fey1217);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph012161217 = new TH1F("Graph_Graph_Graph012161217","S12",100,425,2825);
   Graph_Graph_Graph012161217->SetMinimum(-1.5);
   Graph_Graph_Graph012161217->SetMaximum(2.5);
   Graph_Graph_Graph012161217->SetDirectory(0);
   Graph_Graph_Graph012161217->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph012161217->SetLineColor(ci);
   Graph_Graph_Graph012161217->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph012161217->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph012161217->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph012161217->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph012161217->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph012161217->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph012161217->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph012161217->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph012161217->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph012161217->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph012161217->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph012161217->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph012161217->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph012161217->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph012161217->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph012161217->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph012161217);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1d","lpf");
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
