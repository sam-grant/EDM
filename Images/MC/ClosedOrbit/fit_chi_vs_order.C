void fit_chi_vs_order()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 25 05:05:06 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",1120,480,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-1.2375,-0.004060094,11.1375,0.03655368);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx42[10] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9};
   Double_t Graph0_fy42[10] = {
   0.02953858,
   0.003689372,
   0.0002635709,
   0.0001735593,
   3.691571e-05,
   2.954804e-05,
   5.692982e-06,
   2.860467e-06,
   1.526984e-06,
   1.425459e-06};
   TGraph *graph = new TGraph(10,Graph0_fx42,Graph0_fy42);
   graph->SetName("Graph0");
   graph->SetTitle(";Fit order;#chi^{2}/ndf");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph042 = new TH1F("Graph_Graph042","",100,0,9.9);
   Graph_Graph042->SetMinimum(1.282913e-06);
   Graph_Graph042->SetMaximum(0.0324923);
   Graph_Graph042->SetDirectory(0);
   Graph_Graph042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph042->SetLineColor(ci);
   Graph_Graph042->GetXaxis()->SetTitle("Fit order");
   Graph_Graph042->GetXaxis()->CenterTitle(true);
   Graph_Graph042->GetXaxis()->SetLabelFont(42);
   Graph_Graph042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph042->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph042->GetXaxis()->SetTitleFont(42);
   Graph_Graph042->GetYaxis()->SetTitle("#chi^{2}/ndf");
   Graph_Graph042->GetYaxis()->CenterTitle(true);
   Graph_Graph042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph042->GetYaxis()->SetLabelFont(42);
   Graph_Graph042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph042->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph042->GetYaxis()->SetTitleFont(42);
   Graph_Graph042->GetZaxis()->SetLabelFont(42);
   Graph_Graph042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph042->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph042);
   
   graph->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
