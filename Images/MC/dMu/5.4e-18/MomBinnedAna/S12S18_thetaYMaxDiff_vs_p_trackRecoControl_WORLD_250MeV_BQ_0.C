void S12S18_thetaYMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.9164,-6.78832,3028.305,244.7361);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1092[11] = {
   452.9199,
   656.5542,
   884.8685,
   1123.522,
   1363.588,
   1601.322,
   1825.172,
   2101.221,
   2411.982,
   2637.272,
   2790.613};
   Double_t Graph0_fy1092[11] = {
   180.4365,
   183.0142,
   181.173,
   175.6494,
   143.981,
   113.4172,
   75.85698,
   73.64756,
   61.12747,
   37.56025,
   26.51312};
   Double_t Graph0_fex1092[11] = {
   0.2021944,
   0.150332,
   0.1006761,
   0.09254361,
   0.1066246,
   0.151529,
   0.3161417,
   1.816055,
   0.7409915,
   0.4041897,
   0.3585213};
   Double_t Graph0_fey1092[11] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1092,Graph0_fy1092,Graph0_fex1092,Graph0_fey1092);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01092 = new TH1F("Graph_Graph01092","S12S18_",100,218.8923,3024.797);
   Graph_Graph01092->SetMinimum(18.36412);
   Graph_Graph01092->SetMaximum(219.5837);
   Graph_Graph01092->SetDirectory(0);
   Graph_Graph01092->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01092->SetLineColor(ci);
   Graph_Graph01092->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01092->GetXaxis()->SetRange(19,91);
   Graph_Graph01092->GetXaxis()->CenterTitle(true);
   Graph_Graph01092->GetXaxis()->SetLabelFont(42);
   Graph_Graph01092->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01092->GetXaxis()->SetTitleFont(42);
   Graph_Graph01092->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01092->GetYaxis()->CenterTitle(true);
   Graph_Graph01092->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01092->GetYaxis()->SetLabelFont(42);
   Graph_Graph01092->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01092->GetYaxis()->SetTitleFont(42);
   Graph_Graph01092->GetZaxis()->SetLabelFont(42);
   Graph_Graph01092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01092);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
