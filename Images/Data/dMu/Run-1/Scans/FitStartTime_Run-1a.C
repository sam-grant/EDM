void FitStartTime_Run-1a()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 29 20:41:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730647,0.008618097,139.6904,0.06184417);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[21] = {
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
   Double_t _fy1001[21] = {
   0.03145716,
   0.03261852,
   0.03432206,
   0.03261005,
   0.03206654,
   0.03152131,
   0.03281264,
   0.03583288,
   0.03862604,
   0.04062612,
   0.04396002,
   0.03769068,
   0.0353611,
   0.03539466,
   0.03419555,
   0.03337272,
   0.03275602,
   0.0351027,
   0.03167194,
   0.03140742,
   0.03021493};
   Double_t _fex1001[21] = {
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
   Double_t _fey1001[21] = {
   0.006374366,
   0.006595352,
   0.0068259,
   0.007076357,
   0.007324017,
   0.00758057,
   0.007844331,
   0.008131607,
   0.008416806,
   0.00870896,
   0.009013145,
   0.009344303,
   0.009667681,
   0.0100045,
   0.01034772,
   0.01072804,
   0.01110075,
   0.01148322,
   0.01187864,
   0.01230495,
   0.01272582};
   TGraphErrors *gre = new TGraphErrors(21,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("Run-1a");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Run-1a",100,21.82662,126.5944);
   Graph_Graph1001->SetMinimum(0.01394071);
   Graph_Graph1001->SetMaximum(0.05652157);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Fit start time [#mus]");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle(" A_{EDM} (BLIND) [mrad]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   Double_t _fx1[21] = {
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
   Double_t _fy1[21] = {
   0.03145716,
   0.03315013,
   0.03389855,
   0.03452999,
   0.03506392,
   0.03555991,
   0.03602892,
   0.03650597,
   0.03695353,
   0.03739126,
   0.03782931,
   0.03828969,
   0.03872569,
   0.03916803,
   0.03960841,
   0.04008608,
   0.04054529,
   0.04100869,
   0.04148061,
   0.04198234,
   0.04247142};
   TGraph *graph = new TGraph(21,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,21.82662,126.5944);
   Graph_Graph1->SetMinimum(0.03035574);
   Graph_Graph1->SetMaximum(0.04357284);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("c ");
   
   Double_t _fx2[21] = {
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
   Double_t _fy2[21] = {
   0.03145716,
   0.0297642,
   0.02901578,
   0.02838433,
   0.02785041,
   0.02735442,
   0.0268854,
   0.02640835,
   0.02596079,
   0.02552307,
   0.02508502,
   0.02462463,
   0.02418863,
   0.02374629,
   0.02330592,
   0.02282824,
   0.02236904,
   0.02190563,
   0.02143371,
   0.02093199,
   0.02044291};
   graph = new TGraph(21,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,21.82662,126.5944);
   Graph_Graph2->SetMinimum(0.01934148);
   Graph_Graph2->SetMaximum(0.03255859);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("c ");
   
   TPaveText *pt = new TPaveText(0.4284422,0.94,0.5715578,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1a");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
