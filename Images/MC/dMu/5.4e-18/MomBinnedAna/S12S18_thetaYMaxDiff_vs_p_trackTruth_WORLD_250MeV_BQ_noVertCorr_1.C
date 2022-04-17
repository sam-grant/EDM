void S12S18_thetaYMaxDiff_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 13 12:27:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-377.626,-45.15381,3398.634,222.6444);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1184[12] = {
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
   Double_t Graph0_fy1184[12] = {
   0,
   177.4906,
   153.1869,
   120.782,
   99.79244,
   84.32645,
   71.43813,
   62.23219,
   53.02624,
   43.45206,
   34.61435,
   25.04017};
   Double_t Graph0_fex1184[12] = {
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
   Double_t Graph0_fey1184[12] = {
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
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1184,Graph0_fy1184,Graph0_fex1184,Graph0_fey1184);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01184 = new TH1F("Graph_Graph01184","S12S18_",100,0,3051.523);
   Graph_Graph01184->SetMinimum(-18.37398);
   Graph_Graph01184->SetMaximum(195.8646);
   Graph_Graph01184->SetDirectory(0);
   Graph_Graph01184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01184->SetLineColor(ci);
   Graph_Graph01184->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01184->GetXaxis()->SetRange(1,99);
   Graph_Graph01184->GetXaxis()->CenterTitle(true);
   Graph_Graph01184->GetXaxis()->SetLabelFont(42);
   Graph_Graph01184->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01184->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01184->GetXaxis()->SetTitleFont(42);
   Graph_Graph01184->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01184->GetYaxis()->CenterTitle(true);
   Graph_Graph01184->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01184->GetYaxis()->SetLabelFont(42);
   Graph_Graph01184->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01184->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01184->GetYaxis()->SetTitleFont(42);
   Graph_Graph01184->GetZaxis()->SetLabelFont(42);
   Graph_Graph01184->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01184);
   
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
