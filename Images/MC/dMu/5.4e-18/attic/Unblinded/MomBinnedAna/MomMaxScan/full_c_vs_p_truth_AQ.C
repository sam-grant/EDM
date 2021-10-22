void full_c_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:13:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.08419867,3550,0.004392054);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1123[12] = {
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
   Double_t Graph0_fy1123[12] = {
   -0.01465264,
   -0.01488103,
   -0.01560928,
   -0.01598119,
   -0.01616427,
   -0.01530259,
   -0.01877665,
   -0.02543903,
   -0.02678061,
   -0.02546852,
   -0.03010825,
   -0.05199537};
   Double_t Graph0_fex1123[12] = {
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
   Double_t Graph0_fey1123[12] = {
   0.003969633,
   0.004017816,
   0.004124674,
   0.004300529,
   0.00456068,
   0.004929524,
   0.005444234,
   0.006160278,
   0.00716606,
   0.008688338,
   0.01134606,
   0.01743817};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1123,Graph0_fy1123,Graph0_fex1123,Graph0_fey1123);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01123 = new TH1F("Graph_Graph01123","",100,580,3220);
   Graph_Graph01123->SetMinimum(-0.07533959);
   Graph_Graph01123->SetMaximum(-0.004467019);
   Graph_Graph01123->SetDirectory(0);
   Graph_Graph01123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01123->SetLineColor(ci);
   Graph_Graph01123->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01123->GetXaxis()->SetRange(1,100);
   Graph_Graph01123->GetXaxis()->CenterTitle(true);
   Graph_Graph01123->GetXaxis()->SetLabelFont(42);
   Graph_Graph01123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01123->GetXaxis()->SetTitleFont(42);
   Graph_Graph01123->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01123->GetYaxis()->CenterTitle(true);
   Graph_Graph01123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01123->GetYaxis()->SetLabelFont(42);
   Graph_Graph01123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01123->GetYaxis()->SetTitleFont(42);
   Graph_Graph01123->GetZaxis()->SetLabelFont(42);
   Graph_Graph01123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01123);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
