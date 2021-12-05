void Ag2_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:23:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.7742,-0.0172769,3033.201,0.02431446);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[12] = {
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
   Double_t Graph0_fy1013[12] = {
   -0.04648204,
   -0.0202734,
   -0.01697185,
   -0.01151925,
   -0.00353451,
   -0.003350932,
   -0.001032398,
   -0.004298986,
   0.00769595,
   -0.00286559,
   0.0134531,
   0.01694817};
   Double_t Graph0_fex1013[12] = {
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
   Double_t Graph0_fey1013[12] = {
   0.05101895,
   0.02048378,
   0.01511987,
   0.0123637,
   0.01064297,
   0.009477222,
   0.008661151,
   0.008087028,
   0.007726554,
   0.007595298,
   0.007767479,
   0.008719517};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{g#minus2} [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,0,3122.987);
   Graph_Graph01013->SetMinimum(-0.01311776);
   Graph_Graph01013->SetMaximum(0.02015532);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01013->GetXaxis()->SetRange(25,89);
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
