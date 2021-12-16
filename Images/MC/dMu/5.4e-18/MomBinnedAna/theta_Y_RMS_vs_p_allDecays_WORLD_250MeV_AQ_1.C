void theta_Y_RMS_vs_p_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 00:19:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-394.2727,-27.47733,3548.454,259.2291);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[12] = {
   124.3988,
   374.0376,
   623.6681,
   873.2521,
   1122.83,
   1372.241,
   1621.489,
   1870.59,
   2119.347,
   2367.262,
   2613.214,
   2850.256};
   Double_t Graph0_fy1041[12] = {
   124.4519,
   49.15926,
   35.2629,
   27.80517,
   22.82609,
   19.13669,
   16.17479,
   13.68601,
   11.45068,
   9.361656,
   7.285205,
   5.021946};
   Double_t Graph0_fex1041[12] = {
   0.02929449,
   0.0299445,
   0.03076586,
   0.03189946,
   0.03344109,
   0.03552055,
   0.03823304,
   0.04193465,
   0.04715784,
   0.05508997,
   0.06872581,
   0.0977494};
   Double_t Graph0_fey1041[12] = {
   0.03601023,
   0.01442915,
   0.01063546,
   0.008697141,
   0.007484273,
   0.0066631,
   0.006066827,
   0.005632263,
   0.005308003,
   0.005083648,
   0.004966328,
   0.005107223};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#sigma#theta_{y} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","",100,0,3122.952);
   Graph_Graph01041->SetMinimum(1.193321);
   Graph_Graph01041->SetMaximum(230.5585);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->SetRange(1,101);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
