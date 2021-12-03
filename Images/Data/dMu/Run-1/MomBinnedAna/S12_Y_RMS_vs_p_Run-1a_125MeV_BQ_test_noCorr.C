void S12_Y_RMS_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(485.1431,9.194728,3016.181,16.10808);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[21] = {
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
   Double_t Graph0_fy1022[21] = {
   5.99325,
   13.7347,
   12.99699,
   12.85067,
   12.75416,
   12.5647,
   12.75441,
   12.79711,
   12.66816,
   12.8021,
   12.73775,
   12.63843,
   12.70265,
   12.59442,
   12.67437,
   12.73846,
   12.51415,
   12.47251,
   12.33538,
   13.17781,
   13.98403};
   Double_t Graph0_fex1022[21] = {
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
   Double_t Graph0_fey1022[21] = {
   2.118934,
   0.4296291,
   0.2325344,
   0.1528758,
   0.1202901,
   0.1047568,
   0.1015651,
   0.0980686,
   0.09778352,
   0.09965819,
   0.1060817,
   0.1101621,
   0.1214578,
   0.1332314,
   0.1517481,
   0.1709283,
   0.1921393,
   0.2225815,
   0.2731099,
   0.352696,
   0.9938015};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01022 = new TH1F("Graph_Graph01022","S12",100,130.7977,3023.413);
   Graph_Graph01022->SetMinimum(9.886063);
   Graph_Graph01022->SetMaximum(15.41675);
   Graph_Graph01022->SetDirectory(0);
   Graph_Graph01022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01022->SetLineColor(ci);
   Graph_Graph01022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01022->GetXaxis()->SetRange(22,91);
   Graph_Graph01022->GetXaxis()->CenterTitle(true);
   Graph_Graph01022->GetXaxis()->SetLabelFont(42);
   Graph_Graph01022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01022->GetXaxis()->SetTitleFont(42);
   Graph_Graph01022->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01022->GetYaxis()->CenterTitle(true);
   Graph_Graph01022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01022->GetYaxis()->SetLabelFont(42);
   Graph_Graph01022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01022->GetYaxis()->SetTitleFont(42);
   Graph_Graph01022->GetZaxis()->SetLabelFont(42);
   Graph_Graph01022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01022);
   
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
