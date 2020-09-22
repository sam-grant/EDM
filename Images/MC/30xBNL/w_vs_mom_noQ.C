void w_vs_mom_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Sep 18 16:34:05 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.9375,0.4341269,3941.438,1.921858);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[7] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250};
   Double_t Graph0_fy1016[7] = {
   0.8631165,
   1.427902,
   1.411701,
   1.428087,
   1.386801,
   1.258328,
   1.261134};
   Double_t Graph0_fex1016[7] = {
   250,
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1016[7] = {
   0.1810343,
   0.02777543,
   0.01673301,
   0.01515439,
   0.0185195,
   0.04933919,
   0.4127694};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle(";Track momentum [MeV];#omega_{a} [MHz]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","",100,0,3850);
   Graph_Graph01016->SetMinimum(0.5829001);
   Graph_Graph01016->SetMaximum(1.773085);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("Track momentum [MeV]");
   Graph_Graph01016->GetXaxis()->SetRange(1,91);
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("#omega_{a} [MHz]");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
