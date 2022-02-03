void plot_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 11:43:16 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,3.837947,8.5,27.26667);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1002[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t _fy1002[7] = {
   11.29031,
   14.85245,
   17.31795,
   12.68988,
   12.62024,
   14.7471,
   16.39363};
   Double_t _fex1002[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1002[7] = {
   3.547573,
   3.739166,
   6.04393,
   3.518048,
   3.515971,
   4.95191,
   4.972777};
   TGraphErrors *gre = new TGraphErrors(7,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,0.4,7.6);
   Graph_Graph1002->SetMinimum(6.18082);
   Graph_Graph1002->SetMaximum(24.9238);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->CenterTitle(true);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
