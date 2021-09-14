void S0S12S18_full_AOverMaxDiff_vs_p_trackTruth_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:39:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-0.004535834,3411.2,0.005227859);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1167[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1167[14] = {
   0.001459187,
   0.0002147569,
   0.001193921,
   0.001024568,
   0.001215053,
   0.001666615,
   0.001832606,
   0.00254679,
   0.002396404,
   0.002065509,
   0.001568113,
   0.001559216,
   0.002751627,
   -0.002908552};
   Double_t Graph0_fex1167[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1167[14] = {
   0.00214139,
   0.0003863929,
   0.0002320744,
   0.0001999273,
   0.0001946613,
   0.0002105091,
   0.000238227,
   0.0002738279,
   0.0003147061,
   0.0003440711,
   0.0004156097,
   0.000501206,
   0.0006484891,
   -0.002463941};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1167,Graph0_fy1167,Graph0_fex1167,Graph0_fey1167);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01167 = new TH1F("Graph_Graph01167","",100,0,3280);
   Graph_Graph01167->SetMinimum(-0.003559465);
   Graph_Graph01167->SetMaximum(0.004251489);
   Graph_Graph01167->SetDirectory(0);
   Graph_Graph01167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01167->SetLineColor(ci);
   Graph_Graph01167->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01167->GetXaxis()->SetRange(6,93);
   Graph_Graph01167->GetXaxis()->CenterTitle(true);
   Graph_Graph01167->GetXaxis()->SetLabelFont(42);
   Graph_Graph01167->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01167->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01167->GetXaxis()->SetTitleFont(42);
   Graph_Graph01167->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01167->GetYaxis()->CenterTitle(true);
   Graph_Graph01167->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01167->GetYaxis()->SetLabelFont(42);
   Graph_Graph01167->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01167->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01167->GetYaxis()->SetTitleFont(42);
   Graph_Graph01167->GetZaxis()->SetLabelFont(42);
   Graph_Graph01167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01167);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
