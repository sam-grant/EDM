void full_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 09:49:47 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.1092737,3550,-0.005430667);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1120[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1120[12] = {
   -0.02478398,
   -0.02505888,
   -0.02590895,
   -0.02684849,
   -0.02841947,
   -0.03045958,
   -0.03389564,
   -0.03791838,
   -0.04347823,
   -0.04918721,
   -0.05913546,
   -0.0824995};
   Double_t Graph0_fex1120[12] = {
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
   Double_t Graph0_fey1120[12] = {
   0.002046146,
   0.002071307,
   0.002126821,
   0.002217993,
   0.002352823,
   0.002545561,
   0.002816361,
   0.003198146,
   0.003748453,
   0.004594868,
   0.006078179,
   0.009467003};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1120,Graph0_fy1120,Graph0_fex1120,Graph0_fey1120);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01120 = new TH1F("Graph_Graph01120","",100,580,3220);
   Graph_Graph01120->SetMinimum(-0.09888937);
   Graph_Graph01120->SetMaximum(-0.01581497);
   Graph_Graph01120->SetDirectory(0);
   Graph_Graph01120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01120->SetLineColor(ci);
   Graph_Graph01120->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01120->GetXaxis()->SetRange(1,100);
   Graph_Graph01120->GetXaxis()->CenterTitle(true);
   Graph_Graph01120->GetXaxis()->SetLabelFont(42);
   Graph_Graph01120->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01120->GetXaxis()->SetTitleFont(42);
   Graph_Graph01120->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01120->GetYaxis()->CenterTitle(true);
   Graph_Graph01120->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01120->GetYaxis()->SetLabelFont(42);
   Graph_Graph01120->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01120->GetYaxis()->SetTitleFont(42);
   Graph_Graph01120->GetZaxis()->SetLabelFont(42);
   Graph_Graph01120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01120);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
