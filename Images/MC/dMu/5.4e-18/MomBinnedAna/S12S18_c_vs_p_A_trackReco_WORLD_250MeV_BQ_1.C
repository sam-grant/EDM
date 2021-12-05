void S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:01:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.9439,-1.717451e-05,3025.006,2.018671e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1083[11] = {
   451.859,
   653.3117,
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266,
   2787.684};
   Double_t Graph0_fy1083[11] = {
   1.092534e-05,
   -9.842956e-08,
   -7.070644e-08,
   -5.839928e-08,
   -6.794767e-08,
   -3.962553e-08,
   5.518785e-09,
   3.983665e-08,
   2.933601e-08,
   -4.239974e-07,
   -1.476691e-05};
   Double_t Graph0_fex1083[11] = {
   0.09988357,
   0.08417764,
   0.06086071,
   0.05941364,
   0.06350369,
   0.07028425,
   0.08235894,
   0.1033696,
   0.1351177,
   0.1638907,
   0.205084};
   Double_t Graph0_fey1083[11] = {
   8.08606e-07,
   5.495713e-08,
   1.801267e-08,
   1.630956e-08,
   1.99648e-08,
   2.769859e-08,
   4.667036e-08,
   9.874603e-08,
   2.459667e-07,
   5.664781e-07,
   1.566967e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1083,Graph0_fy1083,Graph0_fex1083,Graph0_fey1083);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01083 = new TH1F("Graph_Graph01083","S12S18_",100,218.1461,3021.502);
   Graph_Graph01083->SetMinimum(-1.52552e-05);
   Graph_Graph01083->SetMaximum(9.935251e-08);
   Graph_Graph01083->SetDirectory(0);
   Graph_Graph01083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01083->SetLineColor(ci);
   Graph_Graph01083->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01083->GetXaxis()->SetRange(19,91);
   Graph_Graph01083->GetXaxis()->CenterTitle(true);
   Graph_Graph01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph01083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph01083->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01083->GetYaxis()->CenterTitle(true);
   Graph_Graph01083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph01083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph01083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01083);
   
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
