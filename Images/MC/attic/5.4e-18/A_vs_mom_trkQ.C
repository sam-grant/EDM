void A_vs_mom_trkQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Mar 17 20:13:24 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-358.75,-0.0505784,3128.75,0.252892);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[6] = {
   6.953123e-310,
   750,
   1250,
   1750,
   2250,
   6.953123e-310};
   Double_t Graph0_fy1009[6] = {
   6.953123e-310,
   0.1664267,
   0.1842829,
   0.1597632,
   0.1371793,
   2.194827e-314};
   Double_t Graph0_fex1009[6] = {
   0,
   250,
   250,
   250,
   250,
   6.953221e-310};
   Double_t Graph0_fey1009[6] = {
   6.953123e-310,
   0.02812487,
   0.01803068,
   0.01535421,
   0.01609911,
   6.953266e-310};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle(";Track momentum [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","",100,-250,2750);
   Graph_Graph01009->SetMinimum(-0.02023136);
   Graph_Graph01009->SetMaximum(0.222545);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01009->SetLineColor(ci);
   Graph_Graph01009->GetXaxis()->SetTitle("Track momentum [MeV]");
   Graph_Graph01009->GetXaxis()->SetRange(9,101);
   Graph_Graph01009->GetXaxis()->CenterTitle(true);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01009->GetYaxis()->CenterTitle(true);
   Graph_Graph01009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
