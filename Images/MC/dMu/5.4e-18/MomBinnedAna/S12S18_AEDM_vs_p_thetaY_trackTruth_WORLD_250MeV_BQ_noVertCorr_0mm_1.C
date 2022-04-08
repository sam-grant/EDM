void S12S18_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:52:39 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8066,-0.3707826,3380.294,0.3716485);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1169[11] = {
   451.8869,
   653.4125,
   880.3378,
   1123.023,
   1371.083,
   1620.024,
   1867,
   2114.693,
   2362.891,
   2613.981,
   2791.543};
   Double_t Graph0_fy1169[11] = {
   -0.1102004,
   0.2019065,
   0.1299794,
   0.1214788,
   0.1461428,
   0.1308476,
   0.1355431,
   0.07457275,
   0.07970583,
   0.1089387,
   0.08287387};
   Double_t Graph0_fex1169[11] = {
   0.1033639,
   0.08730327,
   0.06326209,
   0.06179816,
   0.06623444,
   0.07319159,
   0.08558845,
   0.1070982,
   0.1410021,
   0.1716781,
   0.2406624};
   Double_t Graph0_fey1169[11] = {
   0.1368437,
   0.04600345,
   0.02645076,
   0.02169984,
   0.01999989,
   0.01904551,
   0.01914694,
   0.02028389,
   0.02192836,
   0.02175703,
   0.04810295};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1169,Graph0_fy1169,Graph0_fex1169,Graph0_fey1169);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01169 = new TH1F("Graph_Graph01169","S12S18_",100,217.7835,3025.784);
   Graph_Graph01169->SetMinimum(-0.2965395);
   Graph_Graph01169->SetMaximum(0.2974054);
   Graph_Graph01169->SetDirectory(0);
   Graph_Graph01169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01169->SetLineColor(ci);
   Graph_Graph01169->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01169->GetXaxis()->SetRange(0,100);
   Graph_Graph01169->GetXaxis()->CenterTitle(true);
   Graph_Graph01169->GetXaxis()->SetLabelFont(42);
   Graph_Graph01169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01169->GetXaxis()->SetTitleFont(42);
   Graph_Graph01169->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01169->GetYaxis()->CenterTitle(true);
   Graph_Graph01169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01169->GetYaxis()->SetLabelFont(42);
   Graph_Graph01169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01169->GetYaxis()->SetTitleFont(42);
   Graph_Graph01169->GetZaxis()->SetLabelFont(42);
   Graph_Graph01169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01169);
   
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
