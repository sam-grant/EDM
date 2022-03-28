void S18_AverageVerticalOffsetVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:10:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1626[18] = {
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
   Double_t Graph0_fy1626[18] = {
   1.927432,
   -0.5711939,
   -0.3922313,
   -0.04221432,
   -0.7950979,
   -0.6846529,
   -0.7342327,
   -0.5869999,
   -0.4323205,
   -0.3155334,
   -0.266477,
   -0.1541802,
   -0.1489293,
   -0.1746512,
   -0.1345046,
   -0.2231186,
   -0.04429267,
   0.02700009};
   Double_t Graph0_fex1626[18] = {
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
   Double_t Graph0_fey1626[18] = {
   0.08051374,
   0.04975515,
   0.03486309,
   0.02882341,
   0.02542031,
   0.02302889,
   0.02186929,
   0.02085262,
   0.02093849,
   0.02039589,
   0.02142253,
   0.02170749,
   0.02288325,
   0.02338062,
   0.02460299,
   0.02650435,
   0.02786635,
   0.0300786};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1626,Graph0_fy1626,Graph0_fex1626,Graph0_fey1626);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01626 = new TH1F("Graph_Graph01626","S18",100,349.5,2899.5);
   Graph_Graph01626->SetMinimum(-1.5);
   Graph_Graph01626->SetMaximum(2.5);
   Graph_Graph01626->SetDirectory(0);
   Graph_Graph01626->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01626->SetLineColor(ci);
   Graph_Graph01626->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01626->GetXaxis()->CenterTitle(true);
   Graph_Graph01626->GetXaxis()->SetLabelFont(42);
   Graph_Graph01626->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01626->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01626->GetXaxis()->SetTitleFont(42);
   Graph_Graph01626->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01626->GetYaxis()->CenterTitle(true);
   Graph_Graph01626->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01626->GetYaxis()->SetLabelFont(42);
   Graph_Graph01626->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01626->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01626->GetYaxis()->SetTitleFont(42);
   Graph_Graph01626->GetZaxis()->SetLabelFont(42);
   Graph_Graph01626->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01626->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01626);
   
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
   
   Double_t Graph0_fx1627[18] = {
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
   Double_t Graph0_fy1627[18] = {
   1.927432,
   -0.5711939,
   -0.3922313,
   -0.04221432,
   -0.7950979,
   -0.6846529,
   -0.7342327,
   -0.5869999,
   -0.4323205,
   -0.3155334,
   -0.266477,
   -0.1541802,
   -0.1489293,
   -0.1746512,
   -0.1345046,
   -0.2231186,
   -0.04429267,
   0.02700009};
   Double_t Graph0_fex1627[18] = {
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
   Double_t Graph0_fey1627[18] = {
   0.08051374,
   0.04975515,
   0.03486309,
   0.02882341,
   0.02542031,
   0.02302889,
   0.02186929,
   0.02085262,
   0.02093849,
   0.02039589,
   0.02142253,
   0.02170749,
   0.02288325,
   0.02338062,
   0.02460299,
   0.02650435,
   0.02786635,
   0.0300786};
   gre = new TGraphErrors(18,Graph0_fx1627,Graph0_fy1627,Graph0_fex1627,Graph0_fey1627);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph016261627 = new TH1F("Graph_Graph_Graph016261627","S18",100,349.5,2899.5);
   Graph_Graph_Graph016261627->SetMinimum(-1.5);
   Graph_Graph_Graph016261627->SetMaximum(2.5);
   Graph_Graph_Graph016261627->SetDirectory(0);
   Graph_Graph_Graph016261627->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph016261627->SetLineColor(ci);
   Graph_Graph_Graph016261627->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph016261627->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph016261627->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph016261627->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph016261627->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph016261627->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph016261627->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph016261627->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph016261627->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph016261627->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph016261627->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph016261627->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph016261627->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph016261627->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph016261627->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph016261627->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph016261627);
   
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
