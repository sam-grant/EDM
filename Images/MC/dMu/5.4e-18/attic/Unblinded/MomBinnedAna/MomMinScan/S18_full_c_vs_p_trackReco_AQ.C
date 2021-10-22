void S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:27 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.1877164,3468.85,0.45447);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1301[15] = {
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
   Double_t Graph0_fy1301[15] = {
   0.1163993,
   0.1154386,
   0.1153361,
   0.1093287,
   0.1019015,
   0.1162737,
   0.1313845,
   0.1310191,
   0.1593051,
   0.1972836,
   0.2459837,
   0.2631575,
   0.2690031,
   0.2676654,
   0.02245504};
   Double_t Graph0_fex1301[15] = {
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
   Double_t Graph0_fey1301[15] = {
   0.04422715,
   0.0442543,
   0.04427713,
   0.04439695,
   0.04483189,
   0.04570552,
   0.04698977,
   0.04900884,
   0.05203593,
   0.05650055,
   0.0626511,
   0.07013221,
   0.07652551,
   0.07977357,
   0.1031403};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1301,Graph0_fy1301,Graph0_fex1301,Graph0_fey1301);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01301 = new TH1F("Graph_Graph01301","S18",100,0,3080);
   Graph_Graph01301->SetMinimum(-0.1234977);
   Graph_Graph01301->SetMaximum(0.3902514);
   Graph_Graph01301->SetDirectory(0);
   Graph_Graph01301->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01301->SetLineColor(ci);
   Graph_Graph01301->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01301->GetXaxis()->SetRange(0,100);
   Graph_Graph01301->GetXaxis()->CenterTitle(true);
   Graph_Graph01301->GetXaxis()->SetLabelFont(42);
   Graph_Graph01301->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01301->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01301->GetXaxis()->SetTitleFont(42);
   Graph_Graph01301->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01301->GetYaxis()->CenterTitle(true);
   Graph_Graph01301->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01301->GetYaxis()->SetLabelFont(42);
   Graph_Graph01301->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01301->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01301->GetYaxis()->SetTitleFont(42);
   Graph_Graph01301->GetZaxis()->SetLabelFont(42);
   Graph_Graph01301->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01301);
   
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
