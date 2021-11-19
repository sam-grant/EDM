void S12S18_AEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:38:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.258654,-0.000129498,3236.722,3.005007e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
   451.9949,
   653.3669,
   880.454,
   1123.025,
   1371.064,
   1620.017,
   1866.622,
   2114.931,
   2362.945,
   2613.149,
   2791.844};
   Double_t Graph0_fy1082[11] = {
   -3.368085e-06,
   9.18552e-08,
   -7.130891e-09,
   1.824955e-08,
   1.99203e-08,
   -1.336622e-07,
   -5.030916e-07,
   -9.631751e-08,
   -1.476733e-06,
   -1.754758e-06,
   -4.972395e-05};
   Double_t Graph0_fex1082[11] = {
   0.1000258,
   0.08428856,
   0.06088123,
   0.05943925,
   0.06348874,
   0.07027167,
   0.08235643,
   0.1031152,
   0.1349942,
   0.163873,
   0.2409183};
   Double_t Graph0_fey1082[11] = {
   3.350217e-06,
   2.288861e-07,
   7.645986e-08,
   6.93807e-08,
   8.44789e-08,
   1.173498e-07,
   1.949207e-07,
   4.073587e-07,
   9.840442e-07,
   2.19242e-06,
   5.318268e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S12S18_",100,217.8758,3026.104);
   Graph_Graph01082->SetMinimum(-0.0001135432);
   Graph_Graph01082->SetMaximum(1.409527e-05);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01082->GetXaxis()->SetRange(5,96);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{EDM}");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
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
