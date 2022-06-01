void S12S18_thetaYMaxDiff_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9369,-11.73623,3392.432,223.473);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1188[12] = {
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
   Double_t Graph0_fy1188[12] = {
   183.7507,
   183.7507,
   156.5011,
   121.8867,
   100.8972,
   85.43117,
   73.64756,
   62.60042,
   53.76272,
   45.29325,
   36.45554,
   27.98607};
   Double_t Graph0_fex1188[12] = {
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
   Double_t Graph0_fey1188[12] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1188,Graph0_fy1188,Graph0_fex1188,Graph0_fey1188);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01188 = new TH1F("Graph_Graph01188","S12S18_",100,0,3108.757);
   Graph_Graph01188->SetMinimum(11.78469);
   Graph_Graph01188->SetMaximum(199.952);
   Graph_Graph01188->SetDirectory(0);
   Graph_Graph01188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01188->SetLineColor(ci);
   Graph_Graph01188->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01188->GetXaxis()->SetRange(1,97);
   Graph_Graph01188->GetXaxis()->CenterTitle(true);
   Graph_Graph01188->GetXaxis()->SetLabelFont(42);
   Graph_Graph01188->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01188->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01188->GetXaxis()->SetTitleFont(42);
   Graph_Graph01188->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01188->GetYaxis()->CenterTitle(true);
   Graph_Graph01188->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01188->GetYaxis()->SetLabelFont(42);
   Graph_Graph01188->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01188->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01188->GetYaxis()->SetTitleFont(42);
   Graph_Graph01188->GetZaxis()->SetLabelFont(42);
   Graph_Graph01188->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01188->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01188);
   
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
