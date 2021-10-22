void S0S12S18_simple_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-0.1046,3650,0.2307216);
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
   0.109937,
   0.1101537,
   0.1192631,
   0.1429062,
   0.1645992,
   0.1498706,
   0.1540607,
   0.1551671,
   0.1503411,
   0.1414751,
   0.1273564,
   0.130435,
   0.1000442,
   0.06164827,
   -0.00850136};
   Double_t Graph0_fex1406[15] = {
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
   Double_t Graph0_fey1406[15] = {
   0.01051338,
   0.01051339,
   0.01048497,
   0.01033175,
   0.01023543,
   0.01029164,
   0.01051332,
   0.01093707,
   0.01161228,
   0.01263305,
   0.0141093,
   0.01622514,
   0.0193,
   0.02448908,
   0.04021174};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1406,Graph0_fy1406,Graph0_fex1406,Graph0_fey1406);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01406 = new TH1F("Graph_Graph01406","S0S12S18",100,-400,3200);
   Graph_Graph01406->SetMinimum(-0.07106787);
   Graph_Graph01406->SetMaximum(0.1971894);
   Graph_Graph01406->SetDirectory(0);
   Graph_Graph01406->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01406->SetLineColor(ci);
   Graph_Graph01406->GetXaxis()->SetTitle("p_{min} [MeV]");
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
