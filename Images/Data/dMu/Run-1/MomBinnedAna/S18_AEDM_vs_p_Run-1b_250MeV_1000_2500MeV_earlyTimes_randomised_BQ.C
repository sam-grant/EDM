void S18_AEDM_vs_p_Run-1b_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.189,-0.001005983,2704.825,0.06918515);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[11] = {
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
   Double_t Graph0_fy1073[11] = {
   0.1040708,
   0.09175483,
   0.03399404,
   0.05228093,
   0.008594441,
   0.01736999,
   0.0111629,
   0.007423486,
   0.01993559,
   0.04632394,
   0.1966896};
   Double_t Graph0_fex1073[11] = {
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
   Double_t Graph0_fey1073[11] = {
   0.2830452,
   0.07369564,
   0.03845547,
   0.0294291,
   0.02575346,
   0.02474762,
   0.02558685,
   0.02724788,
   0.02990392,
   0.03356053,
   0.1223089};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S18",100,223.2592,3015.457);
   Graph_Graph01073->SetMinimum(0.006013131);
   Graph_Graph01073->SetMaximum(0.06216603);
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
