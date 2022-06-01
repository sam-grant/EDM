void S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3019,-0.002827149,3404.716,0.04155108);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1151[12] = {
   183.4234,
   431.6138,
   629.5712,
   873.9991,
   1122.536,
   1372.061,
   1620.677,
   1868.926,
   2116.401,
   2364.639,
   2614.831,
   2823.97};
   Double_t Graph0_fy1151[12] = {
   0.02316561,
   0.003024016,
   0.004095099,
   0.006615359,
   0.008469582,
   0.01119622,
   0.01016045,
   0.01176491,
   0.01074466,
   0.01368332,
   0.01716129,
   0.007659536};
   Double_t Graph0_fex1151[12] = {
   0.2822562,
   0.04287654,
   0.03724861,
   0.03656741,
   0.03833584,
   0.04079893,
   0.04431862,
   0.05008081,
   0.05922797,
   0.07532902,
   0.0939092,
   0.1136929};
   Double_t Graph0_fey1151[12] = {
   0.0107364,
   0.001234378,
   0.0007376846,
   0.0007174887,
   0.0007509829,
   0.0007994628,
   0.0008702621,
   0.000984031,
   0.001167066,
   0.001483118,
   0.001863823,
   0.003154227};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1151,Graph0_fy1151,Graph0_fex1151,Graph0_fey1151);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01151 = new TH1F("Graph_Graph01151","S18_",100,0,3088.178);
   Graph_Graph01151->SetMinimum(0.001610674);
   Graph_Graph01151->SetMaximum(0.03711325);
   Graph_Graph01151->SetDirectory(0);
   Graph_Graph01151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01151->SetLineColor(ci);
   Graph_Graph01151->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01151->GetXaxis()->SetRange(1,98);
   Graph_Graph01151->GetXaxis()->CenterTitle(true);
   Graph_Graph01151->GetXaxis()->SetLabelFont(42);
   Graph_Graph01151->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01151->GetXaxis()->SetTitleFont(42);
   Graph_Graph01151->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01151->GetYaxis()->CenterTitle(true);
   Graph_Graph01151->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01151->GetYaxis()->SetLabelFont(42);
   Graph_Graph01151->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01151->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01151->GetYaxis()->SetTitleFont(42);
   Graph_Graph01151->GetZaxis()->SetLabelFont(42);
   Graph_Graph01151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01151);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
