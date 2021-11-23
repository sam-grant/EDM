void S12_AverageVerticalOffsetVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:59:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[18] = {
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
   Double_t Graph0_fy1048[18] = {
   2.245234,
   -0.08048569,
   0.01840957,
   0.3664889,
   -0.3982134,
   -0.4528495,
   -0.5579857,
   -0.4416978,
   -0.170243,
   -0.1071288,
   -0.0515285,
   0.03673976,
   -0.02431894,
   -0.0281972,
   0.07274109,
   0.06973536,
   0.1087016,
   0.2844911};
   Double_t Graph0_fex1048[18] = {
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
   Double_t Graph0_fey1048[18] = {
   0.1219508,
   0.07312555,
   0.05021586,
   0.04113183,
   0.03616595,
   0.03274775,
   0.03077527,
   0.02907949,
   0.02919001,
   0.02810088,
   0.02900906,
   0.02927167,
   0.03051889,
   0.03102491,
   0.03244174,
   0.0351211,
   0.03728277,
   0.04069032};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S12",100,349.5,2899.5);
   Graph_Graph01048->SetMinimum(-1.5);
   Graph_Graph01048->SetMaximum(2.5);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
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
   
   Double_t Graph0_fx1049[18] = {
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
   Double_t Graph0_fy1049[18] = {
   2.245234,
   -0.08048569,
   0.01840957,
   0.3664889,
   -0.3982134,
   -0.4528495,
   -0.5579857,
   -0.4416978,
   -0.170243,
   -0.1071288,
   -0.0515285,
   0.03673976,
   -0.02431894,
   -0.0281972,
   0.07274109,
   0.06973536,
   0.1087016,
   0.2844911};
   Double_t Graph0_fex1049[18] = {
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
   Double_t Graph0_fey1049[18] = {
   0.1219508,
   0.07312555,
   0.05021586,
   0.04113183,
   0.03616595,
   0.03274775,
   0.03077527,
   0.02907949,
   0.02919001,
   0.02810088,
   0.02900906,
   0.02927167,
   0.03051889,
   0.03102491,
   0.03244174,
   0.0351211,
   0.03728277,
   0.04069032};
   gre = new TGraphErrors(18,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010481049 = new TH1F("Graph_Graph_Graph010481049","S12",100,349.5,2899.5);
   Graph_Graph_Graph010481049->SetMinimum(-1.5);
   Graph_Graph_Graph010481049->SetMaximum(2.5);
   Graph_Graph_Graph010481049->SetDirectory(0);
   Graph_Graph_Graph010481049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010481049->SetLineColor(ci);
   Graph_Graph_Graph010481049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010481049->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010481049->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010481049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010481049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010481049->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010481049->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010481049->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010481049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010481049->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010481049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010481049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010481049->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010481049->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010481049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010481049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010481049);
   
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
