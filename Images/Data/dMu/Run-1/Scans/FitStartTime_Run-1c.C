void FitStartTime_Run-1c()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 29 20:41:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(8.730647,0.03343753,139.6904,0.06624746);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1003[21] = {
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
   Double_t _fy1003[21] = {
   0.04542703,
   0.04775037,
   0.04666162,
   0.04510807,
   0.04533178,
   0.04637384,
   0.04844995,
   0.04798492,
   0.05123829,
   0.05143016,
   0.05172755,
   0.05352692,
   0.05218449,
   0.0486211,
   0.04745546,
   0.0467446,
   0.0467785,
   0.04834346,
   0.04731515,
   0.05094438,
   0.05176684};
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
   0.004488294,
   0.004648315,
   0.004813495,
   0.00499195,
   0.005168843,
   0.005352262,
   0.005540357,
   0.00574668,
   0.005950262,
   0.006159974,
   0.006377008,
   0.006612178,
   0.006842363,
   0.007079847,
   0.00732661,
   0.007594961,
   0.007857528,
   0.008130001,
   0.0084093,
   0.008712374,
   0.009012294};
   TGraphErrors *gre = new TGraphErrors(21,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("Run-1c");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Run-1c",100,21.82662,126.5944);
   Graph_Graph1003->SetMinimum(0.03671853);
   Graph_Graph1003->SetMaximum(0.06296646);
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
   Graph_Graph1003->GetYaxis()->SetTitle(" A_{EDM} (BLIND) [mrad]");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("ap");
   
   Double_t _fx5[21] = {
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
   Double_t _fy5[21] = {
   0.04542703,
   0.04663618,
   0.04716627,
   0.04761216,
   0.04799065,
   0.04834283,
   0.04867522,
   0.04901584,
   0.04933354,
   0.04964609,
   0.04995709,
   0.05028255,
   0.05059163,
   0.05090238,
   0.05121792,
   0.05155391,
   0.05187652,
   0.05220583,
   0.05253839,
   0.05289433,
   0.05324218};
   TGraph *graph = new TGraph(21,_fx5,_fy5);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,21.82662,126.5944);
   Graph_Graph5->SetMinimum(0.04464551);
   Graph_Graph5->SetMaximum(0.0540237);
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
   Double_t _fy6[21] = {
   0.04542703,
   0.04421787,
   0.04368779,
   0.0432419,
   0.0428634,
   0.04251122,
   0.04217883,
   0.04183822,
   0.04152051,
   0.04120796,
   0.04089697,
   0.0405715,
   0.04026242,
   0.03995168,
   0.03963613,
   0.03930015,
   0.03897753,
   0.03864823,
   0.03831566,
   0.03795972,
   0.03761187};
   graph = new TGraph(21,_fx6,_fy6);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","",100,21.82662,126.5944);
   Graph_Graph6->SetMinimum(0.03683035);
   Graph_Graph6->SetMaximum(0.04620854);
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
