void full_A_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:16:10 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-404.25,0.01038417,3330.25,0.2634381);
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
   0.1955485,
   0.1994305,
   0.2097895,
   0.2183744,
   0.2181974,
   0.2129909,
   0.2078771,
   0.2015232,
   0.1919653,
   0.1817725,
   0.1656291,
   0.1585733,
   0.1306159,
   0.1064111,
   0.05921124};
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
   0.00300686,
   0.002991174,
   0.002952812,
   0.002887979,
   0.002801588,
   0.00274871,
   0.002737452,
   0.002766557,
   0.002843715,
   0.002981298,
   0.003190367,
   0.003507893,
   0.00399981,
   0.00485674,
   0.006651421};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1086,Graph0_fy1086,Graph0_fex1086,Graph0_fey1086);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{Bz} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01086 = new TH1F("Graph_Graph01086","",100,0,3080);
   Graph_Graph01086->SetMinimum(0.03568956);
   Graph_Graph01086->SetMaximum(0.2381327);
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
