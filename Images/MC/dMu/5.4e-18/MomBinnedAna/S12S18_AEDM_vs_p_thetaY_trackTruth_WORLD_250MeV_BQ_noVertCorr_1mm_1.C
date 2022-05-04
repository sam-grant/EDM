void S12S18_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 25 18:52:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.2628,-0.5314564,3382.111,0.4635584);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1169[11] = {
   451.8594,
   653.0946,
   880.2614,
   1122.965,
   1370.83,
   1620.068,
   1866.8,
   2114.423,
   2362.795,
   2614.218,
   2792.888};
   Double_t Graph0_fy1169[11] = {
   -0.1853291,
   0.2368118,
   0.1247492,
   0.07279981,
   0.1385658,
   0.1339604,
   0.130175,
   0.06851215,
   0.06700096,
   0.116917,
   0.07191985};
   Double_t Graph0_fex1169[11] = {
   0.1367683,
   0.116056,
   0.08422569,
   0.08251709,
   0.08858456,
   0.09815103,
   0.1147037,
   0.1440146,
   0.1902515,
   0.2325177,
   0.33584};
   Double_t Graph0_fey1169[11] = {
   0.1802915,
   0.0609108,
   0.03520821,
   0.02894827,
   0.02677238,
   0.02553712,
   0.0257048,
   0.02733807,
   0.0296793,
   0.02941031,
   0.06400467};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1169,Graph0_fy1169,Graph0_fex1169,Graph0_fey1169);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01169 = new TH1F("Graph_Graph01169","S12S18_",100,217.5726,3027.374);
   Graph_Graph01169->SetMinimum(-0.4319549);
   Graph_Graph01169->SetMaximum(0.3640569);
   Graph_Graph01169->SetDirectory(0);
   Graph_Graph01169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01169->SetLineColor(ci);
   Graph_Graph01169->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01169->GetXaxis()->SetRange(0,100);
   Graph_Graph01169->GetXaxis()->CenterTitle(true);
   Graph_Graph01169->GetXaxis()->SetLabelFont(42);
   Graph_Graph01169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01169->GetXaxis()->SetTitleFont(42);
   Graph_Graph01169->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01169->GetYaxis()->CenterTitle(true);
   Graph_Graph01169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01169->GetYaxis()->SetLabelFont(42);
   Graph_Graph01169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01169->GetYaxis()->SetTitleFont(42);
   Graph_Graph01169->GetZaxis()->SetLabelFont(42);
   Graph_Graph01169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01169);
   
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
