void S18_c_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.6871,-1.939743,2741.172,7.11259);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[11] = {
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
   Double_t Graph0_fy1045[11] = {
   5.470787,
   -0.04717616,
   -0.4055723,
   -0.3685658,
   -0.285191,
   -0.2558323,
   -0.2221787,
   -0.1183217,
   -0.1754434,
   -0.0873964,
   -0.1137253};
   Double_t Graph0_fex1045[11] = {
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
   Double_t Graph0_fey1045[11] = {
   0.1330801,
   0.04458755,
   0.02544852,
   0.02086009,
   0.01926776,
   0.01847261,
   0.01884013,
   0.02022367,
   0.02245766,
   0.02309755,
   0.05756188};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S18_",100,218.3765,3021.483);
   Graph_Graph01045->SetMinimum(-1.03451);
   Graph_Graph01045->SetMaximum(6.207356);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01045->GetXaxis()->SetRange(19,82);
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
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
