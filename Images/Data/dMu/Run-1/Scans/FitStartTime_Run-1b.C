#ifdef __CLING__
#pragma cling optimize(0)
#endif
void FitStartTime_Run-1b()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 16:24:57 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730532,0.01001209,139.6885,0.04973571);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1002[21] = {
   30.55686,
   34.92213,
   39.2874,
   43.65266,
   48.01793,
   52.3832,
   56.74846,
   61.11373,
   65.47899,
   69.84426,
   74.20953,
   78.57479,
   82.94006,
   87.30533,
   91.67059,
   96.03586,
   100.4011,
   104.7664,
   109.1317,
   113.4969,
   117.8622};
   Double_t _fy1002[21] = {
   0.02728726,
   0.02897927,
   0.02812531,
   0.02841463,
   0.02854049,
   0.02832083,
   0.0261975,
   0.02676746,
   0.02722076,
   0.02848881,
   0.02919235,
   0.0326926,
   0.02945311,
   0.02891727,
   0.03094267,
   0.03093141,
   0.03030015,
   0.03034859,
   0.02677828,
   0.03139961,
   0.03224385};
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
   0.005447754,
   0.005637575,
   0.005833752,
   0.006046848,
   0.006258589,
   0.006477906,
   0.006704609,
   0.006950504,
   0.00719295,
   0.007444409,
   0.007703277,
   0.007984747,
   0.008262162,
   0.008548784,
   0.008845028,
   0.009164569,
   0.009482984,
   0.009808468,
   0.01014559,
   0.01051127,
   0.01087125};
   TGraphErrors *gre = new TGraphErrors(21,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("Run-1b");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Run-1b",100,21.82633,126.5927);
   Graph_Graph1002->SetMinimum(0.01398445);
   Graph_Graph1002->SetMaximum(0.04576334);
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
   30.55686,
   34.92213,
   39.2874,
   43.65266,
   48.01793,
   52.3832,
   56.74846,
   61.11373,
   65.47899,
   69.84426,
   74.20953,
   78.57479,
   82.94006,
   87.30533,
   91.67059,
   96.03586,
   100.4011,
   104.7664,
   109.1317,
   113.4969,
   117.8622};
   Double_t _fy3[21] = {
   0.02728726,
   0.02873785,
   0.02937404,
   0.02991144,
   0.03036815,
   0.03079229,
   0.03119542,
   0.03160368,
   0.03198412,
   0.03236084,
   0.03273358,
   0.03312491,
   0.03349897,
   0.03387541,
   0.03425551,
   0.03465688,
   0.03504928,
   0.03544373,
   0.03584617,
   0.03627663,
   0.03669503};
   TGraph *graph = new TGraph(21,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,21.82633,126.5927);
   Graph_Graph3->SetMinimum(0.02634648);
   Graph_Graph3->SetMaximum(0.0376358);
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
   30.55686,
   34.92213,
   39.2874,
   43.65266,
   48.01793,
   52.3832,
   56.74846,
   61.11373,
   65.47899,
   69.84426,
   74.20953,
   78.57479,
   82.94006,
   87.30533,
   91.67059,
   96.03586,
   100.4011,
   104.7664,
   109.1317,
   113.4969,
   117.8622};
   Double_t _fy4[21] = {
   0.02728726,
   0.02583667,
   0.02520048,
   0.02466307,
   0.02420637,
   0.02378223,
   0.02337909,
   0.02297084,
   0.0225904,
   0.02221368,
   0.02184094,
   0.02144961,
   0.02107555,
   0.02069911,
   0.02031901,
   0.01991764,
   0.01952524,
   0.01913079,
   0.01872835,
   0.01829788,
   0.01787949};
   graph = new TGraph(21,_fx4,_fy4);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,21.82633,126.5927);
   Graph_Graph4->SetMinimum(0.01693872);
   Graph_Graph4->SetMaximum(0.02822804);
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
