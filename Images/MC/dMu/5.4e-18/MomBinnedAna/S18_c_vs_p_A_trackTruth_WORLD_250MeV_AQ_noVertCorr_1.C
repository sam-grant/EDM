void S18_c_vs_p_A_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.8896,-0.0001586934,3392.006,0.0003499408);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1140[12] = {
   108.5446,
   434.6476,
   631.5638,
   875.6019,
   1124.352,
   1373.451,
   1622.525,
   1871.337,
   2119.952,
   2367.654,
   2613.27,
   2835.462};
   Double_t Graph0_fy1140[12] = {
   9.562368e-05,
   -1.376378e-06,
   -1.567824e-07,
   -5.607439e-08,
   -4.602706e-08,
   -4.395459e-08,
   -4.610028e-08,
   -5.614673e-08,
   -5.557357e-08,
   -6.844864e-08,
   -7.629713e-08,
   -3.909993e-08};
   Double_t Graph0_fex1140[12] = {
   1.225218,
   0.03944693,
   0.03276533,
   0.03126549,
   0.0314118,
   0.03219687,
   0.03374371,
   0.03626405,
   0.04010891,
   0.04633167,
   0.05744501,
   0.08325579};
   Double_t Graph0_fey1140[12] = {
   0.0001695447,
   1.754244e-08,
   2.913099e-09,
   2.395403e-09,
   2.397017e-09,
   2.583635e-09,
   3.029974e-09,
   3.919454e-09,
   5.749279e-09,
   9.929958e-09,
   2.206217e-08,
   1.120315e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1140,Graph0_fy1140,Graph0_fex1140,Graph0_fey1140);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01140 = new TH1F("Graph_Graph01140","S18_",100,0,3108.367);
   Graph_Graph01140->SetMinimum(-0.00010783);
   Graph_Graph01140->SetMaximum(0.0002990774);
   Graph_Graph01140->SetDirectory(0);
   Graph_Graph01140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01140->SetLineColor(ci);
   Graph_Graph01140->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01140->GetXaxis()->SetRange(1,97);
   Graph_Graph01140->GetXaxis()->CenterTitle(true);
   Graph_Graph01140->GetXaxis()->SetLabelFont(42);
   Graph_Graph01140->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01140->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01140->GetXaxis()->SetTitleFont(42);
   Graph_Graph01140->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01140->GetYaxis()->CenterTitle(true);
   Graph_Graph01140->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01140->GetYaxis()->SetLabelFont(42);
   Graph_Graph01140->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01140->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01140->GetYaxis()->SetTitleFont(42);
   Graph_Graph01140->GetZaxis()->SetLabelFont(42);
   Graph_Graph01140->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01140->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01140);
   
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
