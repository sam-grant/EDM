void S0_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:48:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6976,-0.08252021,3408.279,0.03401635);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[12] = {
   190.1422,
   431.7918,
   629.8411,
   874.1286,
   1122.912,
   1372.564,
   1621.827,
   1870.387,
   2119.295,
   2366.963,
   2612.664,
   2827.454};
   Double_t Graph0_fy1073[12] = {
   -0.06309745,
   0.002382241,
   0.00550505,
   0.008349405,
   0.008237567,
   0.01244711,
   0.01187694,
   0.01324197,
   0.0121841,
   0.01280844,
   0.01204111,
   0.007752151};
   Double_t Graph0_fex1073[12] = {
   0.6485143,
   0.06606595,
   0.05393537,
   0.05331023,
   0.05537795,
   0.05830269,
   0.06242498,
   0.06839258,
   0.0772997,
   0.09059204,
   0.1134356,
   0.1449771};
   Double_t Graph0_fey1073[12] = {
   -0.02078339,
   0.001875315,
   0.001072047,
   0.001045077,
   0.001084168,
   0.001142655,
   0.001223849,
   0.001341971,
   0.001520725,
   0.001785143,
   0.002251691,
   0.003818152};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S0_",100,0,3091.409);
   Graph_Graph01073->SetMinimum(-0.07086655);
   Graph_Graph01073->SetMaximum(0.02236269);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01073->GetXaxis()->SetRange(1,98);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
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
