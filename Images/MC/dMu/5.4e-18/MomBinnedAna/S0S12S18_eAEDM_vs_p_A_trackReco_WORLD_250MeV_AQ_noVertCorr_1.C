void S0S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3995,-4.083754e-07,3405.595,3.682534e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1226[12] = {
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
   Double_t Graph0_fy1226[12] = {
   2.97593e-06,
   4.958415e-09,
   9.330042e-10,
   7.951173e-10,
   8.303082e-10,
   9.143741e-10,
   1.066683e-09,
   1.350436e-09,
   1.893556e-09,
   3.014028e-09,
   5.941597e-09,
   2.844542e-08};
   Double_t Graph0_fex1226[12] = {
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
   Double_t Graph0_fey1226[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1226,Graph0_fy1226,Graph0_fex1226,Graph0_fey1226);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01226 = new TH1F("Graph_Graph01226","S0S12S18_",100,0,3088.975);
   Graph_Graph01226->SetMinimum(7.156056e-10);
   Graph_Graph01226->SetMaximum(3.273443e-06);
   Graph_Graph01226->SetDirectory(0);
   Graph_Graph01226->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01226->SetLineColor(ci);
   Graph_Graph01226->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01226->GetXaxis()->SetRange(1,98);
   Graph_Graph01226->GetXaxis()->CenterTitle(true);
   Graph_Graph01226->GetXaxis()->SetLabelFont(42);
   Graph_Graph01226->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01226->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01226->GetXaxis()->SetTitleFont(42);
   Graph_Graph01226->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01226->GetYaxis()->CenterTitle(true);
   Graph_Graph01226->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01226->GetYaxis()->SetLabelFont(42);
   Graph_Graph01226->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01226->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01226->GetYaxis()->SetTitleFont(42);
   Graph_Graph01226->GetZaxis()->SetLabelFont(42);
   Graph_Graph01226->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01226->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01226);
   
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
