void S0S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:15:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.1039459,3468.85,0.230576);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1406[15] = {
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
   Double_t Graph0_fy1406[15] = {
   0.1099219,
   0.1101382,
   0.1192519,
   0.1428939,
   0.1645869,
   0.1498671,
   0.1540656,
   0.1552532,
   0.1504629,
   0.1414747,
   0.1273847,
   0.1303217,
   0.1001877,
   0.06176508,
   -0.007979628};
   Double_t Graph0_fex1406[15] = {
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
   Double_t Graph0_fey1406[15] = {
   0.01051336,
   0.01051336,
   0.01048494,
   0.01033172,
   0.01023541,
   0.01029163,
   0.01051333,
   0.01093711,
   0.01161239,
   0.01263313,
   0.01410953,
   0.01622553,
   0.0193006,
   0.02449034,
   0.04021262};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1406,Graph0_fy1406,Graph0_fex1406,Graph0_fey1406);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01406 = new TH1F("Graph_Graph01406","S0S12S18",100,0,3080);
   Graph_Graph01406->SetMinimum(-0.07049371);
   Graph_Graph01406->SetMaximum(0.1971238);
   Graph_Graph01406->SetDirectory(0);
   Graph_Graph01406->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01406->SetLineColor(ci);
   Graph_Graph01406->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01406->GetXaxis()->SetRange(0,100);
   Graph_Graph01406->GetXaxis()->CenterTitle(true);
   Graph_Graph01406->GetXaxis()->SetLabelFont(42);
   Graph_Graph01406->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01406->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01406->GetXaxis()->SetTitleFont(42);
   Graph_Graph01406->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01406->GetYaxis()->CenterTitle(true);
   Graph_Graph01406->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01406->GetYaxis()->SetLabelFont(42);
   Graph_Graph01406->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01406->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01406->GetYaxis()->SetTitleFont(42);
   Graph_Graph01406->GetZaxis()->SetLabelFont(42);
   Graph_Graph01406->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01406->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01406);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
