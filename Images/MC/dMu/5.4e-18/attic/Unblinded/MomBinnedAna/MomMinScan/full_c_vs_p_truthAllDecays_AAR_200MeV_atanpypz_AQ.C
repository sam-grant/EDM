void full_c_vs_p_truthAllDecays_AAR_200MeV_atanpypz_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jul  1 11:20:14 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.03650337,3330.25,0.02074608);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[15] = {
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
   Double_t Graph0_fy1098[15] = {
   -0.0188673,
   -0.008569842,
   -0.00102251,
   -0.002897723,
   -0.0002088285,
   -0.0001694885,
   0.003194731,
   0.002792737,
   0.002809875,
   0.002366461,
   0.005187453,
   0.006443838,
   -0.001081045,
   0.0003704732,
   -0.001583888};
   Double_t Graph0_fex1098[15] = {
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
   Double_t Graph0_fey1098[15] = {
   0.00809449,
   0.004901636,
   0.004292649,
   0.00398749,
   0.003818399,
   0.00373427,
   0.00371684,
   0.003759124,
   0.003865437,
   0.004046708,
   0.004329997,
   0.004760664,
   0.005439234,
   0.006600735,
   0.008971118};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p_{min} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","",100,0,3080);
   Graph_Graph01098->SetMinimum(-0.03077842);
   Graph_Graph01098->SetMaximum(0.01502113);
   Graph_Graph01098->SetDirectory(0);
   Graph_Graph01098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01098->SetLineColor(ci);
   Graph_Graph01098->GetXaxis()->SetTitle("e^{+}_{LAB} p_{min} [MeV]");
   Graph_Graph01098->GetXaxis()->SetRange(0,96);
   Graph_Graph01098->GetXaxis()->CenterTitle(true);
   Graph_Graph01098->GetXaxis()->SetLabelFont(42);
   Graph_Graph01098->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01098->GetXaxis()->SetTitleFont(42);
   Graph_Graph01098->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01098->GetYaxis()->CenterTitle(true);
   Graph_Graph01098->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01098->GetYaxis()->SetLabelFont(42);
   Graph_Graph01098->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01098->GetYaxis()->SetTitleFont(42);
   Graph_Graph01098->GetZaxis()->SetLabelFont(42);
   Graph_Graph01098->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01098);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
