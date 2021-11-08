void S12S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov  3 15:54:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.002120576,2750,0.004646542);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[11] = {
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
   Double_t Graph0_fy1054[11] = {
   -0.0004580888,
   0.001041473,
   0.0008405461,
   0.001232161,
   0.0009215287,
   0.00136119,
   0.00203331,
   0.00134844,
   0.001170586,
   0.002959365,
   0.0007686159};
   Double_t Graph0_fex1054[11] = {
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
   Double_t Graph0_fey1054[11] = {
   -0.0007446834,
   0.0002809685,
   0.0001895368,
   0.0001906865,
   0.0001709626,
   0.000182372,
   0.000275866,
   0.0002917173,
   0.0003844469,
   0.0005593241,
   0.001761339};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","S12S18_",100,125,3125);
   Graph_Graph01054->SetMinimum(-0.001443865);
   Graph_Graph01054->SetMaximum(0.00396983);
   Graph_Graph01054->SetDirectory(0);
   Graph_Graph01054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01054->SetLineColor(ci);
   Graph_Graph01054->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01054->GetXaxis()->SetRange(21,80);
   Graph_Graph01054->GetXaxis()->CenterTitle(true);
   Graph_Graph01054->GetXaxis()->SetLabelFont(42);
   Graph_Graph01054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01054->GetXaxis()->SetTitleFont(42);
   Graph_Graph01054->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_Graph01054->GetYaxis()->CenterTitle(true);
   Graph_Graph01054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01054->GetYaxis()->SetLabelFont(42);
   Graph_Graph01054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01054->GetYaxis()->SetTitleFont(42);
   Graph_Graph01054->GetZaxis()->SetLabelFont(42);
   Graph_Graph01054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01054);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
