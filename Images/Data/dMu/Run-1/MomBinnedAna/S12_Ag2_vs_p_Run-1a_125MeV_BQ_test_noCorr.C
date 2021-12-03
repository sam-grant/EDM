void S12_Ag2_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(485.1431,-0.8953894,3016.181,0.7091505);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[21] = {
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
   Double_t Graph0_fy1019[21] = {
   21.88182,
   2.13358,
   -0.02352033,
   -0.9649414,
   0.356237,
   0.2764566,
   -0.3986241,
   -0.1195732,
   0.02234122,
   0.4620486,
   0.3244777,
   -0.04290449,
   -0.09430154,
   0.1611792,
   0.2456126,
   0.09760874,
   -0.4027375,
   0.2699114,
   -0.2523256,
   1.071635,
   5.088356};
   Double_t Graph0_fex1019[21] = {
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
   Double_t Graph0_fey1019[21] = {
   668.8367,
   1.822536,
   0.9766343,
   0.5553574,
   0.3824509,
   0.3118578,
   0.2771218,
   0.2484418,
   0.2297606,
   0.217183,
   0.2204319,
   0.2090028,
   0.2110616,
   0.2143334,
   0.2219686,
   0.229847,
   0.2471128,
   0.2467646,
   0.2767433,
   0.2504678,
   0.3813796};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","S12",100,130.7977,3023.413);
   Graph_Graph01019->SetMinimum(-0.7349354);
   Graph_Graph01019->SetMaximum(0.5486965);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01019->GetXaxis()->SetRange(22,91);
   Graph_Graph01019->GetXaxis()->CenterTitle(true);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01019->GetYaxis()->CenterTitle(true);
   Graph_Graph01019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
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
