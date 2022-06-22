void S18_Momentum_Y_RMS_vs_p_Run-1d_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:20:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(787.921,10.98609,2720.357,25.83422);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1078[11] = {
   456.5429,
   653.7007,
   883.7251,
   1127.417,
   1372.998,
   1619.548,
   1866.761,
   2115.881,
   2359.473,
   2607.509,
   2798.659};
   Double_t Graph0_fy1078[11] = {
   14.19192,
   15.82219,
   17.09335,
   18.68594,
   19.88838,
   20.29198,
   19.85319,
   18.9963,
   17.42603,
   15.44908,
   15.08705};
   Double_t Graph0_fex1078[11] = {
   0.0639379,
   0.04521342,
   0.03054154,
   0.02772992,
   0.02751224,
   0.03060264,
   0.03770253,
   0.04767135,
   0.06310101,
   0.08618464,
   0.166413};
   Double_t Graph0_fey1078[11] = {
   0.0204242,
   0.007403509,
   0.005213153,
   0.005073931,
   0.005427954,
   0.00617644,
   0.007390449,
   0.008936412,
   0.01097705,
   0.01386907,
   0.0471959};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1078,Graph0_fy1078,Graph0_fex1078,Graph0_fey1078);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01078 = new TH1F("Graph_Graph01078","S18",100,222.2444,3033.06);
   Graph_Graph01078->SetMinimum(12.4709);
   Graph_Graph01078->SetMaximum(24.34941);
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
