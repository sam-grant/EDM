void S0S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 08:42:19 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.0221,-9.659376e-07,3510.199,8.710206e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1106[12] = {
   194.7094,
   428.8875,
   630.8811,
   875.2126,
   1123.934,
   1373.236,
   1622.304,
   1870.749,
   2119.247,
   2366.839,
   2612.635,
   2826.058};
   Double_t Graph0_fy1106[12] = {
   7.038889e-06,
   1.137362e-08,
   2.189538e-09,
   1.863124e-09,
   1.94394e-09,
   2.141423e-09,
   2.498358e-09,
   3.161448e-09,
   4.427802e-09,
   7.022476e-09,
   1.378753e-08,
   6.563415e-08};
   Double_t Graph0_fex1106[12] = {
   0.1972581,
   0.0343386,
   0.0267645,
   0.02571254,
   0.02611506,
   0.02696982,
   0.02841741,
   0.03082187,
   0.0346825,
   0.0407705,
   0.05143143,
   0.06541943};
   Double_t Graph0_fey1106[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1106,Graph0_fy1106,Graph0_fex1106,Graph0_fey1106);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01106 = new TH1F("Graph_Graph01106","S0S12S18_",100,0,3089.284);
   Graph_Graph01106->SetMinimum(1.676812e-09);
   Graph_Graph01106->SetMaximum(7.742591e-06);
   Graph_Graph01106->SetDirectory(0);
   Graph_Graph01106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01106->SetLineColor(ci);
   Graph_Graph01106->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01106->GetXaxis()->SetRange(1,101);
   Graph_Graph01106->GetXaxis()->CenterTitle(true);
   Graph_Graph01106->GetXaxis()->SetLabelFont(42);
   Graph_Graph01106->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01106->GetXaxis()->SetTitleFont(42);
   Graph_Graph01106->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01106->GetYaxis()->CenterTitle(true);
   Graph_Graph01106->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01106->GetYaxis()->SetLabelFont(42);
   Graph_Graph01106->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01106->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01106->GetYaxis()->SetTitleFont(42);
   Graph_Graph01106->GetZaxis()->SetLabelFont(42);
   Graph_Graph01106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01106);
   
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
