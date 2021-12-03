void S12_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:34:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.6115,0.06177661,3019.97,0.2775903);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1051[12] = {
   106.8541,
   434.1964,
   631.4626,
   875.6655,
   1124.351,
   1373.49,
   1622.49,
   1871.474,
   2120.007,
   2367.914,
   2613.316,
   2836.123};
   Double_t Graph0_fy1051[12] = {
   0.130725,
   0.2885298,
   0.1693529,
   0.1899729,
   0.182875,
   0.2135064,
   0.2071734,
   0.1919343,
   0.1442635,
   0.1364023,
   0.1265324,
   0.1045795};
   Double_t Graph0_fex1051[12] = {
   1.820096,
   0.05734266,
   0.04772134,
   0.04554609,
   0.04567215,
   0.04680967,
   0.04904856,
   0.05265824,
   0.0582703,
   0.06704882,
   0.08295268,
   0.1203711};
   Double_t Graph0_fey1051[12] = {
   1.538615,
   0.05725847,
   0.02619575,
   0.02034122,
   0.01716536,
   0.0149818,
   0.01344322,
   0.01235615,
   0.01157726,
   0.01106131,
   0.0108334,
   0.01283568};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1051,Graph0_fy1051,Graph0_fex1051,Graph0_fey1051);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01051 = new TH1F("Graph_Graph01051","S12_",100,0,3109.364);
   Graph_Graph01051->SetMinimum(0.08335798);
   Graph_Graph01051->SetMaximum(0.256009);
   Graph_Graph01051->SetDirectory(0);
   Graph_Graph01051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01051->SetLineColor(ci);
   Graph_Graph01051->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01051->GetXaxis()->SetRange(25,89);
   Graph_Graph01051->GetXaxis()->CenterTitle(true);
   Graph_Graph01051->GetXaxis()->SetLabelFont(42);
   Graph_Graph01051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01051->GetXaxis()->SetTitleFont(42);
   Graph_Graph01051->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01051->GetYaxis()->CenterTitle(true);
   Graph_Graph01051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01051->GetYaxis()->SetLabelFont(42);
   Graph_Graph01051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01051->GetYaxis()->SetTitleFont(42);
   Graph_Graph01051->GetZaxis()->SetLabelFont(42);
   Graph_Graph01051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01051);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
