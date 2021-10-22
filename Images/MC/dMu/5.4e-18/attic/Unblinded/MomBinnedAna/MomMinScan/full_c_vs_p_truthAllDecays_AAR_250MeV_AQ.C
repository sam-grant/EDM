void full_c_vs_p_truthAllDecays_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 17 13:21:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-393.25,-0.02501761,3236.75,0.01817594);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1083[12] = {
   0,
   250,
   500,
   750,
   1000,
   1250,
   1500,
   1750,
   2000,
   2250,
   2500,
   2750};
   Double_t Graph0_fy1083[12] = {
   -0.004440814,
   -0.00392842,
   -0.002771185,
   -0.0003724908,
   -0.0002599553,
   0.004466244,
   0.0006671468,
   0.002059707,
   0.005051311,
   0.006077773,
   0.000609806,
   -0.009667934};
   Double_t Graph0_fex1083[12] = {
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
   Double_t Graph0_fey1083[12] = {
   0.00404412,
   0.004043888,
   0.003993613,
   0.003850963,
   0.003733877,
   0.00372113,
   0.003802496,
   0.003992622,
   0.004328603,
   0.004899238,
   0.005929914,
   0.008150755};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1083,Graph0_fy1083,Graph0_fex1083,Graph0_fey1083);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01083 = new TH1F("Graph_Graph01083","",100,0,3025);
   Graph_Graph01083->SetMinimum(-0.02069826);
   Graph_Graph01083->SetMaximum(0.01385658);
   Graph_Graph01083->SetDirectory(0);
   Graph_Graph01083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01083->SetLineColor(ci);
   Graph_Graph01083->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01083->GetXaxis()->SetRange(0,95);
   Graph_Graph01083->GetXaxis()->CenterTitle(true);
   Graph_Graph01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph01083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph01083->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01083->GetYaxis()->CenterTitle(true);
   Graph_Graph01083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph01083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph01083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01083);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
