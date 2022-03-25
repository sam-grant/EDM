void S12_AEDM_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.6562,-3.509686,3036.689,0.6090144);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[22] = {
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
   Double_t Graph0_fy1062[22] = {
   0.2837051,
   0.3804086,
   0.3366823,
   0.06694146,
   0.07458872,
   0.01876682,
   0.05583925,
   -0.01653345,
   0.06348328,
   -0.01198422,
   0.02197867,
   0.01208121,
   0.00898922,
   0.04043775,
   0.03109134,
   0.02180477,
   0.05130766,
   0.04398518,
   -0.0002744283,
   0.01932804,
   0.1388653,
   -7.152345};
   Double_t Graph0_fex1062[22] = {
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
   Double_t Graph0_fey1062[22] = {
   2.167767,
   0.1925562,
   0.09469192,
   0.0563016,
   0.03861676,
   0.03156581,
   0.02779498,
   0.02502231,
   0.02342354,
   0.02207327,
   0.02206692,
   0.02125139,
   0.02193075,
   0.02205103,
   0.02293333,
   0.02318161,
   0.02420581,
   0.02596442,
   0.02765788,
   0.02979826,
   0.07178073,
   1.805312};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S12",100,114.4047,3142.679);
   Graph_Graph01062->SetMinimum(-3.097816);
   Graph_Graph01062->SetMaximum(0.1971443);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(21,88);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
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
