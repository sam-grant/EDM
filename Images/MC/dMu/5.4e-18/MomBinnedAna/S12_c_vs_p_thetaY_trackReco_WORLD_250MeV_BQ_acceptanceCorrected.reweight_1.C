void S12_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4009,-1.285048,3406.808,7.731365);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1094[11] = {
   451.7715,
   653.353,
   880.3799,
   1123.143,
   1371.135,
   1620.306,
   1866.82,
   2115,
   2362.657,
   2614.209,
   2787.525};
   Double_t Graph0_fy1094[11] = {
   1.431001,
   -0.1254853,
   -0.3998805,
   -0.4800323,
   -0.4520257,
   -0.3229824,
   -0.2120722,
   -0.07679505,
   -0.07334124,
   -0.04519911,
   -0.02075425};
   Double_t Graph0_fex1094[11] = {
   0.110052,
   0.09282319,
   0.06723869,
   0.06570592,
   0.06990737,
   0.07732767,
   0.0901305,
   0.1129323,
   0.1472837,
   0.1813638,
   0.2204805};
   Double_t Graph0_fey1094[11] = {
   0.1379949,
   0.04884117,
   0.02875047,
   0.02297502,
   0.01937746,
   0.01683991,
   0.01586629,
   0.01610356,
   0.01707625,
   0.01722149,
   0.04075343};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1094,Graph0_fy1094,Graph0_fex1094,Graph0_fey1094);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01094 = new TH1F("Graph_Graph01094","S12_",100,218.053,3021.354);
   Graph_Graph01094->SetMinimum(-0.3834064);
   Graph_Graph01094->SetMaximum(6.829724);
   Graph_Graph01094->SetDirectory(0);
   Graph_Graph01094->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01094->SetLineColor(ci);
   Graph_Graph01094->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01094->GetXaxis()->SetRange(0,101);
   Graph_Graph01094->GetXaxis()->CenterTitle(true);
   Graph_Graph01094->GetXaxis()->SetLabelFont(42);
   Graph_Graph01094->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01094->GetXaxis()->SetTitleFont(42);
   Graph_Graph01094->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01094->GetYaxis()->CenterTitle(true);
   Graph_Graph01094->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01094->GetYaxis()->SetLabelFont(42);
   Graph_Graph01094->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01094->GetYaxis()->SetTitleFont(42);
   Graph_Graph01094->GetZaxis()->SetLabelFont(42);
   Graph_Graph01094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01094);
   
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
