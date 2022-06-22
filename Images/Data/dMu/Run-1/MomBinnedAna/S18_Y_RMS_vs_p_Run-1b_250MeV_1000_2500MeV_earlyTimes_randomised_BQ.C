void S18_Y_RMS_vs_p_Run-1b_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.189,9.41849,2704.825,16.04474);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1077[11] = {
   456.1471,
   654.0654,
   883.8362,
   1127.325,
   1372.862,
   1619.526,
   1866.629,
   2116.202,
   2359.187,
   2607.066,
   2782.305};
   Double_t Graph0_fy1077[11] = {
   13.72808,
   12.90789,
   12.82288,
   12.75576,
   12.76012,
   12.77144,
   12.72061,
   12.61958,
   12.60074,
   12.79834,
   14.59914};
   Double_t Graph0_fex1077[11] = {
   0.2047857,
   0.1452136,
   0.0989078,
   0.08984976,
   0.08902259,
   0.09880499,
   0.121151,
   0.1529636,
   0.2016089,
   0.2748319,
   0.4686495};
   Double_t Graph0_fey1077[11] = {
   0.0631886,
   0.01945589,
   0.01264195,
   0.01123276,
   0.01127635,
   0.01254231,
   0.01522506,
   0.01903391,
   0.02536054,
   0.03675379,
   0.1822048};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01077 = new TH1F("Graph_Graph01077","S18",100,223.2592,3015.457);
   Graph_Graph01077->SetMinimum(10.08111);
   Graph_Graph01077->SetMaximum(15.38211);
   Graph_Graph01077->SetDirectory(0);
   Graph_Graph01077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01077->SetLineColor(ci);
   Graph_Graph01077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01077->GetXaxis()->SetRange(28,82);
   Graph_Graph01077->GetXaxis()->CenterTitle(true);
   Graph_Graph01077->GetXaxis()->SetLabelFont(42);
   Graph_Graph01077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01077->GetXaxis()->SetTitleFont(42);
   Graph_Graph01077->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01077->GetYaxis()->CenterTitle(true);
   Graph_Graph01077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01077->GetYaxis()->SetLabelFont(42);
   Graph_Graph01077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01077->GetYaxis()->SetTitleFont(42);
   Graph_Graph01077->GetZaxis()->SetLabelFont(42);
   Graph_Graph01077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01077);
   
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
