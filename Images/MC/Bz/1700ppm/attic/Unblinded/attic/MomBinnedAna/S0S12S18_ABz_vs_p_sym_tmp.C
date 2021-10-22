void S0S12S18_ABz_vs_p_sym_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:23 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,0.07112094,7.25,0.2665655);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1496[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1496[6] = {
   0.1554359,
   0.15678,
   0.1466038,
   0.163655,
   0.1515257,
   0.1688432};
   Double_t Graph0_fex1496[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1496[6] = {
   0.02675886,
   0.02690421,
   0.02815295,
   0.03121184,
   0.03851683,
   0.0651482};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1496,Graph0_fy1496,Graph0_fex1496,Graph0_fey1496);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01496 = new TH1F("Graph_Graph01496","S0S12S18",100,0.5,6.5);
   Graph_Graph01496->SetMinimum(0.0906654);
   Graph_Graph01496->SetMaximum(0.2470211);
   Graph_Graph01496->SetDirectory(0);
   Graph_Graph01496->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01496->SetLineColor(ci);
   Graph_Graph01496->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01496->GetXaxis()->CenterTitle(true);
   Graph_Graph01496->GetXaxis()->SetLabelFont(42);
   Graph_Graph01496->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01496->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01496->GetXaxis()->SetTitleFont(42);
   Graph_Graph01496->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01496->GetYaxis()->CenterTitle(true);
   Graph_Graph01496->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01496->GetYaxis()->SetLabelFont(42);
   Graph_Graph01496->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01496->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01496->GetYaxis()->SetTitleFont(42);
   Graph_Graph01496->GetZaxis()->SetLabelFont(42);
   Graph_Graph01496->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01496->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01496);
   
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
