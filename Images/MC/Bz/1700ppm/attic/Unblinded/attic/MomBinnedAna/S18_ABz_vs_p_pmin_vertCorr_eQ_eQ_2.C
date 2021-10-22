void S18_ABz_vs_p_pmin_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-0.02427538,2600,0.2880347);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1302[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1302[9] = {
   0.1545872,
   0.1705558,
   0.185342,
   0.1776969,
   0.1885582,
   0.1644215,
   0.1752739,
   0.08739612,
   0.1284381};
   Double_t Graph0_fex1302[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1302[9] = {
   0.04671944,
   0.04594541,
   0.04571701,
   0.04612676,
   0.04742488,
   0.04986498,
   0.0535376,
   0.05961981,
   0.06875596};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1302,Graph0_fy1302,Graph0_fex1302,Graph0_fey1302);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01302 = new TH1F("Graph_Graph01302","S18",100,440,2360);
   Graph_Graph01302->SetMinimum(0.006955636);
   Graph_Graph01302->SetMaximum(0.2568037);
   Graph_Graph01302->SetDirectory(0);
   Graph_Graph01302->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01302->SetLineColor(ci);
   Graph_Graph01302->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01302->GetXaxis()->CenterTitle(true);
   Graph_Graph01302->GetXaxis()->SetLabelFont(42);
   Graph_Graph01302->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01302->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01302->GetXaxis()->SetTitleFont(42);
   Graph_Graph01302->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01302->GetYaxis()->CenterTitle(true);
   Graph_Graph01302->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01302->GetYaxis()->SetLabelFont(42);
   Graph_Graph01302->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01302->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01302->GetYaxis()->SetTitleFont(42);
   Graph_Graph01302->GetZaxis()->SetLabelFont(42);
   Graph_Graph01302->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01302->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01302);
   
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
