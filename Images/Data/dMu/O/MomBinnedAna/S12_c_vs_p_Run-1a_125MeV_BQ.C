void S12_c_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.1083,-9.089443,2725.349,8.349033);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[22] = {
   366.4807,
   456.7343,
   570.5426,
   695.251,
   815.9612,
   938.4982,
   1062.71,
   1188.361,
   1312.739,
   1435.916,
   1561.843,
   1685.365,
   1810.672,
   1935.19,
   2060.201,
   2185.038,
   2309.334,
   2433.003,
   2559.541,
   2678.772,
   2781.283,
   2887.705};
   Double_t Graph0_fy1013[22] = {
   2.825759,
   0.4320437,
   0.2246961,
   0.1120523,
   0.01746847,
   0.08522483,
   0.1558422,
   0.0599432,
   0.01984887,
   0.04522695,
   0.01388463,
   0.05307418,
   0.143858,
   0.02628972,
   0.06139959,
   -0.02374087,
   0.04992179,
   0.02647338,
   0.05464667,
   0.05195228,
   0.2002653,
   -3.940146};
   Double_t Graph0_fex1013[22] = {
   0.384646,
   0.1721968,
   0.1145503,
   0.0772643,
   0.06172717,
   0.05561102,
   0.05263646,
   0.05089841,
   0.05132909,
   0.05157249,
   0.05534517,
   0.05804077,
   0.06517134,
   0.07120831,
   0.08126697,
   0.08967208,
   0.1030685,
   0.1231302,
   0.1477272,
   0.1694471,
   0.3433133,
   1.655531};
   Double_t Graph0_fey1013[22] = {
   2.616861,
   0.256593,
   0.1248588,
   0.07454053,
   0.05090833,
   0.04156554,
   0.03659336,
   0.03306064,
   0.0308323,
   0.02923106,
   0.02921449,
   0.02816124,
   0.02887214,
   0.02903961,
   0.03030368,
   0.03060638,
   0.03218347,
   0.0344257,
   0.03661948,
   0.03999406,
   0.09535961,
   2.242885};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","S12",100,113.7696,3141.687);
   Graph_Graph01013->SetMinimum(-7.345596);
   Graph_Graph01013->SetMaximum(6.605185);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01013->GetXaxis()->SetRange(22,79);
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
