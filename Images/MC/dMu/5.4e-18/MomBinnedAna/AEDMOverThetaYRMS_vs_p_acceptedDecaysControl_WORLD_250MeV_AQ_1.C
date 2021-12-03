void AEDMOverThetaYRMS_vs_p_acceptedDecaysControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:25:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.4796,0.004599904,3031.399,0.02146497);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[12] = {
   141.6991,
   381.0665,
   628.3264,
   876.3507,
   1124.574,
   1373.651,
   1622.836,
   1871.414,
   2119.624,
   2367.727,
   2613.52,
   2850.226};
   Double_t Graph0_fy1025[12] = {
   0.00277665,
   0.005992957,
   0.007647311,
   0.01005851,
   0.01188982,
   0.0137126,
   0.01474875,
   0.01600956,
   0.01648261,
   0.01611823,
   0.01538084,
   0.01223997};
   Double_t Graph0_fex1025[12] = {
   0.02289413,
   0.02098637,
   0.01898907,
   0.0178439,
   0.01766308,
   0.01809829,
   0.01885099,
   0.02018278,
   0.022406,
   0.02600401,
   0.03208401,
   0.04542575};
   Double_t Graph0_fey1025[12] = {
   0.0004984724,
   0.000412644,
   0.0003718743,
   0.0003501159,
   0.0003463222,
   0.0003546279,
   0.0003697995,
   0.0003961382,
   0.0004404319,
   0.0005122186,
   0.0006371951,
   0.0009475703};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];A_{EDM}/#sigma#theta_{y} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","",100,0,3121.131);
   Graph_Graph01025->SetMinimum(0.006286411);
   Graph_Graph01025->SetMaximum(0.01977846);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01025->GetXaxis()->SetRange(25,89);
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
