void S0S12S18_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.8815,-0.002138436,3508.933,0.02090082);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1228[12] = {
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
   Double_t Graph0_fy1228[12] = {
   0.007580475,
   0.0008775461,
   0.000462645,
   0.0007328529,
   0.000692651,
   0.0009058565,
   0.0008212929,
   0.000881715,
   0.0005725638,
   0.0005469514,
   0.0004769314,
   0.0003829764};
   Double_t Graph0_fex1228[12] = {
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
   Double_t Graph0_fey1228[12] = {
   0.005141456,
   0.000633669,
   0.0002065704,
   0.0001086365,
   8.275267e-05,
   7.121521e-05,
   6.489621e-05,
   6.185109e-05,
   6.123242e-05,
   6.224362e-05,
   6.6413e-05,
   9.648445e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1228,Graph0_fy1228,Graph0_fex1228,Graph0_fey1228);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01228 = new TH1F("Graph_Graph01228","S0S12S18_",100,0,3088.17);
   Graph_Graph01228->SetMinimum(0.0001654901);
   Graph_Graph01228->SetMaximum(0.01859689);
   Graph_Graph01228->SetDirectory(0);
   Graph_Graph01228->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01228->SetLineColor(ci);
   Graph_Graph01228->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01228->GetXaxis()->SetRange(1,101);
   Graph_Graph01228->GetXaxis()->CenterTitle(true);
   Graph_Graph01228->GetXaxis()->SetLabelFont(42);
   Graph_Graph01228->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01228->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01228->GetXaxis()->SetTitleFont(42);
   Graph_Graph01228->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01228->GetYaxis()->CenterTitle(true);
   Graph_Graph01228->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01228->GetYaxis()->SetLabelFont(42);
   Graph_Graph01228->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01228->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01228->GetYaxis()->SetTitleFont(42);
   Graph_Graph01228->GetZaxis()->SetLabelFont(42);
   Graph_Graph01228->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01228);
   
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
