void S18_Ag2_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.5287,-0.04394989,2721.883,0.07866143);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1030[22] = {
   367.0177,
   457.2363,
   570.0312,
   694.4722,
   815.6727,
   938.5327,
   1062.881,
   1188.195,
   1312.611,
   1435.71,
   1561.996,
   1685.037,
   1810.509,
   1934.917,
   2060.265,
   2184.762,
   2308.999,
   2433.429,
   2559.667,
   2677.99,
   2781.676,
   2884.375};
   Double_t Graph0_fy1030[22] = {
   -1.806176,
   0.01165756,
   0.01836605,
   -0.006113807,
   0.02375293,
   0.06133211,
   -0.0207168,
   0.01531173,
   0.007450497,
   -0.03618844,
   -0.007378236,
   0.01604772,
   0.01850802,
   -0.003240044,
   -0.01668814,
   -0.01671315,
   -0.02340747,
   -0.006192265,
   -0.02638216,
   -0.0199085,
   0.111578,
   -1.42552};
   Double_t Graph0_fex1030[22] = {
   0.2108591,
   0.1060616,
   0.07018618,
   0.04922973,
   0.03989433,
   0.03617714,
   0.03425647,
   0.03330809,
   0.0340638,
   0.03436938,
   0.03710766,
   0.03930702,
   0.04469014,
   0.04907403,
   0.05659448,
   0.0626717,
   0.0728264,
   0.08818203,
   0.104193,
   0.1211257,
   0.258964,
   1.230174};
   Double_t Graph0_fey1030[22] = {
   1.619567,
   0.1541724,
   0.07454854,
   0.04573957,
   0.03198722,
   0.02642975,
   0.02322102,
   0.02099124,
   0.01988275,
   0.01897405,
   0.01900547,
   0.01852816,
   0.01940463,
   0.01978992,
   0.02086704,
   0.02145526,
   0.02277696,
   0.02491954,
   0.02681062,
   0.03020988,
   0.07930235,
   0.3234727};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01030 = new TH1F("Graph_Graph01030","S18",100,114.9269,3137.485);
   Graph_Graph01030->SetMinimum(-0.03168875);
   Graph_Graph01030->SetMaximum(0.0664003);
   Graph_Graph01030->SetDirectory(0);
   Graph_Graph01030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01030->SetLineColor(ci);
   Graph_Graph01030->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01030->GetXaxis()->SetRange(22,79);
   Graph_Graph01030->GetXaxis()->CenterTitle(true);
   Graph_Graph01030->GetXaxis()->SetLabelFont(42);
   Graph_Graph01030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01030->GetXaxis()->SetTitleFont(42);
   Graph_Graph01030->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01030->GetYaxis()->CenterTitle(true);
   Graph_Graph01030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01030->GetYaxis()->SetLabelFont(42);
   Graph_Graph01030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01030->GetYaxis()->SetTitleFont(42);
   Graph_Graph01030->GetZaxis()->SetLabelFont(42);
   Graph_Graph01030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01030);
   
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
