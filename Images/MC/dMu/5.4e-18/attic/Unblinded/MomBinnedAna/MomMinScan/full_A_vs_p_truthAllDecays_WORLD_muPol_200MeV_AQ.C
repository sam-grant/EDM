void full_A_vs_p_truthAllDecays_WORLD_muPol_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 22 09:28:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-404.25,0.3694568,3330.25,0.4656531);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1099[15] = {
   0.4099434,
   0.4124943,
   0.4054822,
   0.4125271,
   0.4229282,
   0.4101506,
   0.4073418,
   0.4031004,
   0.3941163,
   0.4019766,
   0.4406221,
   0.4027968,
   0.4496204,
   0.398561,
   0.3854896};
   Double_t Graph0_fex1099[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1099[15] = {
   3.632298e-11,
   2.418084e-12,
   4.4662e-12,
   1.732514e-12,
   2.196672e-12,
   3.257589e-11,
   2.894463e-12,
   1.017445e-11,
   1.174818e-10,
   4.281756e-11,
   3.870935e-11,
   6.881635e-11,
   2.778258e-10,
   1.498122e-10,
   2.312787e-10};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","",100,0,3080);
   Graph_Graph01099->SetMinimum(0.3790765);
   Graph_Graph01099->SetMaximum(0.4560335);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("e^{+}_{LAB} p_{min} [MeV]");
   Graph_Graph01099->GetXaxis()->SetRange(0,96);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
