void S12_Ag2_vs_p_A_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:48:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5584,-9.515833e-05,3407.026,2.473612e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1103[12] = {
   189.5502,
   430.4081,
   629.9783,
   874.0959,
   1123.062,
   1372.523,
   1621.75,
   1870.433,
   2119.14,
   2366.938,
   2612.615,
   2826.429};
   Double_t Graph0_fy1103[12] = {
   -3.52111e-05,
   1.254688e-07,
   1.311072e-08,
   4.364287e-09,
   6.590876e-09,
   -1.055207e-08,
   -1.984533e-08,
   -4.551423e-08,
   -5.336633e-08,
   -7.82294e-08,
   -2.104162e-07,
   -1.370508e-06};
   Double_t Graph0_fex1103[12] = {
   0.4410399,
   0.04598832,
   0.03725247,
   0.03688839,
   0.03835217,
   0.0403852,
   0.04321711,
   0.04742848,
   0.05379875,
   0.06324179,
   0.07984952,
   0.1016232};
   Double_t Graph0_fey1103[12] = {
   3.996481e-05,
   3.131121e-08,
   6.019454e-09,
   5.548473e-09,
   6.190782e-09,
   7.2374e-09,
   9.031958e-09,
   1.233977e-08,
   1.913691e-08,
   3.406386e-08,
   7.74038e-08,
   4.131085e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1103,Graph0_fy1103,Graph0_fex1103,Graph0_fey1103);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01103 = new TH1F("Graph_Graph01103","S12_",100,0,3090.273);
   Graph_Graph01103->SetMinimum(-8.316888e-05);
   Graph_Graph01103->SetMaximum(1.274667e-05);
   Graph_Graph01103->SetDirectory(0);
   Graph_Graph01103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01103->SetLineColor(ci);
   Graph_Graph01103->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01103->GetXaxis()->SetRange(1,98);
   Graph_Graph01103->GetXaxis()->CenterTitle(true);
   Graph_Graph01103->GetXaxis()->SetLabelFont(42);
   Graph_Graph01103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01103->GetXaxis()->SetTitleFont(42);
   Graph_Graph01103->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01103->GetYaxis()->CenterTitle(true);
   Graph_Graph01103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01103->GetYaxis()->SetLabelFont(42);
   Graph_Graph01103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01103->GetYaxis()->SetTitleFont(42);
   Graph_Graph01103->GetZaxis()->SetLabelFont(42);
   Graph_Graph01103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01103);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
