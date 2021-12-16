void S0S12S18_Ag2_vs_p_A_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.8815,-0.0001430023,3508.933,0.001240837);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1220[12] = {
   189.6117,
   434.8133,
   652.5915,
   883.8391,
   1126.202,
   1373.788,
   1622.437,
   1870.724,
   2119.217,
   2366.762,
   2613.527,
   2824.515};
   Double_t Graph0_fy1220[12] = {
   0.0004207975,
   -7.642411e-07,
   -1.137886e-08,
   -3.837921e-09,
   -1.18447e-08,
   7.800444e-09,
   -1.854245e-08,
   1.067352e-09,
   -1.900642e-08,
   -1.363546e-07,
   -4.982192e-07,
   -2.33327e-06};
   Double_t Graph0_fex1220[12] = {
   0.6020541,
   0.1166688,
   0.0647508,
   0.04374749,
   0.04049387,
   0.04048471,
   0.04220934,
   0.04562989,
   0.05158525,
   0.06063771,
   0.07618059,
   0.09502246};
   Double_t Graph0_fey1220[12] = {
   0.0001836356,
   5.043089e-07,
   3.516418e-08,
   9.743764e-09,
   7.298066e-09,
   7.295282e-09,
   8.425552e-09,
   1.100447e-08,
   1.688717e-08,
   3.000657e-08,
   6.644541e-08,
   3.602376e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1220,Graph0_fy1220,Graph0_fex1220,Graph0_fey1220);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01220 = new TH1F("Graph_Graph01220","S0S12S18_",100,0,3088.17);
   Graph_Graph01220->SetMinimum(-4.61838e-06);
   Graph_Graph01220->SetMaximum(0.001102453);
   Graph_Graph01220->SetDirectory(0);
   Graph_Graph01220->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01220->SetLineColor(ci);
   Graph_Graph01220->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01220->GetXaxis()->SetRange(1,101);
   Graph_Graph01220->GetXaxis()->CenterTitle(true);
   Graph_Graph01220->GetXaxis()->SetLabelFont(42);
   Graph_Graph01220->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01220->GetXaxis()->SetTitleFont(42);
   Graph_Graph01220->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01220->GetYaxis()->CenterTitle(true);
   Graph_Graph01220->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01220->GetYaxis()->SetLabelFont(42);
   Graph_Graph01220->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01220->GetYaxis()->SetTitleFont(42);
   Graph_Graph01220->GetZaxis()->SetLabelFont(42);
   Graph_Graph01220->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01220->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01220);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
