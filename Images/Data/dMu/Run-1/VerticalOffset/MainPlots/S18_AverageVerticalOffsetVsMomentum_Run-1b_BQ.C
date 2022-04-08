void S18_AverageVerticalOffsetVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:35:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-2,3125,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1154[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1154[9] = {
   0.6163886,
   0.2556176,
   -0.3686613,
   -0.3566881,
   -0.2089101,
   -0.07082611,
   -0.009881045,
   0.0009326544,
   0.05195345};
   Double_t Graph0_fex1154[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1154[9] = {
   0.05244603,
   0.02736781,
   0.02100873,
   0.01850808,
   0.01785895,
   0.0185608,
   0.01991591,
   0.02184897,
   0.02469595};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1154,Graph0_fy1154,Graph0_fex1154,Graph0_fey1154);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01154 = new TH1F("Graph_Graph01154","S18",100,425,2825);
   Graph_Graph01154->SetMinimum(-1.5);
   Graph_Graph01154->SetMaximum(2.5);
   Graph_Graph01154->SetDirectory(0);
   Graph_Graph01154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01154->SetLineColor(ci);
   Graph_Graph01154->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01154->GetXaxis()->CenterTitle(true);
   Graph_Graph01154->GetXaxis()->SetLabelFont(42);
   Graph_Graph01154->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01154->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01154->GetXaxis()->SetTitleFont(42);
   Graph_Graph01154->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01154->GetYaxis()->CenterTitle(true);
   Graph_Graph01154->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01154->GetYaxis()->SetLabelFont(42);
   Graph_Graph01154->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01154->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01154->GetYaxis()->SetTitleFont(42);
   Graph_Graph01154->GetZaxis()->SetLabelFont(42);
   Graph_Graph01154->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01154->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01154);
   
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
   
   Double_t Graph0_fx1155[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1155[9] = {
   0.6163886,
   0.2556176,
   -0.3686613,
   -0.3566881,
   -0.2089101,
   -0.07082611,
   -0.009881045,
   0.0009326544,
   0.05195345};
   Double_t Graph0_fex1155[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1155[9] = {
   0.05244603,
   0.02736781,
   0.02100873,
   0.01850808,
   0.01785895,
   0.0185608,
   0.01991591,
   0.02184897,
   0.02469595};
   gre = new TGraphErrors(9,Graph0_fx1155,Graph0_fy1155,Graph0_fex1155,Graph0_fey1155);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph011541155 = new TH1F("Graph_Graph_Graph011541155","S18",100,425,2825);
   Graph_Graph_Graph011541155->SetMinimum(-1.5);
   Graph_Graph_Graph011541155->SetMaximum(2.5);
   Graph_Graph_Graph011541155->SetDirectory(0);
   Graph_Graph_Graph011541155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph011541155->SetLineColor(ci);
   Graph_Graph_Graph011541155->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph011541155->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph011541155->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph011541155->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph011541155->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph011541155->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph011541155->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph011541155->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph011541155->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph011541155->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph011541155->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph011541155->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph011541155->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph011541155->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph011541155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph011541155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph011541155);
   
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
