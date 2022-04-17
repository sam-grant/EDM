void S12S18_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 13 12:27:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-377.626,-inf,3398.634,inf);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1186[12] = {
   197.1837,
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
   Double_t Graph0_fy1186[12] = {
   -inf,
   0.0003454108,
   0.005114136,
   0.005591172,
   0.006747096,
   0.008426193,
   0.01065143,
   0.01226007,
   0.01050317,
   0.01200236,
   0.01629044,
   0.006591754};
   Double_t Graph0_fex1186[12] = {
   0,
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
   Double_t Graph0_fey1186[12] = {
   nan,
   0.002918298,
   0.001181079,
   0.0008220561,
   0.0007973271,
   0.0008521761,
   0.0009439706,
   0.00110976,
   0.001388808,
   0.001816875,
   0.002283875,
   0.006506059};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1186,Graph0_fy1186,Graph0_fex1186,Graph0_fey1186);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01186 = new TH1F("Graph_Graph01186","S12S18_",100,0,3051.523);
   Graph_Graph01186->SetMinimum(-inf);
   Graph_Graph01186->SetMaximum(inf);
   Graph_Graph01186->SetDirectory(0);
   Graph_Graph01186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01186->SetLineColor(ci);
   Graph_Graph01186->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01186->GetXaxis()->SetRange(1,99);
   Graph_Graph01186->GetXaxis()->CenterTitle(true);
   Graph_Graph01186->GetXaxis()->SetLabelFont(42);
   Graph_Graph01186->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01186->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01186->GetXaxis()->SetTitleFont(42);
   Graph_Graph01186->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01186->GetYaxis()->CenterTitle(true);
   Graph_Graph01186->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01186->GetYaxis()->SetLabelFont(42);
   Graph_Graph01186->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01186->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01186->GetYaxis()->SetTitleFont(42);
   Graph_Graph01186->GetZaxis()->SetLabelFont(42);
   Graph_Graph01186->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01186->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01186);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.995,0.5853769,nan,"blNDC");
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
