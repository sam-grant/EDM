void S12_eAEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_1000_2500_MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 11:05:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8407,-0.01003806,3380.646,0.1554719);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1104[11] = {
   451.9126,
   653.3908,
   880.2869,
   1123.157,
   1371.168,
   1620.209,
   1866.98,
   2114.946,
   2362.647,
   2614.196,
   2791.847};
   Double_t Graph0_fy1104[11] = {
   0.1278869,
   0.04287561,
   0.02460639,
   0.02023064,
   0.01845662,
   0.01754693,
   0.01763439,
   0.01864573,
   0.02007933,
   0.0199653,
   0.04433183};
   Double_t Graph0_fex1104[11] = {
   0.09610043,
   0.08121317,
   0.05878774,
   0.05741996,
   0.06114729,
   0.0675111,
   0.07880324,
   0.09848086,
   0.1287351,
   0.1585905,
   0.2246814};
   Double_t Graph0_fey1104[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1104,Graph0_fy1104,Graph0_fex1104,Graph0_fey1104);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01104 = new TH1F("Graph_Graph01104","S12_",100,217.791,3026.097);
   Graph_Graph01104->SetMinimum(0.006512933);
   Graph_Graph01104->SetMaximum(0.1389209);
   Graph_Graph01104->SetDirectory(0);
   Graph_Graph01104->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01104->SetLineColor(ci);
   Graph_Graph01104->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01104->GetXaxis()->SetRange(0,100);
   Graph_Graph01104->GetXaxis()->CenterTitle(true);
   Graph_Graph01104->GetXaxis()->SetLabelFont(42);
   Graph_Graph01104->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01104->GetXaxis()->SetTitleFont(42);
   Graph_Graph01104->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01104->GetYaxis()->CenterTitle(true);
   Graph_Graph01104->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01104->GetYaxis()->SetLabelFont(42);
   Graph_Graph01104->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01104->GetYaxis()->SetTitleFont(42);
   Graph_Graph01104->GetZaxis()->SetLabelFont(42);
   Graph_Graph01104->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01104);
   
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
