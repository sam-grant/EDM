void S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1692,-1.238977,3406.642,7.138473);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1168[11] = {
   451.9022,
   653.3144,
   880.4684,
   1123.08,
   1370.967,
   1620.018,
   1866.66,
   2115.009,
   2362.988,
   2613.179,
   2787.489};
   Double_t Graph0_fy1168[11] = {
   1.377427,
   -0.03605753,
   -0.3245329,
   -0.4772062,
   -0.5016355,
   -0.4136432,
   -0.2676809,
   -0.1437959,
   -0.08941697,
   -0.06164229,
   -0.03832016};
   Double_t Graph0_fex1168[11] = {
   0.07799311,
   0.06581167,
   0.04754563,
   0.04642947,
   0.04961912,
   0.05492029,
   0.06438561,
   0.08077463,
   0.1057518,
   0.1283674,
   0.1592967};
   Double_t Graph0_fey1168[11] = {
   0.1029499,
   0.03680252,
   0.02199228,
   0.01800845,
   0.01575603,
   0.01373493,
   0.01279767,
   0.01284879,
   0.01353431,
   0.01347388,
   0.03250399};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1168,Graph0_fy1168,Graph0_fex1168,Graph0_fey1168);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01168 = new TH1F("Graph_Graph01168","S12S18_",100,218.2418,3021.231);
   Graph_Graph01168->SetMinimum(-0.4012322);
   Graph_Graph01168->SetMaximum(6.300728);
   Graph_Graph01168->SetDirectory(0);
   Graph_Graph01168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01168->SetLineColor(ci);
   Graph_Graph01168->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01168->GetXaxis()->SetRange(0,101);
   Graph_Graph01168->GetXaxis()->CenterTitle(true);
   Graph_Graph01168->GetXaxis()->SetLabelFont(42);
   Graph_Graph01168->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01168->GetXaxis()->SetTitleFont(42);
   Graph_Graph01168->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01168->GetYaxis()->CenterTitle(true);
   Graph_Graph01168->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01168->GetYaxis()->SetLabelFont(42);
   Graph_Graph01168->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01168->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01168->GetYaxis()->SetTitleFont(42);
   Graph_Graph01168->GetZaxis()->SetLabelFont(42);
   Graph_Graph01168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01168);
   
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
