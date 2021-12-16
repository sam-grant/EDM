void S0S12S18_eAEDM_vs_p_A_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.8815,-5.44405e-05,3508.933,0.0004900224);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1226[12] = {
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
   Double_t Graph0_fy1226[12] = {
   0.0001666903,
   5.002712e-07,
   3.461024e-08,
   9.673297e-09,
   7.260588e-09,
   7.244562e-09,
   8.191427e-09,
   1.02707e-08,
   1.457065e-08,
   2.304581e-08,
   4.44559e-08,
   2.116003e-07};
   Double_t Graph0_fex1226[12] = {
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
   Double_t Graph0_fey1226[12] = {
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1226,Graph0_fy1226,Graph0_fex1226,Graph0_fey1226);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01226 = new TH1F("Graph_Graph01226","S0S12S18_",100,0,3088.17);
   Graph_Graph01226->SetMinimum(5.795845e-09);
   Graph_Graph01226->SetMaximum(0.0004355761);
   Graph_Graph01226->SetDirectory(0);
   Graph_Graph01226->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01226->SetLineColor(ci);
   Graph_Graph01226->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01226->GetXaxis()->SetRange(1,101);
   Graph_Graph01226->GetXaxis()->CenterTitle(true);
   Graph_Graph01226->GetXaxis()->SetLabelFont(42);
   Graph_Graph01226->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01226->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01226->GetXaxis()->SetTitleFont(42);
   Graph_Graph01226->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01226->GetYaxis()->CenterTitle(true);
   Graph_Graph01226->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01226->GetYaxis()->SetLabelFont(42);
   Graph_Graph01226->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01226->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01226->GetYaxis()->SetTitleFont(42);
   Graph_Graph01226->GetZaxis()->SetLabelFont(42);
   Graph_Graph01226->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01226->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01226);
   
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
