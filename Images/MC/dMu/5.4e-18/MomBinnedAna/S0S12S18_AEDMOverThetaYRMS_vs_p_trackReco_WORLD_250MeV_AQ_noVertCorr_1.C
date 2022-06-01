void S0S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3995,-0.0006796047,3405.595,0.01587199);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1229[12] = {
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
   Double_t Graph0_fy1229[12] = {
   0.006982559,
   0.003631309,
   0.004255768,
   0.007440213,
   0.007887303,
   0.010502,
   0.01075625,
   0.01186326,
   0.01209016,
   0.01181787,
   0.01225019,
   0.00866143};
   Double_t Graph0_fex1229[12] = {
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
   Double_t Graph0_fey1229[12] = {
   0.005898609,
   0.0007008044,
   0.0004012097,
   0.0003801563,
   0.0003854776,
   0.0003981268,
   0.0004197203,
   0.0004557406,
   0.0005136852,
   0.0006064565,
   0.0007727456,
   0.001326439};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1229,Graph0_fy1229,Graph0_fex1229,Graph0_fey1229);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01229 = new TH1F("Graph_Graph01229","S0S12S18_",100,0,3088.975);
   Graph_Graph01229->SetMinimum(0.000975555);
   Graph_Graph01229->SetMaximum(0.01421683);
   Graph_Graph01229->SetDirectory(0);
   Graph_Graph01229->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01229->SetLineColor(ci);
   Graph_Graph01229->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01229->GetXaxis()->SetRange(1,98);
   Graph_Graph01229->GetXaxis()->CenterTitle(true);
   Graph_Graph01229->GetXaxis()->SetLabelFont(42);
   Graph_Graph01229->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01229->GetXaxis()->SetTitleFont(42);
   Graph_Graph01229->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01229->GetYaxis()->CenterTitle(true);
   Graph_Graph01229->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01229->GetYaxis()->SetLabelFont(42);
   Graph_Graph01229->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01229->GetYaxis()->SetTitleFont(42);
   Graph_Graph01229->GetZaxis()->SetLabelFont(42);
   Graph_Graph01229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01229);
   
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
