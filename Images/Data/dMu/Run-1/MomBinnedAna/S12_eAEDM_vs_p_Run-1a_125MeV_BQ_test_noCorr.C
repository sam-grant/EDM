void S12_eAEDM_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(485.1431,0.1045984,3016.181,0.7254334);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[21] = {
   372.4235,
   456.1787,
   569.8565,
   695.7956,
   815.8406,
   938.8431,
   1062.268,
   1188.496,
   1313.001,
   1435.615,
   1561.248,
   1685.663,
   1810.498,
   1935.113,
   2060.699,
   2185.294,
   2308.986,
   2433.523,
   2560.565,
   2678.061,
   2780.05};
   Double_t Graph0_fy1025[21] = {
   260.4011,
   1.824202,
   0.974633,
   0.5587148,
   0.3895928,
   0.3120598,
   0.2728464,
   0.2447564,
   0.2324224,
   0.218657,
   0.2188864,
   0.2081671,
   0.2134997,
   0.2130407,
   0.2245798,
   0.2331851,
   0.2365203,
   0.232721,
   0.2610123,
   0.2887879,
   0.2467045};
   Double_t Graph0_fex1025[21] = {
   0.5744707,
   1.372971,
   0.9204915,
   0.5946211,
   0.4788613,
   0.4270458,
   0.4033724,
   0.3854577,
   0.3985899,
   0.3965988,
   0.4212324,
   0.4473766,
   0.4901187,
   0.5443475,
   0.6016588,
   0.6913792,
   0.7875296,
   0.9149783,
   1.101754,
   1.277905,
   2.31207};
   Double_t Graph0_fey1025[21] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","S12",100,130.7977,3023.413);
   Graph_Graph01025->SetMinimum(0.1666819);
   Graph_Graph01025->SetMaximum(0.6633498);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01025->GetXaxis()->SetRange(22,91);
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
