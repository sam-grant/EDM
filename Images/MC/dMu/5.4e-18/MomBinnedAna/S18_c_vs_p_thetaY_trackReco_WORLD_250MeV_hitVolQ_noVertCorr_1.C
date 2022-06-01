void S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3019,-2.9983,3404.716,3.205185);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1137[12] = {
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
   Double_t Graph0_fy1137[12] = {
   1.861266,
   -1.934759,
   -0.6970861,
   -0.2983655,
   -0.1856965,
   -0.138768,
   -0.1389411,
   -0.1332186,
   -0.1467396,
   -0.136254,
   -0.09843709,
   -0.0119642};
   Double_t Graph0_fex1137[12] = {
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
   Double_t Graph0_fey1137[12] = {
   0.3100044,
   0.0296269,
   0.01468346,
   0.01175233,
   0.01036224,
   0.009393534,
   0.008774566,
   0.008538834,
   0.008738031,
   0.009513549,
   0.009825743,
   0.01315134};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1137,Graph0_fy1137,Graph0_fex1137,Graph0_fey1137);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01137 = new TH1F("Graph_Graph01137","S18_",100,0,3088.178);
   Graph_Graph01137->SetMinimum(-2.377951);
   Graph_Graph01137->SetMaximum(2.584836);
   Graph_Graph01137->SetDirectory(0);
   Graph_Graph01137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01137->SetLineColor(ci);
   Graph_Graph01137->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01137->GetXaxis()->SetRange(1,98);
   Graph_Graph01137->GetXaxis()->CenterTitle(true);
   Graph_Graph01137->GetXaxis()->SetLabelFont(42);
   Graph_Graph01137->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01137->GetXaxis()->SetTitleFont(42);
   Graph_Graph01137->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01137->GetYaxis()->CenterTitle(true);
   Graph_Graph01137->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01137->GetYaxis()->SetLabelFont(42);
   Graph_Graph01137->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01137->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01137->GetYaxis()->SetTitleFont(42);
   Graph_Graph01137->GetZaxis()->SetLabelFont(42);
   Graph_Graph01137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01137);
   
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
