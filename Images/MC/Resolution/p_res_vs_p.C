void p_res_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 13:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,0.3502459,3377.5,18.24411);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1003[26] = {
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
   Double_t _fy1003[26] = {
   3.473182,
   5.74999,
   6.43521,
   7.111122,
   7.312056,
   8.211379,
   8.985635,
   9.676241,
   10.68411,
   11.36358,
   12.27725,
   12.92292,
   13.34516,
   13.80191,
   14.45543,
   14.57014,
   14.05137,
   14.01232,
   13.56633,
   13.23219,
   12.4274,
   11.87369,
   11.3676,
   12.17435,
   12.61925,
   14.60214};
   Double_t _fex1003[26] = {
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
   Double_t _fey1003[26] = {
   0.140625,
   0.06405506,
   0.05373882,
   0.04604042,
   0.03672963,
   0.03724527,
   0.03890943,
   0.04135448,
   0.04696687,
   0.05071813,
   0.05681355,
   0.06183568,
   0.06708904,
   0.07237549,
   0.08084371,
   0.08718854,
   0.0915248,
   0.1005559,
   0.1077916,
   0.1157251,
   0.121732,
   0.1337419,
   0.1384236,
   0.1598295,
   0.2239908,
   0.6596576};
   TGraphErrors *gre = new TGraphErrors(26,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta momentum (truth #minus reco) RMS [mm] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,100,3100);
   Graph_Graph1003->SetMinimum(2.139633);
   Graph_Graph1003->SetMaximum(16.45473);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("True momentum [MeV]");
   Graph_Graph1003->GetXaxis()->SetRange(0,97);
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("#Delta momentum (truth #minus reco) RMS [mm] / 100 MeV");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
