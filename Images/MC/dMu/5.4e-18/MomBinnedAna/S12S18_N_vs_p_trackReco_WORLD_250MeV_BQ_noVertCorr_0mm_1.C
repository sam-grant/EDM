void S12S18_N_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 17:19:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.0403,-167665.1,3376.103,1678033);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1177[11] = {
   451.7906,
   653.3381,
   880.3133,
   1123.171,
   1371.103,
   1619.829,
   1866.886,
   2114.711,
   2362.816,
   2613.58,
   2788.198};
   Double_t Graph0_fy1177[11] = {
   102956,
   625161,
   1282326,
   1359401,
   1186213,
   961501,
   699228,
   443395,
   257431,
   163990,
   18783};
   Double_t Graph0_fex1177[11] = {
   0.1029682,
   0.08713116,
   0.06318328,
   0.06178875,
   0.06609423,
   0.07323922,
   0.08581312,
   0.1078003,
   0.1415249,
   0.1715609,
   0.2183682};
   Double_t Graph0_fey1177[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1177,Graph0_fy1177,Graph0_fex1177,Graph0_fey1177);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01177 = new TH1F("Graph_Graph01177","S12S18_",100,218.0148,3022.089);
   Graph_Graph01177->SetMinimum(16904.7);
   Graph_Graph01177->SetMaximum(1493463);
   Graph_Graph01177->SetDirectory(0);
   Graph_Graph01177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01177->SetLineColor(ci);
   Graph_Graph01177->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01177->GetXaxis()->SetRange(0,100);
   Graph_Graph01177->GetXaxis()->CenterTitle(true);
   Graph_Graph01177->GetXaxis()->SetLabelFont(42);
   Graph_Graph01177->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01177->GetXaxis()->SetTitleFont(42);
   Graph_Graph01177->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01177->GetYaxis()->CenterTitle(true);
   Graph_Graph01177->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01177->GetYaxis()->SetLabelFont(42);
   Graph_Graph01177->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01177->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01177->GetYaxis()->SetTitleFont(42);
   Graph_Graph01177->GetZaxis()->SetLabelFont(42);
   Graph_Graph01177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01177);
   
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
