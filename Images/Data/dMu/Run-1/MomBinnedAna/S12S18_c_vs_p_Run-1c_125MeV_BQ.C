void S12S18_c_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7189,-3.724931,2728.306,14.15158);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[22] = {
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
   Double_t Graph0_fy1037[22] = {
   10.24691,
   -0.0229473,
   0.01420976,
   0.01414399,
   -0.003950004,
   -0.00162736,
   0.0008967211,
   0.003731764,
   0.003610139,
   0.003450673,
   0.003081683,
   0.0001389398,
   0.003173258,
   -0.001941693,
   0.003529171,
   0.004584282,
   0.001795076,
   -0.002391459,
   0.002077744,
   0.000839955,
   -0.036516,
   -0.4429621};
   Double_t Graph0_fex1037[22] = {
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
   Double_t Graph0_fey1037[22] = {
   0.9252482,
   0.07892857,
   0.03814895,
   0.02307737,
   0.01597646,
   0.01312483,
   0.01151783,
   0.01040812,
   0.00980136,
   0.009291785,
   0.009313419,
   0.009036276,
   0.009391605,
   0.009517674,
   0.01000281,
   0.01025935,
   0.0108309,
   0.01186753,
   0.01281675,
   0.01435563,
   0.03697797,
   0.3025501};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","S12S18",100,114.7014,3140.583);
   Graph_Graph01037->SetMinimum(-1.937279);
   Graph_Graph01037->SetMaximum(12.36393);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(21,79);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
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
