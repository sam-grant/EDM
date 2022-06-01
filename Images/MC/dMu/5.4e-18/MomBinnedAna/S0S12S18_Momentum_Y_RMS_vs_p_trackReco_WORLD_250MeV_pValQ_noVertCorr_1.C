void S0S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5489,4.103729,3406.94,26.38898);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1223[12] = {
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
   Double_t Graph0_fy1223[12] = {
   7.852384,
   14.20682,
   17.15023,
   19.70492,
   21.37646,
   22.30634,
   22.66864,
   22.48851,
   21.77082,
   20.34584,
   18.02481,
   14.98553};
   Double_t Graph0_fex1223[12] = {
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
   Double_t Graph0_fey1223[12] = {
   0.03444558,
   0.005839429,
   0.00405253,
   0.004541222,
   0.005119794,
   0.005631622,
   0.006131163,
   0.006680172,
   0.007335426,
   0.008090543,
   0.009118047,
   0.01296047};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1223,Graph0_fy1223,Graph0_fex1223,Graph0_fey1223);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01223 = new TH1F("Graph_Graph01223","S0S12S18_",100,0,3090.195);
   Graph_Graph01223->SetMinimum(6.332254);
   Graph_Graph01223->SetMaximum(24.16046);
   Graph_Graph01223->SetDirectory(0);
   Graph_Graph01223->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01223->SetLineColor(ci);
   Graph_Graph01223->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01223->GetXaxis()->SetRange(1,98);
   Graph_Graph01223->GetXaxis()->CenterTitle(true);
   Graph_Graph01223->GetXaxis()->SetLabelFont(42);
   Graph_Graph01223->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01223->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01223->GetXaxis()->SetTitleFont(42);
   Graph_Graph01223->GetYaxis()->CenterTitle(true);
   Graph_Graph01223->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01223->GetYaxis()->SetLabelFont(42);
   Graph_Graph01223->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01223->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01223->GetYaxis()->SetTitleFont(42);
   Graph_Graph01223->GetZaxis()->SetLabelFont(42);
   Graph_Graph01223->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01223->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01223);
   
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
