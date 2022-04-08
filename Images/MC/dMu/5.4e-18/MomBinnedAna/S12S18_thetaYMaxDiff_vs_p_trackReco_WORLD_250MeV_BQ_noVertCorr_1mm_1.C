void S12S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.9577,-12.56476,3375.714,218.7779);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1180[11] = {
   451.7825,
   653.199,
   880.2615,
   1123.159,
   1371.033,
   1619.834,
   1866.809,
   2114.773,
   2362.836,
   2613.774,
   2787.905};
   Double_t Graph0_fy1180[11] = {
   179.7,
   163.8658,
   148.3998,
   120.782,
   99.05596,
   82.11703,
   72.91108,
   67.01928,
   57.44509,
   42.34735,
   26.51312};
   Double_t Graph0_fex1180[11] = {
   0.09444324,
   0.0799614,
   0.05796502,
   0.05670408,
   0.06063978,
   0.06726904,
   0.07890573,
   0.09931807,
   0.1301904,
   0.1580525,
   0.1999048};
   Double_t Graph0_fey1180[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1180,Graph0_fy1180,Graph0_fex1180,Graph0_fey1180);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01180 = new TH1F("Graph_Graph01180","S12S18_",100,218.0464,3021.746);
   Graph_Graph01180->SetMinimum(10.56951);
   Graph_Graph01180->SetMaximum(195.6437);
   Graph_Graph01180->SetDirectory(0);
   Graph_Graph01180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01180->SetLineColor(ci);
   Graph_Graph01180->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01180->GetXaxis()->SetRange(0,100);
   Graph_Graph01180->GetXaxis()->CenterTitle(true);
   Graph_Graph01180->GetXaxis()->SetLabelFont(42);
   Graph_Graph01180->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01180->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01180->GetXaxis()->SetTitleFont(42);
   Graph_Graph01180->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01180->GetYaxis()->CenterTitle(true);
   Graph_Graph01180->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01180->GetYaxis()->SetLabelFont(42);
   Graph_Graph01180->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01180->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01180->GetYaxis()->SetTitleFont(42);
   Graph_Graph01180->GetZaxis()->SetLabelFont(42);
   Graph_Graph01180->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01180);
   
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
