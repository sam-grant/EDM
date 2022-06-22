void FitStartTime_Run-1b()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 20:22:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730823,0.01005776,139.6932,0.04980193);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1002[21] = {
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
   Double_t _fy1002[21] = {
   0.02730345,
   0.0289943,
   0.02814057,
   0.02842938,
   0.02855911,
   0.02833662,
   0.02621471,
   0.02678743,
   0.02723993,
   0.02850301,
   0.02921036,
   0.03271872,
   0.02948653,
   0.02896207,
   0.03100091,
   0.0309793,
   0.03035307,
   0.03038011,
   0.02682721,
   0.03147278,
   0.03230677};
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
   0.005447758,
   0.005637571,
   0.005833739,
   0.006046853,
   0.006258582,
   0.006477883,
   0.006704573,
   0.006950496,
   0.007192926,
   0.007444361,
   0.007703203,
   0.007984717,
   0.008262113,
   0.008548706,
   0.008844921,
   0.009164515,
   0.009482895,
   0.009808338,
   0.01014542,
   0.01051118,
   0.01087113};
   TGraphErrors *gre = new TGraphErrors(21,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("Run-1b");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Run-1b",100,21.82706,126.5969);
   Graph_Graph1002->SetMinimum(0.01403217);
   Graph_Graph1002->SetMaximum(0.04582751);
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
   Graph_Graph1002->GetYaxis()->SetTitle(" A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetNdivisions(2000510);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("ap");
   
   Double_t _fx3[21] = {
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
   Double_t _fy3[21] = {
   0.02730345,
   0.02875402,
   0.02939018,
   0.02992764,
   0.03038433,
   0.03080844,
   0.03121155,
   0.03161986,
   0.03200027,
   0.03237696,
   0.03274967,
   0.03314106,
   0.03351509,
   0.0338915,
   0.03427156,
   0.034673,
   0.03506536,
   0.03545977,
   0.03586216,
   0.03629271,
   0.03671108};
   TGraph *graph = new TGraph(21,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,21.82706,126.5969);
   Graph_Graph3->SetMinimum(0.02636269);
   Graph_Graph3->SetMaximum(0.03765184);
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
   Double_t _fy4[21] = {
   0.02730345,
   0.02585289,
   0.02521672,
   0.02467927,
   0.02422258,
   0.02379847,
   0.02339536,
   0.02298705,
   0.02260663,
   0.02222995,
   0.02185724,
   0.02146585,
   0.02109182,
   0.02071541,
   0.02033534,
   0.0199339,
   0.01954155,
   0.01914714,
   0.01874474,
   0.0183142,
   0.01789583};
   graph = new TGraph(21,_fx4,_fy4);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,21.82706,126.5969);
   Graph_Graph4->SetMinimum(0.01695507);
   Graph_Graph4->SetMaximum(0.02824422);
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
