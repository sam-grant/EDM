void Ag2_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 01:37:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-394.3025,-0.04734018,3548.722,0.1086822);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[12] = {
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
   Double_t Graph0_fy1037[12] = {
   0.03255524,
   -0.01753113,
   -0.03982518,
   -0.03399862,
   -0.0289057,
   -0.02539698,
   -0.01865887,
   -0.001377139,
   -0.007184141,
   -0.003257866,
   -0.01581142,
   -0.01399599};
   Double_t Graph0_fex1037[12] = {
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
   Double_t Graph0_fey1037[12] = {
   0.05643269,
   0.022606,
   0.01664831,
   0.0135568,
   0.01162928,
   0.01032971,
   0.009422814,
   0.008805332,
   0.008437246,
   0.008311237,
   0.008534654,
   0.009564846};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{g#minus2} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","",100,0,3123.188);
   Graph_Graph01037->SetMinimum(-0.03173794);
   Graph_Graph01037->SetMaximum(0.09307994);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(1,101);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
