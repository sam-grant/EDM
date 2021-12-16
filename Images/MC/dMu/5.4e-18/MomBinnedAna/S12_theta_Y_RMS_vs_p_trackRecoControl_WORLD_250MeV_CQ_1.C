void S12_theta_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9078,-3.695825,3509.17,69.4508);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1104[12] = {
   189.0097,
   434.3781,
   652.5116,
   883.7782,
   1126.204,
   1373.8,
   1622.32,
   1870.781,
   2119.266,
   2366.747,
   2613.39,
   2824.544};
   Double_t Graph0_fy1104[12] = {
   42.91784,
   35.3938,
   28.31652,
   22.81976,
   19.13067,
   16.48644,
   14.36456,
   12.67394,
   11.06171,
   9.597533,
   8.055341,
   6.825965};
   Double_t Graph0_fex1104[12] = {
   0.9885242,
   0.2033246,
   0.1122319,
   0.07575547,
   0.07016162,
   0.07012019,
   0.07304142,
   0.07900586,
   0.08942676,
   0.105125,
   0.1324895,
   0.1653295};
   Double_t Graph0_fey1104[12] = {
   0.83783,
   0.1014753,
   0.03288863,
   0.01729121,
   0.01316818,
   0.01133829,
   0.01030709,
   0.009840308,
   0.009728962,
   0.00993821,
   0.01057002,
   0.0153562};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1104,Graph0_fy1104,Graph0_fex1104,Graph0_fey1104);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01104 = new TH1F("Graph_Graph01104","S12_",100,0,3088.378);
   Graph_Graph01104->SetMinimum(3.618837);
   Graph_Graph01104->SetMaximum(62.13613);
   Graph_Graph01104->SetDirectory(0);
   Graph_Graph01104->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01104->SetLineColor(ci);
   Graph_Graph01104->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01104->GetXaxis()->SetRange(1,101);
   Graph_Graph01104->GetXaxis()->CenterTitle(true);
   Graph_Graph01104->GetXaxis()->SetLabelFont(42);
   Graph_Graph01104->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01104->GetXaxis()->SetTitleFont(42);
   Graph_Graph01104->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01104->GetYaxis()->CenterTitle(true);
   Graph_Graph01104->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01104->GetYaxis()->SetLabelFont(42);
   Graph_Graph01104->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01104->GetYaxis()->SetTitleFont(42);
   Graph_Graph01104->GetZaxis()->SetLabelFont(42);
   Graph_Graph01104->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01104);
   
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
