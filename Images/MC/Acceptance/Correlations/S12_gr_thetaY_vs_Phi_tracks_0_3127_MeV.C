void S12_gr_thetaY_vs_Phi_tracks_0_3127_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  2 09:37:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(2.048318,-4.7158,3.480885,8.579);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1003[18] = {
   2.287079,
   2.437876,
   2.488141,
   2.538407,
   2.588672,
   2.638938,
   2.689203,
   2.739469,
   2.789734,
   2.84,
   2.890265,
   2.940531,
   2.990796,
   3.041062,
   3.091327,
   3.141593,
   3.191858,
   3.242124};
   Double_t _fy1003[18] = {
   2.5,
   -2.5,
   1.071429,
   -0.15625,
   0.5,
   -0.2852349,
   0.02730109,
   0.04363002,
   -0.05991841,
   -0.01230814,
   -0.0946499,
   -0.1561446,
   -0.640527,
   -0.317796,
   -0.5741668,
   -0.3251191,
   0.8566334,
   4.018987};
   Double_t _fex1003[18] = {
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
   0,
   0,
   0,
   0};
   Double_t _fey1003[18] = {
   0,
   0,
   0.8537347,
   0.764967,
   0.4898979,
   0.2970937,
   0.2192749,
   0.1776772,
   0.1529825,
   0.1317236,
   0.1087373,
   0.09165539,
   0.08368284,
   0.08167513,
   0.08908988,
   0.1311588,
   0.3152177,
   2.344212};
   TGraphErrors *gre = new TGraphErrors(18,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle(";Decay azimuthal angle [rad];#LT#theta_{y}#GT [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,2.191575,3.337628);
   Graph_Graph1003->SetMinimum(-3.38632);
   Graph_Graph1003->SetMaximum(7.24952);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Decay azimuthal angle [rad]");
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
