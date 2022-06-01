void FitStartTime_Run-1b()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 29 20:41:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730647,0.009996375,139.6904,0.04971856);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1002[21] = {
   30.55727,
   34.92259,
   39.28792,
   43.65324,
   48.01856,
   52.38389,
   56.74921,
   61.11453,
   65.47986,
   69.84518,
   74.21051,
   78.57583,
   82.94115,
   87.30648,
   91.6718,
   96.03713,
   100.4024,
   104.7678,
   109.1331,
   113.4984,
   117.8637};
   Double_t _fy1002[21] = {
   0.02728362,
   0.02897435,
   0.02811966,
   0.02840816,
   0.02853461,
   0.02831305,
   0.02618898,
   0.02675918,
   0.02721084,
   0.02847555,
   0.02917911,
   0.03268126,
   0.029443,
   0.02890972,
   0.03093833,
   0.03092143,
   0.03028994,
   0.03032775,
   0.02676187,
   0.03139027,
   0.03222748};
   Double_t _fex1002[21] = {
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
   0,
   0,
   0,
   0};
   Double_t _fey1002[21] = {
   0.005447695,
   0.005637505,
   0.005833672,
   0.006046766,
   0.006258493,
   0.006477795,
   0.006704479,
   0.006950373,
   0.0071928,
   0.007444232,
   0.007703074,
   0.007984541,
   0.008261926,
   0.008548516,
   0.008844721,
   0.009164255,
   0.009482624,
   0.009808059,
   0.01014513,
   0.01051079,
   0.01087071};
   TGraphErrors *gre = new TGraphErrors(21,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("Run-1b");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Run-1b",100,21.82662,126.5944);
   Graph_Graph1002->SetMinimum(0.01396859);
   Graph_Graph1002->SetMaximum(0.04574634);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("Fit start time [#mus]");
   Graph_Graph1002->GetXaxis()->CenterTitle(true);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle(" A_{EDM} (BLIND) [mrad]");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("ap");
   
   Double_t _fx3[21] = {
   30.55727,
   34.92259,
   39.28792,
   43.65324,
   48.01856,
   52.38389,
   56.74921,
   61.11453,
   65.47986,
   69.84518,
   74.21051,
   78.57583,
   82.94115,
   87.30648,
   91.6718,
   96.03713,
   100.4024,
   104.7678,
   109.1331,
   113.4984,
   117.8637};
   Double_t _fy3[21] = {
   0.02728362,
   0.02873416,
   0.02937032,
   0.02990774,
   0.03036442,
   0.03078853,
   0.03119164,
   0.0315999,
   0.03198032,
   0.032357,
   0.03272971,
   0.03312104,
   0.03349506,
   0.03387146,
   0.03425152,
   0.03465289,
   0.03504524,
   0.03543964,
   0.03584202,
   0.03627246,
   0.0366908};
   TGraph *graph = new TGraph(21,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,21.82662,126.5944);
   Graph_Graph3->SetMinimum(0.0263429);
   Graph_Graph3->SetMaximum(0.03763151);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("c ");
   
   Double_t _fx4[21] = {
   30.55727,
   34.92259,
   39.28792,
   43.65324,
   48.01856,
   52.38389,
   56.74921,
   61.11453,
   65.47986,
   69.84518,
   74.21051,
   78.57583,
   82.94115,
   87.30648,
   91.6718,
   96.03713,
   100.4024,
   104.7678,
   109.1331,
   113.4984,
   117.8637};
   Double_t _fy4[21] = {
   0.02728362,
   0.02583307,
   0.02519691,
   0.0246595,
   0.02420281,
   0.0237787,
   0.02337559,
   0.02296733,
   0.02258691,
   0.02221023,
   0.02183752,
   0.02144619,
   0.02107217,
   0.02069577,
   0.02031571,
   0.01991434,
   0.01952199,
   0.0191276,
   0.01872521,
   0.01829477,
   0.01787644};
   graph = new TGraph(21,_fx4,_fy4);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,21.82662,126.5944);
   Graph_Graph4->SetMinimum(0.01693572);
   Graph_Graph4->SetMaximum(0.02822433);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetTitleOffset(1);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("c ");
   
   TPaveText *pt = new TPaveText(0.4278141,0.94,0.5721859,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1b");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
