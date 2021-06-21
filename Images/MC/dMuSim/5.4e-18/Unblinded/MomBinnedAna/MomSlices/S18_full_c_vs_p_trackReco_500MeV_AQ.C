void S18_full_c_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:19 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-1.394136,3378.375,0.7017976);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1119[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1119[6] = {
   -0.3461691,
   -0.1550042,
   -0.04366693,
   -0.000540541,
   -0.2457284,
   -0.2564983};
   Double_t Graph0_fex1119[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1119[6] = {
   0.6986445,
   0.183959,
   0.1095133,
   0.0826801,
   0.0803877,
   0.07833569};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1119,Graph0_fy1119,Graph0_fex1119,Graph0_fey1119);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01119 = new TH1F("Graph_Graph01119","S18",100,0,3300);
   Graph_Graph01119->SetMinimum(-1.184542);
   Graph_Graph01119->SetMaximum(0.4922043);
   Graph_Graph01119->SetDirectory(0);
   Graph_Graph01119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01119->SetLineColor(ci);
   Graph_Graph01119->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01119->GetXaxis()->SetRange(1,91);
   Graph_Graph01119->GetXaxis()->CenterTitle(true);
   Graph_Graph01119->GetXaxis()->SetLabelFont(42);
   Graph_Graph01119->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01119->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01119->GetXaxis()->SetTitleFont(42);
   Graph_Graph01119->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01119->GetYaxis()->CenterTitle(true);
   Graph_Graph01119->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01119->GetYaxis()->SetLabelFont(42);
   Graph_Graph01119->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01119->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01119->GetYaxis()->SetTitleFont(42);
   Graph_Graph01119->GetZaxis()->SetLabelFont(42);
   Graph_Graph01119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01119);
   
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
