void S12S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_AQ_noCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 18:56:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.4894,0.005459766,3034.767,0.023234);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1090[12] = {
   194.2052,
   428.5039,
   630.9259,
   875.1825,
   1123.948,
   1373.209,
   1622.265,
   1870.711,
   2119.19,
   2366.793,
   2612.56,
   2825.572};
   Double_t Graph0_fy1090[12] = {
   0.3888431,
   0.03821754,
   0.01818667,
   0.01426577,
   0.01225711,
   0.01085993,
   0.009886274,
   0.009302123,
   0.00904635,
   0.00908831,
   0.009622106,
   0.0139889};
   Double_t Graph0_fex1090[12] = {
   0.2401371,
   0.04226504,
   0.03284899,
   0.03158196,
   0.03208886,
   0.0331561,
   0.0349262,
   0.03789215,
   0.04269879,
   0.05025669,
   0.06362822,
   0.08097805};
   Double_t Graph0_fey1090[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1090,Graph0_fy1090,Graph0_fex1090,Graph0_fey1090);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01090 = new TH1F("Graph_Graph01090","S12S18_",100,0,3088.822);
   Graph_Graph01090->SetMinimum(0.00723719);
   Graph_Graph01090->SetMaximum(0.02145658);
   Graph_Graph01090->SetDirectory(0);
   Graph_Graph01090->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01090->SetLineColor(ci);
   Graph_Graph01090->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01090->GetXaxis()->SetRange(25,90);
   Graph_Graph01090->GetXaxis()->CenterTitle(true);
   Graph_Graph01090->GetXaxis()->SetLabelFont(42);
   Graph_Graph01090->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01090->GetXaxis()->SetTitleFont(42);
   Graph_Graph01090->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
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
