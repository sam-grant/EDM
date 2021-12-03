void S12S18_Momentum_Y_RMS_vs_p_Run-1a_125MeV_750-2500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:18:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.2707,11.27123,3029.518,26.02808);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[22] = {
   366.6885,
   456.9353,
   570.4228,
   694.9017,
   815.8352,
   938.5325,
   1062.75,
   1188.288,
   1312.703,
   1435.863,
   1561.905,
   1685.207,
   1810.547,
   1935.125,
   2060.257,
   2184.91,
   2309.213,
   2433.147,
   2559.646,
   2678.447,
   2781.41,
   2886.078};
   Double_t Graph0_fy1045[22] = {
   12.83302,
   14.27956,
   15.17535,
   16.17424,
   16.5987,
   17.54537,
   18.3294,
   19.07359,
   19.69828,
   20.1227,
   20.46551,
   20.1673,
   20.058,
   19.65182,
   19.2541,
   18.65596,
   17.88623,
   16.86204,
   15.76295,
   14.62939,
   13.82246,
   14.86137};
   Double_t Graph0_fex1045[22] = {
   0.2309951,
   0.1092124,
   0.07251533,
   0.04962127,
   0.03997118,
   0.03612002,
   0.0342106,
   0.0331161,
   0.03358597,
   0.0338255,
   0.03626653,
   0.03827066,
   0.04313196,
   0.04714073,
   0.05401014,
   0.05961023,
   0.0687829,
   0.08272529,
   0.09827916,
   0.1129676,
   0.233546,
   1.023868};
   Double_t Graph0_fey1045[22] = {
   0.3247045,
   0.03626847,
   0.02195819,
   0.01608482,
   0.01310037,
   0.01239832,
   0.01234083,
   0.01244317,
   0.01292087,
   0.01340692,
   0.0145569,
   0.01520869,
   0.01693985,
   0.01824099,
   0.02034251,
   0.02185783,
   0.02419777,
   0.02744289,
   0.03043586,
   0.03445081,
   0.08898664,
   1.621509};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S12S18",100,114.3931,3139.166);
   Graph_Graph01045->SetMinimum(12.74692);
   Graph_Graph01045->SetMaximum(24.55239);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01045->GetXaxis()->SetRange(22,88);
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
