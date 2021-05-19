void full_A_vs_p_truth_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:44:55 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-535,-0.01278905,3335,0.2725045);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1090[15] = {
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
   Double_t Graph0_fy1090[15] = {
   0.1992737,
   0.2048576,
   0.2138018,
   0.2220986,
   0.2207802,
   0.2137843,
   0.2057435,
   0.192597,
   0.1796529,
   0.165916,
   0.1470432,
   0.12705,
   0.1020448,
   0.0813866,
   0.04017675};
   Double_t Graph0_fex1090[15] = {
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
   Double_t Graph0_fey1090[15] = {
   0.002987834,
   0.002970662,
   0.002928228,
   0.002856898,
   0.002764086,
   0.002701575,
   0.002676715,
   0.002687599,
   0.002739465,
   0.002838987,
   0.00299204,
   0.003222612,
   0.003575711,
   0.004176714,
   0.005416881};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1090,Graph0_fy1090,Graph0_fex1090,Graph0_fey1090);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01090 = new TH1F("Graph_Graph01090","",100,-400,3200);
   Graph_Graph01090->SetMinimum(0.0157403);
   Graph_Graph01090->SetMaximum(0.2439751);
   Graph_Graph01090->SetDirectory(0);
   Graph_Graph01090->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01090->SetLineColor(ci);
   Graph_Graph01090->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01090->GetXaxis()->SetRange(8,93);
   Graph_Graph01090->GetXaxis()->CenterTitle(true);
   Graph_Graph01090->GetXaxis()->SetLabelFont(42);
   Graph_Graph01090->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01090->GetXaxis()->SetTitleFont(42);
   Graph_Graph01090->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01090->GetYaxis()->CenterTitle(true);
   Graph_Graph01090->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01090->GetYaxis()->SetLabelFont(42);
   Graph_Graph01090->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01090->GetYaxis()->SetTitleFont(42);
   Graph_Graph01090->GetZaxis()->SetLabelFont(42);
   Graph_Graph01090->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01090);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
