void S12S18_Ag2_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7189,-2.60845,2728.306,1.342463);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[22] = {
   367.013,
   457.1131,
   570.1616,
   694.8084,
   815.8621,
   938.5497,
   1062.83,
   1188.304,
   1312.637,
   1435.868,
   1561.967,
   1685.209,
   1810.571,
   1935.056,
   2060.278,
   2184.951,
   2309.062,
   2433.121,
   2559.618,
   2678.416,
   2781.164,
   2887.396};
   Double_t Graph0_fy1039[22] = {
   -0.6329936,
   0.0377976,
   0.02334127,
   0.03820898,
   0.01483262,
   0.05495345,
   -0.003142154,
   0.01967077,
   0.009330339,
   -0.01880227,
   -0.001350548,
   -0.0125637,
   0.009015747,
   0.0005510342,
   -0.01825196,
   -0.02549777,
   -0.009808704,
   0.007054596,
   0.0004352361,
   -0.005445174,
   0.05988233,
   0.2485139};
   Double_t Graph0_fex1039[22] = {
   0.1548013,
   0.07599472,
   0.05054269,
   0.03489086,
   0.02799997,
   0.02528911,
   0.0239459,
   0.02323562,
   0.02360337,
   0.02374271,
   0.02556684,
   0.02693996,
   0.03041498,
   0.0333021,
   0.0381874,
   0.04225042,
   0.04879519,
   0.05880174,
   0.07022048,
   0.08097267,
   0.1662002,
   1.029838};
   Double_t Graph0_fey1039[22] = {
   1.316971,
   0.1113311,
   0.05384397,
   0.03253545,
   0.02252849,
   0.01852615,
   0.01625181,
   0.01468748,
   0.01382784,
   0.01311553,
   0.01314582,
   0.01275157,
   0.01324753,
   0.01344485,
   0.01413218,
   0.01447309,
   0.01529142,
   0.016769,
   0.01809751,
   0.02027922,
   0.05228585,
   0.398227};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","S12S18",100,114.7014,3140.583);
   Graph_Graph01039->SetMinimum(-2.213359);
   Graph_Graph01039->SetMaximum(0.9473713);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01039->GetXaxis()->SetRange(21,79);
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
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
