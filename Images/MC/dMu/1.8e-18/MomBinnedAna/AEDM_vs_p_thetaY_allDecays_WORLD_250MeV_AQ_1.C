void AEDM_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:23:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.7742,-0.01507233,3033.201,0.1480815);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1012[12] = {
   124.4185,
   373.9942,
   623.7009,
   873.2413,
   1122.796,
   1372.228,
   1621.536,
   1870.683,
   2119.32,
   2367.287,
   2613.166,
   2850.318};
   Double_t Graph0_fy1012[12] = {
   0.130459,
   0.1249744,
   0.09425388,
   0.1098922,
   0.1066752,
   0.09403237,
   0.08479067,
   0.07734909,
   0.04817799,
   0.05676827,
   0.03775679,
   -9.300363e-05};
   Double_t Graph0_fex1012[12] = {
   0.02082145,
   0.02129585,
   0.02188298,
   0.02268914,
   0.02377668,
   0.02523909,
   0.02719482,
   0.02982745,
   0.03354485,
   0.0391942,
   0.04883953,
   0.06956403};
   Double_t Graph0_fey1012[12] = {
   0.05113998,
   0.02050383,
   0.01512323,
   0.01236549,
   0.010646,
   0.009475191,
   0.008629193,
   0.008011056,
   0.007550689,
   0.007240092,
   0.007071887,
   0.007280396};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01012 = new TH1F("Graph_Graph01012","",100,0,3122.987);
   Graph_Graph01012->SetMinimum(0.001243054);
   Graph_Graph01012->SetMaximum(0.1317661);
   Graph_Graph01012->SetDirectory(0);
   Graph_Graph01012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01012->SetLineColor(ci);
   Graph_Graph01012->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01012->GetXaxis()->SetRange(25,89);
   Graph_Graph01012->GetXaxis()->CenterTitle(true);
   Graph_Graph01012->GetXaxis()->SetLabelFont(42);
   Graph_Graph01012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01012->GetXaxis()->SetTitleFont(42);
   Graph_Graph01012->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01012->GetYaxis()->CenterTitle(true);
   Graph_Graph01012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01012->GetYaxis()->SetLabelFont(42);
   Graph_Graph01012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01012->GetYaxis()->SetTitleFont(42);
   Graph_Graph01012->GetZaxis()->SetLabelFont(42);
   Graph_Graph01012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01012);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
