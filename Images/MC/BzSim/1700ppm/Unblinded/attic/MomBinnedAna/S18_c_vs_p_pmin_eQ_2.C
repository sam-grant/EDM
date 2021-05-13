void S18_c_vs_p_pmin_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:11 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-0.2431216,2600,-0.02353463);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1247[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1247[9] = {
   -0.2008784,
   -0.1831917,
   -0.1562114,
   -0.1400255,
   -0.1228582,
   -0.1058387,
   -0.09309516,
   -0.08429374,
   -0.07803309};
   Double_t Graph0_fex1247[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1247[9] = {
   0.005645302,
   0.007957536,
   0.008016009,
   0.008231592,
   0.008642685,
   0.009350227,
   0.01054156,
   0.0127139,
   0.01790064};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1247,Graph0_fy1247,Graph0_fex1247,Graph0_fey1247);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01247 = new TH1F("Graph_Graph01247","S18",100,440,2360);
   Graph_Graph01247->SetMinimum(-0.2211629);
   Graph_Graph01247->SetMaximum(-0.04549332);
   Graph_Graph01247->SetDirectory(0);
   Graph_Graph01247->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01247->SetLineColor(ci);
   Graph_Graph01247->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_Graph01247->GetXaxis()->CenterTitle(true);
   Graph_Graph01247->GetXaxis()->SetLabelFont(42);
   Graph_Graph01247->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01247->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01247->GetXaxis()->SetTitleFont(42);
   Graph_Graph01247->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01247->GetYaxis()->CenterTitle(true);
   Graph_Graph01247->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01247->GetYaxis()->SetLabelFont(42);
   Graph_Graph01247->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01247->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01247->GetYaxis()->SetTitleFont(42);
   Graph_Graph01247->GetZaxis()->SetLabelFont(42);
   Graph_Graph01247->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01247->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01247);
   
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
