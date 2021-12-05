void S0_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 20:08:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.5089,-0.0008426107,3034.889,-0.0004618256);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[12] = {
   191.2482,
   435.2369,
   652.4289,
   883.6659,
   1126.229,
   1373.859,
   1622.425,
   1870.722,
   2119.361,
   2367.038,
   2613.854,
   2825.256};
   Double_t Graph0_fy1048[12] = {
   0.0002616692,
   -0.002231087,
   -0.000504157,
   -0.000829217,
   -0.0006460355,
   -0.0009220722,
   -0.0008431881,
   -0.001006139,
   -0.0006997566,
   -0.0005805594,
   -0.0004512761,
   -0.0004188483};
   Double_t Graph0_fex1048[12] = {
   1.118774,
   0.1970657,
   0.1111295,
   0.07528278,
   0.06973481,
   0.06961886,
   0.07258618,
   0.07835664,
   0.08830407,
   0.1035468,
   0.1290676,
   0.160519};
   Double_t Graph0_fey1048[12] = {
   0.008680153,
   -0.001091046,
   -0.0003560124,
   -0.0001875274,
   -0.0001428954,
   -0.0001225742,
   -0.0001118643,
   -0.0001061671,
   -0.0001048704,
   -0.0001062216,
   -0.0001141772,
   -0.0001632068};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S0_",100,0,3088.946);
   Graph_Graph01048->SetMinimum(-0.0008045322);
   Graph_Graph01048->SetMaximum(-0.0004999041);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01048->GetXaxis()->SetRange(25,90);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
