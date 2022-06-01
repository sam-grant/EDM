void S12_c_vs_p_A_trackTruth_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:09:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.9303,-4.066724e-05,3375.567,2.196039e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[11] = {
   451.7813,
   653.3899,
   880.2814,
   1123.172,
   1371.155,
   1620.23,
   1866.957,
   2115.041,
   2362.635,
   2614.361,
   2787.793};
   Double_t Graph0_fy1097[11] = {
   1.080176e-05,
   -1.015526e-07,
   -8.743382e-08,
   -5.882604e-08,
   -7.384678e-08,
   -6.187985e-08,
   1.751977e-08,
   7.525446e-08,
   -1.325964e-07,
   -2.120424e-07,
   -1.701137e-05};
   Double_t Graph0_fex1097[11] = {
   0.09598716,
   0.08110103,
   0.05875489,
   0.05741567,
   0.0611556,
   0.06753555,
   0.07881058,
   0.09874796,
   0.1289024,
   0.1585721,
   0.1940861};
   Double_t Graph0_fey1097[11] = {
   7.206971e-07,
   4.817384e-08,
   1.621775e-08,
   1.473642e-08,
   1.784256e-08,
   2.456464e-08,
   4.070007e-08,
   8.607306e-08,
   2.13304e-07,
   4.913637e-07,
   1.321793e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","S12_",100,218.0551,3021.618);
   Graph_Graph01097->SetMinimum(-3.440448e-05);
   Graph_Graph01097->SetMaximum(1.569763e-05);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01097->GetXaxis()->SetRange(0,100);
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
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
