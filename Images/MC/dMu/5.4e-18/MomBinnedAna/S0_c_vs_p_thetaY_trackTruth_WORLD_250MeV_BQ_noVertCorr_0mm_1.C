void S0_c_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:52:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.4461,-1.74521,3381.552,7.150826);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[11] = {
   451.6447,
   653.3486,
   879.8114,
   1123.227,
   1371.481,
   1620.746,
   1868.066,
   2116.654,
   2363.704,
   2615.694,
   2792.389};
   Double_t Graph0_fy1057[11] = {
   5.504195,
   0.08764291,
   -0.2310697,
   -0.1661725,
   -0.1345185,
   -0.1552689,
   -0.1013075,
   -0.02502992,
   -0.02262693,
   -0.05225578,
   -0.03886218};
   Double_t Graph0_fex1057[11] = {
   0.1707352,
   0.1455027,
   0.1059043,
   0.1035803,
   0.1102053,
   0.1218889,
   0.1397139,
   0.1687025,
   0.2119762,
   0.2651184,
   0.3376591};
   Double_t Graph0_fey1057[11] = {
   0.1639583,
   0.05469628,
   0.03146755,
   0.02587662,
   0.02362639,
   0.02251678,
   0.02230589,
   0.02317601,
   0.02464138,
   0.0254681,
   0.055213};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","S0_",100,217.3487,3026.852);
   Graph_Graph01057->SetMinimum(-0.8556063);
   Graph_Graph01057->SetMaximum(6.261222);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01057->GetXaxis()->SetRange(0,100);
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
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
