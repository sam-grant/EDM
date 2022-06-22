void S18_Momentum_Y_RMS_vs_p_Run-1c_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:19:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(791.6217,10.95419,2691.139,25.79019);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1078[11] = {
   456.3643,
   653.7121,
   883.7042,
   1127.459,
   1373.001,
   1619.691,
   1866.755,
   2115.887,
   2359.704,
   2607.005,
   2801.114};
   Double_t Graph0_fy1078[11] = {
   14.16652,
   15.80601,
   17.06716,
   18.65338,
   19.84962,
   20.25602,
   19.82992,
   18.96686,
   17.38105,
   15.41183,
   14.52777};
   Double_t Graph0_fex1078[11] = {
   0.08950496,
   0.06298638,
   0.04255114,
   0.0386011,
   0.0383216,
   0.04262749,
   0.05234671,
   0.06620825,
   0.08748801,
   0.1198367,
   0.2439965};
   Double_t Graph0_fey1078[11] = {
   0.02844936,
   0.01030276,
   0.007250256,
   0.007053406,
   0.007541179,
   0.008578655,
   0.01024716,
   0.01238834,
   0.01516075,
   0.0192421,
   0.0632216};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1078,Graph0_fy1078,Graph0_fex1078,Graph0_fey1078);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01078 = new TH1F("Graph_Graph01078","S18",100,221.7665,3035.866);
   Graph_Graph01078->SetMinimum(12.43779);
   Graph_Graph01078->SetMaximum(24.30659);
   Graph_Graph01078->SetDirectory(0);
   Graph_Graph01078->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01078->SetLineColor(ci);
   Graph_Graph01078->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01078->GetXaxis()->SetRange(28,81);
   Graph_Graph01078->GetXaxis()->CenterTitle(true);
   Graph_Graph01078->GetXaxis()->SetLabelFont(42);
   Graph_Graph01078->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01078->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01078->GetXaxis()->SetTitleFont(42);
   Graph_Graph01078->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01078->GetYaxis()->CenterTitle(true);
   Graph_Graph01078->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01078->GetYaxis()->SetLabelFont(42);
   Graph_Graph01078->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01078->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01078->GetYaxis()->SetTitleFont(42);
   Graph_Graph01078->GetZaxis()->SetLabelFont(42);
   Graph_Graph01078->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01078);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
