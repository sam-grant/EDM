void S0S12S18_ABz_vs_p_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 00:10:14 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(488,0.08872486,1712,0.2911198);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1120[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t Graph0_fy1120[8] = {
   0.1750259,
   0.182694,
   0.2291287,
   0.1742689,
   0.1481371,
   0.1838931,
   0.1717037,
   0.166441};
   Double_t Graph0_fex1120[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1120[8] = {
   0.0321032,
   0.0299465,
   0.02825858,
   0.02688159,
   0.02567975,
   0.02454362,
   0.02366569,
   0.02284121};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1120,Graph0_fy1120,Graph0_fex1120,Graph0_fey1120);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01120 = new TH1F("Graph_Graph01120","S0S12S18",100,620,1580);
   Graph_Graph01120->SetMinimum(0.1089644);
   Graph_Graph01120->SetMaximum(0.2708803);
   Graph_Graph01120->SetDirectory(0);
   Graph_Graph01120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01120->SetLineColor(ci);
   Graph_Graph01120->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01120->GetXaxis()->SetRange(0,101);
   Graph_Graph01120->GetXaxis()->CenterTitle(true);
   Graph_Graph01120->GetXaxis()->SetLabelFont(42);
   Graph_Graph01120->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01120->GetXaxis()->SetTitleFont(42);
   Graph_Graph01120->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01120->GetYaxis()->CenterTitle(true);
   Graph_Graph01120->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01120->GetYaxis()->SetLabelFont(42);
   Graph_Graph01120->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01120->GetYaxis()->SetTitleFont(42);
   Graph_Graph01120->GetZaxis()->SetLabelFont(42);
   Graph_Graph01120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01120);
   
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
