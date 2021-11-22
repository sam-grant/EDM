void S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:15:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.1912,-0.0002020403,3334.862,0.002620494);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1090[12] = {
   175.3402,
   432.3653,
   628.4642,
   873.0148,
   1121.682,
   1371.448,
   1620.11,
   1868.09,
   2116.093,
   2363.253,
   2614.451,
   2826.106};
   Double_t Graph0_fy1090[12] = {
   0.001402892,
   0.0001374903,
   0.0001709699,
   0.0002103211,
   0.0003787705,
   0.0007047225,
   0.0004786671,
   0.0009183639,
   0.0008307851,
   0.0009163739,
   0.001479582,
   0.0002633348};
   Double_t Graph0_fex1090[12] = {
   0.5249826,
   0.04983601,
   0.0448855,
   0.04517505,
   0.04844682,
   0.05242811,
   0.05778019,
   0.06630119,
   0.07960463,
   0.1021572,
   0.1325112,
   0.1619192};
   Double_t Graph0_fey1090[12] = {
   0.0007308833,
   4.836464e-05,
   2.383845e-05,
   2.299663e-05,
   3.669492e-05,
   6.323113e-05,
   4.142249e-05,
   7.41063e-05,
   9.540443e-05,
   0.0001435682,
   0.0001733013,
   5.939013e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1090,Graph0_fy1090,Graph0_fex1090,Graph0_fey1090);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01090 = new TH1F("Graph_Graph01090","S12S18_",100,0,3091.413);
   Graph_Graph01090->SetMinimum(8.021311e-05);
   Graph_Graph01090->SetMaximum(0.00233824);
   Graph_Graph01090->SetDirectory(0);
   Graph_Graph01090->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01090->SetLineColor(ci);
   Graph_Graph01090->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01090->GetXaxis()->SetRange(2,96);
   Graph_Graph01090->GetXaxis()->CenterTitle(true);
   Graph_Graph01090->GetXaxis()->SetLabelFont(42);
   Graph_Graph01090->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01090->GetXaxis()->SetTitleFont(42);
   Graph_Graph01090->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01090->GetYaxis()->CenterTitle(true);
   Graph_Graph01090->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01090->GetYaxis()->SetLabelFont(42);
   Graph_Graph01090->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01090->GetYaxis()->SetTitleFont(42);
   Graph_Graph01090->GetZaxis()->SetLabelFont(42);
   Graph_Graph01090->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01090);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
