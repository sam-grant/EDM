void S12S18_Momentum_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8818,13.32674,2726.488,23.5755);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[22] = {
   367.2469,
   457.0411,
   570.0979,
   694.793,
   815.855,
   938.5231,
   1062.733,
   1188.225,
   1312.686,
   1435.772,
   1561.976,
   1685.085,
   1810.538,
   1935.02,
   2060.267,
   2184.91,
   2309.095,
   2433.064,
   2559.663,
   2678.606,
   2781.211,
   2885.765};
   Double_t Graph0_fy1045[22] = {
   12.94224,
   14.22853,
   15.14318,
   16.15789,
   16.57416,
   17.54229,
   18.34167,
   19.08947,
   19.7402,
   20.14118,
   20.50628,
   20.23125,
   20.13202,
   19.70347,
   19.3045,
   18.70905,
   17.92481,
   16.86136,
   15.77798,
   14.64209,
   13.91482,
   14.28619};
   Double_t Graph0_fex1045[22] = {
   0.1105557,
   0.05531676,
   0.03686654,
   0.02538836,
   0.02047653,
   0.0185069,
   0.01754794,
   0.01698776,
   0.01729284,
   0.01738604,
   0.01871592,
   0.01974609,
   0.02231054,
   0.02444932,
   0.0279945,
   0.03093733,
   0.03584407,
   0.0432536,
   0.05150499,
   0.05901302,
   0.1212649,
   0.7002053};
   Double_t Graph0_fey1045[22] = {
   0.1650602,
   0.01837431,
   0.01115554,
   0.008220032,
   0.006701205,
   0.00635369,
   0.006333253,
   0.006396001,
   0.006663533,
   0.006905207,
   0.007519783,
   0.0078697,
   0.008796092,
   0.009483767,
   0.01058203,
   0.01138834,
   0.01261415,
   0.01434631,
   0.01596134,
   0.01803604,
   0.04680537,
   0.7888226};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S12S18",100,115.2034,3138.398);
   Graph_Graph01045->SetMinimum(14.35162);
   Graph_Graph01045->SetMaximum(22.55062);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01045->GetXaxis()->SetRange(21,79);
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
