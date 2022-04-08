void S12S18_c_vs_p_A_allDecays_WORLD_250MeV_AQ_noVertCorr_dataAccCorr_Run-1d_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:19:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6596,-1.694547e-07,3407.936,8.101256e-07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1128[12] = {
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
   Double_t Graph0_fy1128[12] = {
   -1.753367e-09,
   4.894515e-07,
   5.563792e-07,
   3.813111e-07,
   2.817852e-07,
   1.71407e-07,
   1.059336e-07,
   1.534813e-07,
   2.014937e-07,
   2.011303e-07,
   2.754086e-07,
   5.098839e-07};
   Double_t Graph0_fex1128[12] = {
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
   Double_t Graph0_fey1128[12] = {
   4.437971e-09,
   2.164439e-09,
   2.24278e-09,
   2.481974e-09,
   2.834095e-09,
   3.393157e-09,
   4.316204e-09,
   5.940345e-09,
   9.174767e-09,
   1.64377e-08,
   3.69903e-08,
   1.369783e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1128,Graph0_fy1128,Graph0_fex1128,Graph0_fey1128);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01128 = new TH1F("Graph_Graph01128","S12S18_",100,0,3122.965);
   Graph_Graph01128->SetMinimum(-7.149669e-08);
   Graph_Graph01128->SetMaximum(7.121675e-07);
   Graph_Graph01128->SetDirectory(0);
   Graph_Graph01128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01128->SetLineColor(ci);
   Graph_Graph01128->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01128->GetXaxis()->SetRange(1,97);
   Graph_Graph01128->GetXaxis()->CenterTitle(true);
   Graph_Graph01128->GetXaxis()->SetLabelFont(42);
   Graph_Graph01128->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01128->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01128->GetXaxis()->SetTitleFont(42);
   Graph_Graph01128->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01128->GetYaxis()->CenterTitle(true);
   Graph_Graph01128->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01128->GetYaxis()->SetLabelFont(42);
   Graph_Graph01128->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01128->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01128->GetYaxis()->SetTitleFont(42);
   Graph_Graph01128->GetZaxis()->SetLabelFont(42);
   Graph_Graph01128->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01128);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
