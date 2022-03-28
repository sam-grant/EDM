void S12S18_AverageVerticalOffsetVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:09:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1512[18] = {
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
   Double_t Graph0_fy1512[18] = {
   2.283663,
   -0.184328,
   -0.03919372,
   0.2793222,
   -0.4937756,
   -0.4568915,
   -0.5530272,
   -0.4408416,
   -0.2231264,
   -0.1478128,
   -0.1024748,
   -0.01317336,
   -0.06587222,
   -0.02703992,
   0.009102929,
   -0.01182496,
   0.02795259,
   0.1647513};
   Double_t Graph0_fex1512[18] = {
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
   Double_t Graph0_fey1512[18] = {
   0.07882035,
   0.04792207,
   0.0332908,
   0.02737737,
   0.02408638,
   0.02180537,
   0.02059156,
   0.0195468,
   0.01961339,
   0.01899784,
   0.01975334,
   0.01993053,
   0.02091036,
   0.02133208,
   0.02231382,
   0.02419957,
   0.02539436,
   0.02786417};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1512,Graph0_fy1512,Graph0_fex1512,Graph0_fey1512);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01512 = new TH1F("Graph_Graph01512","S12S18",100,349.5,2899.5);
   Graph_Graph01512->SetMinimum(-1.5);
   Graph_Graph01512->SetMaximum(2.5);
   Graph_Graph01512->SetDirectory(0);
   Graph_Graph01512->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01512->SetLineColor(ci);
   Graph_Graph01512->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01512->GetXaxis()->CenterTitle(true);
   Graph_Graph01512->GetXaxis()->SetLabelFont(42);
   Graph_Graph01512->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01512->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01512->GetXaxis()->SetTitleFont(42);
   Graph_Graph01512->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01512->GetYaxis()->CenterTitle(true);
   Graph_Graph01512->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01512->GetYaxis()->SetLabelFont(42);
   Graph_Graph01512->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01512->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01512->GetYaxis()->SetTitleFont(42);
   Graph_Graph01512->GetZaxis()->SetLabelFont(42);
   Graph_Graph01512->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01512->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01512);
   
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
   
   Double_t Graph0_fx1513[18] = {
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
   Double_t Graph0_fy1513[18] = {
   2.283663,
   -0.184328,
   -0.03919372,
   0.2793222,
   -0.4937756,
   -0.4568915,
   -0.5530272,
   -0.4408416,
   -0.2231264,
   -0.1478128,
   -0.1024748,
   -0.01317336,
   -0.06587222,
   -0.02703992,
   0.009102929,
   -0.01182496,
   0.02795259,
   0.1647513};
   Double_t Graph0_fex1513[18] = {
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
   Double_t Graph0_fey1513[18] = {
   0.07882035,
   0.04792207,
   0.0332908,
   0.02737737,
   0.02408638,
   0.02180537,
   0.02059156,
   0.0195468,
   0.01961339,
   0.01899784,
   0.01975334,
   0.01993053,
   0.02091036,
   0.02133208,
   0.02231382,
   0.02419957,
   0.02539436,
   0.02786417};
   gre = new TGraphErrors(18,Graph0_fx1513,Graph0_fy1513,Graph0_fex1513,Graph0_fey1513);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph015121513 = new TH1F("Graph_Graph_Graph015121513","S12S18",100,349.5,2899.5);
   Graph_Graph_Graph015121513->SetMinimum(-1.5);
   Graph_Graph_Graph015121513->SetMaximum(2.5);
   Graph_Graph_Graph015121513->SetDirectory(0);
   Graph_Graph_Graph015121513->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph015121513->SetLineColor(ci);
   Graph_Graph_Graph015121513->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph015121513->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph015121513->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph015121513->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph015121513->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph015121513->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph015121513->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph015121513->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph015121513->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph015121513->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph015121513->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph015121513->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph015121513->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph015121513->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph015121513->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph015121513->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph015121513);
   
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
