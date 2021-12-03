void S12S18_eAEDM_vs_p_A_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:34:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.531,-1.026532e-08,3019.477,1.217961e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1091[12] = {
   107.613,
   434.4437,
   631.4983,
   875.645,
   1124.343,
   1373.479,
   1622.481,
   1871.403,
   2119.962,
   2367.8,
   2613.257,
   2835.815};
   Double_t Graph0_fy1091[12] = {
   0.000261331,
   2.618996e-08,
   4.427379e-09,
   3.675521e-09,
   3.704763e-09,
   3.999804e-09,
   4.593167e-09,
   5.644466e-09,
   7.510089e-09,
   1.121992e-08,
   2.076339e-08,
   8.920474e-08};
   Double_t Graph0_fex1091[12] = {
   1.269651,
   0.0406821,
   0.03384306,
   0.03229208,
   0.03241306,
   0.03321891,
   0.0348207,
   0.03738667,
   0.04138397,
   0.04767772,
   0.05903171,
   0.08572427};
   Double_t Graph0_fey1091[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1091,Graph0_fy1091,Graph0_fex1091,Graph0_fey1091);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01091 = new TH1F("Graph_Graph01091","S12S18_",100,0,3108.857);
   Graph_Graph01091->SetMinimum(2.940826e-09);
   Graph_Graph01091->SetMaximum(1.0859e-07);
   Graph_Graph01091->SetDirectory(0);
   Graph_Graph01091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01091->SetLineColor(ci);
   Graph_Graph01091->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01091->GetXaxis()->SetRange(25,89);
   Graph_Graph01091->GetXaxis()->CenterTitle(true);
   Graph_Graph01091->GetXaxis()->SetLabelFont(42);
   Graph_Graph01091->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01091->GetXaxis()->SetTitleFont(42);
   Graph_Graph01091->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01091->GetYaxis()->CenterTitle(true);
   Graph_Graph01091->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01091->GetYaxis()->SetLabelFont(42);
   Graph_Graph01091->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01091->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01091->GetYaxis()->SetTitleFont(42);
   Graph_Graph01091->GetZaxis()->SetLabelFont(42);
   Graph_Graph01091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01091);
   
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
