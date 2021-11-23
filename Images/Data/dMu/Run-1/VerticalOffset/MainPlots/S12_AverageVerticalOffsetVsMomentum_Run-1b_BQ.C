void S12_AverageVerticalOffsetVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:59:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[18] = {
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
   Double_t Graph0_fy1027[18] = {
   2.552294,
   0.06332006,
   0.2999468,
   0.534695,
   -0.2214462,
   -0.2715653,
   -0.433024,
   -0.3862025,
   -0.1259767,
   -0.06028482,
   0.0331366,
   0.06487418,
   -0.02241094,
   -0.01892772,
   0.04933648,
   0.06411257,
   0.1459245,
   0.1575587};
   Double_t Graph0_fex1027[18] = {
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
   Double_t Graph0_fey1027[18] = {
   0.110457,
   0.06580376,
   0.0452502,
   0.03712995,
   0.03272047,
   0.02951387,
   0.02766739,
   0.0261434,
   0.02615802,
   0.02524928,
   0.02612789,
   0.02625654,
   0.02728929,
   0.02772247,
   0.02894868,
   0.03113962,
   0.03307294,
   0.03561562};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S12",100,349.5,2899.5);
   Graph_Graph01027->SetMinimum(-1.5);
   Graph_Graph01027->SetMaximum(2.5);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1028[18] = {
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
   Double_t Graph0_fy1028[18] = {
   2.552294,
   0.06332006,
   0.2999468,
   0.534695,
   -0.2214462,
   -0.2715653,
   -0.433024,
   -0.3862025,
   -0.1259767,
   -0.06028482,
   0.0331366,
   0.06487418,
   -0.02241094,
   -0.01892772,
   0.04933648,
   0.06411257,
   0.1459245,
   0.1575587};
   Double_t Graph0_fex1028[18] = {
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
   Double_t Graph0_fey1028[18] = {
   0.110457,
   0.06580376,
   0.0452502,
   0.03712995,
   0.03272047,
   0.02951387,
   0.02766739,
   0.0261434,
   0.02615802,
   0.02524928,
   0.02612789,
   0.02625654,
   0.02728929,
   0.02772247,
   0.02894868,
   0.03113962,
   0.03307294,
   0.03561562};
   gre = new TGraphErrors(18,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010271028 = new TH1F("Graph_Graph_Graph010271028","S12",100,349.5,2899.5);
   Graph_Graph_Graph010271028->SetMinimum(-1.5);
   Graph_Graph_Graph010271028->SetMaximum(2.5);
   Graph_Graph_Graph010271028->SetDirectory(0);
   Graph_Graph_Graph010271028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010271028->SetLineColor(ci);
   Graph_Graph_Graph010271028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010271028->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010271028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010271028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010271028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010271028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010271028->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010271028->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010271028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010271028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010271028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010271028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010271028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010271028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010271028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010271028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010271028);
   
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
