void S12S18_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:09:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-90.54008,3218.25,78.31205);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1509[18] = {
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
   Double_t Graph0_fy1509[18] = {
   -45.26582,
   -41.81811,
   -22.65898,
   -20.49859,
   -19.71582,
   -21.23433,
   -24.88635,
   -22.94485,
   -32.27427,
   -25.49641,
   -23.43935,
   -21.5423,
   -20.94129,
   -22.61305,
   -22.67316,
   -17.50089,
   -17.93431,
   -25.58696};
   Double_t Graph0_fex1509[18] = {
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
   Double_t Graph0_fey1509[18] = {
   13.65807,
   8.267191,
   5.722747,
   4.699383,
   4.127107,
   3.726838,
   3.508756,
   3.325295,
   3.330825,
   3.224529,
   3.34573,
   3.372134,
   3.528523,
   3.596266,
   3.750514,
   4.062405,
   4.280977,
   4.695146};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1509,Graph0_fy1509,Graph0_fex1509,Graph0_fey1509);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01509 = new TH1F("Graph_Graph01509","S12S18",100,349.5,2899.5);
   Graph_Graph01509->SetMinimum(-73.65486);
   Graph_Graph01509->SetMaximum(61.42683);
   Graph_Graph01509->SetDirectory(0);
   Graph_Graph01509->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01509->SetLineColor(ci);
   Graph_Graph01509->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01509->GetXaxis()->CenterTitle(true);
   Graph_Graph01509->GetXaxis()->SetLabelFont(42);
   Graph_Graph01509->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01509->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01509->GetXaxis()->SetTitleFont(42);
   Graph_Graph01509->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01509->GetYaxis()->CenterTitle(true);
   Graph_Graph01509->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01509->GetYaxis()->SetLabelFont(42);
   Graph_Graph01509->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01509->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01509->GetYaxis()->SetTitleFont(42);
   Graph_Graph01509->GetZaxis()->SetLabelFont(42);
   Graph_Graph01509->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01509->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01509);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1510[18] = {
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
   Double_t Graph1_fy1510[18] = {
   43.70625,
   42.40372,
   33.19038,
   32.93137,
   24.3536,
   23.6359,
   21.25738,
   18.22461,
   18.54915,
   16.75319,
   13.85452,
   9.964613,
   11.12731,
   10.39556,
   8.595031,
   5.890921,
   5.555944,
   3.632252};
   Double_t Graph1_fex1510[18] = {
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
   Double_t Graph1_fey1510[18] = {
   5.435219,
   3.267356,
   2.236738,
   1.833428,
   1.607212,
   1.443262,
   1.349324,
   1.275964,
   1.275932,
   1.231002,
   1.272829,
   1.281649,
   1.335729,
   1.360487,
   1.415439,
   1.530039,
   1.622923,
   1.786831};
   gre = new TGraphErrors(18,Graph1_fx1510,Graph1_fy1510,Graph1_fex1510,Graph1_fey1510);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11510 = new TH1F("Graph_Graph11510","Graph",100,349.5,2899.5);
   Graph_Graph11510->SetMinimum(1.66088);
   Graph_Graph11510->SetMaximum(53.87107);
   Graph_Graph11510->SetDirectory(0);
   Graph_Graph11510->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11510->SetLineColor(ci);
   Graph_Graph11510->GetXaxis()->SetLabelFont(42);
   Graph_Graph11510->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11510->GetXaxis()->SetTitleFont(42);
   Graph_Graph11510->GetYaxis()->SetLabelFont(42);
   Graph_Graph11510->GetYaxis()->SetTitleFont(42);
   Graph_Graph11510->GetZaxis()->SetLabelFont(42);
   Graph_Graph11510->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11510->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11510);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1511[18] = {
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
   Double_t Graph2_fy1511[18] = {
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
   Double_t Graph2_fex1511[18] = {
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
   Double_t Graph2_fey1511[18] = {
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
   gre = new TGraphErrors(18,Graph2_fx1511,Graph2_fy1511,Graph2_fex1511,Graph2_fey1511);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21511 = new TH1F("Graph_Graph21511","Graph",100,349.5,2899.5);
   Graph_Graph21511->SetMinimum(-0.8672289);
   Graph_Graph21511->SetMaximum(2.656093);
   Graph_Graph21511->SetDirectory(0);
   Graph_Graph21511->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21511->SetLineColor(ci);
   Graph_Graph21511->GetXaxis()->SetLabelFont(42);
   Graph_Graph21511->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21511->GetXaxis()->SetTitleFont(42);
   Graph_Graph21511->GetYaxis()->SetLabelFont(42);
   Graph_Graph21511->GetYaxis()->SetTitleFont(42);
   Graph_Graph21511->GetZaxis()->SetLabelFont(42);
   Graph_Graph21511->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21511->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21511);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1c","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
