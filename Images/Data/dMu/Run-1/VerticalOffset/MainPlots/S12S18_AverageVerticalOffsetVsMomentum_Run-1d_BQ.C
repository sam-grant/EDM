void S12S18_AverageVerticalOffsetVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:35:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-2,3125,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1371[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1371[9] = {
   0.2716496,
   -0.1219547,
   -0.6774683,
   -0.6470285,
   -0.3099234,
   -0.1421885,
   -0.1084002,
   -0.05654847,
   0.07708884};
   Double_t Graph0_fex1371[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1371[9] = {
   0.03038912,
   0.01564188,
   0.0119908,
   0.01051451,
   0.01014063,
   0.01047052,
   0.0111454,
   0.01229309,
   0.01405173};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1371,Graph0_fy1371,Graph0_fex1371,Graph0_fey1371);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01371 = new TH1F("Graph_Graph01371","S12S18",100,425,2825);
   Graph_Graph01371->SetMinimum(-1.5);
   Graph_Graph01371->SetMaximum(2.5);
   Graph_Graph01371->SetDirectory(0);
   Graph_Graph01371->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01371->SetLineColor(ci);
   Graph_Graph01371->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01371->GetXaxis()->CenterTitle(true);
   Graph_Graph01371->GetXaxis()->SetLabelFont(42);
   Graph_Graph01371->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01371->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01371->GetXaxis()->SetTitleFont(42);
   Graph_Graph01371->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01371->GetYaxis()->CenterTitle(true);
   Graph_Graph01371->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01371->GetYaxis()->SetLabelFont(42);
   Graph_Graph01371->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01371->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01371->GetYaxis()->SetTitleFont(42);
   Graph_Graph01371->GetZaxis()->SetLabelFont(42);
   Graph_Graph01371->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01371->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01371);
   
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
   
   Double_t Graph0_fx1372[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1372[9] = {
   0.2716496,
   -0.1219547,
   -0.6774683,
   -0.6470285,
   -0.3099234,
   -0.1421885,
   -0.1084002,
   -0.05654847,
   0.07708884};
   Double_t Graph0_fex1372[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1372[9] = {
   0.03038912,
   0.01564188,
   0.0119908,
   0.01051451,
   0.01014063,
   0.01047052,
   0.0111454,
   0.01229309,
   0.01405173};
   gre = new TGraphErrors(9,Graph0_fx1372,Graph0_fy1372,Graph0_fex1372,Graph0_fey1372);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph013711372 = new TH1F("Graph_Graph_Graph013711372","S12S18",100,425,2825);
   Graph_Graph_Graph013711372->SetMinimum(-1.5);
   Graph_Graph_Graph013711372->SetMaximum(2.5);
   Graph_Graph_Graph013711372->SetDirectory(0);
   Graph_Graph_Graph013711372->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph013711372->SetLineColor(ci);
   Graph_Graph_Graph013711372->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph013711372->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph013711372->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph013711372->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph013711372->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph013711372->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph013711372->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph013711372->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph013711372->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph013711372->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph013711372->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph013711372->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph013711372->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph013711372->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph013711372->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph013711372->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph013711372);
   
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
