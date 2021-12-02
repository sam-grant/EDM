void S12_AEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8825,0.01495986,2727.342,0.06832705);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1018[22] = {
   367.2434,
   456.6615,
   570.2449,
   695.0723,
   815.9921,
   938.5616,
   1062.66,
   1188.29,
   1312.784,
   1435.901,
   1561.976,
   1685.265,
   1810.607,
   1935.134,
   2060.292,
   2185.028,
   2309.148,
   2432.963,
   2559.53,
   2679.191,
   2781.14,
   2886.432};
   Double_t Graph0_fy1018[22] = {
   0.7355203,
   -0.1217199,
   0.0708107,
   0.02208586,
   0.03351832,
   0.03039547,
   0.0472777,
   0.03378578,
   0.05780101,
   0.02963282,
   0.05287216,
   0.04817971,
   0.03956158,
   0.0368285,
   0.02459938,
   0.05330601,
   0.03760993,
   0.03200868,
   0.05155862,
   0.02228391,
   -0.03739999,
   -1.82358};
   Double_t Graph0_fex1018[22] = {
   0.1560282,
   0.07840967,
   0.05265271,
   0.03561509,
   0.02855406,
   0.02572918,
   0.02439917,
   0.02356317,
   0.02386365,
   0.0239283,
   0.02569708,
   0.02696504,
   0.03024491,
   0.03312442,
   0.037755,
   0.04159103,
   0.04798117,
   0.05761162,
   0.06909077,
   0.07878472,
   0.1575697,
   0.9491119};
   Double_t Graph0_fey1018[22] = {
   1.252594,
   0.1148103,
   0.05622443,
   0.03351537,
   0.02305848,
   0.01892919,
   0.01667781,
   0.01505327,
   0.01410333,
   0.01330879,
   0.01331937,
   0.01284492,
   0.01325614,
   0.01333354,
   0.01391197,
   0.0140678,
   0.01470249,
   0.01583382,
   0.01685403,
   0.01806325,
   0.04348679,
   0.2955327};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01018 = new TH1F("Graph_Graph01018","S12",100,115.0581,3139.41);
   Graph_Graph01018->SetMinimum(0.02029657);
   Graph_Graph01018->SetMaximum(0.06299033);
   Graph_Graph01018->SetDirectory(0);
   Graph_Graph01018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01018->SetLineColor(ci);
   Graph_Graph01018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01018->GetXaxis()->SetRange(21,79);
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
