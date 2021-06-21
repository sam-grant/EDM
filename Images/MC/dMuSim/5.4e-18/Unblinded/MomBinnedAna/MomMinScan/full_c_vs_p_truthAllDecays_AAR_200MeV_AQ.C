void full_c_vs_p_truthAllDecays_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 18 15:33:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-423.5,-3.267306e-05,3503.5,5.626128e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[15] = {
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
   Double_t Graph0_fy1097[15] = {
   -1.04142e-05,
   -4.972615e-06,
   -1.197027e-06,
   -3.001505e-06,
   -6.096126e-07,
   -1.395403e-06,
   9.878109e-07,
   4.882035e-06,
   3.635055e-06,
   1.075192e-06,
   4.929097e-06,
   9.109229e-06,
   8.791714e-06,
   1.976699e-05,
   1.538573e-05};
   Double_t Graph0_fex1097[15] = {
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
   Double_t Graph0_fey1097[15] = {
   7.436463e-06,
   4.053939e-06,
   3.63254e-06,
   3.455559e-06,
   3.402383e-06,
   3.382877e-06,
   3.439114e-06,
   3.650368e-06,
   4.116551e-06,
   4.823481e-06,
   5.825749e-06,
   7.331401e-06,
   9.80573e-06,
   1.447991e-05,
   2.605317e-05};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];c [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","",100,0,3080);
   Graph_Graph01097->SetMinimum(-2.377962e-05);
   Graph_Graph01097->SetMaximum(4.736785e-05);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01097->GetXaxis()->SetRange(0,101);
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("c [rad]");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
