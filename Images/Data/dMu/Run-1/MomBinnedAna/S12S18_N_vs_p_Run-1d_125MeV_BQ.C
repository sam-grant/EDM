void S12S18_N_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8818,-85915.46,2726.488,5453199);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1046[22] = {
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
   Double_t Graph0_fy1046[22] = {
   3074,
   299878,
   921459,
   1932078,
   3058922,
   3811831,
   4194380,
   4454837,
   4388951,
   4255296,
   3719433,
   3305231,
   2619698,
   2158541,
   1664152,
   1349501,
   1009695,
   690706,
   488606,
   329563,
   44206,
   165};
   Double_t Graph0_fex1046[22] = {
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
   Double_t Graph0_fey1046[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","S12S18",100,115.2034,3138.398);
   Graph_Graph01046->SetMinimum(467996);
   Graph_Graph01046->SetMaximum(4899287);
   Graph_Graph01046->SetDirectory(0);
   Graph_Graph01046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01046->SetLineColor(ci);
   Graph_Graph01046->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01046->GetXaxis()->SetRange(21,79);
   Graph_Graph01046->GetXaxis()->CenterTitle(true);
   Graph_Graph01046->GetXaxis()->SetLabelFont(42);
   Graph_Graph01046->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01046->GetXaxis()->SetTitleFont(42);
   Graph_Graph01046->GetYaxis()->SetTitle("Positrons / 125 MeV");
   Graph_Graph01046->GetYaxis()->CenterTitle(true);
   Graph_Graph01046->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01046->GetYaxis()->SetLabelFont(42);
   Graph_Graph01046->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01046->GetYaxis()->SetTitleFont(42);
   Graph_Graph01046->GetZaxis()->SetLabelFont(42);
   Graph_Graph01046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01046);
   
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
