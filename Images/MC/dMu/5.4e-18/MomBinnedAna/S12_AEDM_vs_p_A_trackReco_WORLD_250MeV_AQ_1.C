void S12_AEDM_vs_p_A_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 18:52:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.556,-1.061581e-07,3035.183,1.341796e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[12] = {
   194.7748,
   428.2916,
   630.898,
   875.2228,
   1123.964,
   1373.246,
   1622.237,
   1870.782,
   2119.254,
   2366.86,
   2612.541,
   2825.967};
   Double_t Graph0_fy1054[12] = {
   -7.08564e-07,
   1.746792e-07,
   4.745396e-08,
   5.823285e-08,
   6.823091e-08,
   1.071132e-07,
   1.154972e-07,
   1.646083e-07,
   1.373309e-07,
   2.048252e-07,
   5.128144e-07,
   9.675975e-07};
   Double_t Graph0_fex1054[12] = {
   0.3340551,
   0.05951737,
   0.04633076,
   0.04453331,
   0.04522431,
   0.04670874,
   0.04919543,
   0.05334962,
   0.06010925,
   0.07061149,
   0.0892903,
   0.1136539};
   Double_t Graph0_fey1054[12] = {
   3.451756e-05,
   5.813492e-08,
   1.136447e-08,
   9.677272e-09,
   1.010079e-08,
   1.112569e-08,
   1.296174e-08,
   1.637019e-08,
   2.29933e-08,
   3.647291e-08,
   7.195765e-08,
   3.460015e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","S12_",100,0,3089.244);
   Graph_Graph01054->SetMinimum(3.863735e-08);
   Graph_Graph01054->SetMaximum(1.197001e-06);
   Graph_Graph01054->SetDirectory(0);
   Graph_Graph01054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01054->SetLineColor(ci);
   Graph_Graph01054->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01054->GetXaxis()->SetRange(25,90);
   Graph_Graph01054->GetXaxis()->CenterTitle(true);
   Graph_Graph01054->GetXaxis()->SetLabelFont(42);
   Graph_Graph01054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01054->GetXaxis()->SetTitleFont(42);
   Graph_Graph01054->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01054->GetYaxis()->CenterTitle(true);
   Graph_Graph01054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01054->GetYaxis()->SetLabelFont(42);
   Graph_Graph01054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01054->GetYaxis()->SetTitleFont(42);
   Graph_Graph01054->GetZaxis()->SetLabelFont(42);
   Graph_Graph01054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01054);
   
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
