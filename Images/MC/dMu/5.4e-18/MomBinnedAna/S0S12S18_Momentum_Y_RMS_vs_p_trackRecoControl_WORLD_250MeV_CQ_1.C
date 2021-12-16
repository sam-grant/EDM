void S0S12S18_Momentum_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.8815,6.547751,3508.933,29.02657);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1223[12] = {
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
   Double_t Graph0_fy1223[12] = {
   18.02511,
   16.90113,
   18.36018,
   19.68577,
   20.8799,
   21.76708,
   22.21508,
   22.31586,
   21.92459,
   20.91113,
   19.01148,
   16.22244};
   Double_t Graph0_fex1223[12] = {
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
   Double_t Graph0_fey1223[12] = {
   0.1805221,
   0.02753766,
   0.01228744,
   0.008623117,
   0.008318333,
   0.008672219,
   0.009246087,
   0.01005637,
   0.01118278,
   0.01256751,
   0.01442199,
   0.02107738};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1223,Graph0_fy1223,Graph0_fex1223,Graph0_fey1223);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01223 = new TH1F("Graph_Graph01223","S0S12S18_",100,0,3088.17);
   Graph_Graph01223->SetMinimum(8.795633);
   Graph_Graph01223->SetMaximum(26.77868);
   Graph_Graph01223->SetDirectory(0);
   Graph_Graph01223->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01223->SetLineColor(ci);
   Graph_Graph01223->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01223->GetXaxis()->SetRange(1,101);
   Graph_Graph01223->GetXaxis()->CenterTitle(true);
   Graph_Graph01223->GetXaxis()->SetLabelFont(42);
   Graph_Graph01223->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01223->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01223->GetXaxis()->SetTitleFont(42);
   Graph_Graph01223->GetYaxis()->CenterTitle(true);
   Graph_Graph01223->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01223->GetYaxis()->SetLabelFont(42);
   Graph_Graph01223->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01223->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01223->GetYaxis()->SetTitleFont(42);
   Graph_Graph01223->GetZaxis()->SetLabelFont(42);
   Graph_Graph01223->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01223->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01223);
   
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
