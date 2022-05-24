void p_res_vs_p_percent()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 22 13:26:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,0.2652561,3377.5,1.309887);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[26] = {
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450,
   2550,
   2650,
   2750,
   2850};
   Double_t _fy1004[26] = {
   0.9464304,
   1.053151,
   1.132998,
   1.018659,
   0.9410099,
   0.9404105,
   0.9246671,
   0.9099565,
   0.9185441,
   0.9088982,
   0.9074543,
   0.8930589,
   0.8731416,
   0.8530914,
   0.827943,
   0.801454,
   0.7681057,
   0.7205668,
   0.6637608,
   0.59644,
   0.5394067,
   0.4850896,
   0.4453552,
   0.4479124,
   0.441269,
   0.4473519};
   Double_t _fex1004[26] = {
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
   0,
   0,
   0,
   0};
   Double_t _fey1004[26] = {
   0.009918017,
   0.003278381,
   0.00278357,
   0.00185413,
   0.001372496,
   0.001263746,
   0.001195275,
   0.001167358,
   0.001196754,
   0.001213754,
   0.001241475,
   0.001269,
   0.001294238,
   0.001313596,
   0.001343101,
   0.001382631,
   0.001422442,
   0.001445733,
   0.001439114,
   0.001410114,
   0.001403877,
   0.001425391,
   0.00143054,
   0.001530933,
   0.001907772,
   0.004371123};
   TGraphErrors *gre = new TGraphErrors(26,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta p (truth #minus reco) RMS [%] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","",100,100,3100);
   Graph_Graph1004->SetMinimum(0.3697192);
   Graph_Graph1004->SetMaximum(1.205424);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle("True momentum [MeV]");
   Graph_Graph1004->GetXaxis()->SetRange(0,97);
   Graph_Graph1004->GetXaxis()->CenterTitle(true);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle("#Delta p (truth #minus reco) RMS [%] / 100 MeV");
   Graph_Graph1004->GetYaxis()->CenterTitle(true);
   Graph_Graph1004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
