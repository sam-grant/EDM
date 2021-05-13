void S0S12S18_simple_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,0.08593807,8.5,0.2230334);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1374[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t Graph0_fy1374[7] = {
   0.1192723,
   0.1446029,
   0.1694237,
   0.1574574,
   0.1627667,
   0.1745903,
   0.1753643};
   Double_t Graph0_fex1374[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1374[7] = {
   0.01048504,
   0.01038451,
   0.01047751,
   0.01092926,
   0.01205383,
   0.01477185,
   0.02481994};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1374,Graph0_fy1374,Graph0_fex1374,Graph0_fey1374);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01374 = new TH1F("Graph_Graph01374","S0S12S18",100,0.4,7.6);
   Graph_Graph01374->SetMinimum(0.0996476);
   Graph_Graph01374->SetMaximum(0.2093239);
   Graph_Graph01374->SetDirectory(0);
   Graph_Graph01374->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01374->SetLineColor(ci);
   Graph_Graph01374->GetXaxis()->SetTitle("Symmetric cut");
   Graph_Graph01374->GetXaxis()->CenterTitle(true);
   Graph_Graph01374->GetXaxis()->SetLabelFont(42);
   Graph_Graph01374->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01374->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01374->GetXaxis()->SetTitleFont(42);
   Graph_Graph01374->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01374->GetYaxis()->CenterTitle(true);
   Graph_Graph01374->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01374->GetYaxis()->SetLabelFont(42);
   Graph_Graph01374->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01374->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01374->GetYaxis()->SetTitleFont(42);
   Graph_Graph01374->GetZaxis()->SetLabelFont(42);
   Graph_Graph01374->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01374->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01374);
   
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
