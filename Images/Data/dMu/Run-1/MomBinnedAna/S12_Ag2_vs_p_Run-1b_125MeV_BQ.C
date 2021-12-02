void S12_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 16:15:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7114,-0.0308573,2730.075,0.04665292);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[22] = {
   367.0103,
   456.7431,
   570.2428,
   695.0448,
   815.9725,
   938.712,
   1062.736,
   1188.27,
   1312.737,
   1435.93,
   1561.978,
   1685.239,
   1810.655,
   1935.234,
   2060.302,
   2185.134,
   2309.222,
   2432.985,
   2559.505,
   2679.171,
   2780.718,
   2888.448};
   Double_t Graph0_fy1019[22] = {
   3.513025,
   -0.3474256,
   0.003081712,
   0.01709651,
   0.03631451,
   0.0005906849,
   -0.00179041,
   -0.01713542,
   0.00874297,
   0.0107971,
   0.01608818,
   0.02202362,
   -0.02550115,
   -0.0256812,
   -0.003422313,
   -0.005821572,
   -0.004302684,
   -0.01808201,
   -0.02374413,
   -0.00480338,
   0.1179556,
   2.307933};
   Double_t Graph0_fex1019[22] = {
   0.2630727,
   0.1312423,
   0.08883135,
   0.05990632,
   0.04792126,
   0.04303468,
   0.04088577,
   0.03943381,
   0.03980589,
   0.03995167,
   0.042785,
   0.04490781,
   0.05025173,
   0.05495971,
   0.06262148,
   0.06895527,
   0.07940075,
   0.09524145,
   0.1140435,
   0.1306775,
   0.2611948,
   1.874823};
   Double_t Graph0_fey1019[22] = {
   2.068244,
   0.1937488,
   0.09475424,
   0.05632028,
   0.03867128,
   0.03166002,
   0.02787808,
   0.02508487,
   0.0233887,
   0.02214977,
   0.02209313,
   0.02134323,
   0.02204676,
   0.02220269,
   0.02321773,
   0.02375492,
   0.02490621,
   0.02722415,
   0.02958878,
   0.03253602,
   0.08233166,
   0.7476278};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","S12",100,114.3897,3142.68);
   Graph_Graph01019->SetMinimum(-0.02310627);
   Graph_Graph01019->SetMaximum(0.0389019);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01019->GetXaxis()->SetRange(21,79);
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
