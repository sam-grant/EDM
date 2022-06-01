void S18_theta_Y_RMS_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.8896,-4.599865,3392.006,51.28254);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1143[12] = {
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
   Double_t Graph0_fy1143[12] = {
   41.44324,
   33.20285,
   27.44308,
   22.69983,
   19.12661,
   16.28882,
   13.95903,
   11.93417,
   10.1055,
   8.366146,
   6.573139,
   4.718333};
   Double_t Graph0_fex1143[12] = {
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
   Double_t Graph0_fey1143[12] = {
   0.5255673,
   0.0197431,
   0.008967818,
   0.006968608,
   0.005888516,
   0.005141902,
   0.004621962,
   0.004248171,
   0.003984654,
   0.003820329,
   0.003751138,
   0.004463858};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1143,Graph0_fy1143,Graph0_fex1143,Graph0_fey1143);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01143 = new TH1F("Graph_Graph01143","S18_",100,0,3108.367);
   Graph_Graph01143->SetMinimum(0.9883757);
   Graph_Graph01143->SetMaximum(45.6943);
   Graph_Graph01143->SetDirectory(0);
   Graph_Graph01143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01143->SetLineColor(ci);
   Graph_Graph01143->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01143->GetXaxis()->SetRange(1,97);
   Graph_Graph01143->GetXaxis()->CenterTitle(true);
   Graph_Graph01143->GetXaxis()->SetLabelFont(42);
   Graph_Graph01143->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01143->GetXaxis()->SetTitleFont(42);
   Graph_Graph01143->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01143->GetYaxis()->CenterTitle(true);
   Graph_Graph01143->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01143->GetYaxis()->SetLabelFont(42);
   Graph_Graph01143->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01143->GetYaxis()->SetTitleFont(42);
   Graph_Graph01143->GetZaxis()->SetLabelFont(42);
   Graph_Graph01143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01143);
   
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
