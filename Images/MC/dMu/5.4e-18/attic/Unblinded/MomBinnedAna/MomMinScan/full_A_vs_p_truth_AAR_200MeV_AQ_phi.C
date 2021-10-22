void full_A_vs_p_truth_AAR_200MeV_AQ_phi()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 14 16:34:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-404.25,-0.01405199,3330.25,0.2850283);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[15] = {
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
   Double_t Graph0_fy1099[15] = {
   0.2309084,
   0.2298477,
   0.2271829,
   0.2252853,
   0.2210634,
   0.2139936,
   0.2059668,
   0.1927686,
   0.1798427,
   0.1660994,
   0.1473476,
   0.1273123,
   0.1023279,
   0.08177093,
   0.04121975};
   Double_t Graph0_fex1099[15] = {
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
   Double_t Graph0_fey1099[15] = {
   0.004273261,
   0.003387018,
   0.00306623,
   0.002879569,
   0.002767239,
   0.002704106,
   0.002678836,
   0.002689444,
   0.002741168,
   0.002840655,
   0.002993761,
   0.00322456,
   0.003578247,
   0.004180771,
   0.005425017};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","",100,0,3080);
   Graph_Graph01099->SetMinimum(0.01585604);
   Graph_Graph01099->SetMaximum(0.2551203);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("e^{+}_{LAB} p_{min} [MeV]");
   Graph_Graph01099->GetXaxis()->SetRange(0,96);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
