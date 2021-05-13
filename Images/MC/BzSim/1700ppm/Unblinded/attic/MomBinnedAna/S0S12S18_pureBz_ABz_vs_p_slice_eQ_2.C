void S0S12S18_pureBz_ABz_vs_p_slice_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-0.3585366,3690,0.343283);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1326[14] = {
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
   Double_t Graph0_fy1326[14] = {
   -0.1516498,
   0.09007676,
   0.125452,
   0.2057121,
   0.1613362,
   0.1776827,
   0.1630449,
   0.1704718,
   0.1537273,
   0.1159073,
   0.1303759,
   0.1061205,
   0.0830691,
   0.02095264};
   Double_t Graph0_fex1326[14] = {
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
   Double_t Graph0_fey1326[14] = {
   0.08991685,
   0.03153195,
   0.02364714,
   0.02060099,
   0.01860951,
   0.0170672,
   0.01592372,
   0.0150379,
   0.01458872,
   0.01439909,
   0.0144846,
   0.01495263,
   0.01622935,
   0.02510083};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1326,Graph0_fy1326,Graph0_fex1326,Graph0_fey1326);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01326 = new TH1F("Graph_Graph01326","S0S12S18",100,0,3280);
   Graph_Graph01326->SetMinimum(-0.2883546);
   Graph_Graph01326->SetMaximum(0.273101);
   Graph_Graph01326->SetDirectory(0);
   Graph_Graph01326->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01326->SetLineColor(ci);
   Graph_Graph01326->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01326->GetXaxis()->CenterTitle(true);
   Graph_Graph01326->GetXaxis()->SetLabelFont(42);
   Graph_Graph01326->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01326->GetXaxis()->SetTitleFont(42);
   Graph_Graph01326->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01326->GetYaxis()->CenterTitle(true);
   Graph_Graph01326->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01326->GetYaxis()->SetLabelFont(42);
   Graph_Graph01326->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01326->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01326->GetYaxis()->SetTitleFont(42);
   Graph_Graph01326->GetZaxis()->SetLabelFont(42);
   Graph_Graph01326->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01326->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01326);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
