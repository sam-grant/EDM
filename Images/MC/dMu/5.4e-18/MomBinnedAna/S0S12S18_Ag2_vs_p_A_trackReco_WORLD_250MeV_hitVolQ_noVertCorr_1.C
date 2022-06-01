void S0S12S18_Ag2_vs_p_A_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4284,-1.01913e-05,3405.856,3.709237e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1220[12] = {
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
   Double_t Graph0_fy1220[12] = {
   -3.241033e-06,
   4.559241e-08,
   4.203541e-09,
   1.353453e-09,
   -1.344907e-09,
   -1.650371e-09,
   -8.884786e-09,
   -1.365259e-08,
   -3.009137e-08,
   -5.081215e-08,
   -4.247429e-08,
   1.682547e-07};
   Double_t Graph0_fex1220[12] = {
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
   Double_t Graph0_fey1220[12] = {
   4.633513e-06,
   7.039725e-09,
   1.515387e-09,
   1.388499e-09,
   1.583311e-09,
   1.902767e-09,
   2.467126e-09,
   3.617151e-09,
   6.15586e-09,
   1.306684e-08,
   2.982631e-08,
   1.473688e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1220,Graph0_fy1220,Graph0_fex1220,Graph0_fey1220);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01220 = new TH1F("Graph_Graph01220","S0S12S18_",100,0,3089.212);
   Graph_Graph01220->SetMinimum(-8.801249e-06);
   Graph_Graph01220->SetMaximum(2.319183e-06);
   Graph_Graph01220->SetDirectory(0);
   Graph_Graph01220->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01220->SetLineColor(ci);
   Graph_Graph01220->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01220->GetXaxis()->SetRange(1,98);
   Graph_Graph01220->GetXaxis()->CenterTitle(true);
   Graph_Graph01220->GetXaxis()->SetLabelFont(42);
   Graph_Graph01220->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01220->GetXaxis()->SetTitleFont(42);
   Graph_Graph01220->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01220->GetYaxis()->CenterTitle(true);
   Graph_Graph01220->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01220->GetYaxis()->SetLabelFont(42);
   Graph_Graph01220->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01220->GetYaxis()->SetTitleFont(42);
   Graph_Graph01220->GetZaxis()->SetLabelFont(42);
   Graph_Graph01220->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01220->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01220);
   
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
