void S12S18_Y_RMS_vs_p_Run-1b_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 12 23:21:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.7944,9.408944,2703.518,15.99878);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1110[11] = {
   455.7985,
   654.7632,
   883.9817,
   1127.405,
   1373.258,
   1619.937,
   1866.797,
   2116.311,
   2359.524,
   2607.533,
   2781.231};
   Double_t Graph0_fy1110[11] = {
   13.63769,
   12.88386,
   12.78635,
   12.73793,
   12.71672,
   12.7172,
   12.68232,
   12.63155,
   12.58464,
   12.72694,
   13.2652};
   Double_t Graph0_fex1110[11] = {
   0.09410448,
   0.06648851,
   0.04456473,
   0.04050131,
   0.03992327,
   0.04410354,
   0.05363542,
   0.06745703,
   0.08830943,
   0.1220118,
   0.1984693};
   Double_t Graph0_fey1110[11] = {
   0.02882466,
   0.008899206,
   0.005685577,
   0.005051455,
   0.005033994,
   0.005568711,
   0.00671314,
   0.008397794,
   0.01110199,
   0.01612662,
   0.07191527};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1110,Graph0_fy1110,Graph0_fex1110,Graph0_fey1110);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01110 = new TH1F("Graph_Graph01110","S12S18",100,223.1319,3014.002);
   Graph_Graph01110->SetMinimum(10.06793);
   Graph_Graph01110->SetMaximum(15.3398);
   Graph_Graph01110->SetDirectory(0);
   Graph_Graph01110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01110->SetLineColor(ci);
   Graph_Graph01110->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01110->GetXaxis()->SetRange(28,82);
   Graph_Graph01110->GetXaxis()->CenterTitle(true);
   Graph_Graph01110->GetXaxis()->SetLabelFont(42);
   Graph_Graph01110->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01110->GetXaxis()->SetTitleFont(42);
   Graph_Graph01110->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01110->GetYaxis()->CenterTitle(true);
   Graph_Graph01110->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01110->GetYaxis()->SetLabelFont(42);
   Graph_Graph01110->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01110->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01110->GetYaxis()->SetTitleFont(42);
   Graph_Graph01110->GetZaxis()->SetLabelFont(42);
   Graph_Graph01110->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01110);
   
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
