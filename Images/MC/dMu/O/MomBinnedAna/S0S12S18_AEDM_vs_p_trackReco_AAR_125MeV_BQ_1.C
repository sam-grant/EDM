void S0S12S18_AEDM_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-6.612572,2727,1.910848);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1052[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1052[22] = {
   -3.719873,
   -0.3112746,
   0.312248,
   -0.1154838,
   -0.02878215,
   0.01863251,
   -0.009056813,
   0.09178324,
   0.02771003,
   -0.04518591,
   0.03975435,
   -0.005525766,
   -0.01403263,
   0.09035454,
   0.03037497,
   -0.125615,
   -0.031982,
   0.04625607,
   -0.07414267,
   -0.01826291,
   0.03768778,
   -3.984054};
   Double_t Graph0_fex1052[22] = {
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
   Double_t Graph0_fey1052[22] = {
   1.472129,
   0.2824189,
   0.1780302,
   0.1080401,
   0.08211467,
   0.07020592,
   0.0638249,
   0.06019109,
   0.05768121,
   0.05601135,
   0.05457339,
   0.05350618,
   0.05376923,
   0.05444597,
   0.05582341,
   0.05698928,
   0.05870686,
   0.06106962,
   0.05900386,
   0.05816249,
   0.09477725,
   0.27399};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1052,Graph0_fy1052,Graph0_fex1052,Graph0_fey1052);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01052 = new TH1F("Graph_Graph01052","S0S12S18_",100,49.5,3199.5);
   Graph_Graph01052->SetMinimum(-5.76023);
   Graph_Graph01052->SetMaximum(1.058506);
   Graph_Graph01052->SetDirectory(0);
   Graph_Graph01052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01052->SetLineColor(ci);
   Graph_Graph01052->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01052->GetXaxis()->SetRange(23,78);
   Graph_Graph01052->GetXaxis()->CenterTitle(true);
   Graph_Graph01052->GetXaxis()->SetLabelFont(42);
   Graph_Graph01052->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01052->GetXaxis()->SetTitleFont(42);
   Graph_Graph01052->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01052->GetYaxis()->CenterTitle(true);
   Graph_Graph01052->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01052->GetYaxis()->SetLabelFont(42);
   Graph_Graph01052->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01052->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01052->GetYaxis()->SetTitleFont(42);
   Graph_Graph01052->GetZaxis()->SetLabelFont(42);
   Graph_Graph01052->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01052);
   
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
