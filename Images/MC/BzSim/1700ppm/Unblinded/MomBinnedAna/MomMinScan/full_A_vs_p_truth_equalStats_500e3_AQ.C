void full_A_vs_p_truth_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:11:47 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.02758874,3330.25,0.375791);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1086[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1086[15] = {
   0.2028394,
   0.205636,
   0.2614893,
   0.270193,
   0.2385014,
   0.244051,
   0.2193223,
   0.2094558,
   0.2214996,
   0.1843991,
   0.1499732,
   0.1089699,
   0.1098106,
   0.09082359,
   0.05065163};
   Double_t Graph0_fex1086[15] = {
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
   Double_t Graph0_fey1086[15] = {
   0.04433598,
   0.04305905,
   0.04107683,
   0.03836805,
   0.03514165,
   0.03212505,
   0.02935777,
   0.02683162,
   0.02454217,
   0.02235013,
   0.02024179,
   0.01815965,
   0.01600005,
   0.01369036,
   0.01101042};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1086,Graph0_fy1086,Graph0_fex1086,Graph0_fey1086);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{Bz} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01086 = new TH1F("Graph_Graph01086","",100,0,3080);
   Graph_Graph01086->SetMinimum(0.01274923);
   Graph_Graph01086->SetMaximum(0.335453);
   Graph_Graph01086->SetDirectory(0);
   Graph_Graph01086->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01086->SetLineColor(ci);
   Graph_Graph01086->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01086->GetXaxis()->SetRange(0,96);
   Graph_Graph01086->GetXaxis()->CenterTitle(true);
   Graph_Graph01086->GetXaxis()->SetLabelFont(42);
   Graph_Graph01086->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01086->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01086->GetXaxis()->SetTitleFont(42);
   Graph_Graph01086->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01086->GetYaxis()->CenterTitle(true);
   Graph_Graph01086->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01086->GetYaxis()->SetLabelFont(42);
   Graph_Graph01086->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01086->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01086->GetYaxis()->SetTitleFont(42);
   Graph_Graph01086->GetZaxis()->SetLabelFont(42);
   Graph_Graph01086->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01086);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
