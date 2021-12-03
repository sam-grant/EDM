void S0_Ag2_vs_p_thetaY_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:27:29 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.6296,-0.008724511,3035.642,0.1488778);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[12] = {
   194.5206,
   424.1997,
   631.229,
   875.8461,
   1123.82,
   1372.921,
   1621.873,
   1870.385,
   2118.91,
   2366.693,
   2613.611,
   2826.325};
   Double_t Graph0_fy1037[12] = {
   -0.6142528,
   -0.223132,
   0.05871918,
   0.06163862,
   0.0932484,
   0.007792746,
   0.111713,
   0.06514939,
   0.02376499,
   0.04152665,
   0.04773357,
   0.01265367};
   Double_t Graph0_fex1037[12] = {
   0.3667712,
   0.08181266,
   0.06309451,
   0.05917214,
   0.06008437,
   0.06234331,
   0.06617305,
   0.07215698,
   0.0822069,
   0.09740665,
   0.1222321,
   0.1544674};
   Double_t Graph0_fey1037[12] = {
   0.7616473,
   0.09326836,
   0.04331081,
   0.03146237,
   0.02635507,
   0.02309185,
   0.02126951,
   0.02068181,
   0.02095873,
   0.02213092,
   0.02502076,
   0.04250804};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","S0_",100,0,3089.712);
   Graph_Graph01037->SetMinimum(0.007035726);
   Graph_Graph01037->SetMaximum(0.1331176);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(25,90);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
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
