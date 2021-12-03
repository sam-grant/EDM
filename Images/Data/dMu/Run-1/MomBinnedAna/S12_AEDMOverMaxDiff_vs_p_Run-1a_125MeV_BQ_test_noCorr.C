void S12_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(485.1431,-0.03596052,3016.181,0.02843821);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[21] = {
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
   Double_t Graph0_fy1027[21] = {
   -0.5106372,
   0.05726383,
   0.03122881,
   -0.0237935,
   0.007645387,
   0.01182424,
   0.006369833,
   -0.01025677,
   0.00751264,
   0.01871313,
   0.007791574,
   0.006930009,
   0.002856057,
   -0.03808862,
   -0.007567009,
   0.01616403,
   -0.02446623,
   -0.002254788,
   0.01299564,
   0.004647225,
   -0.1942127};
   Double_t Graph0_fex1027[21] = {
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
   Double_t Graph0_fey1027[21] = {
   -15.60911,
   0.05786341,
   0.03523941,
   -0.02366685,
   0.01893719,
   0.01659487,
   0.01576034,
   -0.0151651,
   0.01548579,
   0.01556545,
   0.0165228,
   0.01733447,
   0.0191663,
   -0.02103784,
   -0.02393891,
   0.02684427,
   -0.02991806,
   -0.03443945,
   0.04266778,
   0.0515963,
   -0.04790523};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S12",100,130.7977,3023.413);
   Graph_Graph01027->SetMinimum(-0.02952065);
   Graph_Graph01027->SetMaximum(0.02199833);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(22,91);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
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
