void S18_eAEDM_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.6871,-0.01446767,2741.172,0.2282923);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[11] = {
   452.1104,
   653.26,
   880.6366,
   1123.036,
   1370.834,
   1619.676,
   1866.35,
   2115.144,
   2363.227,
   2612.273,
   2787.595};
   Double_t Graph0_fy1052[11] = {
   0.1878323,
   0.06292847,
   0.0359447,
   0.02949835,
   0.02721359,
   0.02599233,
   0.02643222,
   0.02798179,
   0.03035426,
   0.02983907,
   0.07052009};
   Double_t Graph0_fex1052[11] = {
   0.1416981,
   0.119353,
   0.08608209,
   0.08397555,
   0.09008487,
   0.09987451,
   0.1176511,
   0.1481012,
   0.1939201,
   0.2319183,
   0.2963839};
   Double_t Graph0_fey1052[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","S18_",100,218.3765,3021.483);
   Graph_Graph01052->SetMinimum(0.009808331);
   Graph_Graph01052->SetMaximum(0.2040163);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01052->GetXaxis()->SetRange(19,82);
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01052->GetYaxis()->CenterTitle(true);
   Graph_Graph01052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01052->GetYaxis()->SetLabelFont(42);
   Graph_Graph01052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01052->GetYaxis()->SetTitleFont(42);
   Graph_Graph01052->GetZaxis()->SetLabelFont(42);
   Graph_Graph01052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01052);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
