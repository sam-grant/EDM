void S12_N_vs_p_Run-1a_125MeV_BQ_test_corr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(485.1431,-279.0303,3016.181,11382.36);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1024[21] = {
   372.4235,
   456.1787,
   569.87,
   695.8091,
   815.8418,
   938.8441,
   1062.299,
   1188.5,
   1313.017,
   1435.605,
   1561.235,
   1685.671,
   1810.509,
   1935.081,
   2060.699,
   2185.29,
   2309.013,
   2433.545,
   2560.565,
   2678.061,
   2780.05};
   Double_t Graph0_fy1024[21] = {
   4,
   511,
   1561,
   3534,
   5623,
   7193,
   7894,
   8515,
   8392,
   8249,
   7211,
   6581,
   5471,
   4469,
   3488,
   2778,
   2122,
   1569,
   1020,
   698,
   99};
   Double_t Graph0_fex1024[21] = {
   0.5744707,
   1.372971,
   0.9209827,
   0.5946061,
   0.4787511,
   0.4270488,
   0.403261,
   0.3854228,
   0.3985205,
   0.3966175,
   0.4212256,
   0.4473419,
   0.4900027,
   0.5441462,
   0.6016588,
   0.691145,
   0.7876235,
   0.9152903,
   1.101754,
   1.277905,
   2.31207};
   Double_t Graph0_fey1024[21] = {
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
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01024 = new TH1F("Graph_Graph01024","S12",100,130.7977,3023.413);
   Graph_Graph01024->SetMinimum(887.1089);
   Graph_Graph01024->SetMaximum(10216.22);
   Graph_Graph01024->SetDirectory(0);
   Graph_Graph01024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01024->SetLineColor(ci);
   Graph_Graph01024->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01024->GetXaxis()->SetRange(22,91);
   Graph_Graph01024->GetXaxis()->CenterTitle(true);
   Graph_Graph01024->GetXaxis()->SetLabelFont(42);
   Graph_Graph01024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01024->GetXaxis()->SetTitleFont(42);
   Graph_Graph01024->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01024->GetYaxis()->CenterTitle(true);
   Graph_Graph01024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01024->GetYaxis()->SetLabelFont(42);
   Graph_Graph01024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01024->GetYaxis()->SetTitleFont(42);
   Graph_Graph01024->GetZaxis()->SetLabelFont(42);
   Graph_Graph01024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01024);
   
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
