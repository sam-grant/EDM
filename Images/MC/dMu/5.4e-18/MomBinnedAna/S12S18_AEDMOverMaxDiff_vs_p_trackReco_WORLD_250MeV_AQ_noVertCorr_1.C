void S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.363,-0.0004823121,3405.267,0.00664156);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1189[12] = {
   194.4445,
   428.4545,
   630.9718,
   875.1739,
   1123.98,
   1373.206,
   1622.299,
   1870.747,
   2119.212,
   2366.758,
   2612.558,
   2825.495};
   Double_t Graph0_fy1189[12] = {
   0.003954725,
   0.000719477,
   0.0005841133,
   0.000891697,
   0.0008408941,
   0.000930271,
   0.000835588,
   0.0007833199,
   0.0006884061,
   0.0005974706,
   0.0005169127,
   0.0003077408};
   Double_t Graph0_fex1189[12] = {
   0.1644884,
   0.02888287,
   0.02243204,
   0.0215649,
   0.02191618,
   0.02263395,
   0.02384128,
   0.02587955,
   0.02915093,
   0.0343403,
   0.04346513,
   0.05528534};
   Double_t Graph0_fey1189[12] = {
   0.001458673,
   0.0001421183,
   6.75715e-05,
   5.309178e-05,
   4.560972e-05,
   4.042278e-05,
   3.679602e-05,
   3.462889e-05,
   3.365984e-05,
   3.386144e-05,
   3.57783e-05,
   5.21017e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1189,Graph0_fy1189,Graph0_fex1189,Graph0_fey1189);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01189 = new TH1F("Graph_Graph01189","S12S18_",100,0,3088.677);
   Graph_Graph01189->SetMinimum(0.0002300752);
   Graph_Graph01189->SetMaximum(0.005929173);
   Graph_Graph01189->SetDirectory(0);
   Graph_Graph01189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01189->SetLineColor(ci);
   Graph_Graph01189->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01189->GetXaxis()->SetRange(1,98);
   Graph_Graph01189->GetXaxis()->CenterTitle(true);
   Graph_Graph01189->GetXaxis()->SetLabelFont(42);
   Graph_Graph01189->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01189->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01189->GetXaxis()->SetTitleFont(42);
   Graph_Graph01189->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01189->GetYaxis()->CenterTitle(true);
   Graph_Graph01189->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01189->GetYaxis()->SetLabelFont(42);
   Graph_Graph01189->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01189->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01189->GetYaxis()->SetTitleFont(42);
   Graph_Graph01189->GetZaxis()->SetLabelFont(42);
   Graph_Graph01189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01189->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01189);
   
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
