void y_res_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 13:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,1.751421,3377.5,4.876615);
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
   2.368171,
   2.434813,
   2.550884,
   2.506251,
   2.467588,
   2.515564,
   2.546194,
   2.563632,
   2.617896,
   2.60475,
   2.660653,
   2.638892,
   2.589039,
   2.623002,
   2.628183,
   2.574599,
   2.595619,
   2.603947,
   2.589086,
   2.580613,
   2.65179,
   2.623421,
   2.696578,
   2.916238,
   3.161608,
   4.171052};
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
   0.09588445,
   0.02712389,
   0.02129882,
   0.01622177,
   0.01238946,
   0.01140496,
   0.01101908,
   0.0109489,
   0.01149771,
   0.01161239,
   0.01230177,
   0.01261516,
   0.0130022,
   0.01373846,
   0.01467732,
   0.01538617,
   0.01688031,
   0.01865586,
   0.02052762,
   0.02252115,
   0.02591835,
   0.02942653,
   0.03273452,
   0.0381738,
   0.05595985,
   0.1846973};
   TGraphErrors *gre = new TGraphErrors(26,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta y (truth #minus reco) RMS [mm] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,100,3100);
   Graph_Graph1001->SetMinimum(2.06394);
   Graph_Graph1001->SetMaximum(4.564096);
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
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.25);
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
