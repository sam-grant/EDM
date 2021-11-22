void S12S18_AEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:30:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.7189,-2.434494,2728.306,1.459643);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[22] = {
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
   Double_t Graph0_fy1038[22] = {
   -0.4874252,
   0.1316921,
   0.07455713,
   0.07238425,
   0.02659626,
   0.0422521,
   0.0494618,
   0.06282786,
   0.04277576,
   0.04568216,
   0.04064965,
   0.05710568,
   0.04563963,
   0.06457337,
   0.05466205,
   0.02221157,
   0.06409898,
   0.003030423,
   0.06851749,
   0.02435347,
   0.02207074,
   0.1341558};
   Double_t Graph0_fex1038[22] = {
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
   Double_t Graph0_fey1038[22] = {
   1.298046,
   0.1114726,
   0.05387678,
   0.03264137,
   0.02260468,
   0.01856437,
   0.0163092,
   0.01474514,
   0.01389345,
   0.01316386,
   0.01318685,
   0.01278105,
   0.01325811,
   0.01337113,
   0.01398088,
   0.014251,
   0.01488894,
   0.0160453,
   0.01701786,
   0.01856441,
   0.04643498,
   0.4666459};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S12S18",100,114.7014,3140.583);
   Graph_Graph01038->SetMinimum(-2.04508);
   Graph_Graph01038->SetMaximum(1.07023);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01038->GetXaxis()->SetRange(21,79);
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
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
