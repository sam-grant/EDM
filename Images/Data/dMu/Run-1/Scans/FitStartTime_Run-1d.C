#ifdef __CLING__
#pragma cling optimize(0)
#endif
void FitStartTime_Run-1d()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  7 16:24:58 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730532,0.02184299,139.6885,0.04616748);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[21] = {
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
   Double_t _fy1004[21] = {
   0.03616505,
   0.03511324,
   0.03407454,
   0.0332383,
   0.03189778,
   0.03197999,
   0.03394123,
   0.03461359,
   0.03516583,
   0.03335793,
   0.03373479,
   0.03388171,
   0.03461727,
   0.03532143,
   0.03568669,
   0.03613779,
   0.03448944,
   0.03609068,
   0.03328528,
   0.03419389,
   0.03257281};
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
   0.003293312,
   0.003412806,
   0.003536826,
   0.003671692,
   0.003805045,
   0.003942602,
   0.00408489,
   0.004240081,
   0.004392405,
   0.004550333,
   0.004712577,
   0.004888119,
   0.005061658,
   0.005240479,
   0.005424574,
   0.005624203,
   0.005820714,
   0.006022719,
   0.006229362,
   0.006454398,
   0.006675743};
   TGraphErrors *gre = new TGraphErrors(21,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle("Run-1d");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Run-1d",100,21.82633,126.5927);
   Graph_Graph1004->SetMinimum(0.02427544);
   Graph_Graph1004->SetMaximum(0.04373503);
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
   Double_t _fy7[21] = {
   0.03616505,
   0.03706022,
   0.03745471,
   0.03778844,
   0.03807095,
   0.03833258,
   0.03858174,
   0.0388357,
   0.03907147,
   0.03930505,
   0.03953587,
   0.03977722,
   0.04000881,
   0.04024141,
   0.04047551,
   0.04072419,
   0.04096451,
   0.04120759,
   0.04145268,
   0.04171602,
   0.04197191};
   TGraph *graph = new TGraph(21,_fx7,_fy7);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,21.82633,126.5927);
   Graph_Graph7->SetMinimum(0.03558436);
   Graph_Graph7->SetMaximum(0.04255259);
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
   Double_t _fy8[21] = {
   0.03616505,
   0.03526987,
   0.03487538,
   0.03454165,
   0.03425914,
   0.03399751,
   0.03374835,
   0.03349439,
   0.03325862,
   0.03302504,
   0.03279422,
   0.03255287,
   0.03232129,
   0.03208869,
   0.03185458,
   0.03160591,
   0.03136559,
   0.0311225,
   0.03087741,
   0.03061407,
   0.03035819};
   graph = new TGraph(21,_fx8,_fy8);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,21.82633,126.5927);
   Graph_Graph8->SetMinimum(0.0297775);
   Graph_Graph8->SetMaximum(0.03674573);
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
