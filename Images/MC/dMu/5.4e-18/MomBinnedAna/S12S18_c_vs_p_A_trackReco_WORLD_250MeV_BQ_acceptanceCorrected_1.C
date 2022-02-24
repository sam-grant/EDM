void S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1692,-2.765304e-05,3406.642,3.383781e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[11] = {
   451.9022,
   653.3144,
   880.4684,
   1123.08,
   1370.967,
   1620.018,
   1866.66,
   2115.009,
   2362.988,
   2613.179,
   2787.489};
   Double_t Graph0_fy1171[11] = {
   -1.809149e-07,
   2.37913e-07,
   8.510756e-08,
   1.878418e-08,
   -3.630435e-08,
   -4.320971e-08,
   -4.064422e-08,
   7.388513e-08,
   1.027453e-07,
   -1.99516e-07,
   -8.956988e-06};
   Double_t Graph0_fex1171[11] = {
   0.07799311,
   0.06581167,
   0.04754563,
   0.04642947,
   0.04961912,
   0.05492029,
   0.06438561,
   0.08077463,
   0.1057518,
   0.1283674,
   0.1592967};
   Double_t Graph0_fey1171[11] = {
   6.250467e-07,
   3.325347e-08,
   9.561056e-09,
   8.04703e-09,
   9.570046e-09,
   1.321237e-08,
   2.225702e-08,
   4.710244e-08,
   1.174654e-07,
   2.645053e-07,
   7.432291e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18_",100,218.2418,3021.231);
   Graph_Graph01171->SetMinimum(-2.454936e-05);
   Graph_Graph01171->SetMaximum(2.800987e-07);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(0,101);
   Graph_Graph01171->GetXaxis()->CenterTitle(true);
   Graph_Graph01171->GetXaxis()->SetLabelFont(42);
   Graph_Graph01171->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01171->GetXaxis()->SetTitleFont(42);
   Graph_Graph01171->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01171->GetYaxis()->CenterTitle(true);
   Graph_Graph01171->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01171->GetYaxis()->SetLabelFont(42);
   Graph_Graph01171->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01171->GetYaxis()->SetTitleFont(42);
   Graph_Graph01171->GetZaxis()->SetLabelFont(42);
   Graph_Graph01171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01171);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
