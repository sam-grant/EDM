void eAEDM_vs_p_A_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:23:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.7742,-4.271651e-09,3033.201,4.765458e-08);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[12] = {
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
   Double_t Graph0_fy1022[12] = {
   9.973198e-10,
   1.042679e-09,
   1.136974e-09,
   1.272111e-09,
   1.469958e-09,
   1.759469e-09,
   2.193079e-09,
   2.867925e-09,
   4.008453e-09,
   6.227494e-09,
   1.17299e-08,
   3.6461e-08};
   Double_t Graph0_fex1022[12] = {
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
   Double_t Graph0_fey1022[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltaA_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01022 = new TH1F("Graph_Graph01022","",100,0,3122.987);
   Graph_Graph01022->SetMinimum(9.209729e-10);
   Graph_Graph01022->SetMaximum(4.246196e-08);
   Graph_Graph01022->SetDirectory(0);
   Graph_Graph01022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01022->SetLineColor(ci);
   Graph_Graph01022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01022->GetXaxis()->SetRange(25,89);
   Graph_Graph01022->GetXaxis()->CenterTitle(true);
   Graph_Graph01022->GetXaxis()->SetLabelFont(42);
   Graph_Graph01022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01022->GetXaxis()->SetTitleFont(42);
   Graph_Graph01022->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01022->GetYaxis()->CenterTitle(true);
   Graph_Graph01022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01022->GetYaxis()->SetLabelFont(42);
   Graph_Graph01022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01022->GetYaxis()->SetTitleFont(42);
   Graph_Graph01022->GetZaxis()->SetLabelFont(42);
   Graph_Graph01022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01022);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
