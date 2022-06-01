void S12_c_vs_p_A_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9979,-0.0005846674,3392.981,0.0001168658);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[12] = {
   107.0415,
   434.1376,
   631.5016,
   875.6458,
   1124.392,
   1373.48,
   1622.531,
   1871.467,
   2120.036,
   2367.864,
   2613.349,
   2836.139};
   Double_t Graph0_fy1101[12] = {
   -0.0002919292,
   -1.421342e-06,
   -1.73573e-07,
   -8.365462e-08,
   -6.238407e-08,
   -5.889834e-08,
   -6.831635e-08,
   -6.024733e-08,
   -7.842232e-08,
   -8.067273e-08,
   -9.097417e-08,
   -3.749996e-07};
   Double_t Graph0_fex1101[12] = {
   1.218077,
   0.03919407,
   0.03259183,
   0.0311054,
   0.03118583,
   0.03195177,
   0.03349835,
   0.03596199,
   0.03978668,
   0.04580633,
   0.05663993,
   0.08215769};
   Double_t Graph0_fey1101[12] = {
   0.000175816,
   1.686742e-08,
   2.86442e-09,
   2.353504e-09,
   2.349122e-09,
   2.527531e-09,
   2.962294e-09,
   3.822019e-09,
   5.584407e-09,
   9.59625e-09,
   2.110705e-08,
   1.05834e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","S12_",100,0,3109.261);
   Graph_Graph01101->SetMinimum(-0.0005145141);
   Graph_Graph01101->SetMaximum(4.671251e-05);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01101->GetXaxis()->SetRange(1,97);
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01101->GetYaxis()->CenterTitle(true);
   Graph_Graph01101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph01101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph01101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01101);
   
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
