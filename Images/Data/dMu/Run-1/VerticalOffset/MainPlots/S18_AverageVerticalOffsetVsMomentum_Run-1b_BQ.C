void S18_AverageVerticalOffsetVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 11:36:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1034[18] = {
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
   Double_t Graph0_fy1034[18] = {
   2.473696,
   -0.1835108,
   0.1057151,
   0.3858991,
   -0.3917645,
   -0.3611912,
   -0.4192955,
   -0.2896726,
   -0.2710457,
   -0.1444993,
   -0.09331304,
   -0.01745167,
   -0.02788192,
   -0.007100517,
   0.04457176,
   -0.07889415,
   0.08585931,
   0.08367985};
   Double_t Graph0_fex1034[18] = {
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
   Double_t Graph0_fey1034[18] = {
   0.1051012,
   0.06427141,
   0.04506125,
   0.03732503,
   0.03292591,
   0.02980219,
   0.02820466,
   0.02691516,
   0.02687931,
   0.0261985,
   0.02732141,
   0.02785127,
   0.02937772,
   0.02988866,
   0.03122829,
   0.03386205,
   0.03542137,
   0.0380393};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01034 = new TH1F("Graph_Graph01034","S18",100,349.5,2899.5);
   Graph_Graph01034->SetMinimum(-1.5);
   Graph_Graph01034->SetMaximum(2.5);
   Graph_Graph01034->SetDirectory(0);
   Graph_Graph01034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01034->SetLineColor(ci);
   Graph_Graph01034->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01034->GetXaxis()->CenterTitle(true);
   Graph_Graph01034->GetXaxis()->SetLabelFont(42);
   Graph_Graph01034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01034->GetXaxis()->SetTitleFont(42);
   Graph_Graph01034->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01034->GetYaxis()->CenterTitle(true);
   Graph_Graph01034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01034->GetYaxis()->SetLabelFont(42);
   Graph_Graph01034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01034->GetYaxis()->SetTitleFont(42);
   Graph_Graph01034->GetZaxis()->SetLabelFont(42);
   Graph_Graph01034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01034);
   
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
   
   Double_t Graph0_fx1035[18] = {
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
   Double_t Graph0_fy1035[18] = {
   2.473696,
   -0.1835108,
   0.1057151,
   0.3858991,
   -0.3917645,
   -0.3611912,
   -0.4192955,
   -0.2896726,
   -0.2710457,
   -0.1444993,
   -0.09331304,
   -0.01745167,
   -0.02788192,
   -0.007100517,
   0.04457176,
   -0.07889415,
   0.08585931,
   0.08367985};
   Double_t Graph0_fex1035[18] = {
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
   Double_t Graph0_fey1035[18] = {
   0.1051012,
   0.06427141,
   0.04506125,
   0.03732503,
   0.03292591,
   0.02980219,
   0.02820466,
   0.02691516,
   0.02687931,
   0.0261985,
   0.02732141,
   0.02785127,
   0.02937772,
   0.02988866,
   0.03122829,
   0.03386205,
   0.03542137,
   0.0380393};
   gre = new TGraphErrors(18,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010341035 = new TH1F("Graph_Graph_Graph010341035","S18",100,349.5,2899.5);
   Graph_Graph_Graph010341035->SetMinimum(-1.5);
   Graph_Graph_Graph010341035->SetMaximum(2.5);
   Graph_Graph_Graph010341035->SetDirectory(0);
   Graph_Graph_Graph010341035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010341035->SetLineColor(ci);
   Graph_Graph_Graph010341035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010341035->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010341035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010341035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010341035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010341035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010341035->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010341035->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010341035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010341035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010341035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010341035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010341035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010341035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010341035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010341035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010341035);
   
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
