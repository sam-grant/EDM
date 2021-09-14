void S0S12S18_full_N_vs_p_trackReco_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Sep 11 15:29:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-409902.2,3456.75,9356446);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1084[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1084[6] = {
   1413163,
   7675256,
   6215902,
   4142864,
   2050478,
   629703};
   Double_t Graph0_fex1084[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1084[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1084,Graph0_fy1084,Graph0_fex1084,Graph0_fey1084);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250 MeV;Positrons");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01084 = new TH1F("Graph_Graph01084","",100,0,3300);
   Graph_Graph01084->SetMinimum(566732.7);
   Graph_Graph01084->SetMaximum(8379811);
   Graph_Graph01084->SetDirectory(0);
   Graph_Graph01084->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01084->SetLineColor(ci);
   Graph_Graph01084->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01084->GetXaxis()->SetRange(0,93);
   Graph_Graph01084->GetXaxis()->CenterTitle(true);
   Graph_Graph01084->GetXaxis()->SetLabelFont(42);
   Graph_Graph01084->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01084->GetXaxis()->SetTitleFont(42);
   Graph_Graph01084->GetYaxis()->SetTitle("Positrons");
   Graph_Graph01084->GetYaxis()->CenterTitle(true);
   Graph_Graph01084->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01084->GetYaxis()->SetLabelFont(42);
   Graph_Graph01084->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01084->GetYaxis()->SetTitleFont(42);
   Graph_Graph01084->GetZaxis()->SetLabelFont(42);
   Graph_Graph01084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01084);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
