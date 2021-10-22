void full_Y_vs_p_truthAllDecays_MRF_200MeV_AQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 28 13:51:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-7.08125,-0.08861898,58.23125,0.08648757);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[17] = {
   1,
   4,
   7,
   10,
   13,
   16,
   19,
   22,
   25,
   28,
   31,
   34,
   37,
   40,
   43,
   46,
   49};
   Double_t Graph0_fy1049[17] = {
   -0.0002763622,
   -0.02840432,
   0.008239733,
   0.04023422,
   0.004898838,
   0.01878404,
   0.01054614,
   -0.006883705,
   0.0005606312,
   0.01079151,
   0.004232775,
   0.0001240726,
   -0.008293321,
   0.0002109104,
   0.003559434,
   -0.0006890652,
   -0.01633416};
   Double_t Graph0_fex1049[17] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_fey1049[17] = {
   0.05041975,
   0.03103023,
   0.02212013,
   0.01706892,
   0.0139409,
   0.01186732,
   0.01040886,
   0.009324835,
   0.008490584,
   0.007864488,
   0.007361658,
   0.006976765,
   0.006671812,
   0.006444359,
   0.00626513,
   0.006155301,
   0.006119153};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV;#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","",100,0,55);
   Graph_Graph01049->SetMinimum(-0.07110832);
   Graph_Graph01049->SetMaximum(0.06897691);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV");
   Graph_Graph01049->GetXaxis()->SetRange(0,94);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
