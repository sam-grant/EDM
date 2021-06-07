void full_A_vs_p_truth_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:11:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.2879305,3456.75,0.5857325);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[15] = {
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
   Double_t Graph0_fy1038[15] = {
   0.07890222,
   -0.06343526,
   0.1777223,
   0.3811712,
   0.3155645,
   0.2539425,
   0.1815113,
   0.2328538,
   0.2696087,
   0.2109975,
   0.208329,
   0.199054,
   0.1626225,
   0.1071417,
   0.06134031};
   Double_t Graph0_fex1038[15] = {
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
   Double_t Graph0_fey1038[15] = {
   0.1031325,
   0.07888474,
   0.06717973,
   0.05895075,
   0.05049833,
   0.04385301,
   0.03845302,
   0.0337558,
   0.02983487,
   0.02648896,
   0.0233702,
   0.0204394,
   0.0175167,
   0.0145922,
   0.01123816};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;A_{Bz} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","",100,0,3300);
   Graph_Graph01038->SetMinimum(-0.2005642);
   Graph_Graph01038->SetMaximum(0.4983662);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01038->GetXaxis()->SetRange(0,93);
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
