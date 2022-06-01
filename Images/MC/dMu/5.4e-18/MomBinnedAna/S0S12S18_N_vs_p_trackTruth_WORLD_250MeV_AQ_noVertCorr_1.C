void S0S12S18_N_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9276,-1811375,3392.348,1.638439e+07);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1224[12] = {
   108.2896,
   434.5899,
   631.4838,
   875.6403,
   1124.365,
   1373.494,
   1622.54,
   1871.412,
   2120.028,
   2367.769,
   2613.336,
   2835.794};
   Double_t Graph0_fy1224[12] = {
   9113,
   3550613,
   1.16834e+07,
   1.324157e+07,
   1.318216e+07,
   1.254912e+07,
   1.141073e+07,
   9887107,
   8066555,
   6044155,
   3892010,
   1420958};
   Double_t Graph0_fex1224[12] = {
   0.7834909,
   0.02492032,
   0.02074975,
   0.01979805,
   0.01986555,
   0.02035385,
   0.02133799,
   0.02291371,
   0.02533708,
   0.02919491,
   0.03608619,
   0.05228636};
   Double_t Graph0_fey1224[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1224,Graph0_fy1224,Graph0_fex1224,Graph0_fey1224);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01224 = new TH1F("Graph_Graph01224","S0S12S18_",100,0,3108.681);
   Graph_Graph01224->SetMinimum(8201.7);
   Graph_Graph01224->SetMaximum(1.456482e+07);
   Graph_Graph01224->SetDirectory(0);
   Graph_Graph01224->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01224->SetLineColor(ci);
   Graph_Graph01224->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01224->GetXaxis()->SetRange(1,97);
   Graph_Graph01224->GetXaxis()->CenterTitle(true);
   Graph_Graph01224->GetXaxis()->SetLabelFont(42);
   Graph_Graph01224->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01224->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01224->GetXaxis()->SetTitleFont(42);
   Graph_Graph01224->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01224->GetYaxis()->CenterTitle(true);
   Graph_Graph01224->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01224->GetYaxis()->SetLabelFont(42);
   Graph_Graph01224->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01224->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01224->GetYaxis()->SetTitleFont(42);
   Graph_Graph01224->GetZaxis()->SetLabelFont(42);
   Graph_Graph01224->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01224->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01224);
   
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
