void S12S18_AverageVerticalOffsetVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1020[18] = {
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
   Double_t Graph0_fy1020[18] = {
   2.650741,
   -0.01436921,
   0.1302647,
   0.4536404,
   -0.3478045,
   -0.4247463,
   -0.4703395,
   -0.4043872,
   -0.2285142,
   -0.119928,
   0.09877464,
   -0.01157995,
   -0.0404038,
   0.0302048,
   0.04717342,
   0.01061073,
   0.06148438,
   0.06172171};
   Double_t Graph0_fex1020[18] = {
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
   Double_t Graph0_fey1020[18] = {
   0.09646666,
   0.05841805,
   0.04053974,
   0.03334732,
   0.02940684,
   0.02657458,
   0.02500866,
   0.02372308,
   0.02377407,
   0.0230279,
   0.02378506,
   0.02409021,
   0.02522225,
   0.02565539,
   0.02684462,
   0.02896876,
   0.0302724,
   0.03267708};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","S12S18",100,349.5,2899.5);
   Graph_Graph01020->SetMinimum(-1.5);
   Graph_Graph01020->SetMaximum(2.5);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01020->GetXaxis()->CenterTitle(true);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01020->GetYaxis()->CenterTitle(true);
   Graph_Graph01020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
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
   
   Double_t Graph0_fx1021[18] = {
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
   Double_t Graph0_fy1021[18] = {
   2.650741,
   -0.01436921,
   0.1302647,
   0.4536404,
   -0.3478045,
   -0.4247463,
   -0.4703395,
   -0.4043872,
   -0.2285142,
   -0.119928,
   0.09877464,
   -0.01157995,
   -0.0404038,
   0.0302048,
   0.04717342,
   0.01061073,
   0.06148438,
   0.06172171};
   Double_t Graph0_fex1021[18] = {
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
   Double_t Graph0_fey1021[18] = {
   0.09646666,
   0.05841805,
   0.04053974,
   0.03334732,
   0.02940684,
   0.02657458,
   0.02500866,
   0.02372308,
   0.02377407,
   0.0230279,
   0.02378506,
   0.02409021,
   0.02522225,
   0.02565539,
   0.02684462,
   0.02896876,
   0.0302724,
   0.03267708};
   gre = new TGraphErrors(18,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010201021 = new TH1F("Graph_Graph_Graph010201021","S12S18",100,349.5,2899.5);
   Graph_Graph_Graph010201021->SetMinimum(-1.5);
   Graph_Graph_Graph010201021->SetMaximum(2.5);
   Graph_Graph_Graph010201021->SetDirectory(0);
   Graph_Graph_Graph010201021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010201021->SetLineColor(ci);
   Graph_Graph_Graph010201021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010201021->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010201021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010201021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010201021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010201021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010201021->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010201021->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010201021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010201021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010201021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010201021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010201021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010201021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010201021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010201021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010201021);
   
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
