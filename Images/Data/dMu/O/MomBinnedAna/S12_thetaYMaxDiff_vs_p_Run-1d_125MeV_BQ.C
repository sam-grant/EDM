void S12_thetaYMaxDiff_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8816,-26.06579,2727.048,400.2773);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[22] = {
   367.2763,
   456.6701,
   570.2384,
   695.014,
   815.941,
   938.5472,
   1062.657,
   1188.254,
   1312.768,
   1435.889,
   1561.964,
   1685.27,
   1810.577,
   1935.117,
   2060.28,
   2184.973,
   2309.128,
   2432.978,
   2559.529,
   2679.227,
   2781.166,
   2885.901};
   Double_t Graph0_fy1021[22] = {
   165.1019,
   323.7713,
   308.762,
   274.4551,
   235.8599,
   265.8784,
   246.5808,
   238.0041,
   186.5437,
   162.9577,
   188.6879,
   124.3625,
   117.9299,
   107.209,
   109.3532,
   79.33469,
   77.1905,
   64.32542,
   53.60452,
   60.03706,
   45.02779,
   21.44181};
   Double_t Graph0_fex1021[22] = {
   0.1727402,
   0.08564447,
   0.05750668,
   0.03900971,
   0.03131764,
   0.02823439,
   0.02680342,
   0.02592069,
   0.02627859,
   0.0263654,
   0.02833862,
   0.02976529,
   0.03340781,
   0.03661848,
   0.04175349,
   0.04603796,
   0.05317634,
   0.06379139,
   0.07674565,
   0.08753628,
   0.1746818,
   1.164882};
   Double_t Graph0_fey1021[22] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","S12",100,115.1073,3139.062);
   Graph_Graph01021->SetMinimum(16.56853);
   Graph_Graph01021->SetMaximum(357.643);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01021->GetXaxis()->SetRange(21,79);
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
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
