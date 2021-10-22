void full_A_vs_p_truthAllDecays_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 12:10:12 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-360.9375,0.05907658,2973.438,0.3269671);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[6] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500};
   Double_t Graph0_fy1054[6] = {
   0.2171226,
   0.2571147,
   0.2700593,
   0.2696337,
   0.2154923,
   0.1278927};
   Double_t Graph0_fex1054[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1054[6] = {
   0.01033129,
   0.0106291,
   0.01123526,
   0.01268491,
   0.01586848,
   0.02416773};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","",100,0,2750);
   Graph_Graph01054->SetMinimum(0.08586563);
   Graph_Graph01054->SetMaximum(0.300178);
   Graph_Graph01054->SetDirectory(0);
   Graph_Graph01054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01054->SetLineColor(ci);
   Graph_Graph01054->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01054->GetXaxis()->SetRange(0,96);
   Graph_Graph01054->GetXaxis()->CenterTitle(true);
   Graph_Graph01054->GetXaxis()->SetLabelFont(42);
   Graph_Graph01054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01054->GetXaxis()->SetTitleFont(42);
   Graph_Graph01054->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01054->GetYaxis()->CenterTitle(true);
   Graph_Graph01054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01054->GetYaxis()->SetLabelFont(42);
   Graph_Graph01054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01054->GetYaxis()->SetTitleFont(42);
   Graph_Graph01054->GetZaxis()->SetLabelFont(42);
   Graph_Graph01054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01054);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
