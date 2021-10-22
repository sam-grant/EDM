void full_c_vs_p_truth_AAR_200MeV_tan_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 29 12:15:03 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-1.022582,3456.75,0.2150617);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1050[15] = {
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
   Double_t Graph0_fy1050[15] = {
   -0.772521,
   -0.4138729,
   -0.1602061,
   -0.08674522,
   -0.03798016,
   -0.03144404,
   -0.026573,
   -0.01518733,
   -0.01183903,
   -0.003663356,
   -0.00514279,
   -0.003205443,
   -0.006813424,
   0.004284066,
   -0.004921991};
   Double_t Graph0_fex1050[15] = {
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
   Double_t Graph0_fey1050[15] = {
   0.04378671,
   0.0194135,
   0.01279787,
   0.009637592,
   0.007796868,
   0.006696576,
   0.005959511,
   0.00538875,
   0.004956126,
   0.004673649,
   0.00448646,
   0.004397454,
   0.004375635,
   0.004503767,
   0.005023486};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01050 = new TH1F("Graph_Graph01050","",100,0,3300);
   Graph_Graph01050->SetMinimum(-0.8988173);
   Graph_Graph01050->SetMaximum(0.09129739);
   Graph_Graph01050->SetDirectory(0);
   Graph_Graph01050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01050->SetLineColor(ci);
   Graph_Graph01050->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01050->GetXaxis()->SetRange(0,93);
   Graph_Graph01050->GetXaxis()->CenterTitle(true);
   Graph_Graph01050->GetXaxis()->SetLabelFont(42);
   Graph_Graph01050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetXaxis()->SetTitleFont(42);
   Graph_Graph01050->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01050->GetYaxis()->CenterTitle(true);
   Graph_Graph01050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01050->GetYaxis()->SetLabelFont(42);
   Graph_Graph01050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01050->GetYaxis()->SetTitleFont(42);
   Graph_Graph01050->GetZaxis()->SetLabelFont(42);
   Graph_Graph01050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01050);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
