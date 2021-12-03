void S18_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:34:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(493.4784,0.00297445,3019.155,0.02531827);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1079[12] = {
   108.3281,
   434.6973,
   631.5345,
   875.6243,
   1124.334,
   1373.468,
   1622.472,
   1871.33,
   2119.915,
   2367.684,
   2613.196,
   2835.497};
   Double_t Graph0_fy1079[12] = {
   0.04908348,
   0.001908222,
   0.006456233,
   0.007180729,
   0.01168242,
   0.01122827,
   0.0145622,
   0.01664703,
   0.01822942,
   0.01924309,
   0.01855261,
   0.01570173};
   Double_t Graph0_fex1079[12] = {
   1.771804,
   0.0577217,
   0.04800249,
   0.04579068,
   0.04600762,
   0.04714944,
   0.04944162,
   0.0530898,
   0.05878455,
   0.0678104,
   0.08402396,
   0.1221084};
   Double_t Graph0_fey1079[12] = {
   0.03526608,
   0.001741341,
   0.0009570626,
   0.0008983654,
   0.000900524,
   0.0009241829,
   0.000969136,
   0.001042674,
   0.001154616,
   0.001336599,
   0.001671828,
   0.0027759};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1079,Graph0_fy1079,Graph0_fex1079,Graph0_fey1079);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01079 = new TH1F("Graph_Graph01079","S18_",100,0,3108.525);
   Graph_Graph01079->SetMinimum(0.005208833);
   Graph_Graph01079->SetMaximum(0.02308389);
   Graph_Graph01079->SetDirectory(0);
   Graph_Graph01079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01079->SetLineColor(ci);
   Graph_Graph01079->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01079->GetXaxis()->SetRange(25,89);
   Graph_Graph01079->GetXaxis()->CenterTitle(true);
   Graph_Graph01079->GetXaxis()->SetLabelFont(42);
   Graph_Graph01079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01079->GetXaxis()->SetTitleFont(42);
   Graph_Graph01079->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01079->GetYaxis()->CenterTitle(true);
   Graph_Graph01079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01079->GetYaxis()->SetLabelFont(42);
   Graph_Graph01079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01079->GetYaxis()->SetTitleFont(42);
   Graph_Graph01079->GetZaxis()->SetLabelFont(42);
   Graph_Graph01079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01079);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
