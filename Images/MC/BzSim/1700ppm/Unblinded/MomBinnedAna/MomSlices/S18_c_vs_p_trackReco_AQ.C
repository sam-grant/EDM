void S18_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:12:03 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-4.329443,3712.5,0.931137);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1197[15] = {
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
   Double_t Graph0_fy1197[15] = {
   -2.568806,
   -2.88629,
   -1.444213,
   -0.5202099,
   -0.3731324,
   -0.3007494,
   -0.2365243,
   -0.1857351,
   -0.09701132,
   -0.1458445,
   -0.1843081,
   -0.08904066,
   -0.07634079,
   -0.1040064,
   0.002707208};
   Double_t Graph0_fex1197[15] = {
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
   Double_t Graph0_fey1197[15] = {
   0.8838735,
   0.1659239,
   0.05593579,
   0.04335314,
   0.03833547,
   0.03548673,
   0.03323402,
   0.03155236,
   0.03070376,
   0.03076675,
   0.03187311,
   0.03434547,
   0.03654128,
   0.03719143,
   0.05166644};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1197,Graph0_fy1197,Graph0_fex1197,Graph0_fey1197);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01197 = new TH1F("Graph_Graph01197","S18",100,0,3300);
   Graph_Graph01197->SetMinimum(-3.803385);
   Graph_Graph01197->SetMaximum(0.405079);
   Graph_Graph01197->SetDirectory(0);
   Graph_Graph01197->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01197->SetLineColor(ci);
   Graph_Graph01197->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01197->GetXaxis()->CenterTitle(true);
   Graph_Graph01197->GetXaxis()->SetLabelFont(42);
   Graph_Graph01197->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01197->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01197->GetXaxis()->SetTitleFont(42);
   Graph_Graph01197->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01197->GetYaxis()->CenterTitle(true);
   Graph_Graph01197->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01197->GetYaxis()->SetLabelFont(42);
   Graph_Graph01197->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01197->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01197->GetYaxis()->SetTitleFont(42);
   Graph_Graph01197->GetZaxis()->SetLabelFont(42);
   Graph_Graph01197->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01197);
   
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
