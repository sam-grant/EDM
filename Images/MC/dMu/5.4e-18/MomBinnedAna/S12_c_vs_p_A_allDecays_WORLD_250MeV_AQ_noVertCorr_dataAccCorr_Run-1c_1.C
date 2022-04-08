void S12_c_vs_p_A_allDecays_WORLD_250MeV_AQ_noVertCorr_dataAccCorr_Run-1c_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:17:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6596,-1.639718e-07,3407.936,7.827109e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1050[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t Graph0_fy1050[12] = {
   -1.753367e-09,
   4.8944e-07,
   6.226941e-07,
   4.129932e-07,
   2.70471e-07,
   2.762292e-07,
   2.600551e-07,
   1.901671e-07,
   2.395172e-07,
   2.669397e-07,
   2.615507e-07,
   2.032306e-07};
   Double_t Graph0_fex1050[12] = {
   0.02908963,
   0.02973433,
   0.03055162,
   0.03167911,
   0.03320863,
   0.0352714,
   0.03796636,
   0.04164352,
   0.04682622,
   0.05470628,
   0.06824828,
   0.09707939};
   Double_t Graph0_fey1050[12] = {
   4.437971e-09,
   2.164922e-09,
   2.236353e-09,
   2.479974e-09,
   2.834561e-09,
   3.391804e-09,
   4.312627e-09,
   5.940219e-09,
   9.173909e-09,
   1.643717e-08,
   3.698587e-08,
   1.369451e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1050,Graph0_fy1050,Graph0_fex1050,Graph0_fey1050);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01050 = new TH1F("Graph_Graph01050","S12_",100,0,3122.965);
   Graph_Graph01050->SetMinimum(-6.930351e-08);
   Graph_Graph01050->SetMaximum(6.880426e-07);
   Graph_Graph01050->SetDirectory(0);
   Graph_Graph01050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01050->SetLineColor(ci);
   Graph_Graph01050->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01050->GetXaxis()->SetRange(1,97);
   Graph_Graph01050->GetXaxis()->CenterTitle(true);
   Graph_Graph01050->GetXaxis()->SetLabelFont(42);
   Graph_Graph01050->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01050->GetXaxis()->SetTitleFont(42);
   Graph_Graph01050->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01050->GetYaxis()->CenterTitle(true);
   Graph_Graph01050->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01050->GetYaxis()->SetLabelFont(42);
   Graph_Graph01050->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01050->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01050->GetYaxis()->SetTitleFont(42);
   Graph_Graph01050->GetZaxis()->SetLabelFont(42);
   Graph_Graph01050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01050);
   
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
