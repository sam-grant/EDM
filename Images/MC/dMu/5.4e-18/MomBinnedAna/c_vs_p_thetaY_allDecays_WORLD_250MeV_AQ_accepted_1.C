void c_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_accepted_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec 16 15:20:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-394.3025,-0.3405014,3548.722,1.550777);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[12] = {
   124.2539,
   373.7923,
   623.4572,
   873.0274,
   1122.67,
   1372.178,
   1621.49,
   1870.756,
   2119.553,
   2367.462,
   2613.359,
   2850.479};
   Double_t Graph0_fy1035[12] = {
   0.6830644,
   0.1804991,
   -0.04523874,
   -0.1445694,
   -0.1892499,
   -0.1881297,
   -0.1719198,
   -0.1429814,
   -0.08747907,
   -0.03860175,
   -0.008945207,
   0.0014786};
   Double_t Graph0_fex1035[12] = {
   0.02299459,
   0.02360158,
   0.02437509,
   0.02543063,
   0.02676917,
   0.02849841,
   0.03070777,
   0.03358955,
   0.03763698,
   0.04372902,
   0.05423158,
   0.07692297};
   Double_t Graph0_fey1035[12] = {
   0.03992494,
   0.01598347,
   0.01176198,
   0.009577849,
   0.008215523,
   0.007295225,
   0.006656178,
   0.006220932,
   0.005961284,
   0.005875054,
   0.006033067,
   0.00675979};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","",100,0,3123.188);
   Graph_Graph01035->SetMinimum(-0.1513736);
   Graph_Graph01035->SetMaximum(1.361649);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(1,101);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
