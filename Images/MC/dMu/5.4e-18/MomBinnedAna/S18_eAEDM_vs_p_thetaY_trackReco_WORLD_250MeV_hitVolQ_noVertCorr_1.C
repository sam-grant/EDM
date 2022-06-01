void S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3019,-0.04809371,3404.716,0.5404228);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1147[12] = {
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
   Double_t Graph0_fy1147[12] = {
   0.4388786,
   0.04181635,
   0.02070938,
   0.01658943,
   0.01463838,
   0.01326913,
   0.01236339,
   0.01195327,
   0.01206775,
   0.01282737,
   0.01263959,
   0.01579887};
   Double_t Graph0_fex1147[12] = {
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
   Double_t Graph0_fey1147[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1147,Graph0_fy1147,Graph0_fex1147,Graph0_fey1147);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01147 = new TH1F("Graph_Graph01147","S18_",100,0,3088.178);
   Graph_Graph01147->SetMinimum(0.01075794);
   Graph_Graph01147->SetMaximum(0.4815711);
   Graph_Graph01147->SetDirectory(0);
   Graph_Graph01147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01147->SetLineColor(ci);
   Graph_Graph01147->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01147->GetXaxis()->SetRange(1,98);
   Graph_Graph01147->GetXaxis()->CenterTitle(true);
   Graph_Graph01147->GetXaxis()->SetLabelFont(42);
   Graph_Graph01147->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01147->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01147->GetXaxis()->SetTitleFont(42);
   Graph_Graph01147->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01147->GetYaxis()->CenterTitle(true);
   Graph_Graph01147->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01147->GetYaxis()->SetLabelFont(42);
   Graph_Graph01147->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01147->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01147->GetYaxis()->SetTitleFont(42);
   Graph_Graph01147->GetZaxis()->SetLabelFont(42);
   Graph_Graph01147->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01147);
   
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
