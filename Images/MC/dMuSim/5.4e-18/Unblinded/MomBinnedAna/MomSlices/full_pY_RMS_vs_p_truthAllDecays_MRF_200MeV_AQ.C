void full_pY_RMS_vs_p_truthAllDecays_MRF_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 16 17:58:46 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,5.670728,3456.75,30.33313);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1048[15] = {
   9.784256,
   16.31596,
   20.08347,
   22.59373,
   24.30605,
   25.40257,
   26.03137,
   26.2122,
   26.00797,
   25.37998,
   24.29963,
   22.73752,
   20.56735,
   17.56301,
   13.22005};
   Double_t Graph0_fex1048[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1048[15] = {
   0.003127835,
   0.005294579,
   0.006643769,
   0.00766175,
   0.008499779,
   0.009227019,
   0.009898964,
   0.01053006,
   0.01115273,
   0.01176928,
   0.01239369,
   0.01306599,
   0.01380121,
   0.01466719,
   0.0160146};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;#sigma_{py} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","",100,0,3300);
   Graph_Graph01048->SetMinimum(8.136968);
   Graph_Graph01048->SetMaximum(27.86689);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01048->GetXaxis()->SetRange(0,93);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("#sigma_{py} [MeV]");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
