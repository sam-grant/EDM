void S0S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4284,-6.352396e-07,3405.856,5.729468e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1226[12] = {
   184.5396,
   431.4896,
   629.4626,
   873.9653,
   1122.547,
   1372.117,
   1620.879,
   1869.288,
   2117.216,
   2364.558,
   2614.887,
   2825.064};
   Double_t Graph0_fy1226[12] = {
   4.630122e-06,
   6.85596e-09,
   1.478623e-09,
   1.368044e-09,
   1.571214e-09,
   1.891437e-09,
   2.408032e-09,
   3.39465e-09,
   5.364405e-09,
   1.015599e-08,
   1.992206e-08,
   8.537924e-08};
   Double_t Graph0_fex1226[12] = {
   0.1775194,
   0.02718726,
   0.02363225,
   0.02322172,
   0.02433921,
   0.02587656,
   0.02805353,
   0.03152848,
   0.03685818,
   0.04604195,
   0.05834598,
   0.07008294};
   Double_t Graph0_fey1226[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1226,Graph0_fy1226,Graph0_fex1226,Graph0_fey1226);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01226 = new TH1F("Graph_Graph01226","S0S12S18_",100,0,3089.212);
   Graph_Graph01226->SetMinimum(1.23124e-09);
   Graph_Graph01226->SetMaximum(5.092997e-06);
   Graph_Graph01226->SetDirectory(0);
   Graph_Graph01226->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01226->SetLineColor(ci);
   Graph_Graph01226->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01226->GetXaxis()->SetRange(1,98);
   Graph_Graph01226->GetXaxis()->CenterTitle(true);
   Graph_Graph01226->GetXaxis()->SetLabelFont(42);
   Graph_Graph01226->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01226->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01226->GetXaxis()->SetTitleFont(42);
   Graph_Graph01226->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01226->GetYaxis()->CenterTitle(true);
   Graph_Graph01226->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01226->GetYaxis()->SetLabelFont(42);
   Graph_Graph01226->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01226->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01226->GetYaxis()->SetTitleFont(42);
   Graph_Graph01226->GetZaxis()->SetLabelFont(42);
   Graph_Graph01226->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01226->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01226);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
