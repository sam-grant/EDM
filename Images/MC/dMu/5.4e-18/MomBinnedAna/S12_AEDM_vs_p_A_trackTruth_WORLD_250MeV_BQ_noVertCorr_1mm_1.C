void S12_AEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0708,-1.537321e-05,3379.415,0.0001393329);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[11] = {
   451.5581,
   653.2677,
   880.0203,
   1123.181,
   1371.166,
   1620.018,
   1867.098,
   2114.802,
   2362.547,
   2614.683,
   2790.673};
   Double_t Graph0_fy1098[11] = {
   4.050707e-06,
   5.767877e-07,
   1.879859e-07,
   2.65097e-07,
   4.149299e-07,
   2.935205e-07,
   8.118452e-07,
   9.625927e-07,
   2.130038e-06,
   3.878239e-06,
   7.96847e-05};
   Double_t Graph0_fex1098[11] = {
   0.1457006,
   0.1232532,
   0.0893564,
   0.0874833,
   0.09348105,
   0.1030946,
   0.1200829,
   0.1502603,
   0.1968533,
   0.2423922,
   0.3341954};
   Double_t Graph0_fey1098[11] = {
   3.400989e-06,
   2.336402e-07,
   7.975849e-08,
   7.306534e-08,
   8.928039e-08,
   1.20662e-07,
   1.881962e-07,
   3.618501e-07,
   7.907063e-07,
   1.53764e-06,
   3.292721e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","S12_",100,217.4529,3024.967);
   Graph_Graph01098->SetMinimum(9.740469e-08);
   Graph_Graph01098->SetMaximum(0.0001238623);
   Graph_Graph01098->SetDirectory(0);
   Graph_Graph01098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01098->SetLineColor(ci);
   Graph_Graph01098->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01098->GetXaxis()->SetRange(0,100);
   Graph_Graph01098->GetXaxis()->CenterTitle(true);
   Graph_Graph01098->GetXaxis()->SetLabelFont(42);
   Graph_Graph01098->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01098->GetXaxis()->SetTitleFont(42);
   Graph_Graph01098->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01098->GetYaxis()->CenterTitle(true);
   Graph_Graph01098->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01098->GetYaxis()->SetLabelFont(42);
   Graph_Graph01098->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01098->GetYaxis()->SetTitleFont(42);
   Graph_Graph01098->GetZaxis()->SetLabelFont(42);
   Graph_Graph01098->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01098);
   
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
