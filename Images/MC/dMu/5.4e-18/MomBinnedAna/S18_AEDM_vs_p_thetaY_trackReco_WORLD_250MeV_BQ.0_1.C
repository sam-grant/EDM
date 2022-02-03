void S18_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4911,-0.261677,3407.421,1.187633);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1132[11] = {
   451.955,
   653.2003,
   880.4912,
   1123.059,
   1370.838,
   1619.616,
   1866.457,
   2115.103,
   2363.145,
   2612.952,
   2787.692};
   Double_t Graph0_fy1132[11] = {
   0.1897296,
   -0.05790576,
   -0.09181757,
   -0.1009163,
   -0.1350552,
   -0.1271695,
   -0.1394866,
   -0.1027772,
   -0.03072905,
   -0.1473099,
   -0.07581509};
   Double_t Graph0_fex1132[11] = {
   0.2619298,
   0.2197995,
   0.1585408,
   0.1542059,
   0.1651759,
   0.1833712,
   0.2162876,
   0.2717578,
   0.3567738,
   0.4271346,
   0.5445739};
   Double_t Graph0_fey1132[11] = {
   0.3453035,
   0.1154944,
   0.0661055,
   0.05411941,
   0.04994334,
   0.04773686,
   0.04857106,
   0.05138721,
   0.0559692,
   0.05463227,
   0.1270182};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1132,Graph0_fy1132,Graph0_fex1132,Graph0_fey1132);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01132 = new TH1F("Graph_Graph01132","S18_",100,218.0387,3021.891);
   Graph_Graph01132->SetMinimum(-0.116746);
   Graph_Graph01132->SetMaximum(1.042702);
   Graph_Graph01132->SetDirectory(0);
   Graph_Graph01132->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01132->SetLineColor(ci);
   Graph_Graph01132->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01132->GetXaxis()->SetRange(0,101);
   Graph_Graph01132->GetXaxis()->CenterTitle(true);
   Graph_Graph01132->GetXaxis()->SetLabelFont(42);
   Graph_Graph01132->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01132->GetXaxis()->SetTitleFont(42);
   Graph_Graph01132->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01132->GetYaxis()->CenterTitle(true);
   Graph_Graph01132->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01132->GetYaxis()->SetLabelFont(42);
   Graph_Graph01132->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01132->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01132->GetYaxis()->SetTitleFont(42);
   Graph_Graph01132->GetZaxis()->SetLabelFont(42);
   Graph_Graph01132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01132->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01132);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
