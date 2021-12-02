void S18_AverageVerticalOffsetVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 22:33:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1076[18] = {
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
   Double_t Graph0_fy1076[18] = {
   1.88117,
   -0.5908218,
   -0.4149722,
   -0.0686643,
   -0.8139236,
   -0.6820648,
   -0.7311004,
   -0.5984364,
   -0.4487169,
   -0.3195884,
   -0.2558577,
   -0.1683939,
   -0.1853535,
   -0.1702954,
   -0.1326147,
   -0.120392,
   -0.04815618,
   -0.03467829};
   Double_t Graph0_fex1076[18] = {
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
   Double_t Graph0_fey1076[18] = {
   0.08614299,
   0.05316338,
   0.0372779,
   0.0308208,
   0.02718551,
   0.02462816,
   0.02338922,
   0.02229648,
   0.02238371,
   0.02181334,
   0.02292583,
   0.0232075,
   0.02453754,
   0.02501679,
   0.02636826,
   0.02853638,
   0.02989707,
   0.03234306};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1076,Graph0_fy1076,Graph0_fex1076,Graph0_fey1076);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01076 = new TH1F("Graph_Graph01076","S18",100,349.5,2899.5);
   Graph_Graph01076->SetMinimum(-1.5);
   Graph_Graph01076->SetMaximum(2.5);
   Graph_Graph01076->SetDirectory(0);
   Graph_Graph01076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01076->SetLineColor(ci);
   Graph_Graph01076->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01076->GetXaxis()->CenterTitle(true);
   Graph_Graph01076->GetXaxis()->SetLabelFont(42);
   Graph_Graph01076->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01076->GetXaxis()->SetTitleFont(42);
   Graph_Graph01076->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01076->GetYaxis()->CenterTitle(true);
   Graph_Graph01076->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01076->GetYaxis()->SetLabelFont(42);
   Graph_Graph01076->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01076->GetYaxis()->SetTitleFont(42);
   Graph_Graph01076->GetZaxis()->SetLabelFont(42);
   Graph_Graph01076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01076);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1077[18] = {
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
   Double_t Graph0_fy1077[18] = {
   1.88117,
   -0.5908218,
   -0.4149722,
   -0.0686643,
   -0.8139236,
   -0.6820648,
   -0.7311004,
   -0.5984364,
   -0.4487169,
   -0.3195884,
   -0.2558577,
   -0.1683939,
   -0.1853535,
   -0.1702954,
   -0.1326147,
   -0.120392,
   -0.04815618,
   -0.03467829};
   Double_t Graph0_fex1077[18] = {
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
   Double_t Graph0_fey1077[18] = {
   0.08614299,
   0.05316338,
   0.0372779,
   0.0308208,
   0.02718551,
   0.02462816,
   0.02338922,
   0.02229648,
   0.02238371,
   0.02181334,
   0.02292583,
   0.0232075,
   0.02453754,
   0.02501679,
   0.02636826,
   0.02853638,
   0.02989707,
   0.03234306};
   gre = new TGraphErrors(18,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010761077 = new TH1F("Graph_Graph_Graph010761077","S18",100,349.5,2899.5);
   Graph_Graph_Graph010761077->SetMinimum(-1.5);
   Graph_Graph_Graph010761077->SetMaximum(2.5);
   Graph_Graph_Graph010761077->SetDirectory(0);
   Graph_Graph_Graph010761077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010761077->SetLineColor(ci);
   Graph_Graph_Graph010761077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010761077->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010761077->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010761077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010761077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010761077->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010761077->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010761077->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010761077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010761077->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010761077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010761077->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010761077->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010761077->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010761077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010761077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010761077);
   
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
