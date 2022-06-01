void S0S12S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3995,182.0489,3405.595,184.7159);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1227[12] = {
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
   Double_t Graph0_fy1227[12] = {
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.0142};
   Double_t Graph0_fex1227[12] = {
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
   Double_t Graph0_fey1227[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1227,Graph0_fy1227,Graph0_fex1227,Graph0_fey1227);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01227 = new TH1F("Graph_Graph01227","S0S12S18_",100,0,3088.975);
   Graph_Graph01227->SetMinimum(182.3156);
   Graph_Graph01227->SetMaximum(184.4492);
   Graph_Graph01227->SetDirectory(0);
   Graph_Graph01227->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01227->SetLineColor(ci);
   Graph_Graph01227->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01227->GetXaxis()->SetRange(1,98);
   Graph_Graph01227->GetXaxis()->CenterTitle(true);
   Graph_Graph01227->GetXaxis()->SetLabelFont(42);
   Graph_Graph01227->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01227->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01227->GetXaxis()->SetTitleFont(42);
   Graph_Graph01227->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01227->GetYaxis()->CenterTitle(true);
   Graph_Graph01227->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01227->GetYaxis()->SetLabelFont(42);
   Graph_Graph01227->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01227->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01227->GetYaxis()->SetTitleFont(42);
   Graph_Graph01227->GetZaxis()->SetLabelFont(42);
   Graph_Graph01227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01227);
   
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
