void S18_AEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.5287,-0.003830056,2721.883,0.09495833);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[22] = {
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
   Double_t Graph0_fy1029[22] = {
   -2.30352,
   0.06792517,
   0.05380269,
   0.07548695,
   0.04690793,
   0.06149187,
   0.07711181,
   0.07084652,
   0.005346126,
   0.04758916,
   0.03438425,
   0.06013011,
   0.0313436,
   0.077615,
   0.07095609,
   0.0271551,
   0.05781274,
   0.009977985,
   0.07605274,
   0.02470669,
   0.05396186,
   0.4923364};
   Double_t Graph0_fex1029[22] = {
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
   Double_t Graph0_fey1029[22] = {
   1.601663,
   0.1532862,
   0.07432506,
   0.04577414,
   0.03204551,
   0.02645935,
   0.02331401,
   0.0210729,
   0.01996474,
   0.01901382,
   0.01907218,
   0.01859895,
   0.01944143,
   0.01967664,
   0.02068755,
   0.02115533,
   0.02213804,
   0.0238419,
   0.02507228,
   0.02747868,
   0.07047224,
   0.4524195};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","S18",100,114.9269,3137.485);
   Graph_Graph01029->SetMinimum(0.006048783);
   Graph_Graph01029->SetMaximum(0.08507949);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01029->GetXaxis()->SetRange(22,79);
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
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
