void S12S18_thetaYMaxDiff_vs_p_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 11:51:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6724,-13.02506,3380.572,214.4511);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1180[11] = {
   452.0109,
   653.3666,
   880.43,
   1123.084,
   1371.063,
   1619.993,
   1866.796,
   2114.997,
   2363.005,
   2613.127,
   2791.874};
   Double_t Graph0_fy1180[11] = {
   176.0177,
   153.5552,
   121.1502,
   100.1607,
   84.32645,
   71.43813,
   62.23219,
   53.39448,
   43.45206,
   34.98259,
   25.40841};
   Double_t Graph0_fex1180[11] = {
   0.06819885,
   0.05757163,
   0.04157158,
   0.04058758,
   0.04335803,
   0.04795859,
   0.05629018,
   0.07044358,
   0.09237263,
   0.112246,
   0.1640369};
   Double_t Graph0_fey1180[11] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1180,Graph0_fy1180,Graph0_fex1180,Graph0_fey1180);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01180 = new TH1F("Graph_Graph01180","S12S18_",100,217.9332,3026.047);
   Graph_Graph01180->SetMinimum(9.722562);
   Graph_Graph01180->SetMaximum(191.7035);
   Graph_Graph01180->SetDirectory(0);
   Graph_Graph01180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01180->SetLineColor(ci);
   Graph_Graph01180->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01180->GetXaxis()->SetRange(0,100);
   Graph_Graph01180->GetXaxis()->CenterTitle(true);
   Graph_Graph01180->GetXaxis()->SetLabelFont(42);
   Graph_Graph01180->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01180->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01180->GetXaxis()->SetTitleFont(42);
   Graph_Graph01180->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01180->GetYaxis()->CenterTitle(true);
   Graph_Graph01180->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01180->GetYaxis()->SetLabelFont(42);
   Graph_Graph01180->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01180->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01180->GetYaxis()->SetTitleFont(42);
   Graph_Graph01180->GetZaxis()->SetLabelFont(42);
   Graph_Graph01180->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01180->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01180);
   
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
