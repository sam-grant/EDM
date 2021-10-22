void full_A_vs_p_truthAllDecays_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 17 13:21:49 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-393.25,-0.01417216,3236.75,0.3124976);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1084[12] = {
   0,
   250,
   500,
   750,
   1000,
   1250,
   1500,
   1750,
   2000,
   2250,
   2500,
   2750};
   Double_t Graph0_fy1084[12] = {
   0.2134753,
   0.228409,
   0.249118,
   0.252662,
   0.2369702,
   0.2179961,
   0.1963497,
   0.171823,
   0.1399889,
   0.1200979,
   0.07856086,
   0.04984405};
   Double_t Graph0_fex1084[12] = {
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
   Double_t Graph0_fey1084[12] = {
   0.005708679,
   0.005701297,
   0.005613097,
   0.005390631,
   0.005203075,
   0.005152397,
   0.005217723,
   0.005408107,
   0.005754675,
   0.006344019,
   0.007386196,
   0.009571254};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1084,Graph0_fy1084,Graph0_fex1084,Graph0_fey1084);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01084 = new TH1F("Graph_Graph01084","",100,0,3025);
   Graph_Graph01084->SetMinimum(0.01849481);
   Graph_Graph01084->SetMaximum(0.2798306);
   Graph_Graph01084->SetDirectory(0);
   Graph_Graph01084->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01084->SetLineColor(ci);
   Graph_Graph01084->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01084->GetXaxis()->SetRange(0,95);
   Graph_Graph01084->GetXaxis()->CenterTitle(true);
   Graph_Graph01084->GetXaxis()->SetLabelFont(42);
   Graph_Graph01084->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01084->GetXaxis()->SetTitleFont(42);
   Graph_Graph01084->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01084->GetYaxis()->CenterTitle(true);
   Graph_Graph01084->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01084->GetYaxis()->SetLabelFont(42);
   Graph_Graph01084->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01084->GetYaxis()->SetTitleFont(42);
   Graph_Graph01084->GetZaxis()->SetLabelFont(42);
   Graph_Graph01084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01084);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
