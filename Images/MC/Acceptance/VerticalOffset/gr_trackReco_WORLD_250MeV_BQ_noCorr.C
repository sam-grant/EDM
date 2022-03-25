void gr_trackReco_WORLD_250MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 24 11:14:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(446.8204,0.01846878,3047.464,0.1986418);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[8] = {
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023};
   Double_t _fy1001[8] = {
   0.1243087,
   0.1379078,
   0.1376272,
   0.1536662,
   0.1341173,
   0.1028158,
   0.06516515,
   0.09223799};
   Double_t _fex1001[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[8] = {
   0.02085314,
   0.017132,
   0.01570302,
   0.01494674,
   0.01498,
   0.01568693,
   0.01666754,
   0.01653636};
   TGraphErrors *gre = new TGraphErrors(8,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,706.8848,2787.4);
   Graph_Graph1001->SetMinimum(0.03648608);
   Graph_Graph1001->SetMaximum(0.1806245);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
