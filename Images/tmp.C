void tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 14:01:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(312.5,-4.855936,2937.5,8.922439);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[21] = {
   875,
   875,
   875,
   1125,
   1125,
   1125,
   1375,
   1375,
   1375,
   1625,
   1625,
   1625,
   1875,
   1875,
   1875,
   2125,
   2125,
   2125,
   2375,
   2375,
   2375};
   Double_t _fy1001[21] = {
   1.801872,
   1.573362,
   2.108036,
   1.698296,
   1.512979,
   1.935345,
   1.570188,
   1.409042,
   1.772954,
   1.797485,
   1.610714,
   2.033251,
   1.731521,
   1.534863,
   1.98598,
   1.661763,
   1.433687,
   1.976133,
   1.636399,
   1.313502,
   2.169796};
   Double_t _fex1001[21] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t _fey1001[21] = {
   3.274719,
   3.060018,
   3.542052,
   3.708013,
   3.499857,
   3.958357,
   3.70548,
   3.510185,
   3.937478,
   4.318304,
   4.087798,
   4.592792,
   3.952275,
   3.721065,
   4.232742,
   3.326235,
   3.089535,
   3.627276,
   2.556145,
   2.289987,
   2.943746};
   TGraphErrors *gre = new TGraphErrors(21,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,575,2675);
   Graph_Graph1001->SetMinimum(-3.478099);
   Graph_Graph1001->SetMaximum(7.544601);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
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
