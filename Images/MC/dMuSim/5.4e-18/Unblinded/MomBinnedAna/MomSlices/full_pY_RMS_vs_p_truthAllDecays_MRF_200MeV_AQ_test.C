void full_pY_RMS_vs_p_truthAllDecays_MRF_200MeV_AQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 23 10:55:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-7.08125,-2.742751,58.23125,35.12802);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[17] = {
   1,
   4,
   7,
   10,
   13,
   16,
   19,
   22,
   25,
   28,
   31,
   34,
   37,
   40,
   43,
   46,
   49};
   Double_t Graph0_fy1052[17] = {
   1.163494,
   2.755456,
   4.441911,
   6.147097,
   7.85887,
   9.575055,
   11.30539,
   13.03276,
   14.75885,
   16.49053,
   18.21203,
   19.92841,
   21.66818,
   23.40201,
   25.1209,
   26.85271,
   28.5879};
   Double_t Graph0_fex1052[17] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_fey1052[17] = {
   0.003130591,
   0.004575377,
   0.00524688,
   0.005610319,
   0.005861901,
   0.006080632,
   0.006290623,
   0.006494128,
   0.00670841,
   0.006939787,
   0.007174685,
   0.007439232,
   0.007732206,
   0.008059385,
   0.008420488,
   0.008843478,
   0.009352645};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV;#sigma_{py} [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","",100,0,55);
   Graph_Graph01052->SetMinimum(1.044327);
   Graph_Graph01052->SetMaximum(31.34095);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV");
   Graph_Graph01052->GetXaxis()->SetRange(0,94);
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("#sigma_{py} [MeV]");
   Graph_Graph01052->GetYaxis()->CenterTitle(true);
   Graph_Graph01052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01052->GetYaxis()->SetLabelFont(42);
   Graph_Graph01052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01052->GetYaxis()->SetTitleFont(42);
   Graph_Graph01052->GetZaxis()->SetLabelFont(42);
   Graph_Graph01052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01052);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
