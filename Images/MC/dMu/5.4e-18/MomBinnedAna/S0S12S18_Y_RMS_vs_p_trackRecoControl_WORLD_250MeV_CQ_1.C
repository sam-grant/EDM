void S0S12S18_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.8815,6.893865,3508.933,55.52925);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1222[12] = {
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
   Double_t Graph0_fy1222[12] = {
   29.72529,
   19.14536,
   16.52837,
   15.42134,
   14.86469,
   14.69415,
   14.7994,
   15.13548,
   15.5489,
   16.12477,
   16.8365,
   17.87458};
   Double_t Graph0_fex1222[12] = {
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
   Double_t Graph0_fey1222[12] = {
   0.4213917,
   0.03139748,
   0.01108245,
   0.006758383,
   0.005919788,
   0.005848708,
   0.006152066,
   0.00681097,
   0.007925429,
   0.009697408,
   0.01282556,
   0.02350885};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1222,Graph0_fy1222,Graph0_fex1222,Graph0_fey1222);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01222 = new TH1F("Graph_Graph01222","S0S12S18_",100,0,3088.17);
   Graph_Graph01222->SetMinimum(11.7574);
   Graph_Graph01222->SetMaximum(50.66571);
   Graph_Graph01222->SetDirectory(0);
   Graph_Graph01222->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01222->SetLineColor(ci);
   Graph_Graph01222->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01222->GetXaxis()->SetRange(1,101);
   Graph_Graph01222->GetXaxis()->CenterTitle(true);
   Graph_Graph01222->GetXaxis()->SetLabelFont(42);
   Graph_Graph01222->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01222->GetXaxis()->SetTitleFont(42);
   Graph_Graph01222->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01222->GetYaxis()->CenterTitle(true);
   Graph_Graph01222->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01222->GetYaxis()->SetLabelFont(42);
   Graph_Graph01222->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01222->GetYaxis()->SetTitleFont(42);
   Graph_Graph01222->GetZaxis()->SetLabelFont(42);
   Graph_Graph01222->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01222->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01222);
   
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
