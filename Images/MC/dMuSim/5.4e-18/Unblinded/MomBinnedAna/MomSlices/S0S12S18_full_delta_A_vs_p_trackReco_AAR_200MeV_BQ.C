void S0S12S18_full_delta_A_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:37:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-0.3632936,3411.2,0.9533478);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1168[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1168[14] = {
   0.3550963,
   0.04809918,
   0.1614815,
   0.1201264,
   0.1222847,
   0.1435277,
   0.1571956,
   0.160204,
   0.1261786,
   0.1145809,
   0.07030567,
   0.07694422,
   0.06718595,
   -0.08054653};
   Double_t Graph0_fex1168[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1168[14] = {
   0.3788112,
   0.06632629,
   0.03219292,
   0.02257303,
   0.01932835,
   0.01787588,
   0.01706957,
   0.016536,
   0.0167704,
   0.01742469,
   0.01818874,
   0.01885269,
   0.01919596,
   0.06330681};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1168,Graph0_fy1168,Graph0_fex1168,Graph0_fey1168);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 100 < p < p #plus 100;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01168 = new TH1F("Graph_Graph01168","",100,0,3280);
   Graph_Graph01168->SetMinimum(-0.2316294);
   Graph_Graph01168->SetMaximum(0.8216837);
   Graph_Graph01168->SetDirectory(0);
   Graph_Graph01168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01168->SetLineColor(ci);
   Graph_Graph01168->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100");
   Graph_Graph01168->GetXaxis()->SetRange(6,93);
   Graph_Graph01168->GetXaxis()->CenterTitle(true);
   Graph_Graph01168->GetXaxis()->SetLabelFont(42);
   Graph_Graph01168->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01168->GetXaxis()->SetTitleFont(42);
   Graph_Graph01168->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph01168->GetYaxis()->CenterTitle(true);
   Graph_Graph01168->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01168->GetYaxis()->SetLabelFont(42);
   Graph_Graph01168->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01168->GetYaxis()->SetTitleFont(42);
   Graph_Graph01168->GetZaxis()->SetLabelFont(42);
   Graph_Graph01168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01168);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
