void C_vs_mom_trkQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Mar 17 20:13:24 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-358.75,-0.3600532,3128.75,0.07201064);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[6] = {
   6.953123e-310,
   750,
   1250,
   1750,
   2250,
   6.953123e-310};
   Double_t Graph0_fy1011[6] = {
   1.482197e-323,
   -0.2680391,
   -0.1378266,
   -0.1104748,
   -0.08002232,
   2.194832e-314};
   Double_t Graph0_fex1011[6] = {
   0,
   250,
   250,
   250,
   250,
   6.953221e-310};
   Double_t Graph0_fey1011[6] = {
   6.953123e-310,
   0.02000346,
   0.01281553,
   0.01092112,
   0.0114259,
   6.953221e-310};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle(";Track momentum [MeV];Average vertical offset, c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","",100,-250,2750);
   Graph_Graph01011->SetMinimum(-0.3168468);
   Graph_Graph01011->SetMaximum(0.02880425);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("Track momentum [MeV]");
   Graph_Graph01011->GetXaxis()->SetRange(9,101);
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("Average vertical offset, c [mrad]");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
