void S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4819,167.3194,3406.337,187.6618);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1149[12] = {
   187.4361,
   430.9137,
   629.988,
   873.9891,
   1123.018,
   1372.429,
   1621.758,
   1870.278,
   2119.025,
   2366.724,
   2612.496,
   2825.666};
   Double_t Graph0_fy1149[12] = {
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.0142,
   183.7507,
   180.8048,
   181.5412,
   178.2271,
   177.8589,
   171.2306,
   177.1224};
   Double_t Graph0_fex1149[12] = {
   0.4589345,
   0.04634719,
   0.03743593,
   0.03708336,
   0.03861978,
   0.04072494,
   0.04355441,
   0.04786604,
   0.05427081,
   0.06398772,
   0.08100211,
   0.1028567};
   Double_t Graph0_fey1149[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1149,Graph0_fy1149,Graph0_fex1149,Graph0_fey1149);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01149 = new TH1F("Graph_Graph01149","S18_",100,0,3089.648);
   Graph_Graph01149->SetMinimum(169.3536);
   Graph_Graph01149->SetMaximum(185.6276);
   Graph_Graph01149->SetDirectory(0);
   Graph_Graph01149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01149->SetLineColor(ci);
   Graph_Graph01149->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01149->GetXaxis()->SetRange(1,98);
   Graph_Graph01149->GetXaxis()->CenterTitle(true);
   Graph_Graph01149->GetXaxis()->SetLabelFont(42);
   Graph_Graph01149->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01149->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01149->GetXaxis()->SetTitleFont(42);
   Graph_Graph01149->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01149->GetYaxis()->CenterTitle(true);
   Graph_Graph01149->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01149->GetYaxis()->SetLabelFont(42);
   Graph_Graph01149->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01149->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01149->GetYaxis()->SetTitleFont(42);
   Graph_Graph01149->GetZaxis()->SetLabelFont(42);
   Graph_Graph01149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01149);
   
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
