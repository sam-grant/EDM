void S0_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:48:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6976,-1.368456,3408.279,0.6621117);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1061[12] = {
   190.1422,
   431.7918,
   629.8411,
   874.1286,
   1122.912,
   1372.564,
   1621.827,
   1870.387,
   2119.295,
   2366.963,
   2612.664,
   2827.454};
   Double_t Graph0_fy1061[12] = {
   -0.3531722,
   0.01831747,
   -0.1009998,
   0.00115457,
   -0.03932517,
   0.01174911,
   -0.025194,
   -0.01914802,
   -0.02433245,
   0.005784672,
   -0.04113068,
   -0.002400882};
   Double_t Graph0_fex1061[12] = {
   0.6485143,
   0.06606595,
   0.05393537,
   0.05331023,
   0.05537795,
   0.05830269,
   0.06242498,
   0.06839258,
   0.0772997,
   0.09059204,
   0.1134356,
   0.1449771};
   Double_t Graph0_fey1061[12] = {
   0.676856,
   0.06198892,
   0.02969207,
   0.02387932,
   0.02092296,
   0.01882752,
   0.01743257,
   0.01655676,
   0.01624435,
   0.01644626,
   0.01753103,
   0.02517286};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1061,Graph0_fy1061,Graph0_fex1061,Graph0_fey1061);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01061 = new TH1F("Graph_Graph01061","S0_",100,0,3091.409);
   Graph_Graph01061->SetMinimum(-1.165399);
   Graph_Graph01061->SetMaximum(0.4590549);
   Graph_Graph01061->SetDirectory(0);
   Graph_Graph01061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01061->SetLineColor(ci);
   Graph_Graph01061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01061->GetXaxis()->SetRange(1,98);
   Graph_Graph01061->GetXaxis()->CenterTitle(true);
   Graph_Graph01061->GetXaxis()->SetLabelFont(42);
   Graph_Graph01061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01061->GetXaxis()->SetTitleFont(42);
   Graph_Graph01061->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01061->GetYaxis()->CenterTitle(true);
   Graph_Graph01061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01061->GetYaxis()->SetLabelFont(42);
   Graph_Graph01061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01061->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01061->GetYaxis()->SetTitleFont(42);
   Graph_Graph01061->GetZaxis()->SetLabelFont(42);
   Graph_Graph01061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01061);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
