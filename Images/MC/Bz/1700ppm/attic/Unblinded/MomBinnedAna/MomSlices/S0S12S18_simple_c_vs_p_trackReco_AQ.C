void S0S12S18_simple_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-3.508651,3712.5,0.7112374);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1357[15] = {
   100,
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
   Double_t Graph0_fy1357[15] = {
   -1.900271,
   -2.709963,
   -1.374759,
   -0.4599769,
   -0.2835321,
   -0.2450845,
   -0.1558839,
   -0.1419628,
   -0.09622966,
   -0.09645121,
   -0.07644067,
   -0.08456612,
   -0.0412456,
   -0.04821363,
   -0.02059564};
   Double_t Graph0_fex1357[15] = {
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
   100,
   100};
   Double_t Graph0_fey1357[15] = {
   0.5953846,
   0.09537366,
   0.03230617,
   0.02509483,
   0.02217214,
   0.02053068,
   0.01918527,
   0.01818099,
   0.01756924,
   0.01752572,
   0.01791671,
   0.01884359,
   0.02022796,
   0.02086068,
   0.0285183};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1357,Graph0_fy1357,Graph0_fex1357,Graph0_fey1357);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01357 = new TH1F("Graph_Graph01357","S0S12S18",100,0,3300);
   Graph_Graph01357->SetMinimum(-3.086662);
   Graph_Graph01357->SetMaximum(0.2892486);
   Graph_Graph01357->SetDirectory(0);
   Graph_Graph01357->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01357->SetLineColor(ci);
   Graph_Graph01357->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01357->GetXaxis()->CenterTitle(true);
   Graph_Graph01357->GetXaxis()->SetLabelFont(42);
   Graph_Graph01357->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01357->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01357->GetXaxis()->SetTitleFont(42);
   Graph_Graph01357->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01357->GetYaxis()->CenterTitle(true);
   Graph_Graph01357->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01357->GetYaxis()->SetLabelFont(42);
   Graph_Graph01357->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01357->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01357->GetYaxis()->SetTitleFont(42);
   Graph_Graph01357->GetZaxis()->SetLabelFont(42);
   Graph_Graph01357->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01357->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01357);
   
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
