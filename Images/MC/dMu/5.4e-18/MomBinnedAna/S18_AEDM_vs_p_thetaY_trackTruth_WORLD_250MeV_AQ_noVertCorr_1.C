void S18_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.8896,-0.3128781,3392.006,3.130704);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1138[12] = {
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
   Double_t Graph0_fy1138[12] = {
   1.51201,
   0.08785162,
   0.127982,
   0.152346,
   0.173878,
   0.1702424,
   0.1616656,
   0.1550896,
   0.1299202,
   0.132292,
   0.09863934,
   0.04390906};
   Double_t Graph0_fex1138[12] = {
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
   Double_t Graph0_fey1138[12] = {
   1.024211,
   0.03947163,
   0.01791229,
   0.01392233,
   0.01176401,
   0.01027737,
   0.009233417,
   0.008490105,
   0.007961251,
   0.007635339,
   0.00749928,
   0.008931195};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1138,Graph0_fy1138,Graph0_fex1138,Graph0_fey1138);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01138 = new TH1F("Graph_Graph01138","S18_",100,0,3108.367);
   Graph_Graph01138->SetMinimum(0.03148007);
   Graph_Graph01138->SetMaximum(2.786346);
   Graph_Graph01138->SetDirectory(0);
   Graph_Graph01138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01138->SetLineColor(ci);
   Graph_Graph01138->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01138->GetXaxis()->SetRange(1,97);
   Graph_Graph01138->GetXaxis()->CenterTitle(true);
   Graph_Graph01138->GetXaxis()->SetLabelFont(42);
   Graph_Graph01138->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01138->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01138->GetXaxis()->SetTitleFont(42);
   Graph_Graph01138->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01138->GetYaxis()->CenterTitle(true);
   Graph_Graph01138->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01138->GetYaxis()->SetLabelFont(42);
   Graph_Graph01138->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01138->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01138->GetYaxis()->SetTitleFont(42);
   Graph_Graph01138->GetZaxis()->SetLabelFont(42);
   Graph_Graph01138->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01138->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01138);
   
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
