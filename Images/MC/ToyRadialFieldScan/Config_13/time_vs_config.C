void time_vs_config()
{
//=========Macro generated from canvas: c2/c2
//=========  (Fri Oct 16 08:36:45 2020) by ROOT version 6.22/02
   TCanvas *c2 = new TCanvas("c2", "c2",0,45,800,600);
   c2->Range(-1.6375,0.4166666,14.7375,5.916667);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx2[12] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12};
   Double_t Graph0_fy2[12] = {
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
   TGraph *graph = new TGraph(12,Graph0_fx2,Graph0_fy2);
   graph->SetName("Graph0");
   graph->SetTitle(";Config;Max run time [hr]");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph02 = new TH1F("Graph_Graph02","",100,0,13.1);
   Graph_Graph02->SetMinimum(0.9666667);
   Graph_Graph02->SetMaximum(5.366667);
   Graph_Graph02->SetDirectory(0);
   Graph_Graph02->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph02->SetLineColor(ci);
   Graph_Graph02->GetXaxis()->SetTitle("Config");
   Graph_Graph02->GetXaxis()->CenterTitle(true);
   Graph_Graph02->GetXaxis()->SetLabelFont(42);
   Graph_Graph02->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph02->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph02->GetXaxis()->SetTitleFont(42);
   Graph_Graph02->GetYaxis()->SetTitle("Max run time [hr]");
   Graph_Graph02->GetYaxis()->CenterTitle(true);
   Graph_Graph02->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph02->GetYaxis()->SetLabelFont(42);
   Graph_Graph02->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph02->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph02->GetYaxis()->SetTitleFont(42);
   Graph_Graph02->GetZaxis()->SetLabelFont(42);
   Graph_Graph02->GetZaxis()->SetTitleOffset(1);
   Graph_Graph02->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph02);
   
   graph->Draw("ap");
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
