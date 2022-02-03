void BrVsDS()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 11:47:10 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-2.05,-14.19357,18.45,54.51257);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[15] = {
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
   13,
   14,
   15};
   Double_t Graph0_fy1001[15] = {
   22.19565,
   22.72126,
   29.60311,
   34.27966,
   11.29031,
   14.85245,
   17.31795,
   12.68988,
   12.62024,
   14.7471,
   16.39363,
   10.86647,
   10.78958,
   -0.4443703,
   0.7154093};
   Double_t Graph0_fex1001[15] = {
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
   Double_t Graph0_fey1001[15] = {
   7.297995,
   8.172041,
   8.242971,
   8.781881,
   3.547573,
   3.739166,
   6.04393,
   3.518048,
   3.515971,
   4.95191,
   4.972777,
   4.966378,
   5.397335,
   1.951419,
   3.457959};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";Dataset;#LTB_{r}#GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0,16.4);
   Graph_Graph1001->SetMinimum(-7.322959);
   Graph_Graph1001->SetMaximum(47.64195);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Dataset");
   Graph_Graph1001->GetXaxis()->SetBinLabel(7,"1a");
   Graph_Graph1001->GetXaxis()->SetBinLabel(13,"1b");
   Graph_Graph1001->GetXaxis()->SetBinLabel(19,"1c");
   Graph_Graph1001->GetXaxis()->SetBinLabel(25,"1d");
   Graph_Graph1001->GetXaxis()->SetBinLabel(31,"2b");
   Graph_Graph1001->GetXaxis()->SetBinLabel(37,"2c");
   Graph_Graph1001->GetXaxis()->SetBinLabel(43,"2d");
   Graph_Graph1001->GetXaxis()->SetBinLabel(49,"2e");
   Graph_Graph1001->GetXaxis()->SetBinLabel(55,"2f");
   Graph_Graph1001->GetXaxis()->SetBinLabel(61,"2g");
   Graph_Graph1001->GetXaxis()->SetBinLabel(68,"2h");
   Graph_Graph1001->GetXaxis()->SetBinLabel(74,"3N");
   Graph_Graph1001->GetXaxis()->SetBinLabel(80,"3O");
   Graph_Graph1001->GetXaxis()->SetBinLabel(86,"4");
   Graph_Graph1001->GetXaxis()->SetBinLabel(92,"5");
   Graph_Graph1001->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LTB_{r}#GT [ppm]");
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
