void S0_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_AQ_noCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 18:56:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(490.571,0.00371167,3001.368,0.01769291);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[12] = {
   195.803,
   429.651,
   630.7927,
   875.2717,
   1123.906,
   1373.288,
   1622.379,
   1870.823,
   2119.356,
   2366.927,
   2612.775,
   2826.941};
   Double_t Graph0_fy1049[12] = {
   -0.04027425,
   0.001769261,
   0.006192589,
   0.008670228,
   0.007887287,
   0.011711,
   0.0114594,
   0.01346603,
   0.01358341,
   0.01135721,
   0.01164766,
   0.007591323};
   Double_t Graph0_fex1049[12] = {
   0.3454689,
   0.05887629,
   0.04616318,
   0.04428225,
   0.04494108,
   0.04636558,
   0.04888031,
   0.0529867,
   0.05945939,
   0.0697281,
   0.08735603,
   0.1109392};
   Double_t Graph0_fey1049[12] = {
   -0.01385351,
   0.001611561,
   0.0009185441,
   0.0008696636,
   0.0008808815,
   0.0009089842,
   0.0009588102,
   0.001040406,
   0.001169858,
   0.001373872,
   0.001737039,
   0.002937324};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S0_",100,0,3090.211);
   Graph_Graph01049->SetMinimum(0.005109794);
   Graph_Graph01049->SetMaximum(0.01629479);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(25,89);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
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
