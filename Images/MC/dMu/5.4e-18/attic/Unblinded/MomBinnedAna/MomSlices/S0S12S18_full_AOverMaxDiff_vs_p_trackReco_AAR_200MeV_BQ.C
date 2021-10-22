void S0S12S18_full_AOverMaxDiff_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:37:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-0.005287523,3411.2,0.005947516);
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
   0.00197154,
   0.0002670527,
   0.001075879,
   0.0009184328,
   0.001056129,
   0.001217059,
   0.001559844,
   0.001624255,
   0.001783242,
   0.001669941,
   0.001171038,
   0.001888692,
   0.002088939,
   -0.003415016};
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
   0.00210347,
   0.0003682794,
   0.0002155855,
   0.0001738918,
   0.0001692079,
   0.0001547772,
   0.000175763,
   0.0001749316,
   0.0002490266,
   0.0002644596,
   0.0003086782,
   0.0004836444,
   0.0006284943,
   -0.002719757};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1167,Graph0_fy1167,Graph0_fex1167,Graph0_fey1167);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01167 = new TH1F("Graph_Graph01167","",100,0,3280);
   Graph_Graph01167->SetMinimum(-0.004164019);
   Graph_Graph01167->SetMaximum(0.004824012);
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
