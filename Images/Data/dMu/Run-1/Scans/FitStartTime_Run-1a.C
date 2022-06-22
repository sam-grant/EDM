void FitStartTime_Run-1a()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 20:22:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730823,0.008580293,139.6932,0.0618111);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[21] = {
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
   Double_t _fy1001[21] = {
   0.0314419,
   0.03260218,
   0.03430575,
   0.03259211,
   0.03204499,
   0.03149572,
   0.03278196,
   0.03580435,
   0.03860274,
   0.04059865,
   0.04392598,
   0.03765447,
   0.03532089,
   0.03535212,
   0.03416012,
   0.03333738,
   0.03272255,
   0.03507881,
   0.03163097,
   0.03136596,
   0.03017851};
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
   0.006374449,
   0.006595439,
   0.006825989,
   0.007076472,
   0.007324136,
   0.007580691,
   0.007844457,
   0.008131771,
   0.008416974,
   0.008709135,
   0.009013322,
   0.009344537,
   0.009667928,
   0.01000476,
   0.01034799,
   0.0107284,
   0.01110114,
   0.01148363,
   0.01187907,
   0.01230551,
   0.01272641};
   TGraphErrors *gre = new TGraphErrors(21,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("Run-1a");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Run-1a",100,21.82706,126.5969);
   Graph_Graph1001->SetMinimum(0.01390337);
   Graph_Graph1001->SetMaximum(0.05648802);
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
   Double_t _fy1[21] = {
   0.0314419,
   0.03313489,
   0.03388332,
   0.03451483,
   0.03504875,
   0.03554474,
   0.03601376,
   0.03649088,
   0.03693844,
   0.03737616,
   0.03781422,
   0.03827468,
   0.03871069,
   0.03915305,
   0.03959343,
   0.04007121,
   0.04053045,
   0.04099388,
   0.04146582,
   0.04196768,
   0.0424568};
   TGraph *graph = new TGraph(21,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,21.82706,126.5969);
   Graph_Graph1->SetMinimum(0.03034042);
   Graph_Graph1->SetMaximum(0.04355829);
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
   Double_t _fy2[21] = {
   0.0314419,
   0.02974892,
   0.02900049,
   0.02836898,
   0.02783506,
   0.02733907,
   0.02687005,
   0.02639293,
   0.02594537,
   0.02550765,
   0.02506959,
   0.02460913,
   0.02417312,
   0.02373076,
   0.02329038,
   0.0228126,
   0.02235336,
   0.02188993,
   0.02141799,
   0.02091613,
   0.02042701};
   graph = new TGraph(21,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,21.82706,126.5969);
   Graph_Graph2->SetMinimum(0.01932552);
   Graph_Graph2->SetMaximum(0.03254339);
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
