void S0S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3995,12.84681,3405.595,24.66699);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1223[12] = {
   194.6922,
   428.6847,
   630.9386,
   875.1931,
   1123.964,
   1373.219,
   1622.316,
   1870.762,
   2119.242,
   2366.792,
   2612.599,
   2825.796};
   Double_t Graph0_fy1223[12] = {
   17.00851,
   14.82201,
   17.43583,
   19.91145,
   21.51231,
   22.38022,
   22.69218,
   22.5242,
   21.85976,
   20.5893,
   18.45594,
   15.68217};
   Double_t Graph0_fex1223[12] = {
   0.1483758,
   0.02589663,
   0.0201489,
   0.01936183,
   0.01967197,
   0.02031215,
   0.02139941,
   0.02322305,
   0.02613862,
   0.03076314,
   0.03885924,
   0.04941833};
   Double_t Graph0_fey1223[12] = {
   0.04311109,
   0.005175193,
   0.003501821,
   0.003790703,
   0.004156568,
   0.004468686,
   0.00478054,
   0.00515352,
   0.005637748,
   0.006267556,
   0.007151721,
   0.01043572};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1223,Graph0_fy1223,Graph0_fex1223,Graph0_fey1223);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01223 = new TH1F("Graph_Graph01223","S0S12S18_",100,0,3088.975);
   Graph_Graph01223->SetMinimum(14.02883);
   Graph_Graph01223->SetMaximum(23.48497);
   Graph_Graph01223->SetDirectory(0);
   Graph_Graph01223->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01223->SetLineColor(ci);
   Graph_Graph01223->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01223->GetXaxis()->SetRange(1,98);
   Graph_Graph01223->GetXaxis()->CenterTitle(true);
   Graph_Graph01223->GetXaxis()->SetLabelFont(42);
   Graph_Graph01223->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01223->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01223->GetXaxis()->SetTitleFont(42);
   Graph_Graph01223->GetYaxis()->CenterTitle(true);
   Graph_Graph01223->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01223->GetYaxis()->SetLabelFont(42);
   Graph_Graph01223->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01223->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01223->GetYaxis()->SetTitleFont(42);
   Graph_Graph01223->GetZaxis()->SetLabelFont(42);
   Graph_Graph01223->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01223->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01223);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
