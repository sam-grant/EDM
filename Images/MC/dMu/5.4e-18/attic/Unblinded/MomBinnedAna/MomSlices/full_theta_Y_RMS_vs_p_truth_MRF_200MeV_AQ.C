void full_theta_Y_RMS_vs_p_truth_MRF_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Aug 20 10:37:05 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-7.08125,650.0283,58.23125,710.2854);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[17] = {
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
   Double_t Graph0_fy1048[17] = {
   698.684,
   692.8393,
   674.7401,
   666.8971,
   661.9151,
   660.364,
   660.8014,
   661.8872,
   663.6964,
   665.5413,
   666.9806,
   669.1464,
   671.5673,
   673.9127,
   675.7628,
   677.7947,
   679.7048};
   Double_t Graph0_fex1048[17] = {
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
   Double_t Graph0_fey1048[17] = {
   1.558577,
   0.935286,
   0.6256268,
   0.4569566,
   0.3566734,
   0.2928905,
   0.2503549,
   0.2202483,
   0.1980175,
   0.1811933,
   0.1678224,
   0.1575395,
   0.1496428,
   0.1435874,
   0.1389987,
   0.1359466,
   0.1345649};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV;#sigma_{#thetay} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","",100,0,55);
   Graph_Graph01048->SetMinimum(656.054);
   Graph_Graph01048->SetMaximum(704.2597);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV");
   Graph_Graph01048->GetXaxis()->SetRange(0,94);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("#sigma_{#thetay} [mrad]");
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
