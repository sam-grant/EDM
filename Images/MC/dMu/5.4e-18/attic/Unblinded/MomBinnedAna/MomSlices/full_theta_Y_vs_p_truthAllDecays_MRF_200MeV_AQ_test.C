void full_theta_Y_vs_p_truthAllDecays_MRF_200MeV_AQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 28 13:51:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-7.08125,-4.572359,58.23125,5.402847);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1047[17] = {
   1,
   4,
   7,
   10,
   13,
   16,
   19,
   22,
   25,
   28,
   31,
   34,
   37,
   40,
   43,
   46,
   49};
   Double_t Graph0_fy1047[17] = {
   0.570067,
   2.134359,
   -1.768114,
   -0.08097547,
   -1.190195,
   -0.3776582,
   0.8884129,
   -0.3679191,
   -1.109432,
   -0.07320737,
   0.2672912,
   -0.03161777,
   -0.1656382,
   0.0886618,
   -0.195086,
   -0.1903845,
   0.5274065};
   Double_t Graph0_fex1047[17] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_fey1047[17] = {
   2.599472,
   1.605954,
   1.141711,
   0.8824503,
   0.7208726,
   0.6135442,
   0.5381144,
   0.4819443,
   0.4395931,
   0.4070772,
   0.3809185,
   0.3606899,
   0.345039,
   0.3330628,
   0.3240072,
   0.3183794,
   0.3163715};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1047,Graph0_fy1047,Graph0_fex1047,Graph0_fey1047);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV;#LT#theta_{y}#GT [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01047 = new TH1F("Graph_Graph01047","",100,0,55);
   Graph_Graph01047->SetMinimum(-3.574838);
   Graph_Graph01047->SetMaximum(4.405327);
   Graph_Graph01047->SetDirectory(0);
   Graph_Graph01047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01047->SetLineColor(ci);
   Graph_Graph01047->GetXaxis()->SetTitle("e^{+} p [MeV] in range: p #minus 1 < p < p #plus 1 MeV");
   Graph_Graph01047->GetXaxis()->SetRange(0,94);
   Graph_Graph01047->GetXaxis()->CenterTitle(true);
   Graph_Graph01047->GetXaxis()->SetLabelFont(42);
   Graph_Graph01047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01047->GetXaxis()->SetTitleFont(42);
   Graph_Graph01047->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01047->GetYaxis()->CenterTitle(true);
   Graph_Graph01047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01047->GetYaxis()->SetLabelFont(42);
   Graph_Graph01047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01047->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01047->GetYaxis()->SetTitleFont(42);
   Graph_Graph01047->GetZaxis()->SetLabelFont(42);
   Graph_Graph01047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01047);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
