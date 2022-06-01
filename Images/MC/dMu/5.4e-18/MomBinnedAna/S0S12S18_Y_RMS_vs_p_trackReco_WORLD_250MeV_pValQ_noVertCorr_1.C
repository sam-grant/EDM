void S0S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5489,10.06631,3406.94,27.64624);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1222[12] = {
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
   Double_t Graph0_fy1222[12] = {
   24.57759,
   13.95671,
   13.31065,
   13.11496,
   13.01965,
   12.99958,
   13.04113,
   13.15869,
   13.35346,
   13.71273,
   14.41015,
   15.67828};
   Double_t Graph0_fex1222[12] = {
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
   Double_t Graph0_fey1222[12] = {
   0.1386596,
   0.005741433,
   0.0031457,
   0.003022627,
   0.003117824,
   0.003280723,
   0.00352502,
   0.003905816,
   0.004496386,
   0.005451543,
   0.007295426,
   0.01361991};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1222,Graph0_fy1222,Graph0_fex1222,Graph0_fey1222);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01222 = new TH1F("Graph_Graph01222","S0S12S18_",100,0,3090.195);
   Graph_Graph01222->SetMinimum(11.8243);
   Graph_Graph01222->SetMaximum(25.88825);
   Graph_Graph01222->SetDirectory(0);
   Graph_Graph01222->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01222->SetLineColor(ci);
   Graph_Graph01222->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01222->GetXaxis()->SetRange(1,98);
   Graph_Graph01222->GetXaxis()->CenterTitle(true);
   Graph_Graph01222->GetXaxis()->SetLabelFont(42);
   Graph_Graph01222->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01222->GetXaxis()->SetTitleFont(42);
   Graph_Graph01222->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01222->GetYaxis()->CenterTitle(true);
   Graph_Graph01222->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01222->GetYaxis()->SetLabelFont(42);
   Graph_Graph01222->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01222->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01222->GetYaxis()->SetTitleFont(42);
   Graph_Graph01222->GetZaxis()->SetLabelFont(42);
   Graph_Graph01222->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01222->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01222);
   
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
