void FitStartTime_Run-1d()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 20:22:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730823,0.02176699,139.6932,0.04610012);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[21] = {
   30.55788,
   34.92329,
   39.28871,
   43.65412,
   48.01953,
   52.38494,
   56.75035,
   61.11577,
   65.48118,
   69.84659,
   74.212,
   78.57741,
   82.94283,
   87.30824,
   91.67365,
   96.03906,
   100.4045,
   104.7699,
   109.1353,
   113.5007,
   117.8661};
   Double_t _fy1004[21] = {
   0.03613791,
   0.03508401,
   0.0340423,
   0.03320316,
   0.03186122,
   0.03194146,
   0.03389898,
   0.03456656,
   0.03511441,
   0.03330178,
   0.03367124,
   0.03381757,
   0.03454219,
   0.03525284,
   0.03561235,
   0.0360649,
   0.03442601,
   0.03602194,
   0.03321305,
   0.03412108,
   0.03249819};
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
   0.003293314,
   0.003412801,
   0.003536814,
   0.003671693,
   0.003805038,
   0.003942588,
   0.004084864,
   0.004240077,
   0.004392392,
   0.004550306,
   0.004712539,
   0.004888105,
   0.005061632,
   0.005240438,
   0.005424513,
   0.005624181,
   0.005820667,
   0.006022652,
   0.00622928,
   0.006454364,
   0.006675683};
   TGraphErrors *gre = new TGraphErrors(21,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle("Run-1d");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Run-1d",100,21.82706,126.5969);
   Graph_Graph1004->SetMinimum(0.0242003);
   Graph_Graph1004->SetMaximum(0.0436668);
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
   Graph_Graph1004->GetYaxis()->SetTitle(" A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1004->GetYaxis()->CenterTitle(true);
   Graph_Graph1004->GetYaxis()->SetNdivisions(2000510);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("ap");
   
   Double_t _fx7[21] = {
   30.55788,
   34.92329,
   39.28871,
   43.65412,
   48.01953,
   52.38494,
   56.75035,
   61.11577,
   65.48118,
   69.84659,
   74.212,
   78.57741,
   82.94283,
   87.30824,
   91.67365,
   96.03906,
   100.4045,
   104.7699,
   109.1353,
   113.5007,
   117.8661};
   Double_t _fy7[21] = {
   0.03613791,
   0.03703306,
   0.03742753,
   0.0377613,
   0.03804379,
   0.03830541,
   0.03855456,
   0.03880855,
   0.03904431,
   0.03927787,
   0.03950868,
   0.03975006,
   0.03998163,
   0.04021421,
   0.04044829,
   0.04069702,
   0.04093731,
   0.04118037,
   0.04142544,
   0.04168884,
   0.0419447};
   TGraph *graph = new TGraph(21,_fx7,_fy7);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,21.82706,126.5969);
   Graph_Graph7->SetMinimum(0.03555723);
   Graph_Graph7->SetMaximum(0.04252538);
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
   30.55788,
   34.92329,
   39.28871,
   43.65412,
   48.01953,
   52.38494,
   56.75035,
   61.11577,
   65.48118,
   69.84659,
   74.212,
   78.57741,
   82.94283,
   87.30824,
   91.67365,
   96.03906,
   100.4045,
   104.7699,
   109.1353,
   113.5007,
   117.8661};
   Double_t _fy8[21] = {
   0.03613791,
   0.03524275,
   0.03484828,
   0.03451451,
   0.03423202,
   0.0339704,
   0.03372125,
   0.03346726,
   0.0332315,
   0.03299794,
   0.03276713,
   0.03252575,
   0.03229418,
   0.0320616,
   0.03182752,
   0.03157879,
   0.0313385,
   0.03109544,
   0.03085037,
   0.03058697,
   0.03033111};
   graph = new TGraph(21,_fx8,_fy8);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,21.82706,126.5969);
   Graph_Graph8->SetMinimum(0.02975043);
   Graph_Graph8->SetMaximum(0.03671858);
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
