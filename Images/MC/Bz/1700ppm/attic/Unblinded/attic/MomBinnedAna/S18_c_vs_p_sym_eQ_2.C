void S18_c_vs_p_sym_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:12 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-0.2283621,7.25,-0.09733188);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1249[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1249[6] = {
   -0.2008784,
   -0.1831917,
   -0.1562114,
   -0.1465354,
   -0.1387201,
   -0.1323024};
   Double_t Graph0_fex1249[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1249[6] = {
   0.005645302,
   0.007957536,
   0.008016009,
   0.008900388,
   0.01098361,
   0.01313214};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1249,Graph0_fy1249,Graph0_fex1249,Graph0_fey1249);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01249 = new TH1F("Graph_Graph01249","S18",100,0.5,6.5);
   Graph_Graph01249->SetMinimum(-0.2152591);
   Graph_Graph01249->SetMaximum(-0.1104349);
   Graph_Graph01249->SetDirectory(0);
   Graph_Graph01249->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01249->SetLineColor(ci);
   Graph_Graph01249->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01249->GetXaxis()->CenterTitle(true);
   Graph_Graph01249->GetXaxis()->SetLabelFont(42);
   Graph_Graph01249->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01249->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01249->GetXaxis()->SetTitleFont(42);
   Graph_Graph01249->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01249->GetYaxis()->CenterTitle(true);
   Graph_Graph01249->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01249->GetYaxis()->SetLabelFont(42);
   Graph_Graph01249->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01249->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01249->GetYaxis()->SetTitleFont(42);
   Graph_Graph01249->GetZaxis()->SetLabelFont(42);
   Graph_Graph01249->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01249->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01249);
   
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
