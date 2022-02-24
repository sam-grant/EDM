void S12_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4075,-5.678785e-06,3406.812,5.167359e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[11] = {
   451.7667,
   653.3547,
   880.3777,
   1123.143,
   1371.135,
   1620.307,
   1866.82,
   2114.998,
   2362.65,
   2614.215,
   2787.527};
   Double_t Graph0_fy1098[11] = {
   1.108526e-07,
   7.994142e-08,
   7.055041e-08,
   8.873639e-08,
   1.711013e-07,
   3.139316e-07,
   5.360149e-07,
   9.01774e-07,
   6.147904e-07,
   2.10617e-06,
   1.245589e-05};
   Double_t Graph0_fex1098[11] = {
   0.1100576,
   0.09282409,
   0.0672385,
   0.06570408,
   0.06990616,
   0.07732607,
   0.09012758,
   0.1129304,
   0.1472822,
   0.1813709,
   0.2204759};
   Double_t Graph0_fey1098[11] = {
   2.421596e-06,
   1.294169e-07,
   3.79038e-08,
   3.216531e-08,
   3.780276e-08,
   5.199849e-08,
   7.99994e-08,
   1.539365e-07,
   3.34237e-07,
   6.419105e-07,
   1.495944e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","S12_",100,218.0475,3021.357);
   Graph_Graph01098->SetMinimum(5.645283e-08);
   Graph_Graph01098->SetMaximum(4.593835e-05);
   Graph_Graph01098->SetDirectory(0);
   Graph_Graph01098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01098->SetLineColor(ci);
   Graph_Graph01098->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01098->GetXaxis()->SetRange(0,101);
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
