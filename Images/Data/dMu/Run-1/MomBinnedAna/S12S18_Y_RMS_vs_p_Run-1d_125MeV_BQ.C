void S12S18_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8818,10.73268,2726.488,14.09281);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[22] = {
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
   Double_t Graph0_fy1044[22] = {
   14.006,
   13.34821,
   12.76603,
   12.50743,
   12.47843,
   12.45472,
   12.44632,
   12.42892,
   12.42589,
   12.44794,
   12.44209,
   12.44279,
   12.42521,
   12.3835,
   12.34811,
   12.32309,
   12.29854,
   12.2998,
   12.38509,
   12.61184,
   13.54427,
   21.92487};
   Double_t Graph0_fex1044[22] = {
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
   Double_t Graph0_fey1044[22] = {
   0.1786561,
   0.01723922,
   0.009404558,
   0.006362921,
   0.005045208,
   0.004510932,
   0.004297419,
   0.004164123,
   0.004194226,
   0.004267189,
   0.004562031,
   0.004839598,
   0.005428331,
   0.005960072,
   0.006768497,
   0.00750102,
   0.008654679,
   0.01046515,
   0.01252917,
   0.01553542,
   0.04557546,
   1.210598};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","S12S18",100,115.2034,3138.398);
   Graph_Graph01044->SetMinimum(11.06869);
   Graph_Graph01044->SetMaximum(13.7568);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01044->GetXaxis()->SetRange(21,79);
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
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
