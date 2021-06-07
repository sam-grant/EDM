void S0S12S18_full_N_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-373500.3,3605.25,3383435);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1470[15] = {
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
   Double_t Graph0_fy1470[15] = {
   2437,
   263041,
   1411015,
   2195781,
   2573522,
   2727592,
   2734532,
   2519821,
   2146027,
   1696586,
   1285893,
   940046,
   565705,
   350885,
   91803};
   Double_t Graph0_fex1470[15] = {
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
   Double_t Graph0_fey1470[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1470,Graph0_fy1470,Graph0_fex1470,Graph0_fey1470);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;Positrons");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01470 = new TH1F("Graph_Graph01470","",100,0,3300);
   Graph_Graph01470->SetMinimum(2193.3);
   Graph_Graph01470->SetMaximum(3007742);
   Graph_Graph01470->SetDirectory(0);
   Graph_Graph01470->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01470->SetLineColor(ci);
   Graph_Graph01470->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01470->GetXaxis()->SetRange(0,97);
   Graph_Graph01470->GetXaxis()->CenterTitle(true);
   Graph_Graph01470->GetXaxis()->SetLabelFont(42);
   Graph_Graph01470->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01470->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01470->GetXaxis()->SetTitleFont(42);
   Graph_Graph01470->GetYaxis()->SetTitle("Positrons");
   Graph_Graph01470->GetYaxis()->CenterTitle(true);
   Graph_Graph01470->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01470->GetYaxis()->SetLabelFont(42);
   Graph_Graph01470->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01470->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01470->GetYaxis()->SetTitleFont(42);
   Graph_Graph01470->GetZaxis()->SetLabelFont(42);
   Graph_Graph01470->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01470->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01470);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
