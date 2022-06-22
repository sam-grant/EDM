void S18_AEDM_vs_p_Run-1d_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:20:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(787.921,0.002621818,2720.357,0.06292157);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[11] = {
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
   Double_t Graph0_fy1073[11] = {
   0.2037183,
   0.08173916,
   0.05004819,
   0.01054017,
   0.03664992,
   0.02284802,
   0.03888156,
   0.03341859,
   0.03852053,
   0.0201092,
   0.1171035};
   Double_t Graph0_fex1073[11] = {
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
   Double_t Graph0_fey1073[11] = {
   0.09108385,
   0.02324086,
   0.01205017,
   0.009190636,
   0.008074185,
   0.00779591,
   0.008080026,
   0.008620507,
   0.009515656,
   0.01088361,
   0.03786459};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S18",100,222.2444,3033.06);
   Graph_Graph01073->SetMinimum(0.008651794);
   Graph_Graph01073->SetMaximum(0.05689159);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01073->GetXaxis()->SetRange(28,82);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
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
