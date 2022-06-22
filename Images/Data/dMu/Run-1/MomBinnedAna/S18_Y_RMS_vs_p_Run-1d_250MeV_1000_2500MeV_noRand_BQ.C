void S18_Y_RMS_vs_p_Run-1d_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:20:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(787.921,9.22964,2720.357,16.84889);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1077[11] = {
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
   Double_t Graph0_fy1077[11] = {
   13.52777,
   12.77515,
   12.63867,
   12.61084,
   12.62819,
   12.64518,
   12.5674,
   12.48873,
   12.53198,
   13.47218,
   21.84406};
   Double_t Graph0_fex1077[11] = {
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
   Double_t Graph0_fey1077[11] = {
   0.0194702,
   0.005977824,
   0.003854538,
   0.003424161,
   0.00344627,
   0.003848534,
   0.00467797,
   0.005874981,
   0.007894299,
   0.01209632,
   0.06846826};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01077 = new TH1F("Graph_Graph01077","S18",100,222.2444,3033.06);
   Graph_Graph01077->SetMinimum(9.991565);
   Graph_Graph01077->SetMaximum(16.08697);
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
