void S18_AverageVerticalOffsetVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 17:23:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[18] = {
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
   Double_t Graph0_fy1013[18] = {
   2.400481,
   -0.07982104,
   0.05788738,
   0.3616322,
   -0.4359268,
   -0.5343552,
   -0.4443485,
   -0.3936604,
   -0.2773956,
   -0.1665624,
   -0.07397537,
   -0.06362578,
   -0.06133121,
   0.0315071,
   0.01331261,
   -0.07739666,
   0.03697277,
   -0.0004889291};
   Double_t Graph0_fex1013[18] = {
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
   Double_t Graph0_fey1013[18] = {
   0.141198,
   0.08642217,
   0.06066302,
   0.0500557,
   0.04417749,
   0.03994568,
   0.0378003,
   0.03600577,
   0.0360626,
   0.03512457,
   0.03660236,
   0.03716564,
   0.0392143,
   0.04000217,
   0.04182379,
   0.04534252,
   0.04726657,
   0.05093415};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","S18",100,349.5,2899.5);
   Graph_Graph01013->SetMinimum(-1.5);
   Graph_Graph01013->SetMaximum(2.5);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
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
   
   Double_t Graph0_fx1014[18] = {
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
   Double_t Graph0_fy1014[18] = {
   2.400481,
   -0.07982104,
   0.05788738,
   0.3616322,
   -0.4359268,
   -0.5343552,
   -0.4443485,
   -0.3936604,
   -0.2773956,
   -0.1665624,
   -0.07397537,
   -0.06362578,
   -0.06133121,
   0.0315071,
   0.01331261,
   -0.07739666,
   0.03697277,
   -0.0004889291};
   Double_t Graph0_fex1014[18] = {
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
   Double_t Graph0_fey1014[18] = {
   0.141198,
   0.08642217,
   0.06066302,
   0.0500557,
   0.04417749,
   0.03994568,
   0.0378003,
   0.03600577,
   0.0360626,
   0.03512457,
   0.03660236,
   0.03716564,
   0.0392143,
   0.04000217,
   0.04182379,
   0.04534252,
   0.04726657,
   0.05093415};
   gre = new TGraphErrors(18,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010131014 = new TH1F("Graph_Graph_Graph010131014","S18",100,349.5,2899.5);
   Graph_Graph_Graph010131014->SetMinimum(-1.5);
   Graph_Graph_Graph010131014->SetMaximum(2.5);
   Graph_Graph_Graph010131014->SetDirectory(0);
   Graph_Graph_Graph010131014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010131014->SetLineColor(ci);
   Graph_Graph_Graph010131014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010131014->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010131014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010131014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010131014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010131014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010131014->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010131014->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010131014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010131014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010131014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010131014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010131014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010131014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010131014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010131014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010131014);
   
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
