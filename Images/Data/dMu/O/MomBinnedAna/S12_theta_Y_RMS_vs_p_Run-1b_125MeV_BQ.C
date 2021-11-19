void S12_theta_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6005,-4.54076,2723.732,47.28621);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1016[22] = {
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
   Double_t Graph0_fy1016[22] = {
   37.40433,
   31.55819,
   26.78395,
   23.4572,
   20.49433,
   18.79747,
   17.35863,
   16.17031,
   15.10462,
   14.09901,
   13.21312,
   12.06995,
   11.18637,
   10.22023,
   9.389804,
   8.59522,
   7.790834,
   6.957875,
   6.197196,
   5.485656,
   4.942029,
   4.890395};
   Double_t Graph0_fex1016[22] = {
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
   Double_t Graph0_fey1016[22] = {
   1.24405,
   0.1059083,
   0.05193713,
   0.03088496,
   0.02121927,
   0.01738023,
   0.01531034,
   0.01380344,
   0.01292078,
   0.012203,
   0.01219181,
   0.01176343,
   0.01214213,
   0.01219979,
   0.01269349,
   0.01286381,
   0.01342457,
   0.01443437,
   0.01534825,
   0.01655976,
   0.04000889,
   0.7933269};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","S12",100,114.6618,3139.67);
   Graph_Graph01016->SetMinimum(0.6419373);
   Graph_Graph01016->SetMaximum(42.10351);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01016->GetXaxis()->SetRange(22,79);
   Graph_Graph01016->GetXaxis()->CenterTitle(true);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01016->GetYaxis()->CenterTitle(true);
   Graph_Graph01016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
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
