void full_c_vs_p_truthAllDecays_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 10:53:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-0.03737564,3550,0.08251979);
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
   -0.002126303,
   -0.002153951,
   -0.003660058,
   -0.003016819,
   -0.006289721,
   -0.007315531,
   -0.00440128,
   -0.004470293,
   -0.0048593,
   -0.0005198959,
   0.01262704,
   0.0347857};
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
   0.007629668,
   0.007714455,
   0.007892758,
   0.008177356,
   0.008587934,
   0.009155897,
   0.009931482,
   0.01100371,
   0.01253377,
   0.01485437,
   0.01881816,
   0.02775151};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1123,Graph0_fy1123,Graph0_fex1123,Graph0_fey1123);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01123 = new TH1F("Graph_Graph01123","",100,580,3220);
   Graph_Graph01123->SetMinimum(-0.0253861);
   Graph_Graph01123->SetMaximum(0.07053025);
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
