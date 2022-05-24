void r_res_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 22 13:26:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,0.9027838,3377.5,6.472099);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1002[26] = {
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
   Double_t _fy1002[26] = {
   1.850394,
   2.214386,
   2.504656,
   2.386943,
   2.363108,
   2.484995,
   2.574922,
   2.66592,
   2.805156,
   2.914959,
   3.015892,
   3.092734,
   3.130097,
   3.198287,
   3.259927,
   3.276917,
   3.326555,
   3.324772,
   3.358467,
   3.342807,
   3.391808,
   3.510594,
   3.714564,
   4.263049,
   4.846619,
   5.490234};
   Double_t _fex1002[26] = {
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
   Double_t _fey1002[26] = {
   0.01939101,
   0.006893282,
   0.00615311,
   0.00434425,
   0.003445986,
   0.003338329,
   0.003327294,
   0.00341865,
   0.003653086,
   0.003890501,
   0.004123621,
   0.004391866,
   0.004636657,
   0.004921642,
   0.005284296,
   0.005649118,
   0.006155075,
   0.006665399,
   0.007274523,
   0.00789633,
   0.008821833,
   0.01030817,
   0.01192453,
   0.01456468,
   0.02094867,
   0.05364566};
   TGraphErrors *gre = new TGraphErrors(26,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta r (truth #minus reco) RMS [mm] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,100,3100);
   Graph_Graph1002->SetMinimum(1.459715);
   Graph_Graph1002->SetMaximum(5.915168);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("True momentum [MeV]");
   Graph_Graph1002->GetXaxis()->SetRange(0,97);
   Graph_Graph1002->GetXaxis()->CenterTitle(true);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("#Delta r (truth #minus reco) RMS [mm] / 100 MeV");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
