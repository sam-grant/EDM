void dBr_vs_config()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Oct 16 08:36:44 2020) by ROOT version 6.22/02
   TCanvas *c1 = new TCanvas("c1", "c1",0,45,800,600);
   c1->Range(-1.6375,0.389375,14.7375,1.868525);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[12] = {
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
   Double_t Graph0_fy1[12] = {
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
   TGraph *graph = new TGraph(12,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle(";Config;#deltaB_{r} [ppm]");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","",100,0,13.1);
   Graph_Graph01->SetMinimum(0.53729);
   Graph_Graph01->SetMaximum(1.72061);
   Graph_Graph01->SetDirectory(0);
   Graph_Graph01->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01->SetLineColor(ci);
   Graph_Graph01->GetXaxis()->SetTitle("Config");
   Graph_Graph01->GetXaxis()->CenterTitle(true);
   Graph_Graph01->GetXaxis()->SetLabelFont(42);
   Graph_Graph01->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01->GetXaxis()->SetTitleFont(42);
   Graph_Graph01->GetYaxis()->SetTitle("#deltaB_{r} [ppm]");
   Graph_Graph01->GetYaxis()->CenterTitle(true);
   Graph_Graph01->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01->GetYaxis()->SetLabelFont(42);
   Graph_Graph01->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01->GetYaxis()->SetTitleFont(42);
   Graph_Graph01->GetZaxis()->SetLabelFont(42);
   Graph_Graph01->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
