void S18_c_vs_p_noBr_aQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 08:24:39 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-4.792463,3378.375,2.546991);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1195[30] = {
   50,
   150,
   250,
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
   2850,
   2950};
   Double_t Graph0_fy1195[30] = {
   -2.722728,
   -0.4377555,
   1.056371,
   -1.430196,
   -1.651586,
   -0.8753038,
   -0.3680099,
   -0.3226255,
   -0.2201141,
   -0.2383899,
   -0.2604325,
   -0.2418601,
   -0.132145,
   -0.1364863,
   -0.1119962,
   -0.08555921,
   -0.0941831,
   -0.1044564,
   -0.09163005,
   -0.0766615,
   -0.06859971,
   -0.07702378,
   -0.0792388,
   -0.1005882,
   -0.09233266,
   -0.06213907,
   -0.1011917,
   -0.1033857,
   -0.07905055,
   0.04233681};
   Double_t Graph0_fex1195[30] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1195[30] = {
   0.8464927,
   0.5985696,
   0.2673778,
   0.09707518,
   0.05440225,
   0.04147511,
   0.03609806,
   0.0329623,
   0.03062385,
   0.02857943,
   0.02703835,
   0.0256551,
   0.02433195,
   0.02326273,
   0.022306,
   0.02152491,
   0.02077408,
   0.02024828,
   0.01986043,
   0.01949091,
   0.01934285,
   0.01912592,
   0.0190949,
   0.01916086,
   0.01934791,
   0.01971898,
   0.02009667,
   0.02096651,
   0.02432522,
   0.05828884};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1195,Graph0_fy1195,Graph0_fex1195,Graph0_fey1195);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01195 = new TH1F("Graph_Graph01195","S18",100,0,3300);
   Graph_Graph01195->SetMinimum(-4.058517);
   Graph_Graph01195->SetMaximum(1.813046);
   Graph_Graph01195->SetDirectory(0);
   Graph_Graph01195->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01195->SetLineColor(ci);
   Graph_Graph01195->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01195->GetXaxis()->SetRange(1,91);
   Graph_Graph01195->GetXaxis()->CenterTitle(true);
   Graph_Graph01195->GetXaxis()->SetLabelFont(42);
   Graph_Graph01195->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01195->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01195->GetXaxis()->SetTitleFont(42);
   Graph_Graph01195->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01195->GetYaxis()->CenterTitle(true);
   Graph_Graph01195->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01195->GetYaxis()->SetLabelFont(42);
   Graph_Graph01195->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01195->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01195->GetYaxis()->SetTitleFont(42);
   Graph_Graph01195->GetZaxis()->SetLabelFont(42);
   Graph_Graph01195->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01195->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01195);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
