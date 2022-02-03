void ChiSqr_vs_eMin_2750MeV_300us_2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 12 09:33:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(310,0.1425063,1690,1.515906);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[5] = {
   500,
   750,
   1000,
   1250,
   1500};
   Double_t Graph0_fy1004[5] = {
   1.287006,
   1.107921,
   1.051551,
   0.535039,
   0.3714062};
   Double_t Graph0_fex1004[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1004[5] = {
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle(";E_{min} [MeV];#chi^{2}/ndf");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01004 = new TH1F("Graph_Graph01004","",100,400,1600);
   Graph_Graph01004->SetMinimum(0.2798463);
   Graph_Graph01004->SetMaximum(1.378566);
   Graph_Graph01004->SetDirectory(0);
   Graph_Graph01004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01004->SetLineColor(ci);
   Graph_Graph01004->GetXaxis()->SetTitle("E_{min} [MeV]");
   Graph_Graph01004->GetXaxis()->SetRange(5,96);
   Graph_Graph01004->GetXaxis()->CenterTitle(true);
   Graph_Graph01004->GetXaxis()->SetLabelFont(42);
   Graph_Graph01004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetXaxis()->SetTitleFont(42);
   Graph_Graph01004->GetYaxis()->SetTitle("#chi^{2}/ndf");
   Graph_Graph01004->GetYaxis()->CenterTitle(true);
   Graph_Graph01004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01004->GetYaxis()->SetLabelFont(42);
   Graph_Graph01004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetYaxis()->SetTitleFont(42);
   Graph_Graph01004->GetZaxis()->SetLabelFont(42);
   Graph_Graph01004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01004);
   
   gre->Draw("apl");
   TLine *line = new TLine(448,1,1552,1);
   line->SetLineStyle(2);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
