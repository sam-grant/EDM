void full_c_vs_p_truth_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:11:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.1834076,3456.75,0.1152323);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[15] = {
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
   Double_t Graph0_fy1037[15] = {
   -0.05245756,
   -0.02006015,
   -0.05041253,
   -0.0918215,
   -0.06257085,
   -0.03464728,
   -0.03705789,
   -0.001733951,
   0.02903032,
   0.03144592,
   0.03536646,
   0.05099701,
   0.03350314,
   0.04306587,
   0.03553331};
   Double_t Graph0_fex1037[15] = {
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
   Double_t Graph0_fey1037[15] = {
   0.07313806,
   0.05591708,
   0.0476864,
   0.04181279,
   0.03582366,
   0.03108668,
   0.02724912,
   0.02393517,
   0.0211572,
   0.01876217,
   0.01655542,
   0.01446193,
   0.01240965,
   0.01034105,
   0.007954734};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","",100,0,3300);
   Graph_Graph01037->SetMinimum(-0.1535436);
   Graph_Graph01037->SetMaximum(0.08536827);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01037->GetXaxis()->SetRange(0,93);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
