void S0S12S18_full_AOverMaxDiff_vs_p_trackReco2_AAR_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 30 11:51:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-0.01605469,3419.625,0.006159867);
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
   -0.01235226,
   0.0006310114,
   0.0009577151,
   0.001462581,
   0.0008158985,
   0.001689992,
   0.001701203,
   0.001604308,
   0.001915704,
   0.001900395,
   0.002006541,
   0.0001618645};
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
   -0.004159557,
   0.0005700648,
   0.0003644083,
   0.0002473069,
   0.0001712196,
   0.0002637157,
   0.000260584,
   0.0002539217,
   0.0003199983,
   0.0004371573,
   0.0004508991,
   0.0004742812};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1147,Graph0_fy1147,Graph0_fex1147,Graph0_fey1147);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01147 = new TH1F("Graph_Graph01147","",100,0,3300);
   Graph_Graph01147->SetMinimum(-0.01383323);
   Graph_Graph01147->SetMaximum(0.003938411);
   Graph_Graph01147->SetDirectory(0);
   Graph_Graph01147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01147->SetLineColor(ci);
   Graph_Graph01147->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01147->GetXaxis()->SetRange(0,92);
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
