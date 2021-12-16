void S12S18_AverageVerticalOffsetVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 11:36:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1062[18] = {
   2.20653,
   -0.2099251,
   -0.05253261,
   0.2745755,
   -0.4990559,
   -0.4705366,
   -0.5579709,
   -0.4472516,
   -0.2211037,
   -0.1530305,
   -0.1055478,
   -0.03122295,
   -0.06275168,
   -0.02729153,
   0.04377813,
   -0.001304415,
   0.05443472,
   0.1587099};
   Double_t Graph0_fex1062[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1062[18] = {
   0.08433809,
   0.05121364,
   0.0355682,
   0.02925885,
   0.02572792,
   0.02331086,
   0.02200587,
   0.02089652,
   0.02096808,
   0.02030961,
   0.0211026,
   0.0213356,
   0.02235096,
   0.02283924,
   0.02389562,
   0.02588418,
   0.02724604,
   0.02988005};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S12S18",100,349.5,2899.5);
   Graph_Graph01062->SetMinimum(-1.5);
   Graph_Graph01062->SetMaximum(2.5);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1063[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1063[18] = {
   2.20653,
   -0.2099251,
   -0.05253261,
   0.2745755,
   -0.4990559,
   -0.4705366,
   -0.5579709,
   -0.4472516,
   -0.2211037,
   -0.1530305,
   -0.1055478,
   -0.03122295,
   -0.06275168,
   -0.02729153,
   0.04377813,
   -0.001304415,
   0.05443472,
   0.1587099};
   Double_t Graph0_fex1063[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1063[18] = {
   0.08433809,
   0.05121364,
   0.0355682,
   0.02925885,
   0.02572792,
   0.02331086,
   0.02200587,
   0.02089652,
   0.02096808,
   0.02030961,
   0.0211026,
   0.0213356,
   0.02235096,
   0.02283924,
   0.02389562,
   0.02588418,
   0.02724604,
   0.02988005};
   gre = new TGraphErrors(18,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010621063 = new TH1F("Graph_Graph_Graph010621063","S12S18",100,349.5,2899.5);
   Graph_Graph_Graph010621063->SetMinimum(-1.5);
   Graph_Graph_Graph010621063->SetMaximum(2.5);
   Graph_Graph_Graph010621063->SetDirectory(0);
   Graph_Graph_Graph010621063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010621063->SetLineColor(ci);
   Graph_Graph_Graph010621063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010621063->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010621063->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010621063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010621063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010621063->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010621063->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010621063->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010621063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010621063->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010621063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010621063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010621063->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010621063->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010621063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010621063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010621063);
   
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
