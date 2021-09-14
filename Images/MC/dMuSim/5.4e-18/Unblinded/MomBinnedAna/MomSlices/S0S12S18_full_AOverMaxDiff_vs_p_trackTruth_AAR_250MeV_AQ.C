void S0S12S18_full_AOverMaxDiff_vs_p_trackTruth_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:32:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,-0.001588247,3254.625,0.01657568);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1147[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1147[12] = {
   0.01008288,
   0.0004374081,
   0.001065,
   0.001362683,
   0.001641562,
   0.002001551,
   0.002376333,
   0.002557756,
   0.002528063,
   0.002025899,
   0.002966051,
   0.002342991};
   Double_t Graph0_fex1147[12] = {
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
   Double_t Graph0_fey1147[12] = {
   0.003357694,
   0.0001839134,
   0.0001298746,
   0.0001390993,
   0.0001556218,
   0.0001745213,
   0.0002089438,
   0.0002386626,
   0.0002774295,
   0.0003244374,
   0.0004483234,
   0.0006866259};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1147,Graph0_fy1147,Graph0_fex1147,Graph0_fey1147);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01147 = new TH1F("Graph_Graph01147","",100,0,3300);
   Graph_Graph01147->SetMinimum(0.0002281453);
   Graph_Graph01147->SetMaximum(0.01475929);
   Graph_Graph01147->SetDirectory(0);
   Graph_Graph01147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01147->SetLineColor(ci);
   Graph_Graph01147->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01147->GetXaxis()->SetRange(4,88);
   Graph_Graph01147->GetXaxis()->CenterTitle(true);
   Graph_Graph01147->GetXaxis()->SetLabelFont(42);
   Graph_Graph01147->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01147->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01147->GetXaxis()->SetTitleFont(42);
   Graph_Graph01147->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01147->GetYaxis()->CenterTitle(true);
   Graph_Graph01147->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01147->GetYaxis()->SetLabelFont(42);
   Graph_Graph01147->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01147->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01147->GetYaxis()->SetTitleFont(42);
   Graph_Graph01147->GetZaxis()->SetLabelFont(42);
   Graph_Graph01147->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01147);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
