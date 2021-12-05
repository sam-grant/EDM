void c_vs_p_A_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:23:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.7742,-3.396578e-09,3033.201,1.831168e-08);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[12] = {
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
   Double_t Graph0_fy1014[12] = {
   1.142771e-08,
   8.252099e-09,
   5.14682e-09,
   4.277126e-09,
   2.668183e-09,
   1.050713e-09,
   2.220973e-09,
   -1.187272e-09,
   4.97842e-11,
   -1.580089e-09,
   5.687799e-09,
   1.380384e-08};
   Double_t Graph0_fex1014[12] = {
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
   Double_t Graph0_fey1014[12] = {
   7.511315e-10,
   7.791107e-10,
   8.349805e-10,
   9.164498e-10,
   1.042934e-09,
   1.245851e-09,
   1.584823e-09,
   2.187147e-09,
   3.37119e-09,
   6.041048e-09,
   1.361291e-08,
   5.05215e-08};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];c / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,0,3122.987);
   Graph_Graph01014->SetMinimum(-1.225752e-09);
   Graph_Graph01014->SetMaximum(1.614086e-08);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01014->GetXaxis()->SetRange(25,89);
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
