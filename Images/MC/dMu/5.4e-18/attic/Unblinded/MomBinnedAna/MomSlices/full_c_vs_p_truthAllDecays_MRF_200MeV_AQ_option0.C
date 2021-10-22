void full_c_vs_p_truthAllDecays_MRF_200MeV_AQ_option0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jul 15 00:14:48 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-1.116508,3456.75,1.359049);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[15] = {
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
   Double_t Graph0_fy1052[15] = {
   -0.1138896,
   -0.483819,
   0.2058644,
   -0.3891105,
   0.05492081,
   -0.4187204,
   0.05456347,
   0.1934473,
   0.2052069,
   -0.280524,
   0.0396041,
   0.5877105,
   -0.1393643,
   0.1774585,
   -0.1748492};
   Double_t Graph0_fex1052[15] = {
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
   Double_t Graph0_fey1052[15] = {
   0.1520917,
   0.2197683,
   0.2486124,
   0.2650626,
   0.2763252,
   0.2851949,
   0.2934652,
   0.3019369,
   0.3118323,
   0.3234948,
   0.3386681,
   0.3587456,
   0.3870322,
   0.4298261,
   0.5089089};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","",100,0,3300);
   Graph_Graph01052->SetMinimum(-0.8689524);
   Graph_Graph01052->SetMaximum(1.111493);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("e^{+}_{LAB} p_{max} [MeV]");
   Graph_Graph01052->GetXaxis()->SetRange(0,93);
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("c [mrad]");
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
