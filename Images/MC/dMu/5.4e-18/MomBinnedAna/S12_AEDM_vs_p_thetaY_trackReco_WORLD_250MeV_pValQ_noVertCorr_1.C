void S12_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:48:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5584,-0.2524933,3407.026,1.13129);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[12] = {
   189.5502,
   430.4081,
   629.9783,
   874.0959,
   1123.062,
   1372.523,
   1621.75,
   1870.433,
   2119.14,
   2366.938,
   2612.615,
   2826.429};
   Double_t Graph0_fy1099[12] = {
   0.4393983,
   0.1657036,
   0.095294,
   0.1456141,
   0.1502074,
   0.17727,
   0.1709625,
   0.156775,
   0.1315816,
   0.0980938,
   0.09383441,
   0.06816479};
   Double_t Graph0_fex1099[12] = {
   0.4410399,
   0.04598832,
   0.03725247,
   0.03688839,
   0.03835217,
   0.0403852,
   0.04321711,
   0.04742848,
   0.05379875,
   0.06324179,
   0.07984952,
   0.1016232};
   Double_t Graph0_fey1099[12] = {
   0.4612611,
   0.04231503,
   0.02034168,
   0.01642552,
   0.01440521,
   0.01297342,
   0.01195238,
   0.01131615,
   0.01099254,
   0.01086402,
   0.01116797,
   0.01499915};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S12_",100,0,3090.273);
   Graph_Graph01099->SetMinimum(-0.1141149);
   Graph_Graph01099->SetMaximum(0.9929116);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01099->GetXaxis()->SetRange(1,98);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
