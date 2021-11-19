void S18_thetaYMaxDiff_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6816,-27.24509,2722.018,410.891);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[22] = {
   367.1341,
   457.3546,
   569.9678,
   694.4654,
   815.6839,
   938.4671,
   1062.817,
   1188.128,
   1312.571,
   1435.614,
   1561.979,
   1684.895,
   1810.464,
   1934.858,
   2060.231,
   2184.73,
   2309.02,
   2433.186,
   2559.875,
   2677.734,
   2781.028,
   2884.661};
   Double_t Graph0_fy1031[22] = {
   203.6972,
   332.348,
   313.0504,
   263.7342,
   263.7342,
   248.725,
   229.4273,
   212.2739,
   203.6972,
   201.553,
   169.3903,
   154.381,
   150.0926,
   107.209,
   102.9207,
   92.19977,
   70.75796,
   70.75796,
   66.4696,
   55.7487,
   42.88361,
   21.44181};
   Double_t Graph0_fex1031[22] = {
   0.1730535,
   0.08508425,
   0.05634935,
   0.03956323,
   0.03214645,
   0.02914412,
   0.02765286,
   0.02685633,
   0.02749382,
   0.02775118,
   0.02997127,
   0.03181734,
   0.036271,
   0.03980247,
   0.0458865,
   0.05092866,
   0.05933624,
   0.07209094,
   0.08507043,
   0.09802743,
   0.2082885,
   1.078076};
   Double_t Graph0_fey1031[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","S18",100,115.0833,3137.616);
   Graph_Graph01031->SetMinimum(16.56853);
   Graph_Graph01031->SetMaximum(367.0774);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01031->GetXaxis()->SetRange(22,79);
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 125 MeV");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
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
