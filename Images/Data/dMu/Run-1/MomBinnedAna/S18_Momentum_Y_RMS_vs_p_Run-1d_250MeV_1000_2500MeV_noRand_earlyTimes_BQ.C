void S18_Momentum_Y_RMS_vs_p_Run-1d_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:33:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.6017,10.79731,2704.746,25.84318);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1078[11] = {
   456.5642,
   653.6442,
   883.7203,
   1127.396,
   1373.03,
   1619.425,
   1866.664,
   2115.94,
   2359.34,
   2606.745,
   2782.38};
   Double_t Graph0_fy1078[11] = {
   14.1588,
   15.80923,
   17.07353,
   18.65581,
   19.8569,
   20.2832,
   19.83711,
   18.99668,
   17.39299,
   15.23105,
   14.22077};
   Double_t Graph0_fex1078[11] = {
   0.124654,
   0.08811526,
   0.05948594,
   0.05402501,
   0.05364135,
   0.05963199,
   0.07358881,
   0.09289413,
   0.1232358,
   0.1691106,
   0.2944501};
   Double_t Graph0_fey1078[11] = {
   0.03970273,
   0.01439719,
   0.0101397,
   0.009866865,
   0.01056617,
   0.01203346,
   0.01440657,
   0.017415,
   0.02139662,
   0.02690426,
   0.1106683};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1078,Graph0_fy1078,Graph0_fex1078,Graph0_fey1078);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01078 = new TH1F("Graph_Graph01078","S18",100,223.816,3015.298);
   Graph_Graph01078->SetMinimum(12.3019);
   Graph_Graph01078->SetMaximum(24.33859);
   Graph_Graph01078->SetDirectory(0);
   Graph_Graph01078->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01078->SetLineColor(ci);
   Graph_Graph01078->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01078->GetXaxis()->SetRange(28,82);
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
