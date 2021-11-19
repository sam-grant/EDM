void S18_Y_RMS_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8475,10.53852,2727.136,22.31232);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[22] = {
   367.3383,
   456.566,
   569.9738,
   694.4401,
   815.6403,
   938.5725,
   1062.713,
   1187.891,
   1312.687,
   1435.591,
   1562.019,
   1684.943,
   1810.534,
   1934.963,
   2060.319,
   2184.85,
   2308.939,
   2433.329,
   2560.086,
   2677.913,
   2780.761,
   2885.117};
   Double_t Graph0_fy1027[22] = {
   14.01915,
   13.58649,
   13.0414,
   12.80903,
   12.78274,
   12.77142,
   12.72136,
   12.72346,
   12.68836,
   12.70928,
   12.70506,
   12.72498,
   12.69836,
   12.60881,
   12.6287,
   12.55939,
   12.53339,
   12.52947,
   12.63702,
   12.7725,
   12.8855,
   17.29302};
   Double_t Graph0_fex1027[22] = {
   0.2758887,
   0.1401129,
   0.09337128,
   0.06458879,
   0.05290353,
   0.04783934,
   0.04561247,
   0.04414911,
   0.04516617,
   0.04561095,
   0.04898217,
   0.05212218,
   0.05891221,
   0.06491275,
   0.0746884,
   0.08261501,
   0.09596225,
   0.1164331,
   0.1370073,
   0.1562653,
   0.3178764,
   2.044752};
   Double_t Graph0_fey1027[22] = {
   0.4393876,
   0.04413805,
   0.02423792,
   0.01657852,
   0.01332374,
   0.01197307,
   0.01140056,
   0.01107857,
   0.01117969,
   0.01143561,
   0.01220947,
   0.01304242,
   0.01466201,
   0.01613166,
   0.01845426,
   0.02037215,
   0.02363866,
   0.02864824,
   0.03388391,
   0.04182382,
   0.1165452,
   3.057003};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S18",100,115.0524,3139.172);
   Graph_Graph01027->SetMinimum(11.7159);
   Graph_Graph01027->SetMaximum(21.13494);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(21,79);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
