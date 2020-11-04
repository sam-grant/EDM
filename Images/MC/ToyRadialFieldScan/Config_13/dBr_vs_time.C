void dBr_vs_time()
{
//=========Macro generated from canvas: c3/c3
//=========  (Fri Oct 16 08:36:45 2020) by ROOT version 6.22/02
   TCanvas *c3 = new TCanvas("c3", "c3",0,45,800,600);
   c3->Range(0.4166666,0.389375,5.916667,1.868525);
   c3->SetFillColor(0);
   c3->SetBorderMode(0);
   c3->SetBorderSize(2);
   c3->SetFrameBorderMode(0);
   c3->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3[12] = {
   1.333333,
   2.666667,
   1.333333,
   3.333333,
   1.333333,
   2.666667,
   1.333333,
   3.333333,
   3,
   4,
   2,
   5};
   Double_t Graph0_fy3[12] = {
   1.016,
   0.7367,
   0.9937,
   0.6359,
   1.622,
   1.174,
   1.583,
   1.012,
   0.8414,
   0.7375,
   0.9935,
   0.6361};
   TGraph *graph = new TGraph(12,Graph0_fx3,Graph0_fy3);
   graph->SetName("Graph0");
   graph->SetTitle(";Max run time [hr];#deltaB_{r} [ppm]");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph03 = new TH1F("Graph_Graph03","",100,0.9666667,5.366667);
   Graph_Graph03->SetMinimum(0.53729);
   Graph_Graph03->SetMaximum(1.72061);
   Graph_Graph03->SetDirectory(0);
   Graph_Graph03->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph03->SetLineColor(ci);
   Graph_Graph03->GetXaxis()->SetTitle("Max run time [hr]");
   Graph_Graph03->GetXaxis()->CenterTitle(true);
   Graph_Graph03->GetXaxis()->SetLabelFont(42);
   Graph_Graph03->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph03->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph03->GetXaxis()->SetTitleFont(42);
   Graph_Graph03->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Graph03->GetYaxis()->CenterTitle(true);
   Graph_Graph03->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph03->GetYaxis()->SetLabelFont(42);
   Graph_Graph03->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph03->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph03->GetYaxis()->SetTitleFont(42);
   Graph_Graph03->GetZaxis()->SetLabelFont(42);
   Graph_Graph03->GetZaxis()->SetTitleOffset(1);
   Graph_Graph03->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph03);
   
   graph->Draw("ap");
   c3->Modified();
   c3->cd();
   c3->SetSelected(c3);
}
