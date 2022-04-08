void S12S18_theta_Y_RMS_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:52:39 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8066,-1.677464,3380.294,37.63343);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1174[11] = {
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
   Double_t Graph0_fy1174[11] = {
   31.0131,
   25.67817,
   21.13856,
   17.89385,
   15.38305,
   13.22491,
   11.35326,
   9.59779,
   7.921414,
   6.226691,
   4.898539};
   Double_t Graph0_fex1174[11] = {
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
   Double_t Graph0_fey1174[11] = {
   0.0685142,
   0.02301602,
   0.01321937,
   0.01086136,
   0.010004,
   0.009533742,
   0.009573457,
   0.01013416,
   0.01099543,
   0.01086413,
   0.02418685};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1174,Graph0_fy1174,Graph0_fex1174,Graph0_fey1174);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01174 = new TH1F("Graph_Graph01174","S12S18_",100,217.7835,3025.784);
   Graph_Graph01174->SetMinimum(2.253626);
   Graph_Graph01174->SetMaximum(33.70234);
   Graph_Graph01174->SetDirectory(0);
   Graph_Graph01174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01174->SetLineColor(ci);
   Graph_Graph01174->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01174->GetXaxis()->SetRange(0,100);
   Graph_Graph01174->GetXaxis()->CenterTitle(true);
   Graph_Graph01174->GetXaxis()->SetLabelFont(42);
   Graph_Graph01174->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01174->GetXaxis()->SetTitleFont(42);
   Graph_Graph01174->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01174->GetYaxis()->CenterTitle(true);
   Graph_Graph01174->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01174->GetYaxis()->SetLabelFont(42);
   Graph_Graph01174->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01174->GetYaxis()->SetTitleFont(42);
   Graph_Graph01174->GetZaxis()->SetLabelFont(42);
   Graph_Graph01174->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01174);
   
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
