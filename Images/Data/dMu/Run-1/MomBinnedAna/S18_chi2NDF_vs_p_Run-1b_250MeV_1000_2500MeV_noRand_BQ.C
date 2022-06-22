void S18_chi2NDF_vs_p_Run-1b_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:19:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.906,0.4192402,2717.758,1.968321);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1075[11] = {
   455.8439,
   654.0272,
   883.7107,
   1127.292,
   1373.007,
   1619.592,
   1866.67,
   2116.17,
   2359.372,
   2607.854,
   2795.875};
   Double_t Graph0_fy1075[11] = {
   1.916795,
   0.5771929,
   1.320665,
   1.052794,
   1.494433,
   1.511855,
   0.81069,
   0.7153271,
   0.9036453,
   1.221974,
   1.49396};
   Double_t Graph0_fex1075[11] = {
   0.1081452,
   0.07621189,
   0.05171522,
   0.04695891,
   0.04653299,
   0.05157679,
   0.06326252,
   0.07991683,
   0.1054855,
   0.1433386,
   0.2872186};
   Double_t Graph0_fey1075[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1075,Graph0_fy1075,Graph0_fex1075,Graph0_fey1075);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01075 = new TH1F("Graph_Graph01075","S18",100,221.6931,3030.205);
   Graph_Graph01075->SetMinimum(0.5741483);
   Graph_Graph01075->SetMaximum(1.813413);
   Graph_Graph01075->SetDirectory(0);
   Graph_Graph01075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01075->SetLineColor(ci);
   Graph_Graph01075->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01075->GetXaxis()->SetRange(28,82);
   Graph_Graph01075->GetXaxis()->CenterTitle(true);
   Graph_Graph01075->GetXaxis()->SetLabelFont(42);
   Graph_Graph01075->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01075->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01075->GetXaxis()->SetTitleFont(42);
   Graph_Graph01075->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_Graph01075->GetYaxis()->CenterTitle(true);
   Graph_Graph01075->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01075->GetYaxis()->SetLabelFont(42);
   Graph_Graph01075->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01075->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01075->GetYaxis()->SetTitleFont(42);
   Graph_Graph01075->GetZaxis()->SetLabelFont(42);
   Graph_Graph01075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01075);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
