void FitStartTime_Run-1d()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 29 20:41:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730647,0.02174462,139.6904,0.0460898);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[21] = {
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
   Double_t _fy1004[21] = {
   0.03613804,
   0.03508429,
   0.03404321,
   0.03320424,
   0.03186176,
   0.03194168,
   0.03389981,
   0.03456814,
   0.03511676,
   0.03330501,
   0.03367684,
   0.03382072,
   0.03454951,
   0.03525353,
   0.03561379,
   0.03606187,
   0.03441421,
   0.03600984,
   0.03319971,
   0.03410336,
   0.03247752};
   Double_t _fex1004[21] = {
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
   Double_t _fey1004[21] = {
   0.003293271,
   0.003412758,
   0.003536769,
   0.003671634,
   0.003804977,
   0.003942525,
   0.0040848,
   0.00423999,
   0.0043923,
   0.004550212,
   0.00471244,
   0.004887977,
   0.005061496,
   0.005240294,
   0.005424364,
   0.005623986,
   0.005820464,
   0.006022436,
   0.006229048,
   0.00645407,
   0.006675371};
   TGraphErrors *gre = new TGraphErrors(21,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle("Run-1d");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Run-1d",100,21.82662,126.5944);
   Graph_Graph1004->SetMinimum(0.02417914);
   Graph_Graph1004->SetMaximum(0.04365528);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle("Fit start time [#mus]");
   Graph_Graph1004->GetXaxis()->CenterTitle(true);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle(" A_{EDM} (BLIND) [mrad]");
   Graph_Graph1004->GetYaxis()->CenterTitle(true);
   Graph_Graph1004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("ap");
   
   Double_t _fx7[21] = {
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
   Double_t _fy7[21] = {
   0.03613804,
   0.03703318,
   0.03742765,
   0.03776139,
   0.03804388,
   0.0383055,
   0.03855464,
   0.0388086,
   0.03904435,
   0.03927791,
   0.03950871,
   0.03975006,
   0.03998162,
   0.04021419,
   0.04044827,
   0.04069694,
   0.04093722,
   0.04118027,
   0.04142532,
   0.04168866,
   0.0419445};
   TGraph *graph = new TGraph(21,_fx7,_fy7);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,21.82662,126.5944);
   Graph_Graph7->SetMinimum(0.03555739);
   Graph_Graph7->SetMaximum(0.04252514);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetTitleOffset(1);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetTitleOffset(1);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("c ");
   
   Double_t _fx8[21] = {
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
   Double_t _fy8[21] = {
   0.03613804,
   0.03524289,
   0.03484842,
   0.03451469,
   0.0342322,
   0.03397058,
   0.03372144,
   0.03346748,
   0.03323172,
   0.03299817,
   0.03276736,
   0.03252602,
   0.03229446,
   0.03206188,
   0.03182781,
   0.03157914,
   0.03133885,
   0.03109581,
   0.03085075,
   0.03058742,
   0.03033158};
   graph = new TGraph(21,_fx8,_fy8);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,21.82662,126.5944);
   Graph_Graph8->SetMinimum(0.02975093);
   Graph_Graph8->SetMaximum(0.03671868);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetTitleOffset(1);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetTitleOffset(1);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("c ");
   
   TPaveText *pt = new TPaveText(0.4278141,0.94,0.5721859,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1d");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
