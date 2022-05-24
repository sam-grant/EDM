void p_res_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 22 13:26:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-297.5,0.3457917,3377.5,17.9378);
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
   3.312506,
   4.739182,
   6.231491,
   6.621281,
   7.057574,
   7.993489,
   8.784338,
   9.554543,
   10.56326,
   11.36123,
   12.25063,
   12.94935,
   13.5337,
   14.07601,
   14.489,
   14.8269,
   14.97806,
   14.77162,
   14.27086,
   13.4199,
   12.67606,
   11.88469,
   11.35656,
   11.86968,
   12.1349,
   12.74953};
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
   0.03471306,
   0.01475271,
   0.01530963,
   0.01205185,
   0.01029372,
   0.01074184,
   0.01135511,
   0.01225725,
   0.01376267,
   0.01517192,
   0.01675991,
   0.01840051,
   0.02006069,
   0.02167433,
   0.02350427,
   0.02557868,
   0.02773763,
   0.02963752,
   0.03094095,
   0.03172757,
   0.03299111,
   0.03492207,
   0.03647876,
   0.04056972,
   0.05246374,
   0.124577};
   TGraphErrors *gre = new TGraphErrors(26,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle(";True momentum [MeV];#Delta momentum (truth #minus reco) RMS [mm] / 100 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,100,3100);
   Graph_Graph1003->SetMinimum(2.104993);
   Graph_Graph1003->SetMaximum(16.1786);
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
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.2);
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
