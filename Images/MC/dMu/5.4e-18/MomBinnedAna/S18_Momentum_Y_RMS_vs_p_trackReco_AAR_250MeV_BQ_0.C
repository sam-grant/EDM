void S18_Momentum_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:36:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.6871,11.7541,2741.172,23.32691);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1050[11] = {
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
   Double_t Graph0_fy1050[11] = {
   14.01132,
   16.64771,
   18.50235,
   20.00559,
   21.02046,
   21.37707,
   21.14668,
   20.22145,
   18.71214,
   16.31069,
   13.78245};
   Double_t Graph0_fex1050[11] = {
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
   Double_t Graph0_fey1050[11] = {
   0.0424449,
   0.0203757,
   0.0157429,
   0.01649445,
   0.01860831,
   0.02103663,
   0.0245587,
   0.02948466,
   0.03572658,
   0.03879432,
   0.09954924};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01050 = new TH1F("Graph_Graph01050","S18_",100,218.3765,3021.483);
   Graph_Graph01050->SetMinimum(12.91138);
   Graph_Graph01050->SetMaximum(22.16963);
   Graph_Graph01050->SetDirectory(0);
   Graph_Graph01050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01050->SetLineColor(ci);
   Graph_Graph01050->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01050->GetXaxis()->SetRange(19,82);
   Graph_Graph01050->GetXaxis()->CenterTitle(true);
   Graph_Graph01050->GetXaxis()->SetLabelFont(42);
   Graph_Graph01050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetXaxis()->SetTitleFont(42);
   Graph_Graph01050->GetYaxis()->CenterTitle(true);
   Graph_Graph01050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01050->GetYaxis()->SetLabelFont(42);
   Graph_Graph01050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01050->GetYaxis()->SetTitleFont(42);
   Graph_Graph01050->GetZaxis()->SetLabelFont(42);
   Graph_Graph01050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01050);
   
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
