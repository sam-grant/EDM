void S12S18_pureBz_ABz_vs_p_slice_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:47 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-0.4536376,3690,0.3671998);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1296[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1296[14] = {
   -0.2075,
   0.07590858,
   0.0965204,
   0.20511,
   0.1501896,
   0.2023636,
   0.1643672,
   0.1424921,
   0.1422935,
   0.09425113,
   0.1301702,
   0.09632512,
   0.09347058,
   -0.007294172};
   Double_t Graph0_fex1296[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1296[14] = {
   0.1093314,
   0.03869572,
   0.02898343,
   0.02528352,
   0.02284624,
   0.02094296,
   0.01956409,
   0.01848425,
   0.01794892,
   0.01771561,
   0.01783195,
   0.01844642,
   0.02006506,
   0.03102097};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1296,Graph0_fy1296,Graph0_fex1296,Graph0_fey1296);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01296 = new TH1F("Graph_Graph01296","S12S18",100,0,3280);
   Graph_Graph01296->SetMinimum(-0.3715539);
   Graph_Graph01296->SetMaximum(0.285116);
   Graph_Graph01296->SetDirectory(0);
   Graph_Graph01296->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01296->SetLineColor(ci);
   Graph_Graph01296->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01296->GetXaxis()->CenterTitle(true);
   Graph_Graph01296->GetXaxis()->SetLabelFont(42);
   Graph_Graph01296->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01296->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01296->GetXaxis()->SetTitleFont(42);
   Graph_Graph01296->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01296->GetYaxis()->CenterTitle(true);
   Graph_Graph01296->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01296->GetYaxis()->SetLabelFont(42);
   Graph_Graph01296->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01296->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01296->GetYaxis()->SetTitleFont(42);
   Graph_Graph01296->GetZaxis()->SetLabelFont(42);
   Graph_Graph01296->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01296->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01296);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
