void BrVsDS()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul  6 08:07:56 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1.775,-3.949295,15.975,51.93136);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[13] = {
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
   12,
   13};
   Double_t Graph0_fy1001[13] = {
   21.57803,
   22.35396,
   29.64106,
   33.92595,
   11.2892,
   14.79155,
   17.23072,
   12.59608,
   12.575,
   14.75457,
   16.36835,
   10.7554,
   10.73588};
   Double_t Graph0_fex1001[13] = {
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
   Double_t Graph0_fey1001[13] = {
   7.098951,
   8.042353,
   8.25343,
   8.691963,
   3.547244,
   3.72447,
   6.014344,
   3.493359,
   3.504007,
   4.954327,
   4.965355,
   4.918062,
   5.371737};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";Dataset;B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0,14.2);
   Graph_Graph1001->SetMinimum(1.638771);
   Graph_Graph1001->SetMaximum(46.34329);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Dataset");
   Graph_Graph1001->GetXaxis()->SetBinLabel(8,"1a");
   Graph_Graph1001->GetXaxis()->SetBinLabel(15,"1b");
   Graph_Graph1001->GetXaxis()->SetBinLabel(22,"1c");
   Graph_Graph1001->GetXaxis()->SetBinLabel(29,"1d");
   Graph_Graph1001->GetXaxis()->SetBinLabel(36,"2b");
   Graph_Graph1001->GetXaxis()->SetBinLabel(43,"2c");
   Graph_Graph1001->GetXaxis()->SetBinLabel(50,"2d");
   Graph_Graph1001->GetXaxis()->SetBinLabel(57,"2e");
   Graph_Graph1001->GetXaxis()->SetBinLabel(64,"2f");
   Graph_Graph1001->GetXaxis()->SetBinLabel(71,"2g");
   Graph_Graph1001->GetXaxis()->SetBinLabel(78,"2h");
   Graph_Graph1001->GetXaxis()->SetBinLabel(85,"3N");
   Graph_Graph1001->GetXaxis()->SetBinLabel(92,"3O");
   Graph_Graph1001->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("B_{r} [ppm]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("0ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
