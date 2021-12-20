void theta_Y_RMS_vs_p_allDecays_WORLD_250MeV_AQ_accepted_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec 16 15:20:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-394.3025,-27.44781,3548.722,259.4943);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[12] = {
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
   Double_t Graph0_fy1041[12] = {
   124.4424,
   48.89674,
   34.80086,
   27.15537,
   22.13171,
   18.4519,
   15.57768,
   13.21345,
   11.13052,
   9.178979,
   7.20826,
   4.999726};
   Double_t Graph0_fex1041[12] = {
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
   Double_t Graph0_fey1041[12] = {
   0.02826751,
   0.01131079,
   0.008315281,
   0.006770725,
   0.005809148,
   0.005155117,
   0.004691096,
   0.004356213,
   0.004115873,
   0.003955263,
   0.003878046,
   0.003998959};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#sigma#theta_{y} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","",100,0,3123.188);
   Graph_Graph01041->SetMinimum(1.2464);
   Graph_Graph01041->SetMaximum(230.8001);
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
