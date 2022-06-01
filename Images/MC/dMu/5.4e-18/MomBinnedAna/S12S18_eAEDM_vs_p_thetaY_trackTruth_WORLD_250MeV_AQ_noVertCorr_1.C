void S12S18_eAEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9369,-0.09633837,3392.432,0.9144585);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1186[12] = {
   107.8023,
   434.3893,
   631.5325,
   875.624,
   1124.372,
   1373.465,
   1622.528,
   1871.403,
   2119.994,
   2367.76,
   2613.31,
   2835.806};
   Double_t Graph0_fy1186[12] = {
   0.7399142,
   0.02777333,
   0.01265636,
   0.009833135,
   0.008302106,
   0.00724782,
   0.00651033,
   0.005983719,
   0.005608663,
   0.005370257,
   0.005268131,
   0.006251381};
   Double_t Graph0_fex1186[12] = {
   0.8640106,
   0.02780434,
   0.02310701,
   0.02205123,
   0.02213118,
   0.02267947,
   0.02377318,
   0.0255351,
   0.02824668,
   0.03257415,
   0.04033212,
   0.05848003};
   Double_t Graph0_fey1186[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1186,Graph0_fy1186,Graph0_fex1186,Graph0_fey1186);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01186 = new TH1F("Graph_Graph01186","S12S18_",100,0,3108.757);
   Graph_Graph01186->SetMinimum(0.004741318);
   Graph_Graph01186->SetMaximum(0.8133788);
   Graph_Graph01186->SetDirectory(0);
   Graph_Graph01186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01186->SetLineColor(ci);
   Graph_Graph01186->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01186->GetXaxis()->SetRange(1,97);
   Graph_Graph01186->GetXaxis()->CenterTitle(true);
   Graph_Graph01186->GetXaxis()->SetLabelFont(42);
   Graph_Graph01186->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01186->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01186->GetXaxis()->SetTitleFont(42);
   Graph_Graph01186->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01186->GetYaxis()->CenterTitle(true);
   Graph_Graph01186->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01186->GetYaxis()->SetLabelFont(42);
   Graph_Graph01186->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01186->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01186->GetYaxis()->SetTitleFont(42);
   Graph_Graph01186->GetZaxis()->SetLabelFont(42);
   Graph_Graph01186->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01186->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01186);
   
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
