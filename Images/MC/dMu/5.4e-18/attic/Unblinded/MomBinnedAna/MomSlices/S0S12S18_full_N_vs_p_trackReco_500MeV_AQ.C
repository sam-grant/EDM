void S0S12S18_full_N_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-136741.4,3378.375,3208206);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1220[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1220[6] = {
   488084,
   2632440,
   2150021,
   1442850,
   716112,
   219726};
   Double_t Graph0_fex1220[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1220[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1220,Graph0_fy1220,Graph0_fex1220,Graph0_fey1220);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250 MeV;Positrons");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01220 = new TH1F("Graph_Graph01220","",100,0,3300);
   Graph_Graph01220->SetMinimum(197753.4);
   Graph_Graph01220->SetMaximum(2873711);
   Graph_Graph01220->SetDirectory(0);
   Graph_Graph01220->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01220->SetLineColor(ci);
   Graph_Graph01220->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01220->GetXaxis()->SetRange(1,91);
   Graph_Graph01220->GetXaxis()->CenterTitle(true);
   Graph_Graph01220->GetXaxis()->SetLabelFont(42);
   Graph_Graph01220->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01220->GetXaxis()->SetTitleFont(42);
   Graph_Graph01220->GetYaxis()->SetTitle("Positrons");
   Graph_Graph01220->GetYaxis()->CenterTitle(true);
   Graph_Graph01220->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01220->GetYaxis()->SetLabelFont(42);
   Graph_Graph01220->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01220->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01220->GetYaxis()->SetTitleFont(42);
   Graph_Graph01220->GetZaxis()->SetLabelFont(42);
   Graph_Graph01220->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01220->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01220);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
