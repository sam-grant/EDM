void S12S18_Ag2_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.2453,-0.07307032,3029.52,0.3341147);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[22] = {
   366.6594,
   456.9386,
   570.4297,
   694.8892,
   815.8357,
   938.5304,
   1062.746,
   1188.287,
   1312.696,
   1435.866,
   1561.91,
   1685.206,
   1810.551,
   1935.122,
   2060.256,
   2184.911,
   2309.21,
   2433.149,
   2559.631,
   2678.445,
   2781.382,
   2886.078};
   Double_t Graph0_fy1173[22] = {
   1.776009,
   0.1848051,
   0.1437883,
   0.04035154,
   0.01010965,
   0.05567516,
   -0.008447776,
   0.001633536,
   0.0122135,
   0.02089702,
   0.008419375,
   -0.02475043,
   -0.02959293,
   0.01633111,
   -0.006469407,
   -0.02106965,
   -0.04060199,
   -0.01513799,
   0.01927557,
   0.003029736,
   -0.03754741,
   0.4662027};
   Double_t Graph0_fex1173[22] = {
   0.2286714,
   0.1084643,
   0.07206375,
   0.04930902,
   0.03971615,
   0.03589624,
   0.03399364,
   0.03291034,
   0.03338084,
   0.03361833,
   0.03604724,
   0.03804064,
   0.04287073,
   0.04685643,
   0.05368643,
   0.05926724,
   0.06838202,
   0.08224478,
   0.09770881,
   0.1122532,
   0.2317398,
   1.023868};
   Double_t Graph0_fey1173[22] = {
   1.695161,
   0.1582987,
   0.07658079,
   0.04617646,
   0.03197672,
   0.0262947,
   0.02309395,
   0.02082946,
   0.01956425,
   0.01855634,
   0.01855701,
   0.01796979,
   0.01865667,
   0.01888597,
   0.01987445,
   0.02031905,
   0.02148071,
   0.02348095,
   0.02522535,
   0.02798217,
   0.07284484,
   2.045585};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18",100,114.3636,3139.169);
   Graph_Graph01173->SetMinimum(-0.03235182);
   Graph_Graph01173->SetMaximum(0.2933962);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01173->GetXaxis()->SetRange(22,88);
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
