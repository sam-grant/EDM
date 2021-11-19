void S12_thetaYMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6005,-25.0205,2723.732,371.5721);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[22] = {
   367.0269,
   456.6667,
   570.2027,
   694.9963,
   815.9344,
   938.7277,
   1062.744,
   1188.292,
   1312.721,
   1435.939,
   1561.982,
   1685.236,
   1810.656,
   1935.236,
   2060.309,
   2185.156,
   2309.179,
   2433.028,
   2559.419,
   2679.279,
   2780.747,
   2885.683};
   Double_t Graph0_fy1021[22] = {
   177.967,
   300.1853,
   291.6086,
   261.59,
   225.139,
   212.2739,
   225.139,
   192.9763,
   154.381,
   173.6786,
   128.6508,
   109.3532,
   117.9299,
   90.05559,
   92.19977,
   87.91141,
   57.89288,
   60.03706,
   53.60452,
   49.31616,
   49.31616,
   19.29763};
   Double_t Graph0_fex1021[22] = {
   0.2809989,
   0.1434501,
   0.09718036,
   0.06560101,
   0.05251597,
   0.04720066,
   0.04485482,
   0.04328223,
   0.04380127,
   0.04396092,
   0.04712161,
   0.04946722,
   0.05541415,
   0.06060924,
   0.06907715,
   0.07608883,
   0.08791489,
   0.1052625,
   0.125985,
   0.1449659,
   0.290637,
   1.90302};
   Double_t Graph0_fey1021[22] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","S12",100,114.6618,3139.67);
   Graph_Graph01021->SetMinimum(14.63877);
   Graph_Graph01021->SetMaximum(331.9129);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01021->GetXaxis()->SetRange(22,79);
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
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
