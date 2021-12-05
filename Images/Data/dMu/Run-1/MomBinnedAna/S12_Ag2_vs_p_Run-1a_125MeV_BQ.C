void S12_Ag2_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:46:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3259,-1.115395,3036.37,0.1853256);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[22] = {
   366.7752,
   456.7644,
   570.6057,
   695.308,
   816.0199,
   938.5594,
   1062.714,
   1188.408,
   1312.768,
   1435.939,
   1561.836,
   1685.36,
   1810.677,
   1935.171,
   2060.181,
   2185.077,
   2309.281,
   2432.898,
   2559.531,
   2678.787,
   2781.468,
   2888.259};
   Double_t Graph0_fy1019[22] = {
   -1.668568,
   0.4037476,
   0.04685795,
   0.0455804,
   -0.006600354,
   0.03185203,
   -0.007942558,
   -0.003133573,
   0.03019499,
   0.006075563,
   0.02650095,
   -0.03339778,
   -0.05403299,
   -0.01509632,
   -0.0002818351,
   -0.0273033,
   -0.02814396,
   -0.0361384,
   0.03479161,
   -0.002653891,
   -0.02794977,
   -2.224088};
   Double_t Graph0_fex1019[22] = {
   0.3450021,
   0.157345,
   0.104901,
   0.07063794,
   0.05638435,
   0.05072089,
   0.0480066,
   0.04637203,
   0.04670397,
   0.04691625,
   0.05025981,
   0.05269888,
   0.05914443,
   0.06453306,
   0.07359379,
   0.08120261,
   0.09320425,
   0.1113982,
   0.1334389,
   0.1534676,
   0.3117639,
   1.744149};
   Double_t Graph0_fey1019[22] = {
   2.485302,
   0.2315634,
   0.1120024,
   0.0664024,
   0.04554024,
   0.03726492,
   0.03272192,
   0.02946361,
   0.02751127,
   0.02600921,
   0.02595376,
   0.0250085,
   0.02580569,
   0.02605261,
   0.02730358,
   0.02769613,
   0.02931122,
   0.03204958,
   0.0344357,
   0.0383323,
   0.0993146,
   2.132229};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","S12",100,114.0729,3142.36);
   Graph_Graph01019->SetMinimum(-0.9853231);
   Graph_Graph01019->SetMaximum(0.05525348);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01019->GetXaxis()->SetRange(21,88);
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
