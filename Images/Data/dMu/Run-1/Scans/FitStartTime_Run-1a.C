#ifdef __CLING__
#pragma cling optimize(0)
#endif
void FitStartTime_Run-1a()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 16:24:57 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730532,0.008515445,139.6885,0.06182783);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[21] = {
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
   Double_t _fy1001[21] = {
   0.03143963,
   0.03259997,
   0.03430167,
   0.03258763,
   0.03204425,
   0.03149918,
   0.03279118,
   0.03580649,
   0.03859355,
   0.04059348,
   0.04392906,
   0.03765524,
   0.035324,
   0.03535514,
   0.03414695,
   0.03331718,
   0.03269371,
   0.03502898,
   0.03160245,
   0.03132918,
   0.03012725};
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
   0.006374434,
   0.006595433,
   0.006825994,
   0.00707645,
   0.007324127,
   0.007580698,
   0.007844478,
   0.008131757,
   0.008416978,
   0.008709161,
   0.009013378,
   0.009344535,
   0.009667951,
   0.01000481,
   0.01034807,
   0.01072839,
   0.01110114,
   0.01148367,
   0.01187915,
   0.01230547,
   0.01272641};
   TGraphErrors *gre = new TGraphErrors(21,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("Run-1a");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Run-1a",100,21.82633,126.5927);
   Graph_Graph1001->SetMinimum(0.01384668);
   Graph_Graph1001->SetMaximum(0.05649659);
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
   Graph_Graph1001->GetYaxis()->SetTitle(" A_{EDM}^{BLIND} [mrad]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(2000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   Double_t _fx1[21] = {
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
   Double_t _fy1[21] = {
   0.03143963,
   0.03313265,
   0.0338811,
   0.03451253,
   0.03504649,
   0.0355425,
   0.03601155,
   0.0364886,
   0.03693618,
   0.03737394,
   0.03781204,
   0.03827241,
   0.03870846,
   0.03915084,
   0.03959126,
   0.04006894,
   0.04052819,
   0.04099166,
   0.04146364,
   0.04196537,
   0.04245453};
   TGraph *graph = new TGraph(21,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,21.82633,126.5927);
   Graph_Graph1->SetMinimum(0.03033814);
   Graph_Graph1->SetMaximum(0.04355602);
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
   Double_t _fy2[21] = {
   0.03143963,
   0.02974661,
   0.02899816,
   0.02836673,
   0.02783277,
   0.02733676,
   0.02686771,
   0.02639066,
   0.02594308,
   0.02550532,
   0.02506722,
   0.02460685,
   0.0241708,
   0.02372842,
   0.023288,
   0.02281032,
   0.02235107,
   0.0218876,
   0.02141562,
   0.02091389,
   0.02042473};
   graph = new TGraph(21,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,21.82633,126.5927);
   Graph_Graph2->SetMinimum(0.01932324);
   Graph_Graph2->SetMaximum(0.03254112);
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
