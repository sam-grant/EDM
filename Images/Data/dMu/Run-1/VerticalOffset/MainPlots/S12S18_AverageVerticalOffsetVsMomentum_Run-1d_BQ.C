void S12S18_AverageVerticalOffsetVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1083[18] = {
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
   Double_t Graph0_fy1083[18] = {
   1.926517,
   -0.5265555,
   -0.3127749,
   0.03258862,
   -0.7080592,
   -0.6482345,
   -0.7042742,
   -0.587655,
   -0.3805892,
   -0.2297906,
   -0.1879283,
   -0.08698571,
   -0.1245881,
   -0.07756483,
   -0.05415543,
   -0.05859552,
   0.04640507,
   0.1203225};
   Double_t Graph0_fex1083[18] = {
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
   Double_t Graph0_fey1083[18] = {
   0.05799863,
   0.03524749,
   0.02450731,
   0.02019582,
   0.01782165,
   0.0161314,
   0.01523731,
   0.01445982,
   0.01450231,
   0.01407093,
   0.01467286,
   0.01482808,
   0.01556944,
   0.01581312,
   0.01664816,
   0.01796273,
   0.0190156,
   0.0204447};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1083,Graph0_fy1083,Graph0_fex1083,Graph0_fey1083);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01083 = new TH1F("Graph_Graph01083","S12S18",100,349.5,2899.5);
   Graph_Graph01083->SetMinimum(-1.5);
   Graph_Graph01083->SetMaximum(2.5);
   Graph_Graph01083->SetDirectory(0);
   Graph_Graph01083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01083->SetLineColor(ci);
   Graph_Graph01083->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01083->GetXaxis()->CenterTitle(true);
   Graph_Graph01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph01083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph01083->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01083->GetYaxis()->CenterTitle(true);
   Graph_Graph01083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph01083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph01083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01083);
   
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
   
   Double_t Graph0_fx1084[18] = {
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
   Double_t Graph0_fy1084[18] = {
   1.926517,
   -0.5265555,
   -0.3127749,
   0.03258862,
   -0.7080592,
   -0.6482345,
   -0.7042742,
   -0.587655,
   -0.3805892,
   -0.2297906,
   -0.1879283,
   -0.08698571,
   -0.1245881,
   -0.07756483,
   -0.05415543,
   -0.05859552,
   0.04640507,
   0.1203225};
   Double_t Graph0_fex1084[18] = {
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
   Double_t Graph0_fey1084[18] = {
   0.05799863,
   0.03524749,
   0.02450731,
   0.02019582,
   0.01782165,
   0.0161314,
   0.01523731,
   0.01445982,
   0.01450231,
   0.01407093,
   0.01467286,
   0.01482808,
   0.01556944,
   0.01581312,
   0.01664816,
   0.01796273,
   0.0190156,
   0.0204447};
   gre = new TGraphErrors(18,Graph0_fx1084,Graph0_fy1084,Graph0_fex1084,Graph0_fey1084);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010831084 = new TH1F("Graph_Graph_Graph010831084","S12S18",100,349.5,2899.5);
   Graph_Graph_Graph010831084->SetMinimum(-1.5);
   Graph_Graph_Graph010831084->SetMaximum(2.5);
   Graph_Graph_Graph010831084->SetDirectory(0);
   Graph_Graph_Graph010831084->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010831084->SetLineColor(ci);
   Graph_Graph_Graph010831084->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010831084->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010831084->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010831084->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010831084->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010831084->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010831084->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010831084->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010831084->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010831084->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010831084->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010831084->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010831084->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010831084->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010831084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010831084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010831084);
   
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
