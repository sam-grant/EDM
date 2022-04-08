void S12_theta_Y_RMS_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0708,-1.65731,3379.415,37.53672);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1100[11] = {
   451.5581,
   653.2677,
   880.0203,
   1123.181,
   1371.166,
   1620.018,
   1867.098,
   2114.802,
   2362.547,
   2614.683,
   2790.673};
   Double_t Graph0_fy1100[11] = {
   30.90815,
   25.74442,
   21.21677,
   17.94009,
   15.41633,
   13.24023,
   11.3909,
   9.618674,
   7.926824,
   6.236069,
   4.909002};
   Double_t Graph0_fex1100[11] = {
   0.1457006,
   0.1232532,
   0.0893564,
   0.0874833,
   0.09348105,
   0.1030946,
   0.1200829,
   0.1502603,
   0.1968533,
   0.2423922,
   0.3341954};
   Double_t Graph0_fey1100[11] = {
   0.09623804,
   0.03260381,
   0.01874802,
   0.01540211,
   0.01415569,
   0.01344902,
   0.013465,
   0.01423332,
   0.01539407,
   0.01530832,
   0.03397253};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1100,Graph0_fy1100,Graph0_fex1100,Graph0_fey1100);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01100 = new TH1F("Graph_Graph01100","S12_",100,217.4529,3024.967);
   Graph_Graph01100->SetMinimum(2.262094);
   Graph_Graph01100->SetMaximum(33.61732);
   Graph_Graph01100->SetDirectory(0);
   Graph_Graph01100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01100->SetLineColor(ci);
   Graph_Graph01100->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01100->GetXaxis()->SetRange(0,100);
   Graph_Graph01100->GetXaxis()->CenterTitle(true);
   Graph_Graph01100->GetXaxis()->SetLabelFont(42);
   Graph_Graph01100->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01100->GetXaxis()->SetTitleFont(42);
   Graph_Graph01100->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01100->GetYaxis()->CenterTitle(true);
   Graph_Graph01100->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01100->GetYaxis()->SetLabelFont(42);
   Graph_Graph01100->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01100->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01100->GetYaxis()->SetTitleFont(42);
   Graph_Graph01100->GetZaxis()->SetLabelFont(42);
   Graph_Graph01100->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01100);
   
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
