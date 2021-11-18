void S0_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.2748,12.43446,2743.039,13.19397);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[11] = {
   451.6483,
   653.2696,
   879.9299,
   1123.053,
   1371.408,
   1620.742,
   1868.003,
   2116.568,
   2363.181,
   2615.29,
   2789.556};
   Double_t Graph0_fy1029[11] = {
   13.02829,
   12.97506,
   12.90875,
   12.86807,
   12.8035,
   12.78384,
   12.74893,
   12.66711,
   12.657,
   12.66056,
   12.6343};
   Double_t Graph0_fex1029[11] = {
   0.1394032,
   0.1178799,
   0.08603429,
   0.08412167,
   0.08954582,
   0.09885964,
   0.1134626,
   0.1373988,
   0.1719485,
   0.215346,
   0.2483098};
   Double_t Graph0_fey1029[11] = {
   0.03908754,
   0.01571517,
   0.01096947,
   0.010643,
   0.01126811,
   0.01241659,
   0.01423297,
   0.01714291,
   0.02157199,
   0.02740266,
   0.07324999};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","S0_",100,217.6794,3023.634);
   Graph_Graph01029->SetMinimum(12.51041);
   Graph_Graph01029->SetMaximum(13.11802);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(19,82);
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
