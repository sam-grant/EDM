void S0S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5489,-1.45975e-06,3406.94,1.315046e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1226[12] = {
   188.806,
   430.8761,
   629.9556,
   874.0595,
   1123.015,
   1372.494,
   1621.768,
   1870.362,
   2119.125,
   2366.858,
   2612.578,
   2826.342};
   Double_t Graph0_fy1226[12] = {
   1.062689e-05,
   7.983123e-09,
   1.517801e-09,
   1.412119e-09,
   1.58656e-09,
   1.858154e-09,
   2.270954e-09,
   2.97562e-09,
   4.251688e-09,
   6.76116e-09,
   1.328352e-08,
   6.275062e-08};
   Double_t Graph0_fex1226[12] = {
   0.2857912,
   0.02926991,
   0.02371629,
   0.02347953,
   0.02442359,
   0.02573198,
   0.02753266,
   0.03022268,
   0.03425174,
   0.04028754,
   0.05083544,
   0.06470776};
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
   
   TH1F *Graph_Graph01226 = new TH1F("Graph_Graph01226","S0S12S18_",100,0,3090.195);
   Graph_Graph01226->SetMinimum(1.270907e-09);
   Graph_Graph01226->SetMaximum(1.168944e-05);
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
