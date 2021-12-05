void S12_Ag2_vs_p_A_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 18:52:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.556,-6.76023e-07,3035.183,1.4988e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1055[12] = {
   194.7748,
   428.2916,
   630.898,
   875.2228,
   1123.964,
   1373.246,
   1622.237,
   1870.782,
   2119.254,
   2366.86,
   2612.541,
   2825.967};
   Double_t Graph0_fy1055[12] = {
   7.134683e-05,
   5.05417e-07,
   1.457506e-08,
   -1.465588e-08,
   -1.037126e-08,
   -5.960838e-09,
   2.359422e-10,
   -2.89905e-08,
   3.307029e-08,
   5.673024e-08,
   -3.815275e-09,
   -6.962612e-07};
   Double_t Graph0_fex1055[12] = {
   0.3340551,
   0.05951737,
   0.04633076,
   0.04453331,
   0.04522431,
   0.04670874,
   0.04919543,
   0.05334962,
   0.06010925,
   0.07061149,
   0.0892903,
   0.1136539};
   Double_t Graph0_fey1055[12] = {
   3.566292e-05,
   5.932455e-08,
   1.159852e-08,
   9.783843e-09,
   1.016956e-08,
   1.120838e-08,
   1.332144e-08,
   1.757839e-08,
   2.673543e-08,
   4.754743e-08,
   1.080388e-07,
   5.881067e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1055,Graph0_fy1055,Graph0_fex1055,Graph0_fey1055);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01055 = new TH1F("Graph_Graph01055","S12_",100,0,3089.244);
   Graph_Graph01055->SetMinimum(-5.934327e-07);
   Graph_Graph01055->SetMaximum(6.728966e-08);
   Graph_Graph01055->SetDirectory(0);
   Graph_Graph01055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01055->SetLineColor(ci);
   Graph_Graph01055->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01055->GetXaxis()->SetRange(25,90);
   Graph_Graph01055->GetXaxis()->CenterTitle(true);
   Graph_Graph01055->GetXaxis()->SetLabelFont(42);
   Graph_Graph01055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01055->GetXaxis()->SetTitleFont(42);
   Graph_Graph01055->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01055->GetYaxis()->CenterTitle(true);
   Graph_Graph01055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01055->GetYaxis()->SetLabelFont(42);
   Graph_Graph01055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01055->GetYaxis()->SetTitleFont(42);
   Graph_Graph01055->GetZaxis()->SetLabelFont(42);
   Graph_Graph01055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01055);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
