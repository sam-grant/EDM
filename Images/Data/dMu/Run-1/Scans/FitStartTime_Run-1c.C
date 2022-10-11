#ifdef __CLING__
#pragma cling optimize(0)
#endif
void FitStartTime_Run-1c()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 16:24:57 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730532,0.03348429,139.6885,0.0662881);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1003[21] = {
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
   Double_t _fy1003[21] = {
   0.04543568,
   0.04775922,
   0.04667115,
   0.04511885,
   0.04534133,
   0.04638473,
   0.04846289,
   0.04799833,
   0.05125225,
   0.05144321,
   0.05174336,
   0.05354576,
   0.05220045,
   0.04863822,
   0.04747623,
   0.04676662,
   0.04681139,
   0.04838581,
   0.04736128,
   0.05098651,
   0.05180805};
   Double_t _fex1003[21] = {
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
   Double_t _fey1003[21] = {
   0.004488346,
   0.004648376,
   0.004813564,
   0.00499202,
   0.005168925,
   0.005352357,
   0.005540469,
   0.005746791,
   0.005950389,
   0.00616012,
   0.006377178,
   0.006612351,
   0.006842559,
   0.007080073,
   0.007326866,
   0.007595228,
   0.00785783,
   0.008130338,
   0.008409684,
   0.008712774,
   0.009012752};
   TGraphErrors *gre = new TGraphErrors(21,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("Run-1c");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Run-1c",100,21.82633,126.5927);
   Graph_Graph1003->SetMinimum(0.03676467);
   Graph_Graph1003->SetMaximum(0.06300772);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Fit start time [#mus]");
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle(" A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(2000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("ap");
   
   Double_t _fx5[21] = {
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
   Double_t _fy5[21] = {
   0.04543568,
   0.04664488,
   0.04717498,
   0.04762087,
   0.04799938,
   0.04835159,
   0.048684,
   0.04902461,
   0.04934233,
   0.04965491,
   0.04996593,
   0.0502914,
   0.0506005,
   0.05091128,
   0.05122686,
   0.05156286,
   0.05188551,
   0.05221485,
   0.05254747,
   0.05290343,
   0.05325134};
   TGraph *graph = new TGraph(21,_fx5,_fy5);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,21.82633,126.5927);
   Graph_Graph5->SetMinimum(0.04465412);
   Graph_Graph5->SetMaximum(0.0540329);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetTitleOffset(1);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetTitleOffset(1);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("c ");
   
   Double_t _fx6[21] = {
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
   Double_t _fy6[21] = {
   0.04543568,
   0.04422649,
   0.04369639,
   0.0432505,
   0.04287199,
   0.04251978,
   0.04218737,
   0.04184676,
   0.04152904,
   0.04121646,
   0.04090543,
   0.04057997,
   0.04027086,
   0.03996009,
   0.03964451,
   0.03930851,
   0.03898586,
   0.03865651,
   0.0383239,
   0.03796794,
   0.03762003};
   graph = new TGraph(21,_fx6,_fy6);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","",100,21.82633,126.5927);
   Graph_Graph6->SetMinimum(0.03683846);
   Graph_Graph6->SetMaximum(0.04621725);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetTitleOffset(1);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetTitleOffset(1);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("c ");
   
   TPaveText *pt = new TPaveText(0.4284422,0.94,0.5715578,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1c");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
