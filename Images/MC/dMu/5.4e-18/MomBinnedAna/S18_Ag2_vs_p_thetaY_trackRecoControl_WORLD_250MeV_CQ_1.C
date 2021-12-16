void S18_Ag2_vs_p_thetaY_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.784,-0.2836672,3508.056,1.177369);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1139[12] = {
   188.9285,
   434.8157,
   652.8408,
   884.0785,
   1126.173,
   1373.702,
   1622.569,
   1870.669,
   2119.017,
   2366.486,
   2613.314,
   2823.639};
   Double_t Graph0_fy1139[12] = {
   0.6137244,
   0.4046571,
   -0.09779351,
   0.005609611,
   -0.008519595,
   0.0001338466,
   -0.007872306,
   0.0252781,
   -0.02794924,
   -0.05962771,
   -0.03090956,
   -0.07980672};
   Double_t Graph0_fex1139[12] = {
   1.031071,
   0.2060205,
   0.1131189,
   0.07628962,
   0.07052248,
   0.07063667,
   0.07371139,
   0.0797559,
   0.09034869,
   0.1064703,
   0.1344564,
   0.1680666};
   Double_t Graph0_fey1139[12] = {
   1.588361,
   0.2036669,
   0.06617882,
   0.03469567,
   0.02643276,
   0.02282193,
   0.02091282,
   0.02007554,
   0.02025818,
   0.02119338,
   0.02367138,
   0.03775789};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1139,Graph0_fy1139,Graph0_fex1139,Graph0_fey1139);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01139 = new TH1F("Graph_Graph01139","S18_",100,0,3087.398);
   Graph_Graph01139->SetMinimum(-0.1375636);
   Graph_Graph01139->SetMaximum(1.031265);
   Graph_Graph01139->SetDirectory(0);
   Graph_Graph01139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01139->SetLineColor(ci);
   Graph_Graph01139->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01139->GetXaxis()->SetRange(1,101);
   Graph_Graph01139->GetXaxis()->CenterTitle(true);
   Graph_Graph01139->GetXaxis()->SetLabelFont(42);
   Graph_Graph01139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01139->GetXaxis()->SetTitleFont(42);
   Graph_Graph01139->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01139->GetYaxis()->CenterTitle(true);
   Graph_Graph01139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01139->GetYaxis()->SetLabelFont(42);
   Graph_Graph01139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01139->GetYaxis()->SetTitleFont(42);
   Graph_Graph01139->GetZaxis()->SetLabelFont(42);
   Graph_Graph01139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01139);
   
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
