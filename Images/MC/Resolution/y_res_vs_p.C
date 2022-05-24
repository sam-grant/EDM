void y_res_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 22 13:26:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,1.868964,3377.5,3.660142);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[26] = {
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
   Double_t _fy1001[26] = {
   2.190448,
   2.33916,
   2.433418,
   2.42976,
   2.406772,
   2.450504,
   2.476713,
   2.502615,
   2.537987,
   2.561561,
   2.592206,
   2.59543,
   2.584026,
   2.594385,
   2.602517,
   2.583012,
   2.573987,
   2.556444,
   2.534906,
   2.52285,
   2.543414,
   2.568883,
   2.619184,
   2.781463,
   2.9566,
   3.329345};
   Double_t _fex1001[26] = {
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
   Double_t _fey1001[26] = {
   0.02295457,
   0.007281699,
   0.005977597,
   0.004421591,
   0.003509212,
   0.003291346,
   0.003199797,
   0.003208428,
   0.003304212,
   0.003417822,
   0.003542998,
   0.003684224,
   0.003826369,
   0.003991021,
   0.004217214,
   0.004450917,
   0.004760279,
   0.005122137,
   0.005487376,
   0.00595625,
   0.006610486,
   0.007535551,
   0.008398705,
   0.009491666,
   0.01276224,
   0.03226751};
   TGraphErrors *gre = new TGraphErrors(26,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta y (truth #minus reco) RMS [mm] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,100,3100);
   Graph_Graph1001->SetMinimum(2.048082);
   Graph_Graph1001->SetMaximum(3.481024);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("True momentum [MeV]");
   Graph_Graph1001->GetXaxis()->SetRange(0,97);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#Delta y (truth #minus reco) RMS [mm] / 100 MeV");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
