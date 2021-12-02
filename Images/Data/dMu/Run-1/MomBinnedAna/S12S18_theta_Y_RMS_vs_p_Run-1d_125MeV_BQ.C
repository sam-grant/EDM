void S12S18_theta_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8818,3.179053,2726.488,28.01333);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[22] = {
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
   Double_t Graph0_fy1043[22] = {
   35.03414,
   31.13503,
   26.57785,
   23.33705,
   20.35984,
   18.72277,
   17.29428,
   16.10238,
   15.07016,
   14.06204,
   13.16498,
   12.03028,
   11.13991,
   10.19941,
   9.382879,
   8.571867,
   7.77301,
   6.938969,
   6.172619,
   5.476687,
   5.020502,
   5.198709};
   Double_t Graph0_fex1043[22] = {
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
   Double_t Graph0_fey1043[22] = {
   0.4470299,
   0.04021754,
   0.01957949,
   0.01187218,
   0.008231549,
   0.006780946,
   0.005971105,
   0.00539461,
   0.005086542,
   0.00482024,
   0.004826887,
   0.004679073,
   0.004866774,
   0.004908853,
   0.005143096,
   0.005217637,
   0.005469897,
   0.005903823,
   0.006244175,
   0.006745804,
   0.01688463,
   0.2861795};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S12S18",100,115.2034,3138.398);
   Graph_Graph01043->SetMinimum(5.662481);
   Graph_Graph01043->SetMaximum(25.5299);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01043->GetXaxis()->SetRange(21,79);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
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
