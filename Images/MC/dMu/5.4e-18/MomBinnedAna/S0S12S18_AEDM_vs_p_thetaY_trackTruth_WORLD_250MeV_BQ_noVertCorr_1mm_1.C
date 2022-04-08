void S0S12S18_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:55:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0369,-0.1572884,3380.183,0.2928247);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1206[11] = {
   451.6625,
   653.2306,
   880.1522,
   1123.109,
   1371.16,
   1620.232,
   1867.231,
   2115.224,
   2363.097,
   2614.532,
   2791.457};
   Double_t Graph0_fy1206[11] = {
   0.03521852,
   0.1782695,
   0.1304195,
   0.1271424,
   0.1590521,
   0.1238287,
   0.1377569,
   0.0909824,
   0.08844767,
   0.08042343,
   0.1036806};
   Double_t Graph0_fex1206[11] = {
   0.08852516,
   0.07493234,
   0.05436515,
   0.05319776,
   0.05691237,
   0.06298955,
   0.07334976,
   0.09100092,
   0.1180313,
   0.1452257,
   0.1956995};
   Double_t Graph0_fey1206[11] = {
   0.1174881,
   0.0395363,
   0.02277601,
   0.01871071,
   0.01720755,
   0.0164057,
   0.01643445,
   0.01728569,
   0.01845127,
   0.01826718,
   0.03997122};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1206,Graph0_fy1206,Graph0_fex1206,Graph0_fey1206);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01206 = new TH1F("Graph_Graph01206","S0S12S18_",100,217.5661,3025.661);
   Graph_Graph01206->SetMinimum(-0.1122771);
   Graph_Graph01206->SetMaximum(0.2478133);
   Graph_Graph01206->SetDirectory(0);
   Graph_Graph01206->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01206->SetLineColor(ci);
   Graph_Graph01206->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01206->GetXaxis()->SetRange(0,100);
   Graph_Graph01206->GetXaxis()->CenterTitle(true);
   Graph_Graph01206->GetXaxis()->SetLabelFont(42);
   Graph_Graph01206->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01206->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01206->GetXaxis()->SetTitleFont(42);
   Graph_Graph01206->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01206->GetYaxis()->CenterTitle(true);
   Graph_Graph01206->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01206->GetYaxis()->SetLabelFont(42);
   Graph_Graph01206->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01206->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01206->GetYaxis()->SetTitleFont(42);
   Graph_Graph01206->GetZaxis()->SetLabelFont(42);
   Graph_Graph01206->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01206->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01206);
   
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
