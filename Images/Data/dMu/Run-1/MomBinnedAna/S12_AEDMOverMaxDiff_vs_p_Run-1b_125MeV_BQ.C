void S12_AEDMOverMaxDiff_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6562,-0.7126619,3036.689,0.1163261);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[22] = {
   367.0228,
   456.7253,
   570.2426,
   695.0361,
   815.9691,
   938.7137,
   1062.74,
   1188.278,
   1312.735,
   1435.934,
   1561.977,
   1685.242,
   1810.658,
   1935.243,
   2060.306,
   2185.137,
   2309.23,
   2433,
   2559.494,
   2679.163,
   2780.754,
   2888.448};
   Double_t Graph0_fy1071[22] = {
   0.00769781,
   0.01209115,
   0.01258055,
   0.002852533,
   0.003639862,
   0.0009982816,
   0.003216655,
   -0.001022803,
   0.004205183,
   -0.0008501144,
   0.001663754,
   0.001001381,
   0.0008045141,
   0.003958839,
   0.003313892,
   0.002536613,
   0.006585546,
   0.006319087,
   -4.429016e-05,
   0.003519416,
   0.02803813,
   -1.453862};
   Double_t Graph0_fex1071[22] = {
   0.2618944,
   0.1304244,
   0.08828179,
   0.05953292,
   0.04761139,
   0.04276526,
   0.04063653,
   0.03918935,
   0.03956692,
   0.03971624,
   0.04252848,
   0.04463818,
   0.04995398,
   0.0546307,
   0.06224063,
   0.06855283,
   0.07897087,
   0.09467415,
   0.1133242,
   0.1298863,
   0.2598874,
   1.874823};
   Double_t Graph0_fey1071[22] = {
   0.05881881,
   0.006120441,
   0.003538351,
   0.002399146,
   0.001884466,
   0.001679111,
   0.001601149,
   -0.001547947,
   0.001551597,
   -0.001565793,
   0.001670435,
   0.001761473,
   0.001962751,
   0.002158791,
   0.002444368,
   0.002696787,
   0.00310693,
   0.003730172,
   -0.004463724,
   0.005425932,
   0.01449459,
   -0.4169024};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","S12",100,114.4047,3142.679);
   Graph_Graph01071->SetMinimum(-0.6297631);
   Graph_Graph01071->SetMaximum(0.03342727);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01071->GetXaxis()->SetRange(21,88);
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
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
