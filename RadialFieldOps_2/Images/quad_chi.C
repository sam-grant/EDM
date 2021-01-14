void quad_chi()
{
//=========Macro generated from canvas: c0/c0
//=========  (Tue Jan  5 12:34:50 2021) by ROOT version 6.22/06
   TCanvas *c0 = new TCanvas("c0", "c0",1120,480,800,600);
   c0->Range(-75,-0.673563,75,6.144407);
   c0->SetFillColor(0);
   c0->SetBorderMode(0);
   c0->SetBorderSize(2);
   c0->SetFrameBorderMode(0);
   c0->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1[6] = {
   0.1615032,
   0.1896334,
   4.966841,
   0.5475677,
   0.09047109,
   0.009148943};
   TGraph *graph = new TGraph(6,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle(";#LTB_{r}^{App}#GT [ppm];#chi^{2}/ndf");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01 = new TH1F("Graph_Graph01","",100,-60,60);
   Graph_Graph01->SetMinimum(0.008234049);
   Graph_Graph01->SetMaximum(5.46261);
   Graph_Graph01->SetDirectory(0);
   Graph_Graph01->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01->SetLineColor(ci);
   Graph_Graph01->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01->GetXaxis()->CenterTitle(true);
   Graph_Graph01->GetXaxis()->SetLabelFont(42);
   Graph_Graph01->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01->GetXaxis()->SetTitleFont(42);
   Graph_Graph01->GetYaxis()->SetTitle("#chi^{2}/ndf");
   Graph_Graph01->GetYaxis()->CenterTitle(true);
   Graph_Graph01->GetYaxis()->SetLabelFont(42);
   Graph_Graph01->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01->GetYaxis()->SetTitleFont(42);
   Graph_Graph01->GetZaxis()->SetLabelFont(42);
   Graph_Graph01->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph01);
   
   graph->Draw("ap");
   c0->Modified();
   c0->cd();
   c0->SetSelected(c0);
}
