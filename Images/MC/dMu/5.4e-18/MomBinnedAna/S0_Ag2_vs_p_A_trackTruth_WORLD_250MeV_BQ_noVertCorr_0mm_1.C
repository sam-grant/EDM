void S0_Ag2_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:52:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.4461,-0.0001512284,3381.552,3.047461e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[11] = {
   451.6447,
   653.3486,
   879.8114,
   1123.227,
   1371.481,
   1620.746,
   1868.066,
   2116.654,
   2363.704,
   2615.694,
   2792.389};
   Double_t Graph0_fy1062[11] = {
   -2.008151e-05,
   -1.06324e-06,
   -1.561537e-07,
   -6.333384e-08,
   4.296793e-08,
   -7.709048e-08,
   -2.534917e-07,
   -4.625721e-07,
   -1.336079e-06,
   -1.009722e-05,
   -6.384346e-05};
   Double_t Graph0_fex1062[11] = {
   0.1707352,
   0.1455027,
   0.1059043,
   0.1035803,
   0.1102053,
   0.1218889,
   0.1397139,
   0.1687025,
   0.2119762,
   0.2651184,
   0.3376591};
   Double_t Graph0_fey1062[11] = {
   5.788754e-06,
   3.945457e-07,
   1.333759e-07,
   1.230372e-07,
   1.478032e-07,
   2.023174e-07,
   3.150145e-07,
   5.899079e-07,
   1.29005e-06,
   2.892837e-06,
   5.710112e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S0_",100,217.3487,3026.852);
   Graph_Graph01062->SetMinimum(-0.0001330581);
   Graph_Graph01062->SetMaximum(1.230431e-05);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(0,100);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
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
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
