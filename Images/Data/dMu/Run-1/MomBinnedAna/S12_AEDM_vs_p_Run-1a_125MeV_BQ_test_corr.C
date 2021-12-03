void S12_AEDM_vs_p_Run-1a_125MeV_BQ_test_corr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(485.1431,-0.5730466,3016.181,0.4246213);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[21] = {
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
   Double_t Graph0_fy1018[21] = {
   6.617925,
   2.38393,
   0.952878,
   -0.616986,
   0.1101117,
   0.2014055,
   0.1547508,
   -0.1622503,
   0.1000994,
   0.274792,
   0.1581774,
   0.112202,
   0.06721331,
   -0.3996627,
   -0.1144426,
   0.1746691,
   -0.170689,
   0.00801451,
   0.1212588,
   -0.1076397,
   0.1412816};
   Double_t Graph0_fex1018[21] = {
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
   Double_t Graph0_fey1018[21] = {
   21.72338,
   1.856871,
   0.9796352,
   0.5571492,
   0.3893099,
   0.3121709,
   0.272965,
   0.2450983,
   0.2316326,
   0.2188549,
   0.2181877,
   0.2087354,
   0.2137222,
   0.2130618,
   0.2257899,
   0.2324093,
   0.2377002,
   0.2325231,
   0.2609793,
   0.291222,
   0.4607255};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,130.7977,3023.413);
   Graph_Graph01018->SetMinimum(-0.4732798);
   Graph_Graph01018->SetMaximum(0.3248545);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(22,91);
   Graph_Graph01018->GetXaxis()->CenterTitle(true);
   Graph_Graph01018->GetXaxis()->SetLabelFont(42);
   Graph_Graph01018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01018->GetXaxis()->SetTitleFont(42);
   Graph_Graph01018->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01018->GetYaxis()->CenterTitle(true);
   Graph_Graph01018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01018->GetYaxis()->SetLabelFont(42);
   Graph_Graph01018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01018->GetYaxis()->SetTitleFont(42);
   Graph_Graph01018->GetZaxis()->SetLabelFont(42);
   Graph_Graph01018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01018);
   
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
