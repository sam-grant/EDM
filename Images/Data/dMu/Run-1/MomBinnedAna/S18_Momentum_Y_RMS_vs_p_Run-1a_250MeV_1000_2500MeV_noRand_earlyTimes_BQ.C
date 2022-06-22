void S18_Momentum_Y_RMS_vs_p_Run-1a_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2717,10.8557,2705.192,25.73701);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1078[11] = {
   456.2206,
   653.952,
   883.595,
   1127.532,
   1373.186,
   1619.572,
   1866.813,
   2116.091,
   2359.833,
   2607.109,
   2782.58};
   Double_t Graph0_fy1078[11] = {
   14.22106,
   15.82822,
   17.09807,
   18.64658,
   19.82445,
   20.20812,
   19.79066,
   18.94041,
   17.36456,
   15.28597,
   13.78618};
   Double_t Graph0_fex1078[11] = {
   0.2442643,
   0.171278,
   0.1162033,
   0.1055093,
   0.1045023,
   0.1159622,
   0.1423718,
   0.1789914,
   0.2369297,
   0.3237419,
   0.571712};
   Double_t Graph0_fey1078[11] = {
   0.07750155,
   0.02813623,
   0.01980071,
   0.01925704,
   0.02055492,
   0.02328474,
   0.02775812,
   0.03351367,
   0.04102907,
   0.05155889,
   0.2039322};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1078,Graph0_fy1078,Graph0_fex1078,Graph0_fey1078);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01078 = new TH1F("Graph_Graph01078","S18",100,223.2588,3015.87);
   Graph_Graph01078->SetMinimum(12.34383);
   Graph_Graph01078->SetMaximum(24.24888);
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
