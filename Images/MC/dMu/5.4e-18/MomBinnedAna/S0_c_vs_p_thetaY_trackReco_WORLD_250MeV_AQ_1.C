void S0_c_vs_p_thetaY_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 08:42:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.1392,-9.62791,3511.253,6.696474);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[12] = {
   195.803,
   429.651,
   630.7927,
   875.2717,
   1123.906,
   1373.288,
   1622.379,
   1870.823,
   2119.356,
   2366.927,
   2612.775,
   2826.941};
   Double_t Graph0_fy1035[12] = {
   3.573777,
   -6.868797,
   -0.3996252,
   0.1775174,
   0.1814919,
   0.1498315,
   0.1856571,
   0.1401791,
   0.06106742,
   0.04409208,
   0.003562865,
   0.1358139};
   Double_t Graph0_fex1035[12] = {
   0.3454689,
   0.05887629,
   0.04616318,
   0.04428225,
   0.04494108,
   0.04636558,
   0.04888031,
   0.0529867,
   0.05945939,
   0.0697281,
   0.08735603,
   0.1109392};
   Double_t Graph0_fey1035[12] = {
   0.4019664,
   0.03838164,
   0.01819571,
   0.0142445,
   0.01220501,
   0.01079379,
   0.009861316,
   0.009323635,
   0.009155739,
   0.009377,
   0.01033151,
   0.01581492};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","S0_",100,0,3090.211);
   Graph_Graph01035->SetMinimum(-7.995471);
   Graph_Graph01035->SetMaximum(5.064036);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(1,101);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
