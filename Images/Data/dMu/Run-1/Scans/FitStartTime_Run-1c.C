void FitStartTime_Run-1c()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 20:22:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730823,0.03348167,139.6932,0.06633288);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1003[21] = {
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
   Double_t _fy1003[21] = {
   0.04544905,
   0.04777472,
   0.04668756,
   0.04513491,
   0.0453637,
   0.0464071,
   0.04848373,
   0.04802192,
   0.0512789,
   0.05147666,
   0.05177461,
   0.05357485,
   0.0522422,
   0.04868241,
   0.04751714,
   0.04681107,
   0.04683502,
   0.04839275,
   0.04736645,
   0.0510116,
   0.05184502};
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
   0.004488347,
   0.00464837,
   0.004813551,
   0.004992025,
   0.005168919,
   0.005352337,
   0.005540435,
   0.005746786,
   0.005950375,
   0.006160089,
   0.006377125,
   0.006612335,
   0.00684253,
   0.007080019,
   0.007326788,
   0.007595192,
   0.007857776,
   0.008130266,
   0.008409578,
   0.008712727,
   0.00901266};
   TGraphErrors *gre = new TGraphErrors(21,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("Run-1c");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Run-1c",100,21.82706,126.5969);
   Graph_Graph1003->SetMinimum(0.03676679);
   Graph_Graph1003->SetMaximum(0.06304776);
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
   Double_t _fy5[21] = {
   0.04544905,
   0.04665821,
   0.0471883,
   0.04763423,
   0.04801273,
   0.04836491,
   0.0486973,
   0.04903796,
   0.04935567,
   0.04966822,
   0.04997922,
   0.05030473,
   0.05061383,
   0.05092457,
   0.05124012,
   0.05157617,
   0.0518988,
   0.05222813,
   0.05256071,
   0.05291673,
   0.05326459};
   TGraph *graph = new TGraph(21,_fx5,_fy5);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,21.82706,126.5969);
   Graph_Graph5->SetMinimum(0.04466749);
   Graph_Graph5->SetMaximum(0.05404615);
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
   Double_t _fy6[21] = {
   0.04544905,
   0.04423988,
   0.04370979,
   0.04326386,
   0.04288536,
   0.04253318,
   0.04220079,
   0.04186013,
   0.04154242,
   0.04122987,
   0.04091887,
   0.04059336,
   0.04028427,
   0.03997352,
   0.03965797,
   0.03932192,
   0.03899929,
   0.03866996,
   0.03833738,
   0.03798136,
   0.0376335};
   graph = new TGraph(21,_fx6,_fy6);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","",100,21.82706,126.5969);
   Graph_Graph6->SetMinimum(0.03685194);
   Graph_Graph6->SetMaximum(0.0462306);
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
