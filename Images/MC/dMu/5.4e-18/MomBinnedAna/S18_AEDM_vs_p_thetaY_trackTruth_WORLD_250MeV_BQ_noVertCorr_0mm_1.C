void S18_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 12:13:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.701,-0.5697825,3381.025,0.4190037);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1132[11] = {
   452.1447,
   653.3571,
   880.6174,
   1122.952,
   1370.903,
   1620.012,
   1866.685,
   2114.399,
   2363.275,
   2613.247,
   2792.063};
   Double_t Graph0_fy1132[11] = {
   -0.2101243,
   0.1890487,
   0.125068,
   0.1146253,
   0.1392844,
   0.1532333,
   0.09838773,
   0.07679695,
   0.05466878,
   0.1339357,
   -0.0368524};
   Double_t Graph0_fex1132[11] = {
   0.1468164,
   0.1240094,
   0.0897857,
   0.08771491,
   0.09427707,
   0.1045591,
   0.122761,
   0.1539366,
   0.2036003,
   0.2448893,
   0.3479271};
   Double_t Graph0_fey1132[11] = {
   0.1948605,
   0.0651573,
   0.03744879,
   0.03075209,
   0.02845225,
   0.02717053,
   0.0274498,
   0.02916971,
   0.03168918,
   0.03121631,
   0.06900551};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1132,Graph0_fy1132,Graph0_fex1132,Graph0_fey1132);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01132 = new TH1F("Graph_Graph01132","S18_",100,217.9566,3026.453);
   Graph_Graph01132->SetMinimum(-0.4709038);
   Graph_Graph01132->SetMaximum(0.3201251);
   Graph_Graph01132->SetDirectory(0);
   Graph_Graph01132->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01132->SetLineColor(ci);
   Graph_Graph01132->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01132->GetXaxis()->SetRange(0,100);
   Graph_Graph01132->GetXaxis()->CenterTitle(true);
   Graph_Graph01132->GetXaxis()->SetLabelFont(42);
   Graph_Graph01132->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01132->GetXaxis()->SetTitleFont(42);
   Graph_Graph01132->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01132->GetYaxis()->CenterTitle(true);
   Graph_Graph01132->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01132->GetYaxis()->SetLabelFont(42);
   Graph_Graph01132->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01132->GetYaxis()->SetTitleFont(42);
   Graph_Graph01132->GetZaxis()->SetLabelFont(42);
   Graph_Graph01132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01132->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01132);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
