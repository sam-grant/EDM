void S12_AverageVerticalOffsetVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:35:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-2,3125,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1030[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1030[9] = {
   1.055479,
   0.4142433,
   -0.2716108,
   -0.4480641,
   -0.147299,
   0.06352767,
   0.004129889,
   0.09382171,
   0.1122903};
   Double_t Graph0_fex1030[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1030[9] = {
   0.07230818,
   0.03659992,
   0.0278867,
   0.02415491,
   0.0231546,
   0.0235023,
   0.02469856,
   0.02693432,
   0.03087351};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01030 = new TH1F("Graph_Graph01030","S12",100,425,2825);
   Graph_Graph01030->SetMinimum(-1.5);
   Graph_Graph01030->SetMaximum(2.5);
   Graph_Graph01030->SetDirectory(0);
   Graph_Graph01030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01030->SetLineColor(ci);
   Graph_Graph01030->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01030->GetXaxis()->CenterTitle(true);
   Graph_Graph01030->GetXaxis()->SetLabelFont(42);
   Graph_Graph01030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01030->GetXaxis()->SetTitleFont(42);
   Graph_Graph01030->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01030->GetYaxis()->CenterTitle(true);
   Graph_Graph01030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01030->GetYaxis()->SetLabelFont(42);
   Graph_Graph01030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01030->GetYaxis()->SetTitleFont(42);
   Graph_Graph01030->GetZaxis()->SetLabelFont(42);
   Graph_Graph01030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01030);
   
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
   
   Double_t Graph0_fx1031[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1031[9] = {
   1.055479,
   0.4142433,
   -0.2716108,
   -0.4480641,
   -0.147299,
   0.06352767,
   0.004129889,
   0.09382171,
   0.1122903};
   Double_t Graph0_fex1031[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1031[9] = {
   0.07230818,
   0.03659992,
   0.0278867,
   0.02415491,
   0.0231546,
   0.0235023,
   0.02469856,
   0.02693432,
   0.03087351};
   gre = new TGraphErrors(9,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010301031 = new TH1F("Graph_Graph_Graph010301031","S12",100,425,2825);
   Graph_Graph_Graph010301031->SetMinimum(-1.5);
   Graph_Graph_Graph010301031->SetMaximum(2.5);
   Graph_Graph_Graph010301031->SetDirectory(0);
   Graph_Graph_Graph010301031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010301031->SetLineColor(ci);
   Graph_Graph_Graph010301031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010301031->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010301031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010301031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010301031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010301031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010301031->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010301031->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010301031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010301031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010301031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010301031->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010301031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010301031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010301031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010301031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010301031);
   
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
