void S0S12S18_ABz_vs_p_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 25 01:08:03 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,0.03877677,2850.5,0.3011094);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1231[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t Graph0_fy1231[17] = {
   0.1750259,
   0.182694,
   0.2291287,
   0.1742689,
   0.1481371,
   0.1838931,
   0.1717037,
   0.166441,
   0.1596914,
   0.1876476,
   0.1536671,
   0.1742382,
   0.1311594,
   0.1150739,
   0.1176685,
   0.152626,
   0.1029536};
   Double_t Graph0_fex1231[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1231[17] = {
   0.0321032,
   0.0299465,
   0.02825858,
   0.02688159,
   0.02567975,
   0.02454362,
   0.02366569,
   0.02284121,
   0.02213091,
   0.02144879,
   0.02101765,
   0.02070509,
   0.02048093,
   0.0203414,
   0.02030018,
   0.02039192,
   0.02045476};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1231,Graph0_fy1231,Graph0_fex1231,Graph0_fey1231);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01231 = new TH1F("Graph_Graph01231","S0S12S18",100,530,2570);
   Graph_Graph01231->SetMinimum(0.06501004);
   Graph_Graph01231->SetMaximum(0.2748762);
   Graph_Graph01231->SetDirectory(0);
   Graph_Graph01231->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01231->SetLineColor(ci);
   Graph_Graph01231->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01231->GetXaxis()->SetRange(0,101);
   Graph_Graph01231->GetXaxis()->CenterTitle(true);
   Graph_Graph01231->GetXaxis()->SetLabelFont(42);
   Graph_Graph01231->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01231->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01231->GetXaxis()->SetTitleFont(42);
   Graph_Graph01231->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01231->GetYaxis()->CenterTitle(true);
   Graph_Graph01231->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01231->GetYaxis()->SetLabelFont(42);
   Graph_Graph01231->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01231->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01231->GetYaxis()->SetTitleFont(42);
   Graph_Graph01231->GetZaxis()->SetLabelFont(42);
   Graph_Graph01231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01231);
   
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
