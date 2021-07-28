void full_chiSqrNDF_vs_p_truthAllDecays_MRF_200MeV_AQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul 23 10:55:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-7.08125,0.5925359,58.23125,0.7038153);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[17] = {
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
   Double_t Graph0_fy1057[17] = {
   0.6834299,
   0.681768,
   0.6808065,
   0.6799809,
   0.6809513,
   0.6817141,
   0.6824559,
   0.6830409,
   0.6838011,
   0.6831223,
   0.6819926,
   0.6796184,
   0.675012,
   0.6674716,
   0.656229,
   0.6391232,
   0.6112824};
   Double_t Graph0_fex1057[17] = {
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
   Double_t Graph0_fey1057[17] = {
   0.001838892,
   0.001132062,
   0.0008041832,
   0.0006206035,
   0.000507919,
   0.0004329221,
   0.0003797367,
   0.0003403542,
   0.0003108114,
   0.0002874815,
   0.0002686731,
   0.0002537001,
   0.0002408755,
   0.0002298696,
   0.000219967,
   0.0002104843,
   0.0001999835};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV;#sigma_{#alpha} [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","",100,0,55);
   Graph_Graph01057->SetMinimum(0.6036638);
   Graph_Graph01057->SetMaximum(0.6926874);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV");
   Graph_Graph01057->GetXaxis()->SetRange(0,94);
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("#sigma_{#alpha} [rad]");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
