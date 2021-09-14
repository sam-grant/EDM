void S0S12S18_full_Momentum_Y_RMS_vs_p_trackTruth_AAR_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Sep 11 12:45:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,12.19865,3456.75,23.09496);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1083[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1083[6] = {
   14.03905,
   17.94049,
   20.49262,
   21.26983,
   19.66143,
   15.93736};
   Double_t Graph0_fex1083[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1083[6] = {
   0.02434555,
   0.007201035,
   0.007104256,
   0.00907178,
   0.01259399,
   0.01979334};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1083,Graph0_fy1083,Graph0_fex1083,Graph0_fey1083);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250 MeV;#sigma_{p_{y}} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01083 = new TH1F("Graph_Graph01083","",100,0,3300);
   Graph_Graph01083->SetMinimum(13.28828);
   Graph_Graph01083->SetMaximum(22.00532);
   Graph_Graph01083->SetDirectory(0);
   Graph_Graph01083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01083->SetLineColor(ci);
   Graph_Graph01083->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01083->GetXaxis()->SetRange(0,93);
   Graph_Graph01083->GetXaxis()->CenterTitle(true);
   Graph_Graph01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph01083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph01083->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV]");
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
