void S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3019,-0.0008996221,3404.716,0.009303446);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1150[12] = {
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
   Double_t Graph0_fy1150[12] = {
   0.005153826,
   0.0005575112,
   0.0006256518,
   0.0008324215,
   0.0008984625,
   0.001013362,
   0.0007967329,
   0.0007824631,
   0.0006046454,
   0.0006559021,
   0.0006961616,
   0.0002279786};
   Double_t Graph0_fex1150[12] = {
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
   Double_t Graph0_fey1150[12] = {
   0.002388491,
   0.0002275767,
   0.0001127176,
   9.031311e-05,
   7.970505e-05,
   7.241488e-05,
   6.827922e-05,
   6.548304e-05,
   6.569695e-05,
   7.111597e-05,
   7.563579e-05,
   9.388444e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1150,Graph0_fy1150,Graph0_fex1150,Graph0_fey1150);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01150 = new TH1F("Graph_Graph01150","S18_",100,0,3088.178);
   Graph_Graph01150->SetMinimum(0.0001206847);
   Graph_Graph01150->SetMaximum(0.008283139);
   Graph_Graph01150->SetDirectory(0);
   Graph_Graph01150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01150->SetLineColor(ci);
   Graph_Graph01150->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01150->GetXaxis()->SetRange(1,98);
   Graph_Graph01150->GetXaxis()->CenterTitle(true);
   Graph_Graph01150->GetXaxis()->SetLabelFont(42);
   Graph_Graph01150->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01150->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01150->GetXaxis()->SetTitleFont(42);
   Graph_Graph01150->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01150->GetYaxis()->CenterTitle(true);
   Graph_Graph01150->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01150->GetYaxis()->SetLabelFont(42);
   Graph_Graph01150->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01150->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01150->GetYaxis()->SetTitleFont(42);
   Graph_Graph01150->GetZaxis()->SetLabelFont(42);
   Graph_Graph01150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01150);
   
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
