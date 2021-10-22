void S0S12S18_full_theta_Y_RMS_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:37:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-2.170139,3411.2,38.72312);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1161[14] = {
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
   Double_t Graph0_fy1161[14] = {
   31.71702,
   29.57528,
   24.28007,
   20.86219,
   18.24509,
   16.10235,
   14.30014,
   12.65485,
   11.18484,
   9.768297,
   8.419558,
   7.053465,
   5.755658,
   4.677298};
   Double_t Graph0_fex1161[14] = {
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
   Double_t Graph0_fey1161[14] = {
   0.1905554,
   0.03313512,
   0.01605594,
   0.01124608,
   0.009637882,
   0.008903937,
   0.008518072,
   0.00825282,
   0.008354387,
   0.008678752,
   0.009080172,
   0.009399241,
   0.009577823,
   0.03189298};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1161,Graph0_fy1161,Graph0_fex1161,Graph0_fey1161);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#sigma#theta_{y} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01161 = new TH1F("Graph_Graph01161","",100,0,3280);
   Graph_Graph01161->SetMinimum(1.919188);
   Graph_Graph01161->SetMaximum(34.6338);
   Graph_Graph01161->SetDirectory(0);
   Graph_Graph01161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01161->SetLineColor(ci);
   Graph_Graph01161->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01161->GetXaxis()->SetRange(6,93);
   Graph_Graph01161->GetXaxis()->CenterTitle(true);
   Graph_Graph01161->GetXaxis()->SetLabelFont(42);
   Graph_Graph01161->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01161->GetXaxis()->SetTitleFont(42);
   Graph_Graph01161->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad]");
   Graph_Graph01161->GetYaxis()->CenterTitle(true);
   Graph_Graph01161->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01161->GetYaxis()->SetLabelFont(42);
   Graph_Graph01161->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01161->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01161->GetYaxis()->SetTitleFont(42);
   Graph_Graph01161->GetZaxis()->SetLabelFont(42);
   Graph_Graph01161->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01161);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
