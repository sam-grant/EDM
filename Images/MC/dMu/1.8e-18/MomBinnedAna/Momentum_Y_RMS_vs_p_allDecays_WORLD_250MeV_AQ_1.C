void Momentum_Y_RMS_vs_p_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:23:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.7742,9.047715,3033.201,33.86617);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[12] = {
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
   Double_t Graph0_fy1019[12] = {
   10.85266,
   17.89877,
   21.74266,
   24.11102,
   25.50762,
   26.15402,
   26.14046,
   25.50248,
   24.1826,
   22.09367,
   18.94039,
   14.20596};
   Double_t Graph0_fex1019[12] = {
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
   Double_t Graph0_fey1019[12] = {
   0.002219843,
   0.003735124,
   0.004663983,
   0.005362675,
   0.005946724,
   0.006474371,
   0.006973337,
   0.007466961,
   0.007974396,
   0.008533729,
   0.009186559,
   0.0102906};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","",100,0,3122.987);
   Graph_Graph01019->SetMinimum(11.52956);
   Graph_Graph01019->SetMaximum(31.38432);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01019->GetXaxis()->SetRange(25,89);
   Graph_Graph01019->GetXaxis()->CenterTitle(true);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->CenterTitle(true);
   Graph_Graph01019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
