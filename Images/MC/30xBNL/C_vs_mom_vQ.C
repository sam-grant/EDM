void C_vs_mom_vQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Sep 18 16:33:35 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-1.194977,3749.625,5.641744);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1015[6] = {
   4.301096,
   0.1439066,
   0.08973666,
   -0.0163798,
   -0.01355521,
   -0.0434447};
   Double_t Graph0_fex1015[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1015[6] = {
   0.2011943,
   0.01327054,
   0.00874481,
   0.008285038,
   0.009059117,
   0.01207883};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";Track momentum [MeV];Average vertical offset, c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,0,3300);
   Graph_Graph01015->SetMinimum(-0.5113049);
   Graph_Graph01015->SetMaximum(4.958072);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Track momentum [MeV]");
   Graph_Graph01015->GetXaxis()->SetRange(1,101);
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("Average vertical offset, c [mrad]");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
