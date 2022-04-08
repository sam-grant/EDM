void S12S18_AEDM_vs_p_thetaY_allDecays_WORLD_250MeV_AQ_noVertCorr_dataAccCorr_Run-1c_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:17:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.6596,-0.1135119,3407.936,0.1786353);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1126[12] = {
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
   Double_t Graph0_fy1126[12] = {
   -0.02468624,
   0.1086575,
   0.01576053,
   0.04062892,
   0.05999543,
   0.06808729,
   0.07246053,
   0.07330606,
   0.04592098,
   0.05487726,
   0.04574498,
   0.03378351};
   Double_t Graph0_fex1126[12] = {
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
   Double_t Graph0_fey1126[12] = {
   0.04013446,
   0.02128654,
   0.005157682,
   0.005197286,
   0.005394075,
   0.005520496,
   0.005260046,
   0.004991518,
   0.004580057,
   0.004280694,
   0.005368832,
   0.008298653};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1126,Graph0_fy1126,Graph0_fex1126,Graph0_fey1126);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01126 = new TH1F("Graph_Graph01126","S12S18_",100,0,3122.965);
   Graph_Graph01126->SetMinimum(-0.08429718);
   Graph_Graph01126->SetMaximum(0.1494206);
   Graph_Graph01126->SetDirectory(0);
   Graph_Graph01126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01126->SetLineColor(ci);
   Graph_Graph01126->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01126->GetXaxis()->SetRange(1,97);
   Graph_Graph01126->GetXaxis()->CenterTitle(true);
   Graph_Graph01126->GetXaxis()->SetLabelFont(42);
   Graph_Graph01126->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01126->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01126->GetXaxis()->SetTitleFont(42);
   Graph_Graph01126->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01126->GetYaxis()->CenterTitle(true);
   Graph_Graph01126->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01126->GetYaxis()->SetLabelFont(42);
   Graph_Graph01126->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01126->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01126->GetYaxis()->SetTitleFont(42);
   Graph_Graph01126->GetZaxis()->SetLabelFont(42);
   Graph_Graph01126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01126);
   
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
